line = raw_input().split(" ")

start_time = int(line[0])
end_time = int(line[1])

if start_time == end_time:
    interval = 24
else:
    interval = (end_time - start_time) % 24

print "O JOGO DUROU %d HORA(S)" % interval
