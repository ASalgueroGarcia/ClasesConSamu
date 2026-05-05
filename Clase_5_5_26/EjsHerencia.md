# Ejercicios Repaso Herencia

---

## Ejercicio 1 - Computadores

### ¿Qué tienes que hacer?

Crea una clase genérica llamada `Computadora` que almecene características básicas de un ordenador y métodos que permitan acceder a dichas características. De ahí, crea otra clase `Tablet` que herede de `Computadora` y modifica sus caracteristicas para que esté mas acorde a este tipo de computadora. Añade un método a `Tablet` que imprima el peso en gramos y kilogramos (no lo calcules, llama al método de la clase padre que devuelve peso en kg).

### Requisitos
- Atributos de `Computadora`:
    - Sistema Operativo (enum)
        - Windows
        - Linux
        - IOS
        - Android
    - Peso (float)
- Atributos de `Tablet`:
    - Los mismos que en `Computadora`, pero el peso en g en vez de kg

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
super.getPesoKg();
```

### Diagrama de Herencia
```
Computadora
  ├── sistemaOperativo : SistemaOperativo (enum)
  ├── peso : float  ← en KILOGRAMOS
  └── getPesoKg() : float

Tablet (Hereda de Computadora)
  ├── peso : float  ← en GRAMOS (sobreescribe el atributo)
  └── mostrarPeso() → imprime gramos y llama a super.getPesoKg() para los kg
```

### Ejemplo de Salida Esperado
```
Peso: 650.0 gramos
Peso: 0.65 kg
```