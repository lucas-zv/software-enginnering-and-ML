class medical_bot():
    def __init__(self,name):
        self.name = name
        self.is_active = True
        self.is_healing = False

    def healing(self):
        print(f"is the bot healing: {self.is_healing}")

    def name_bot(self):
        print(f"the name of the bot is {self.name}")

    def is_active_now(self):
        print(f"is the bot active? {self.is_active}")

class bot2(medical_bot):
    def status(self):
        print(f"the operation has failed")

class bot3(medical_bot):
    def status1(self):
        print("the operation was never carried out!")

bot_2 = bot2("robot 2")
bot_3 = bot3("robot 3")

bot_2.name_bot()
bot_2.healing()
bot_2.is_active_now()
bot_2.status()

print()

bot_3.name_bot()
bot_3.healing()
bot_3.is_active_now()
bot_3.status1()
