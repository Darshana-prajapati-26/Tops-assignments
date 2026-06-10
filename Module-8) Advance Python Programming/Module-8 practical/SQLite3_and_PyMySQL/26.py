# Write a Python program to create a database and a table using SQLite3

import sqlite3

conn = sqlite3.connect("darshana_db")

cursor = conn.cursor()

cursor.execute(""" CREATE TABLE INFORMATION(
               id INT ,
               name CHAR , 
               mobile INT ,
               email EMAIL )""")

conn.commit()

print("done")

conn.close()


