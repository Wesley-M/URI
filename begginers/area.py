values = raw_input().split(" ")
v1 = float(values[0])
v2 = float(values[1])
v3 = float(values[2])

print "TRIANGULO: %.3f" % ((v1 * v3)/2)
print "CIRCULO: %.3f" % (3.14159 * v3**2)
print "TRAPEZIO: %.3f" % ((v1+v2)*v3/2)
print "QUADRADO: %.3f" % (v2**2)
print "RETANGULO: %.3f" % (v1*v2)