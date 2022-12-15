#Program For Printing nth(n is input) Fibonascii number
n=int(input("\nEnter the positon of Fibonascii Series : "))
a=0
b=1
if(n==1):
    print("\nThe Element is : 0")
elif(n==2):
    print("\nThe Element is : 1")
else:
    for i in range(1,n-1):
        c=b+a
        a=b
        b=c
    print("\nThe Element is : ",c)
        