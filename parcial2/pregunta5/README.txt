20 puntos

En el programa muchos, 3 procesos hacen un ciclo 3 veces, pero si lo ejecutas, se 
imprimen muchas mas lineas.

Por que?
esta llamando en el if a tres fork recordemos que cada fork abrirá un proceso nuevo 
con identificadores diferentes.

Corrige el programa. Para que solo salgan las 9 lineas.

