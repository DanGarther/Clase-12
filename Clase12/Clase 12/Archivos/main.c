#include <stdio.h>
#include <stdlib.h>

int main()
{



    FILE* pArchivo;



    /*

    ESCRIBIR UN ARCHIVO

    char miNombre[] = "Texto de prueba.";

    pArchivo = fopen("miArchivo.txt", "w");
    if(pArchivo!=NULL){

        fprintf(pArchivo, "Mi nombre es: %s", miNombre);

        fclose(pArchivo);

        }


  LEER UN ARCHIVO


    char miNombre[50];

    pArchivo = fopen("miArchivo.txt", "r");

    if(pArchivo!=NULL){


    while(!feof(pArchivo)){
        fgets(miNombre, 49, pArchivo);

        printf("%s", miNombre);
}

        fclose(pArchivo);

        }



        ESCRIBIR BINARIO

  char miNombre[] = "Texto de prueba.";

    pArchivo = fopen("miArchivo.bin", "wb");
    int k = 9;

    if(pArchivo!=NULL){

        fwrite(&k, sizeof(int), 1, pArchivo);
        fclose(pArchivo);

        }
              LEER BINARIO

pArchivo = fopen("miArchivo.bin", "rb");
   int x;

    if(pArchivo!=NULL){

        fread(&x, sizeof(int), 1, pArchivo);

        printf("%d", x);

        fclose(pArchivo);

        }

*/

typedef struct
{

    int legajo;
    char nombre[50];
    float peso;
} eDato;



  /*

  DATOS EN BINARIO

  pArchivo = fopen("miArchivo.bin", "wb");
    int k = 9;
    eDato misDatos = {10, "Juan", 70};

    if(pArchivo!=NULL){

        fwrite(&misDatos, sizeof(eDato), 1, pArchivo);
        fclose(pArchivo);

        }
*/

    pArchivo = fopen("miArchivo.bin", "wb");
    eDato misDatos = {10, "Juan", 70};

    if(pArchivo!=NULL){

        fread(&misDatos, sizeof(eDato), 1, pArchivo);
         printf("%d\n%s\n%f", misDatos.legajo, misDatos.nombre, misDatos.peso);
        fclose(pArchivo);

        }
    return 0;
}
