#Program For Reversing a Given Number
num=int(input("\nEnter the Number : "))
rev=0
while(num!=0):
    rev=(rev*10)+(num%10)
    num//=10;
print("\nIts Reverse Number : {}\n".format(rev))