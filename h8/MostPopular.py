import csv
"""for i in range(1,29):
with open('1.csv', 'rb') as f:
    reader = csv.reader(f)
    for row in reader:
        print row"""
import glob
for name in glob.glob('*.csv'):

    print name
 
