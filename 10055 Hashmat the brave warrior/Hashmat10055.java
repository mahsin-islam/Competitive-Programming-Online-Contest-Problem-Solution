import java.util.Scanner;

public class Hashmat10055 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in = new Scanner(System.in);
		while (in.hasNext()){
			long a,b;
			a = in.nextLong();
			b = in.nextLong();
			if(a > b){
				System.out.println(a-b);
			} else {
				System.out.println(b-a);
			}
		}

	}

}
