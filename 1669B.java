import java.util.Scanner;
import java.util.HashMap;

public class Main {
	public static void main(String []args) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		
		for(int i = 0; i < t; i++) {
			int n = input.nextInt();
			int[] arr;
			arr = new int[n];
			
			for(int j = 0; j < n; j++) {
				arr[j] = input.nextInt();
			}
			
			HashMap<Integer, Integer> m = new HashMap<Integer, Integer>();
			
			for(int j = 0; j < n; j++) {
				if(m.containsKey(arr[j]) == true) {
					int c = m.get(arr[j]);
					m.put(arr[j], c+1);
				} else {
					m.put(arr[j], 1);
				}
			}
			
			boolean flag = false;
			
			for(Integer k : m.keySet()) {
				int frequency = m.get(k);
				// System.out.printf("%d, %d\n", k, frequency);
				if (frequency >= 3) {
					System.out.println(k);
					flag = true;
					break;
				}
			}
			
			if (flag == false) {
				System.out.println(-1);
			}
		}
		
		input.close();
	}
}