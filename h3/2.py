import csv
+f=open('testthis.csv','r')
+reader = csv.reader(f)
+for row in reader:
  a=0
   b=0
   c=0
   
if row[4] == "ruby" : 
   a=a + row[3]
if row[4] == "perl" :
   
    b= b + row[3]
if row[4] == "python" :
    c=c + row[3]

    print "python ",a,""
    print "ruby",b, ""
    print  "perl",c,""
    file_csv.close()
