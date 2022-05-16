#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *input;
    char arr[51][80];
	int i;
    srandom(getpid());

	input = fopen(argv[1], "r");
	if (input == NULL) {
		perror("file");
		printf("Error, debes proporcionar un archivo\n");
		exit(-1);
	}

    //Por cada linea del archivo (creo que también puede quedar un while)
    for (i = 0; i<51; i ++){

        fgets(arr[i],80, input);
    }

    //Imprimimos la línea
    printf(arr[random()%51]);

}