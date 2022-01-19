import numpy as np
import statistics as st
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
# sns.set_theme(style="darkgrid")
t = pd.read_csv('suhani_problem_statement.csv')
# # tips = sns.load_dataset("suhani_problem_statement.csv")

# sns.set_style('whitegrid')
# sns.lmplot(x ='Input', y ='Output 1', data = t)
# plt.show()
# # t = pd.read_csv('suhani_problem_statement.csv')

# # new_plot = sns.relplot(x = 'Input' , y='Output 1' ,hue='Input',data = t , kind="reg")

# import seaborn as sns
# import matplotlib.pyplot as plt
from scipy import stats

# tips = sns.load_dataset("t")

# get coeffs of linear fit
slope, intercept, r_value, p_value, std_err = stats.linregress(t['Input'],t['Output 1'])

# use line_kws to set line label for legend
ax = sns.regplot(x="Input", y="Output 1", data=t, color='o', 
 line_kws={'label':"y={0:.1f}x+{1:.1f}".format(slope,intercept)})

# plot legend
ax.legend()

plt.show()  