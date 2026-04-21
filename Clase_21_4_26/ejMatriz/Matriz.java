package Clase_21_4_26;

public class Matriz {
	private int[][] matriz;
	
	public Matriz(int tam) {
		this.matriz = new int[tam][];
			
		for(int i = 0; i < tam; i++) {
			this.matriz[i] = new int[tam];
		}
	}
	
	public void CrearIdentidad() {
		for(int i = 0; i < matriz.length; i++) {
			for(int j = 0; j < matriz[i].length; j++) {
				if(i == j) matriz[i][j] = 1;
				else matriz[i][j] = 0;				
			}
		}
	}
	
	public void ImprimirMatriz() {
		for(int i = 0; i < matriz.length; i++) {
			for(int j = 0; j < matriz[i].length; j++) {
				System.out.print(matriz[i][j] + "\t");
			}
			System.out.println();
		}
	}
}
