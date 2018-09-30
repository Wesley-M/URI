line = raw_input().split(" ")

x = float(line[0])
y = float(line[1])

if x > 0:
    if y < 0:
        print "Q4"
    elif y > 0:
        print "Q1"
if x < 0:
    if y < 0:
        print "Q3"
    elif y > 0:
        print "Q2"

if y == 0 and x != 0:
    print "Eixo X"
elif x == 0 and y != 0:
    print "Eixo Y"
elif x == 0 and y == 0:
    print "Origem"
