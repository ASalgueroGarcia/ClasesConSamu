## Clase `Libro`

### ¿Qué tienes que hacer?

Crear una clase llamada `Libro` que almacene información básica sobre un libro y pueda mostrarla por consola.

### Requisitos

- La clase debe tener **tres atributos**:
  - `titulo` (texto)
  - `autor` (texto)
  - `anioPublicacion` (número entero)

- Debe tener **un único constructor** que reciba los tres datos anteriores.

- Debe tener **un método** (por ejemplo `mostrarInfo()`) que imprima por consola el título, el autor y el año de publicación.

- Tanto la clase `Libro` como la clase de prueba (donde harás el `main`) deben estar en el **paquete `packlibros`**.

### Pista

Un paquete en Java se declara así en la primera línea del archivo:
```java
package packlibros;
```

### Ejemplo de uso esperado

```
Título: El Quijote
Autor: Miguel de Cervantes
Año de publicación: 1605
```

---

## Clases `Punto` y `Circulo`

### ¿Qué tienes que hacer?

Crear dos clases relacionadas entre sí: `Punto` y `Circulo`.

### Clase `Punto`

- Debe tener **dos atributos enteros**: `x` e `y` (las coordenadas del punto en un plano).

### Clase `Circulo`

- Un círculo se define por **su centro** (que es un objeto de tipo `Punto`) y **su radio**.
- Por tanto, los atributos de `Circulo` serán:
  - `centro` (de tipo `Punto`)
  - `radio` (número doble)

### Pista

Aquí practicas el concepto de **composición**: una clase puede contener objetos de otra clase como atributos. `Circulo` *usa* un `Punto` internamente.

```java
Punto centro = new Punto(3, 4);
Circulo c = new Circulo(centro, 5);
```

---

## Volumen de una Esfera

### ¿Qué tienes que hacer?

Escribir una **aplicación completa en Java** que:

1. Pida al usuario que introduzca el **radio** de una esfera (de tipo `double`).
2. Llame a un método llamado `volumenEsfera()` para calcular el volumen.
3. Muestre el resultado por consola.

### Fórmula del volumen

Usa exactamente esta línea para el cálculo:

```java
double volumen = (4.0 / 3.0) * Math.PI * Math.pow(radio, 3);
```

### Pistas

- Para leer un número `double` del teclado puedes usar `Scanner`:
  ```java
  Scanner sc = new Scanner(System.in);
  double radio = sc.nextDouble();
  ```
- `Math.PI` es el número π que ya viene incluido en Java.
- `Math.pow(radio, 3)` eleva el radio a la potencia 3 (radio³).

### Ejemplo de ejecución esperada

```
Introduce el radio de la esfera: 5.0
El volumen de la esfera es: 523.5987755982989
```
