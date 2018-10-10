words = input().split()
hard = ["b", "c", "d", "g", "k", "n", "p", "t"]

def rule1(word):
    letter = word[0]
    low = 10000
    new_h = letter.lower()
    inter = None
    for l in reversed(hard):
        new_l = abs(ord(l) - ord(letter.lower()))
        if (new_l <= low):
            low = new_l
            new_h = l
    if letter.isupper():
        inter = new_h.upper() + word[1:]
    else:
        inter = new_h + word[1:]

    sy = inter.split('-')
    if '-' in inter:
        c = 1
        for s in sy[1:]:
            new_sy = ""
            for l in s:
                if l.lower() in hard:
                    new_sy += inter[0].lower()
                else:
                    new_sy += l
            sy[c] = new_sy
            c = c + 1
    return ''.join(sy)


def rule3(word):
    last = word[len(word) - 1].lower()
    if last in hard:
        ending = ["a", "o", "u"]
        low = 10000
        new_h = None
        for ew in reversed(ending):
            new_l = abs(ord(ew) - ord(last))
            if (new_l <= low):
                low = new_l
                new_h = ew
        word += new_h + "h"
    return word

final = ""
for w in words:
    final += rule3(rule1(w)) + " "

print(final)
