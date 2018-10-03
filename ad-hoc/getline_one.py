sum = 0
number_of_friends = 0
while True:
    try:
        nome = raw_input()
        distance = float(raw_input())

        sum += distance
        number_of_friends += 1
    except:
        print "%.1f" % (sum/number_of_friends)
        break
