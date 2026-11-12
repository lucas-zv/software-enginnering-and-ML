try:
    num = int(input("what is the number you want to divide by? "))
    number = (1 / num)
    print(number)
except ZeroDivisionError:
    print("choose a better number buddy!")
except ValueError:
    print("this is not a valid number!")
except Exception:
    print("something went wrong but i dont know what did! figure it out!")
finally:
    print("this is a placeholder since i havent learnt file handeling just yet")
