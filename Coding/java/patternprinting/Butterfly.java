public public class Butterfly {
	public static void main(String[] args) {
		printPattern(9);

	}

	public static void printPattern(int n) {
		int Sstar = 1;
		int Estar = n;
		int mid = n / 2 + 1;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (j <= Sstar || j >= Estar) {
					System.out.print("* ");
				} else {
					System.out.print("  ");
				}

			}
			if (i < mid) {
				Sstar++;
				Estar--;
			} else {
				Sstar--;
				Estar++;
			}
			System.out.println();
		}

	}

} 
    

