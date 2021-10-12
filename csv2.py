import csv
from os import name
html_output = ''
names = []

with open('contributors.csv' , 'r') as data_file:
    csv_data = csv.DictReader(data_file)

    # next(csv_data)
    

    for line in csv_data:
        if line['User_Name'] == 'No Reward':
         break
        names.append(f"{line['User_Name']} {line['First_Name']}")
        print(line)



# html_output += f'<p> There are currently {len(names)} public contributors, Thankyou!'

# html_output += '\n<ul>'

# for First_Name in names:
#     html_output += f'\n\t<li>{names}</li>'

# html_output += '\n</ul>'

# print(html_output)
# for First_Name,Job_Title in names:
#      print(First_Name , Job_Title)
