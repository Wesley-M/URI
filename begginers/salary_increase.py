salary = float(raw_input())

if salary >= 0 and salary <= 400:
    money_earned = (salary * .15)
    new_salary = salary + money_earned
    percentual_increase = 15
elif salary > 400 and salary <= 800:
    money_earned = (salary * .12)
    new_salary = salary + money_earned
    percentual_increase = 12
elif salary > 800 and salary <= 1200:
    money_earned = (salary * .1)
    new_salary = salary + money_earned
    percentual_increase = 10
elif salary > 1200 and salary <= 2000:
    money_earned = (salary * .07)
    new_salary = salary + money_earned
    percentual_increase = 7
else:
    money_earned = (salary * .04)
    new_salary = salary + money_earned
    percentual_increase = 4

print "Novo salario: %.2f" % new_salary
print "Reajuste ganho: %.2f" % money_earned
print "Em percentual: %d %%" %  percentual_increase
