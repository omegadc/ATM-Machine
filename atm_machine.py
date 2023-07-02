# hello this is the main atm file. There will be others included.
"""
https://docs.python.org/3/library/sqlite3.html is the doc page.
"""
import sqlite3

con = sqlite3.connect("test.db")
cur = con.cursor()
#cur.execute("CREATE TABLE Account(account_num, year, balance)")

#verifying that the new table has been created by querying the SQLITE_MASTER table built-in to SQLite

###res = cur.execute("SELECT name FROM sqlite_master")
###res.fetchone()

cur.execute("""
        INSERT INTO Account VALUES
        (101, 2023, 550.0)
        """)
con.commit()

res = cur.execute("SELECT account_num FROM Account")
accountnum = res.fetchall()
con.close()

print(accountnum)