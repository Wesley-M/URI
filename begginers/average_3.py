line = raw_input().split(" ")
n1 = float(line[0])
n2 = float(line[1])
n3 = float(line[2])
n4 = float(line[3])

average = (n1*2 + n2*3 + n3*4 + n4)/10;

print "Media: %.1f" % average

if (average >= 7.0):
    print "Aluno aprovado."
elif(average < 5.0):
    print "Aluno reprovado."
elif (average >= 5 and average < 7):
    print "Aluno em exame."
    n5 = float(raw_input())

    print "Nota do exame: %.1f" % n5
    
    average = (average + n5)/2

    if (average >= 5):
        print "Aluno aprovado."
    elif(average < 5):
        print "Aluno reprovado."

    print "Media final: %.1f" % average
