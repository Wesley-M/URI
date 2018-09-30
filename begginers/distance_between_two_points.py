from math import sqrt

line_one = raw_input().split(" ")
x1 = float(line_one[0])
y1 = float(line_one[1])

line_two = raw_input().split(" ")
x2 = float(line_two[0])
y2 = float(line_two[1])

distance = sqrt((x2-x1)**2 + (y2-y1)**2)

print "%.4f" % distance
