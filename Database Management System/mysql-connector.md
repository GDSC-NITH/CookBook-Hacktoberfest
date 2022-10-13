## Python with MySQL
MySQL server can be integrated with Python using a module `mysql-connector` that allows Python programs to access MySQL databases.

Install a python driver `mysql-connector` to connect with MySQL. 
```bash
pip install mysql-connector
```

### Create Connection
The `connect()` constructor creates a connection to the MySQL server and returns a `MySQLConnection` object.
```py
import mysql.connector
mydb = mysql.connector.connect(
  host="localhost",
  user="yourusername",
  password="yourpassword"
)

# Cursor objects interact with the MySQL server
mycursor = mydb.cursor()
```

### Create Database
```py
mycursor.execute("CREATE DATABASE mydb")

# see all databases
mycursor.execute("SHOW DATABASES")
```
### Create Table
```py
mycursor.execute("CREATE TABLE students (name VARCHAR(255), grade CHAR(1))")
```
### Insert
```py
# insert a single record
sql = "INSERT INTO students (name, grade) VALUES (%s, %s)"
val = ("Rahul", "B")
mycursor.execute(sql, val)

#insert multiple records
values = [
  ('Julie', 'A'),
  ('Ritesh', 'C'),
  ('Aabha', 'B'),
]
mycursor.executemany(sql, values)
mydb.commit()
```
### Read
```py
# Read a single record
mycursor.execute("SELECT * FROM students")
student = mycursor.fetchone()
print(student)

# Read all records
mycursor.execute("SELECT * FROM students")
myclass = mycursor.fetchall()
for x in myclass:
  print(x)
```
### Update
```py
sql = "UPDATE students SET grade = 'A' WHERE name = 'Rahul'"
mycursor.execute(sql)
mydb.commit()
```
### Delete
```py
sql = "DELETE FROM students WHERE grade = 'F'"
mycursor.execute(sql)
mydb.commit()
```
### Drop Table
```py
mycursor.execure("DROP TABLE students")
```


📖 Official [documentation](https://dev.mysql.com/doc/connector-python/en/) for more information.
