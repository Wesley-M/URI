positive_numbers = 0
for i in range(0, 6):
    number = float(raw_input())
    if number > 0:
        positive_numbers += 1

print "%d valores positivos" % positive_numbers
