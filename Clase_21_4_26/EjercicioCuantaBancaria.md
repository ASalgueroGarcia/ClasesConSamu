# Enunciado: Gestión de Cuenta Bancaria

## Descripción

Desarrolla una aplicación en Java que simule la gestión básica de una **cuenta bancaria** a través de un menú interactivo por consola.

---

## Clases a implementar

### Clase `Titular`
- Atributo privado: nombre del titular (`String`).
- Constructor que reciba el nombre como parámetro.

### Clase `Cuenta`
- Atributos privados: el titular de la cuenta (`Titular`) y el saldo disponible (`double`).
- Constructor que reciba un `Titular` y un saldo inicial.
- Método `ingresar(double cantidad)`: añade la cantidad indicada al saldo.
- Método `retirar(double cantidad)`: resta la cantidad indicada al saldo.

### Clase `Main_cuenta`
Contiene el método `main` y gestiona la interacción con el usuario mediante un **menú en bucle** con las siguientes opciones:

| Opción | Acción |
|--------|--------|
| 1 | Ingresar dinero en la cuenta |
| 2 | Retirar dinero de la cuenta |
| 3 | Cerrar la aplicación |

---

## Comportamiento esperado

- Al iniciar, se crea automáticamente un titular llamado `"Antonio"` con un saldo inicial de **200.0 €**.
- El menú se repite hasta que el usuario elija la opción **3**.
- Si se introduce una opción no válida, se muestra un mensaje de error y el bucle no se acaba.

---

## Ejemplo de ejecución

```
Digame que quieres hacer: 
1: Ingresar dinero a la cuenta.
2: Retirar dinero de la cuenta. 
3: Cerrar.
> 1
Digame cuanto quieres ingresar: 
> 150
Se ha ingresado 150.0 a su cuenta.
Le quedan 350.0 euros en la cuenta.
Digame que quieres hacer: 
1: Ingresar dinero a la cuenta.
2: Retirar dinero de la cuenta. 
3: Cerrar.
> 2
Digame cuanto quieres retirar: 
> 30
Le quedan 320.0 euros en la cuenta.
Digame que quieres hacer: 
1: Ingresar dinero a la cuenta.
2: Retirar dinero de la cuenta. 
3: Cerrar.
> 3
Cerrando aplicacion...
```

---

## Notas
- Usa `Scanner` para leer los datos del usuario.