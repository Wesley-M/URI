even_numbers = 0
odd_numbers = 0
positive_numbers = 0
negative_numbers = 0

for i in range(0, 5):
    number = float(raw_input())
    if number % 2 == 0:
        even_numbers += 1
    else:
        odd_numbers += 1
    if number < 0:
        negative_numbers += 1
    if number > 0:
        positive_numbers += 1

print "%d valor(es) par(es)" % even_numbers
print "%d valor(es) impar(es)" % odd_numbers
print "%d valor(es) positivo(s)" % positive_numbers
print "%d valor(es) negativo(s)" % negative_numbers
