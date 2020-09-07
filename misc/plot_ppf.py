import matplotlib
import matplotlib.pyplot as plt
import numpy as np
from cycler import cycler

plt.style.use('seaborn-pastel')


hatch_patterns = [ "+" , "\\" , "/" , "+" , "-", ".", "*","x", "o", "O" ]
# monochrome = (cycler('color', ['w']) * cycler('hatch', hatch_patterns))
monochrome = (cycler('hatch', hatch_patterns))

# plt.rcParams['axes.grid'] = True
# # plt.rcParams['axes.prop_cycle'] = monochrome
plt.rcParams['axes.spines.top'] = False
plt.rcParams['axes.spines.right'] = False
# plt.rcParams['axes.spines.bottom'] = True
# plt.rcParams['axes.spines.left'] = True



def autolabel(rects):
    """Attach a text label above each bar in *rects*, displaying its height."""
    for rect in rects:
        height = rect.get_height()
        ax.annotate('{}'.format(height),
                    xy=(rect.get_x() + rect.get_width() / 2, height),
                    xytext=(0, 1),  # 3 points vertical offset
                    textcoords="offset points",
                    ha='center', va='bottom',
                    zorder=20)


def set_size(w,h, ax=None):
    """ w, h: width, height in inches """
    if not ax: ax=plt.gca()
    l = ax.figure.subplotpars.left
    r = ax.figure.subplotpars.right
    t = ax.figure.subplotpars.top
    b = ax.figure.subplotpars.bottom
    figw = float(w)/(r-l)
    figh = float(h)/(t-b)
    ax.figure.set_size_inches(figw, figh)

# matplotlib.style.use('seaborn-pastel')
# matplotlib.style.use('tableau-colorblind10')

labels = ['MP', 'GP', 'SEF']

cw_ppf = [0.782, 0.78, 0.53]
cpu_ppf = [0.01, 0.064, 0.002]
gpu_ppf = [2.24, 1.61, 0.22]
k80_ppf = [1.61, 0.298, 0.03]

print('Improvement over k80 sef:', cw_ppf[2] / k80_ppf[2])
print('Improvement over CPU sef:', cw_ppf[2] / cpu_ppf[2])

# cw_ppf = [0.782, 0.78, 0.53]
# cpu_ppf = [0.01, 0.064, 0.0016]
# gpu_ppf = [2.24, 1.61, 0.22]
# k80_ppf = [1.61, 0.298, 0.0285]
theoretical_peak = [1.14, 1.14, 1.14]

x = np.arange(len(labels))  # the label locations

categories = [cw_ppf, gpu_ppf, k80_ppf, cpu_ppf]
arch_labels = ['Clockwork', 'V100 GPU', 'K80 GPU', 'CPU']
# categories.reverse()
# arch_labels.reverse()


width = 1.0
margin = 0.2
inter_bar_margin = 0.05
# bar_width = (width - margin - 2*inter_group_margin)/4.0
bar_width = (width - margin - inter_bar_margin*(len(categories) - 1))/4.0


use_offset = len(categories) % 2 == 1

fig, ax = plt.subplots()
ax.grid(axis='y')
# bar_cycle = (cycler('hatch', ['///', '--', '...','\///', 'xxx', '\\\\']) * cycler('edgecolor', 'k')*cycler('color', 'w')*cycler('zorder', [10]))
# bar_cycle = (cycler('hatch', ['///', '--', '...','\///', 'xxx', '\\\\']) * cycler('edgecolor', 'k')*cycler('zorder', [10]))
bar_cycle = (cycler('edgecolor', 'k')*cycler('zorder', [10]))
styles = bar_cycle()
# ax.set_prop_cycle(monochrome)
offset = bar_width / 2.0 if use_offset else 0.0

# compute max position
max_pos = -bar_width - offset - inter_bar_margin*3.0
for i in range(len(categories) - 1):
    max_pos += bar_width
    max_pos += inter_bar_margin

# pos = -bar_width - offset - inter_bar_margin*3.0
pos = max_pos
rects = []
for i in range(len(categories)):
    rects.append(ax.bar(x - pos, categories[i], bar_width, **next(styles), label=arch_labels[i]))
    pos -= bar_width
    pos -= inter_bar_margin

# rects1 = ax.bar(x - bar_width - bar_width/2.0, men_means, bar_width, label='CW', edgecolor='black')
# rects3 = ax.bar(x - 0         - bar_width/2.0, gpu_ppf, bar_width, label='V100 GPU', edgecolor='black')
# rects2 = ax.bar(x + bar_width - bar_width/2.0, women_means, bar_width, label='CPU', edgecolor='black')
# rects4 = ax.bar(x + 2*bar_width - bar_width/2.0, k80_ppf, bar_width, label='K80 GPU', edgecolor='black')

THEORETICAL_PEAK = 1.14
plt.axhline(y=THEORETICAL_PEAK, linewidth=2, color='red')
plt.text(2.5, THEORETICAL_PEAK, 'Clockwork Theoretical Peak', ha='right', va='bottom')

# Add some text for labels, title and custom x-axis tick labels, etc.
ax.set_ylabel('GPix / J')
# ax.set_title('Scores by group and gender')
ax.set_xticks(x)
ax.set_xticklabels(labels)
ax.legend()

# plt.yscale("log")

for c in rects:
    autolabel(c)
# autolabel(rects1)
# autolabel(rects2)
# autolabel(rects3)
# autolabel(rects4)

# fig.tight_layout()
# set_size(5, 3)

plt.show()
fig.savefig('clockwork_cpu_theoretical_peak_ppf.eps', format='eps')
