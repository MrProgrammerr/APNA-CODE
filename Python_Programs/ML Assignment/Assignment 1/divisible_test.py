# Program to test the given number is divisible by both 11 & 13 or both 5 and 7
num=int(input("\nEnter the Number : "))
if num%11==0 and num%13==0:
    print("\n{} is Divisible by Both 11 and 13 .\n".format(num))
elif num%5==0 and num%7==0:
    print("\n{} is Divisible by Both 5 and 7 .\n".format(num))
else:
    print("\nNOT DIVISIBLE !\n")