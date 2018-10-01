even_numbers = 0
for i in range(0, 5):
    number = float(raw_input())
    if number % 2 == 0:
        even_numbers += 1

print "%d valores pares" % even_numbers
