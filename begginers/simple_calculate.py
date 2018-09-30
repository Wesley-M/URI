line_one = raw_input().split(" ")
line_two = raw_input().split(" ")

value_to_be_paid = int(line_one[1]) * float(line_one[2]) + int(line_two[1]) * float(line_two[2])

print "VALOR A PAGAR: R$ %.2f" % value_to_be_paid
