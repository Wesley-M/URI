import re

while True:
    try:
        line = raw_input()
        letters = re.findall(r"\b\w", line)
        alliterations = 0
        i = 0
        while i < len(letters):
            letter = letters[i]
            i += 1
            hasAlliteration = False
            while (i < len(letters) and letters[i].lower() == letter.lower()):
                hasAlliteration = True
                i += 1
            if (hasAlliteration):
                alliterations += 1
        print alliterations
    except:
        break
