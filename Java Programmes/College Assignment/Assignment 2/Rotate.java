import java.util.Scanner;

import java.util.Scanner;

public class Rotate {
    public static void main(String[] args) {
        int arr[][] = new int[50][50];
        int r, c;
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the row number");
        r = in.nextInt();
        System.out.println("Enter the column number");
        c = in.nextInt();
        System.out.println("Enter the matrix in matrix format");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                arr[i][j] = in.nextInt();
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = i; j < c - i - 1; j++) {
                int temp = arr[i][j];
                arr[i][j] = arr[c - 1 - j][i];
                arr[c - 1 - j][i] = arr[r - 1 - i][c - 1 - j];
                arr[r - 1 - i][c - 1 - j] = arr[j][r - 1 - i];
                arr[j][r - 1 - i] = temp;
            }
        }
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        for (int x = 0; x < r; x++) {
            // Consider elements in group
            // of 4 in current square
            for (int y = x; y < c - x - 1; y++) {
                // Store current cell in
                // temp variable
                int temp = arr[x][y];

                // Move values from right to top
                arr[x][y] = arr[y][c - 1 - x];

                // Move values from bottom to right
                arr[y][c - 1 - x] = arr[r - 1 - x][c - 1 - y];

                // Move values from left to bottom
                arr[r - 1 - x][c - 1 - y] = arr[r - 1 - y][x];

                // Assign temp to left
                arr[r - 1 - y][x] = temp;
            }
        }
        System.out.println();
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}