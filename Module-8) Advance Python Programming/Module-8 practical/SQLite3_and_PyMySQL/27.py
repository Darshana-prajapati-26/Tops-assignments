# Write a Python program to insert data into an SQLite3 database and fetch it.

import sqlite3

conn = sqlite3.connect("darshana_db")

cursor = conn.cursor()

id = int(input("enter your id :"))
name = input("enter your name : ")
mobile = int(input("enter your mobile number : "))
email = input("enter your email : ")

cursor.execute(
    "INSERT INTO INFORMATION (id, name, mobile, email) VALUES (?, ?, ?, ?)",
    (id, name, mobile, email)
)

conn.commit()
print("done ")

cursor.execute("SELECT * FROM  information")

data = cursor.fetchall()

for i in data:
    print (i)

