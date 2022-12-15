import java.util.*;
class Cube
{
    int row,col,i,j,k,l;
    int arr[][] = new int[10][10];
    int tmp[][] = new int[10][10];
    void input()
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the Number of Rows : ");
        row=in.nextInt();
        System.out.print("Enter the Number of Coloumns : ");
        col=in.nextInt();
        System.out.println("Enter the array values : ");
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                arr[i][j]=in.nextInt();
    }
    void leftrot()
    {
        l=col-1;
        for(i=0;i<row;i++)
        {
            k=0;
            for(j=0;j<col;j++)
            {
                tmp[i][j]=arr[k][l];
                k++;
            } 
            l--;
        }
    }
    void rightrot()
    {
        l=0;
        for(i=0;i<row;i++)
        {
            k=row-1;
            for(j=0;j<col;j++)
            {
                tmp[i][j]=arr[k][l];
                k--;
            }
            l++;
        }
    }
    void display()
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
                System.out.print(tmp[i][j]+"\t");
            System.out.println();
        }
    }
}
class DemoCube
{
    public static void main(String args[])
    {
        Cube cb = new Cube();
        cb.input();
        cb.leftrot();
        System.out.println("After Left Rotation the Matrix : ");
        cb.display();
        cb.rightrot();
        System.out.println("After Right Rotation the Matrix : ");
        cb.display();
    }
}