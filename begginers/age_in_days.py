days = int(raw_input())

years = days / 365
days %= 365

months = days / 30
days %= 30

print "%d ano(s)" % years
print "%d mes(es)" % months
print "%d dia(s)" % days
