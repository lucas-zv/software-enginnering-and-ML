#A simple banking program made using oop which im currently learning

import time

class bank_account():

    owner = "Alex"

    def __init__(self, balance):
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount

    def withdraw(self, amount):
        self.balance -= amount


result = bank_account(balance= 100)

while True:

    option = input("what would you like to do today?(w/d/q) ").lower()

    if option == "w":
        result.withdraw(float(input(f"how much would you like to withdraw today {bank_account.owner}? ")))
        if result.balance < 0:
            print("you have insufficent funds! try again")
            time.sleep(1)
        else:
            print(f"your new balance is ${result.balance}")

    elif option == "d":
        result.deposit(float(input(f"how much would you like to deposit{bank_account.owner}? ")))
        print(f"{result.balance:.2f}")
        time.sleep(1)

    elif option == "q":
        print("you have quit the program")
        break

    else:
        print("that is not a valid try again")
