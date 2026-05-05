# Ejercicios Repaso Herencia

---

## Ejercicio 1 - Computadores

### ¿Qué tienes que hacer?

Crea una clase genérica llamada `Computadora` que almecene características básicas de un ordenador y métodos que permitan acceder a dichas características. De ahí, crea otra clase `Tablet` que herede de `Computadora` y modifica sus caracteristicas para que esté mas acorde a este tipo de computadora. Añade un método a `Tablet` que imprima el peso en gramos y kilogramos (no lo calcules, llama al método de la clase padre que devuelve peso en kg).

### Requisitos
- Atributos de `Computadora`:
    - Computadora(tipoOs, peso) <- recibe el peso EN KILOGRAMOS
    - Sistema Operativo (enum)
        - Windows
        - Linux
        - IOS
        - Android
    - Peso (float)
- Atributos de `Tablet`:
    - Los mismos que en `Computadora` (el constructor NO CAMBIA)

### Pistas
Suponiendo que nosotros somos la clase C, derivada de B que está derivada de A, para poder acceder a cada X se hace asi:

```java
x               // Accede a nuestra x
this.x          // Accede a nuestra x
super.x         // Accede a x de B (solo puede subir un nivel)
((B)this).x     // Accede a x de B
((A)this).x     // Accede a x de A
```

Para acceder a la función padre de `Computadora` se hace con:

```java
super.printPeso();
```

### Diagrama de Herencia
```
Computadora
  ├── sistemaOperativo : SistemaOperativo (enum)
  ├── peso : float  ← en KILOGRAMOS
  └── printPeso() : float

Tablet (Hereda de Computadora)
  ├── peso : float  ← en GRAMOS (mil veces más que el del padre)
  └── printPeso() → imprime gramos y llama a super.printPeso() para los kg
```

### Enum de Tipos de OS
Crea una nueva clase de tipo enum llamada `tipoOS` y pegale esto:
```java
public enum tipoOS {
	Windows,
	Linux,
	iOS,
	Android
}
```


### Ejemplo de Salida Esperado
```
Peso: 650.0 gramos
Peso: 0.65 kg
```