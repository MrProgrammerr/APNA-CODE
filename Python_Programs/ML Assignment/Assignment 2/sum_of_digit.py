# Program For Finding the Sum of the digits
num=int(input("\nEnter the Number : "))
sum=0
while(num!=0):
    sum+=num%10
    num=num//10
print("\nSum of Digits is : {}\n\n".format(sum))