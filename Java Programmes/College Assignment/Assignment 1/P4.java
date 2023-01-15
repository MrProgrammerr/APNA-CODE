
// partern P4
import java.util.*;

class P4 {
	public static void main(String args[]) {
		int k = 1;
		for (int r = 1; r <= 5; r++) {
			for (int c = 1; c <= r; c++) {
				System.out.print(k+" ");
				k++;
			}
			System.out.println();
		}

	}
}