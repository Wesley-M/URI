n = int(raw_input())

for i in range(n):
    line = raw_input();
    firstHalfReversed = line[:len(line)/2]
    secondHalfReversed = line[len(line)/2:]
    firstHalf = ""
    secondHalf = ""
    for j in range(len(firstHalfReversed) - 1, -1, -1):
        firstHalf += firstHalfReversed[j]
    for j in range(len(secondHalfReversed) - 1, -1, -1):
        secondHalf += secondHalfReversed[j]
    print firstHalf + secondHalf
