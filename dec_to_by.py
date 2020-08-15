n = int(input("Enter number you want to convert the decimal to binary : "))
l=[]
lst = []
while n:
    rem = n%2
    n = n//2
    l.append(rem)

l = l[::-1]
for i in l:
    lst.append(str(i))

print("".join(lst))

