x = int(raw_input())

if x % 2 == 0:
    x += 1
for i in range(0, 6):
    print "%d" % (x + 2*i)
