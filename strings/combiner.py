n = int(raw_input())

for i in range(n):
    result = ""
    line = raw_input()
    words = line.split(" ")
    smaller_length = min(len(words[0]), len(words[1]))
    for j in range(smaller_length):
        result += words[0][j] + words[1][j]
    if (len(words[0]) > smaller_length):
        result += words[0][smaller_length:]
    if (len(words[1]) > smaller_length):
        result += words[1][smaller_length:]
    print result
