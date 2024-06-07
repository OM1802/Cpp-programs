a=int(input("ENTER VALUE: "))
b=int(input("ENTER VALUE: "))
c=int(input("ENTER VALUE: "))
d=int(input("ENTER VALUE: "))
if(a>b and a>c and a>d):
    print(a, "IS THE GREATEST NUMBER")
elif(b>a and b>c and b>d):
    print(b, "IS THE GREATEST NUMBER")
elif(c>a and c>b and c>d):
    print(c, "IS THE GREATEST NUMBER")
else:
    print(d, "IS THE GREATEST NUMBER")
    
for n in range(1,10,2):
    print(n)
    
for i in range(5):
    for j in range(i+1):
        print(j, end=" ")
    print()

a=40
b=50
cs=4
ar=(2*(a+b))
print(ar/cs)
