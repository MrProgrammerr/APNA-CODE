#Program For Checking the Number is Armstrong or not
import math
num_str=input("\nEnter the Number : ")
tmp=num=int(num_str)
sum=0
while tmp!=0:
    sum=sum+math.pow(tmp%10,len(num_str))
    tmp//=10
if(num==sum):
    print("\n{} is Armstrong Number .".format(num))
else:
    print("\n{} is Not Armstrong Number !".format(num))
print("\n")