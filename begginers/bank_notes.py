value = int(raw_input())

print value
print "%d nota(s) de R$ 100,00" % (value/100)
value %= 100  
print "%d nota(s) de R$ 50,00" % (value/50)
value %= 50  
print "%d nota(s) de R$ 20,00" % (value/20)
value %= 20  
print "%d nota(s) de R$ 10,00" % (value/10)
value %= 10  
print "%d nota(s) de R$ 5,00" % (value/5)
value %= 5  
print "%d nota(s) de R$ 2,00" % (value/2)
value %= 2  
print "%d nota(s) de R$ 1,00" %  (value/1)   
