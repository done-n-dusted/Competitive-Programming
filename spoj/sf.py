n = input()
max = -1
inp = []
for i in range(n):
    inp.append(input())
    if inp[i] >= max:
        max = inp[i]

facts = [1]
for i in range(1,max+1):
    facts.append(facts[i - 1] * i)

for i in range(n):
    print facts[inp[i]]
