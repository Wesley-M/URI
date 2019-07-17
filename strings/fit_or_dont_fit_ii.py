n = int(raw_input())

for i in range(n):
    fit = False
    numbers = raw_input().split(" ")
    if (numbers[1] in numbers[0]):
        index = len(numbers[0]) - len(numbers[1])
        if (numbers[0][index:] == numbers[1]):
            fit = True
    if (fit):
        print "encaixa"
    else:
        print "nao encaixa"
