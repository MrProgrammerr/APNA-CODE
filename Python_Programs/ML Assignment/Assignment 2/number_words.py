#Program For Converting a Number into Words
num_str=input("\nEnter the Number : ")
a=0
if(num_str[0]=='0'):
    a=1
print("In Words : ",end="")
for i in range(a,len(num_str)):
    if(num_str[i]=='0'):
        print("Zero ",end="")
    elif(num_str[i]=='1'):
        print("One ",end="")
    elif(num_str[i]=='2'):
        print("Two ",end="")
    elif(num_str[i]=='3'):
        print("Three ",end="")
    elif(num_str[i]=='4'):
        print("Four ",end="")
    elif(num_str[i]=='5'):
        print("Five ",end="")
    elif(num_str[i]=='6'):
        print("Six ",end="")
    elif(num_str[i]=='7'):
        print("Seven ",end="")
    elif(num_str[i]=='8'):
        print("Eight ",end="")
    else:
        print("Nine ",end="")
print("\n")
        