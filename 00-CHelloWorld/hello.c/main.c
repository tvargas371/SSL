#include <stdio.h>
#include <stdlib.h>

int main()
{
    char palabra[] = "Hola Mundo";
    FILE* puntero;
    puntero = fopen("output.txt","w");

    fwrite(&palabra,sizeof(palabra),1,puntero);

    fclose(puntero);
    return 0;
}
