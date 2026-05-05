package ejCuentas;

public class Titular {
	private String titular;
	
	public Titular(String nombre) {
		titular = nombre;
	}
	
	//Devuelve el titular
	public String getTitular() {
		return titular;
	}
	
	//Asignamos o cambiamos el titular
	public void setTitular(String nombre) {
		titular = nombre;
	}
	
	//Dice quien es el titular
	public String toString() {
		return ("Titular: " + titular);
	}
}
