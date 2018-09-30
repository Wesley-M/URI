vertebrado = {
    "ave": {
        "carnivoro": "aguia",
        "onivoro": "pomba"
    },
    "mamifero": {
        "onivoro": "homem",
        "herbivoro": "vaca"
    }
}

invertebrado = {
    "inseto": {
        "hematofago": "pulga",
        "herbivoro": "lagarta"
    },
    "anelideo": {
        "hematofago": "sanguessuga",
        "onivoro": "minhoca"
    }
}

word_one = raw_input()
word_two = raw_input()
word_three = raw_input()

if word_one == "vertebrado":
    print vertebrado[word_two][word_three]
else:
    print invertebrado[word_two][word_three]
