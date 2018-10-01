positive_numbers = 0
sum = 0
for i in range(0, 6):
    number = float(raw_input())
    if number > 0:
        positive_numbers += 1
        sum += number

print "%d valores positivos" % positive_numbers
print "%.1f" % (sum/positive_numbers) 
