#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 4) {
        fprintf(stderr, "Uso: %s TESTO INTERO REALE\n", argv[0]);
        return 2;
    }

    char *testo = argv[1];
    int intero=atoi(argv[2]);
    double reale=atof(argv[3]);

    (void)testo;

    printf("%s, %d, %.6f\n", testo, intero, reale);
    
    return 0;
}
