public class Pattern3 
{
    public static void main(String[] args) 
    {
        int i,j,x=10,k,l=0;
        for(i=1;i<20;i++)
        {
            k=0;
            for(j=1;j<20;j++)
            {
                if(j<x-l)
                {
                    k++;
                    System.out.print(k+" ");
                }
                else if(j>x+l)
                {
                    System.out.print(k+" ");
                    k--;
                }
                else
                    System.out.print(". ");
            }
            if(i<10)
                l++;
            else
                l--;
            System.out.println();
        }
    }
}
