import numpy as np
import statistics as st
import pandas as pd
t = pd.read_csv('suhani_problem_statement.csv')
print(t)
print("\nMean: ")
print(t.apply(np.mean))

print("\nMedian: ")
print(t.apply(np.median))

print("\nMode: ")
print(t.apply(st.mode))

print("\nStandard Deviation: ")
print(t.apply(np.std))

print("\nComplete Relationship: ")
print(t.corr())

print("\nRelationship between Column 1 and Column 2")
print(t['Input'].corr(t['Output 1'])) #Good relationship , If we increase one value , other will increase with it as well

print("\nRelationship between Column 1 and Column 3")
print(t['Input'].corr(t['Output 2'])) #Good relationship , If we increase one value , other will increase with it as well

print("\nRelationship between Column 1 and Column 4")
print(t['Input'].corr(t['Output 3'])) #Good relationship , If we increase one value , other will increase with it as well

print("\nRelationship between Column 1 and Column 5")
print(t['Input'].corr(t['Output 4'])) #not a good relationship if one values goes up does not mean the other will

print("\nRelationship between Column 1 and Column 6")
print(t['Input'].corr(t['Output 5'])) #poor relationship 

print("\nRelationship between Column 1 and Column 7")
print(t['Input'].corr(t['Output 6'])) #good relationship


# Conclusion
# +ve value : Directly proportional
# -ve value : Inversely proportional

# Values to 1 depicts good relationship. 