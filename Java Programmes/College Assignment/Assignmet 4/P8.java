class P8{
	public static void main(String[] args){
		int n = 101;
		//Scanner in = new Scanner(System.in);
		int i, j, k, l; 
		//Syste.out.println("Enter the number of row");
		for(i=1, k=97;i<=5;i++,k++) {
			for(j=i;j<=n-1;j++) {
				System.out.print(" ");
				System.out.print(" ");
			}
			for(j=97;j<=k;j++) {
				System.out.print((char)j);
				System.out.print(" ");
			}
			for(j=k-1;j>=97;j--) {
				System.out.print((char)j);
				System.out.print(" ");
			}
			System.out.println();
		}
	}
}