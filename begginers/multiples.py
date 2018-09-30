line = raw_input().split(" ")

n1 = int(line[0])
n2 = int(line[1])

if (n1 % n2 == 0 or n2 % n1 == 0):
    print "Sao Multiplos"
else:
    print "Nao sao Multiplos"
