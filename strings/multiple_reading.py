while True:
    try:
        cycles = 0
        i = 0

        operations = raw_input()
        maxReadOp = int(raw_input())
        while (i < len(operations)):
            if (operations[i] == 'W'):
                cycles += 1
                i += 1
            else:
                numberOfReads = 0
                while (i < len(operations) and operations[i] == 'R'):
                    numberOfReads += 1
                    if (numberOfReads > maxReadOp):
                        numberOfReads = 1
                        cycles += 1
                    i += 1
                cycles += 1
        print cycles
    except:
        break
