import csv

with open('data.csv' , 'r') as csv_file1:
    dict_reader = csv.DictReader(csv_file1)

    with open('new_data1.csv' , 'w') as new_csv1:
        fieldnames = ['name' ,'department' ]#'birth day month']
        
        dict_writer = csv.DictWriter(new_csv1 , fieldnames=fieldnames , delimiter='\t')

        dict_writer.writeheader()

        for line in dict_reader:
            del line['birth day month']
            dict_writer.writerow(line)


  