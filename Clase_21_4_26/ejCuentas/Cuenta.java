package ejCuentas;

public class Cuenta {	
	private Titular titular_cue;
	private double cantidad_cue;
	
	public Cuenta(Titular titular, double cantidad) {
		titular_cue = titular;
		cantidad_cue = cantidad;
	}
	
	public Cuenta(Titular titular) {
		titular_cue = titular;
	}
	
	//Meter dinero a la cuenta
	public void ingresar(double cantidad) { //ingresamos cantidad, si la cantidad es negativa no se hace nada
		if(cantidad >= 0.0) {
			cantidad_cue += cantidad;
			System.out.println("Se ha ingresado " + cantidad + " a su cuenta.");
			System.out.println("Le quedan " + cantidad_cue + " euros en la cuenta.");
		} else {
			System.out.println("Cantidad no valida introducida.");
		}
	}
	
	//Sacar dinero de la cuenta
	public void retirar(double cantidad) { //retiramos cantidad a la cuenta, al resta lo que se retira a lo que se tiene la cuenta se pone en 0
		cantidad_cue -= cantidad;
		
		if(cantidad_cue < 0.0) {
			cantidad_cue = 0.0;
			System.out.println("Se ha retirado todo su dinero.");
		}

		System.out.println("Le quedan " + cantidad_cue + " euros en la cuenta.");
	}
}
