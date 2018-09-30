line = raw_input().split(" ")

a = float(line[0])
b = float(line[1])
c = float(line[2])

if a > 0 and b > 0 and c > 0 and a < b+c and b < a+c and c < a+b:
    print "Perimetro = %.1f" % (a + b + c)
else:
    trapezium_area = (a+b)*c/2
    print "Area = %.1f" % trapezium_area
