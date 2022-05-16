20 puntos

1. Explica por que este programa funciona con threads pero no podria funcionar con procesos.
Porque los un fork es una llamada sistema (syscall) o sea una solicitud al SO por lo que crea un nuevo proceso
y por lo tanto crearía un nuevo identificador utilizando más memoria en cambio un thread guarda el proceso en un mismo espacio
de memoria pues los procesos son de forma individual.

2. Que pasaria si alguno de los hilos encuentra un error y termina antes que los demas?
Terminarían todos los hilos.