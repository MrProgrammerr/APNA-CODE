# Program for Swapping the Values of two variables by using third variable
num1=int(input("\nEnter the First Number(A) : "))
num2=int(input("Enter the Second Number(B) : "))
tmp=num1
num1=num2
num2=tmp
print("\nAfter Swapping :-\n\nThe First Number(A) : {}\nThe Second Number(B) : {}\n".format(num1,num2))