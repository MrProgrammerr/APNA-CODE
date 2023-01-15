class P7{
	public static void main(String[] args){
		int i, j, k=1, n = 5, s=0;
		for(i=1; i<=n; i++){
			if(i%2!=0){
				for(j=1; j<=i;j++,k++){
					s = k;
				}
				for(j=1; j<=i;j++, s--){
					System.out.print(s);
					System.out.print(" ");
				}
			}
			else{
				for(j=1; j<=i;j++,k++){
					System.out.print(k);
					System.out.print(" ");
				}
			}
			System.out.println();
		}
	}
}