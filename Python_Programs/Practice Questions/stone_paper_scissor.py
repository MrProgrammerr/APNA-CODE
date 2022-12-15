# Program For playing Stone Paper Scissor
import random
print("\nLet's Start The Game [^_^]")
win=0
loss=0
game=["Stone","Paper","Scissor"]
tmp=int(input("\nEnter the Total Number of Times You Want to Play : "))
while(tmp>0):
    print("\n1: Stone\n2: Paper\n3: Scissor\n")
    ch=int(input("Enter Your Choice : "))
    rand=random.choice(game)
    print("My choice is : {}".format(rand))
    if (ch > 3 or ch < 1):
        print("\nINVALID CHOICE ENTERED !")
        tmp += 1
    elif (game[ch - 1] == rand):
        print("\nShit ! It's Draw .")
    elif(ch==1 and rand=="Scissor"):
        print("\nCongrats ! You Won .")
        win+=1
    elif(ch==2 and rand=="Stone"):
        print("\nCongrats ! You Won .")
        win+=1
    elif(ch==3 and rand=="Paper"):
        print("\nCongrats ! You Won .")
        win+=1
    else:
        print("\nLOL ! You Lost")
        loss+=1
    tmp-=1
if(win>loss):
    print("\n\nCONGRATS ! YOU WON THE GAME ")
    print("Visit Again ..")
elif(win<loss):
    print("\n\nLOSER !")
else:
    print("\n\nMATCH DRAWN !")