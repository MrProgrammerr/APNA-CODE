class Pattern1{
	public static void main(String[] args){
		int i,j,x=5,l=0,k;
		for(i=1;i<10;i++)
		{
			k=1;
			for(j=1;j<10;j++)
			{
				if(j<x-l || j>x+l)
					System.out.print("  ");
				else
				{
					System.out.print(k+" ");
					if(j<5)
						k++;
					else
						k--;
				}
			}
			if(i<5)
				l++;
			else
				l--;
			System.out.println();
	    }
    }
}