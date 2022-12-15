# Program for finding the Maximum and Minimum Element from a Number of Elements
n=int(input("\nEnter the Number of Elements : "))
print("\nEnter the Elements : ")
min=max=int(input())
for i in range (1,n):
    a=int(input())
    if(a<min):
        min=a
    if(a>max):
        max=a
print("\nMinimum is : ",min)
print("Maximum is : ",max,'\n')