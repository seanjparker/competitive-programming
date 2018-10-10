import pprint

class Word(object):
    def __init__(self, person=None):
        self.c = 1
        self.p = set()
        self.p.add(person)
    def __str__(self):
        return "count: " + str(self.c) + ", people: " + ', '.join(self.p)
    def addC(self):
        self.c = self.c + 1
    def addP(self, person):
        self.p.add(person)

def sorting(a, b):
    if (a[1] != b[1]):
        if (a[1] < b[1]):
            return 1
        elif (a[1] > b[1]):
            return -1
        else:
            return 0
    else:
        if (a[0] > b[0]):
            return 1
        elif (a[0] < b[0]):
            return -1
        else:
            return 0

m = int(raw_input())
s = {}
pep = set()
for i in range(0, m):
    si = raw_input().split()
    pep.add(si[0])
    for j in si[1:]:
        if (j in s):
            s[j].addC()
            s[j].addP(si[0])
        else:
            s[j] = Word(si[0])

people = len(pep)
final = []
for k in s.keys():
    if len(s[k].p) >= people:
        final.append((k, s[k].c))

if (len(final) > 0):
    final = sorted(final, cmp=sorting)
    for p1, p2 in final:
        print p1
else:
    print "ALL CLEAR"
#for k in s.keys():
#    print(k + " -> ", end="")
#    print(s[k])



        #s[si[0]].extend(word(1, si[1:]))
    #else:
        #s[si[0]] = []
