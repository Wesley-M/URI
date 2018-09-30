line = raw_input().split(" ")

a = float(line[0])
b = float(line[1])
c = float(line[2])

if b > a:
    a, b = b, a
if c > a:
    a, c = c, a

if a >= b+c:
    print "NAO FORMA TRIANGULO"
elif a**2 == b**2 + c**2:
    print "TRIANGULO RETANGULO"
elif a**2 > b**2+c**2:
    print "TRIANGULO OBTUSANGULO"
elif a**2 < b**2+c**2:
    print "TRIANGULO ACUTANGULO"

if a == b == c:
    print "TRIANGULO EQUILATERO"
elif a == b or b == c or a == c:
    print "TRIANGULO ISOSCELES"
