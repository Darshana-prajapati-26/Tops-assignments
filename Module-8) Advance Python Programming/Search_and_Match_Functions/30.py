import pymysql

connection = pymysql.connect(host = 'localhost' , user = 'root' ,password = 'root')

cursor = connection.cursor()

cursor.execute("CREATE DATABASE DARSHANA24")
cursor.execute("show databases")
result = cursor.fetchall()

for i in result:
    print(i)

print("MAKING DONE")

# cursor.execute("DROP DATABASE DARSHANA24")
# print("DELETE DONE ")

cursor.close()
connection.close()
