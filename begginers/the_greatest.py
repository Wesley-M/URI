line = raw_input().split(" ")
n1 = int(line[0])
n2 = int(line[1])
n3 = int(line[2])

greatest = (n1 + n2 + abs(n1 - n2))/2
greatest = (greatest + n3 + abs(greatest - n3))/2

print "%d eh o maior" % greatest
