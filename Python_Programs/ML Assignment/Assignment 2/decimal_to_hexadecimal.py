#Program for Converting a Decimal Number to Hexadecimal Number
deci=int(input("\nEnter the Decimal Number : "))
dvdr=deci
list=[]
list2=[]
while dvdr!=0:
    rmdr=dvdr%16
    dvdr=dvdr//16
    list.insert(0,rmdr)
for a in list:
    if a==10:
        list2.append('A')
    elif a==11:
        list2.append('B')
    elif a==12:
        list2.append('C')
    elif a==13:
        list2.append('D')
    elif a==14:
        list2.append('E')
    elif a==15:
        list2.append('F')
    else:
        list2.append(a)
print("\nIts Hexadecimal is : ",end="")
for a in list2:
    print(a,end="")
print("\n")