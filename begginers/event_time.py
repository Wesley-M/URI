def was_before(hour_i=0, minute_i=0, second_i=0, hour_f=0, minute_f=0, second_f=0):
    if (hour_i < hour_f):
        return True
    elif (minute_i < minute_f):
        return True
    elif (second_i < second_f):
        return True


day_init = int(raw_input())
time_init = raw_input().split(":")

day_end = int(raw_input())
time_end = raw_input().split(":")

if was_before(time_init[0], time_init[1], time_init[2], time_end[0], time_end[1], time_end[2]):
    print "%d dia(s)" % diff_day
