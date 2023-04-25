bank=input("Submit your greeting ").lower().strip()


def kramer(say):
     if say == "hello":
          return "$0"

     elif say[0] =="h":
          return "$20"

     return "$100"

print(kramer(bank))
