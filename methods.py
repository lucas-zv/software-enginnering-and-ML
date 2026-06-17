class Anime():
    def  __init__(self, name, genre):
        self.name = name
        self.genre = genre

    def __str__(self):
        return f"{self.name} is a {self.genre}"

    def __eq__(self, other):
        return self.name == other.name and self.genre == other.genre

    def __lt__(self, other):
        #return self.value < other.value
        pass

    def __gt__(self, other):
        #return self.value > other.value
        pass

    def __add__(self, other):
        #return self.value += other.value
        pass

    def __contains__(self, keyword):
        return keyword in self.name

    def __getitem__(self, key):
        if key == "name":
            return self.name
        elif key == "genre":
            return self.genre
        else:
            return f"the key {key} was not found"

anime1 = Anime("black clover", "shonen")
anime2 = Anime("evangelion", "seinen")
anime3 = Anime("jojos bizzare adventure", "shonen")
anime4 = Anime("Monster", "seinen")
anime5 = anime1
anime_list = [anime1, anime2, anime3, anime4]

for animes in anime_list:
    print(animes)
print()

print(anime1 == anime3)
print(anime1 == anime5)
print()

print("evangelion" in anime2)
print(anime1["name"])
print(anime3["pizza"])
print(anime3["genre"])
