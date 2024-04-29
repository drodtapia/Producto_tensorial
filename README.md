# Producto Tensorial en C++

## Descripción

Este programa en C++ realiza el producto tensorial entre un vector “columna” y un vector “fila” con $n$ elementos, dando como resultado una matriz definida por,

$$
{\begin{pmatrix}
x_{1}\\ 
x_{2}\\ 
x_{3}\\ 
\vdots \\ 
x_{n}
\end{pmatrix}
\otimes
\begin{pmatrix}
y_{1} &y_{2}  &y_{3}  &\cdots  &y_{n} 
\end{pmatrix}=\begin{pmatrix}
x_{1}y_{1} &x_{1}y_{2}  &\cdots  &x_{1}y_{n} \\ 
x_{2}y_{1}&x_{2}y_{2}  &\cdots  &x_{2}y_{n} \\ 
 \vdots &  \vdots & \ddots  &\vdots  \\ 
 x_{n}y_{1}&x_{n}y_{2}  &\cdots  &x_{n}y_{n}
\end{pmatrix}
}$$

## Instrucciones de Uso
Al iniciar el programa se mostrará en pantalla algunas notas importantes para que el usuario ocupe de
manera correcta el código, luego se pide ingresar la cantidad de elementos que tendrán los vectores **X** e **Y**
mediante **cin**, quedando de la siguiente forma
$$X=x_1,x_2,\cdots,x_n$$
$$Y=y_1,y_2,\cdots,y_n$$
donde $n$ es la cantidad de elementos.
Posteriormente se imprimen en pantalla el vector columna **X** y el vector fila **Y** y son ingresados a la función
**productotensorial(X,Y)**, aquí se define la multiplicación componente a componente, dando como resultado
el producto tensorial entre estos.
Cada multiplicación anterior retorna a un vector de vectores definido como **Z**. Finalmente se imprime en
pantalla la matriz resultante del producto tensorial.
### Compilación:
- Asegúrate de tener un compilador de C++ instalado en tu sistema.
- Abre una terminal en el directorio donde se encuentra el archivo fuente `producto_tensorial.cpp`.
- Compila el programa utilizando el siguiente comando:
```bash
  g++ producto_tensorial.cpp -o producto_tensorial

```
### Ejecución:
Una vez compilado, ejecuta el programa proporcionando y siga las instrucciones proporcionadas en pantalla
```bash
  ./producto_tensorial
```  
### Requisitos y Dependencias:
Compilador de C++ compatible.

### Ejemplos y Demostraciones:
Una vez compilado, ejecuta el programa proporcionando y siga las instrucciones proporcionadas en pantalla. 
A continuación se muestra un ejemplo del programa:
```bash
$.\producto_tensorial
Producto tensorial X ⊗ Y

Notas:
·Solo se aceptan nùmeros enteros
·Al ingresar los elementos puede hacerlo mediante espacios o simplemente aprentando la tecla 'enter' entre uno y otro
·Si ingresa una mayor cantidad de elementos que los que tendra su primer vector, estos pasaran al siguiente y los que sobren se omitiran
·Los caràcteres especiales y letras pueden ocasionar errores
·La matriz entregada puede correrse entre una fila y otra por la cantidad de cifras de sus componentes

Ingrese la cantidad de elementos que tendran sus vectores: 4

Ingrese los elementos de su primer vector: 1 2 3 4

Ingrese los elementos de su segundo vector: 5 6 7 8

Su primer vector columna X es: { 1  2  3  4  }
Su segundo vector fila Y es:   { 5  6  7  8  }

El producto tensorial X ⊗ Y entrega la siguiente matriz :

[  5  6  7  8  ]
[  10  12  14  16  ]
[  15  18  21  24  ]
[  20  24  28  32  ]
```
### Contribución y Colaboración

¡Tu contribución es bienvenida! Si deseas contribuir con mejoras, correcciones o nuevas características, aquí hay algunas formas de hacerlo:

1. **Informar Problemas:** Si encuentras errores o tienes ideas para nuevas características, por favor abre un problema en el [rastreador de problemas](https://github.com/drodtapia/Producto_tensorial/issues).
   
2. **Enviar Pull Requests:** Si has realizado mejoras en el código, puedes enviar un pull request. Asegúrate de que tu código esté bien probado y documentado.

3. **Comentar y Discutir:** Incluso si no puedes contribuir con código, puedes participar en las discusiones sobre problemas y características. Tus comentarios son valiosos para mejorar el proyecto.

4. **Compartir:** ¡Ayuda a difundir este proyecto compartiéndolo con tus amigos y colegas!

¡Gracias por tu interés en contribuir al proyecto!

### Licencia

Este proyecto está bajo la Licencia [Creative Commons Attribution-NonCommercial 4.0 International License](https://creativecommons.org/licenses/by-nc/4.0/).

Esto significa que puedes:

- Compartir: copiar y redistribuir el material en cualquier medio o formato.
- Adaptar: remezclar, transformar y construir sobre el material.

Bajo los siguientes términos:

- Atribución: debes dar crédito de manera adecuada, proporcionar un enlace a la licencia e indicar si se han realizado cambios. Puedes hacerlo de cualquier manera razonable, pero no de una manera que sugiera que el licenciante te respalda a ti o al uso que haces del material.
- No Comercial: no puedes utilizar el material con fines comerciales.

Leer el texto completo de la licencia [aquí](https://creativecommons.org/licenses/by-nc/4.0/legalcode).

### Créditos y Reconocimientos
Desarrollado por David Rodríguez.

### Contacto
Si tienes alguna pregunta o sugerencia, no dudes en contactar a drodtapia@gmail.com.
