#Program For Checking the Number is Palindrum or Not
num=int(input("\nEnter the Number : "))
actual=num
rev=0
while(num!=0):
    rev=(rev*10)+(num%10)
    num//=10;
if(actual==rev):
    print("\nYes , It is Palindrum !")
else:
    print("\nNo , It is Not Palindrum !")