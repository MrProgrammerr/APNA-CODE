#Program For Checking the Number is Prime Or Not
num_str=input("Enter the number : ")
num=int(num_str)
if(num==1):
    print(num,"is Not a Prime Number")
if(num==2 or num==3):
    print(num,"is a Prime Number !")
elif num>2:
    for i in range(2, (num//2)+1):
        if (num % i) == 0:
            break
    if(i==(num//2)):
        print(num,"is a prime Number ..")
    else:
        print(num, "is not a Prime Number !")