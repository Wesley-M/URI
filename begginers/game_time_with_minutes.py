line = raw_input().split(" ")

start_hour = int(line[0])
start_minutes = int(line[1])
end_hour = int(line[2])
end_minutes = int(line[3])

if start_hour == end_hour and start_minutes == end_minutes:
    interval_in_hours = 24
    interval_in_minutes = 0
elif end_minutes > start_minutes:
    interval_in_hours = (end_hour - start_hour) % 24
    interval_in_minutes = abs(end_minutes - start_minutes)
else:
    interval_in_hours = (end_hour - start_hour) % 24 - 1
    interval_in_minutes = 60 - abs(end_minutes - start_minutes)

print "O JOGO DUROU %d HORA(S) E %d MINUTO(S)" % (interval_in_hours, interval_in_minutes)
