seconds = int(raw_input())

hours = seconds / 3600
seconds = seconds % 3600

minutes = seconds / 60
seconds = seconds % 60

print "%d:%d:%d" % (hours, minutes, seconds)
