package uva;

import java.util.Scanner;

public class RelationalOp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while (t-- > 0 ) {
			int a = in.nextInt();
			int b = in.nextInt();
			if ( a > b){
				System.out.println(">");
			} else if (a < b) {
				System.out.println("<");
			} else if (a == b) {
				System.out.println("=");
			}
		}
	}

}
