package Clase_7_4_26;

public class Main {
	public static void main(String[] args) {
		/*
		int[] arr = new int[15];
		
		for(int i = 0; i < arr.length; i++) {
			arr[i] = i;			
			System.out.println(arr[i]);
		}
		
		int arr[] = { 26, 30, 23, 54, 57, 12, 38, 34, 24, 50 };
		int num = 0;
		
		for(int i = 0; i < arr.length; i++) {
			num += arr[i];
		}
		
		System.out.println("Suma de los valores del array: " + num);
		*/
		
		int[] arr = new int[10];
		int i = 0, pos = 0;
		
		while (pos < arr.length) {
			if(i % 2 == 0) {
				arr[pos] = i;
				System.out.println(arr[pos]);
				pos++;
			}
			
			i++;			
		} 
	}
}
