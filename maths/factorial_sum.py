def factorial(n):
	if n <= 1:
		return 1;
	return n * factorial(n-1)

while True:
	try:
		numbers = raw_input().split()

		if numbers[0] == numbers[1]:
			print 2 * factorial(int(numbers[0]))
		else:
			print factorial(int(numbers[0])) + factorial(int(numbers[1]))
	except:
		break
