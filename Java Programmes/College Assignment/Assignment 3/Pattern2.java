class Pattern2 {
    public static void main(String[] args) 
    {
        int i,j,k=1,l=1;
        for(i=1;i<6;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i%2==0)
                {
                    System.out.print(k+" ");
                }
                else
                {
                    System.out.print(l+" ");
                    l--;
                }
                k++;
            }
            l=k+i;
            System.out.println();
        }
    }
}
