count_positives = 0
for i in range(0, 6):
    n = int(raw_input())
    if n > 0:
        count_positives += 1;

print "%d valores positivos" % count_positives
