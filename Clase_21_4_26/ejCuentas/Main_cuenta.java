package ejCuentas;

import java.util.Scanner;

public class Main_cuenta {	
	public static void main(String[] args) {
		Titular tit_main = new Titular("Antonio");
		Cuenta cue_main = new Cuenta(tit_main, 200.0);
		double cant_main = 0;
		
		Scanner escaneo = new Scanner(System.in);
		boolean bucle = true;
		int opcion = 0;
		
		while(bucle == true) {
			System.out.println("Digame que quieres hacer: ");
			System.out.println("1: Ingresar dinero a la cuenta.");
			System.out.println("2: Retirar dinero de la cuenta. ");
			System.out.println("3: Cerrar.");
			System.out.print("> ");
			
			opcion = escaneo.nextInt();
			
			switch(opcion) {
			case 1:
				System.out.println("Digame cuanto quieres ingresar: ");
				System.out.print("> ");
				cant_main = escaneo.nextDouble();
				
				cue_main.ingresar(cant_main);
				break;
			case 2:
				System.out.println("Digame cuanto quieres retirar: ");
				System.out.print("> ");
				cant_main = escaneo.nextDouble();
				
				cue_main.retirar(cant_main);
				break;
			case 3:
				System.out.println("Cerrando aplicacion...");
				bucle = false;
				break;
			default:
				System.out.print("Valor no valido introducido.");
				opcion = 0;
			}
		}
	}
}
