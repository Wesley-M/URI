a = int(raw_input())
b = int(raw_input())

if (b < a):
    b, a = a, b

odd_sum = 0
for i in range(a+1, b):
    if i % 2 == 1:
        odd_sum += i

print odd_sum
