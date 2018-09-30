salary = float(raw_input())

taxes = 0

if salary <= 2000:
    print "Isento"
else:
    salary -= 2000

    if (1000 >= salary > 0):
        taxes += salary * .08
    else:
        salary -= 1000
        taxes += 1000 * .08

        if (1500 >= salary > 0):
            taxes += salary * .18
        else:
            salary -= 1500
            taxes += 1500 * .18

            if (salary > 0):
                taxes += salary * .28

    print "R$ %.2f" % taxes
