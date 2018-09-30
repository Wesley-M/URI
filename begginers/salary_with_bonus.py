name = raw_input()
fixed_salary = float(raw_input())
sales_total = float(raw_input())

salary = fixed_salary + (sales_total * .15)

print "TOTAL = R$ %.2f" % salary
