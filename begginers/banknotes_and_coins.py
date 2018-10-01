value = float(raw_input())
value += 0.001

print "NOTAS:"
print "%d nota(s) de R$ 100.00" % (value/100)
value %= 100
print "%d nota(s) de R$ 50.00" % (value/50)
value %= 50
print "%d nota(s) de R$ 20.00" % (value/20)
value %= 20
print "%d nota(s) de R$ 10.00" % (value/10)
value %= 10
print "%d nota(s) de R$ 5.00" % (value/5)
value %= 5
print "%d nota(s) de R$ 2.00" % (value/2)
value %= 2

print "MOEDAS:"
print "%d moeda(s) de R$ 1.00" % (value)
value %= 1
print "%d moeda(s) de R$ 0.50" % (value/.50)
value %= .50
print "%d moeda(s) de R$ 0.25" % (value/.25)
value %= .25
print "%d moeda(s) de R$ 0.10" % (value/.10)
value %= .10
print "%d moeda(s) de R$ 0.05" % (value/.05)
value %= .05
print "%d moeda(s) de R$ 0.01" % (value/.01)
