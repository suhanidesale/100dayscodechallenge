import csv
#CSV reader below

with open('new_data.csv', 'r') as csv_file:
    csv_read = csv.reader(csv_file , delimiter = '\t')

    for line in csv_read:
      print(line)

#CSV writer below

    # with open('new_data.csv', 'w') as new_csv_file:
    #      csv_write = csv.writer(new_csv_file, delimiter='\t')

    #      for line in csv_read:
    #         csv_write.writerow(line)
