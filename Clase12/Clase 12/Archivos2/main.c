#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

int legajo;
char nombre[50];
char apellido[50];
}eEmpleado;

eEmpleado* new_Empleado(){

eEmpleado* p;

p = (void*) malloc(sizeof(eEmpleado));

return p;

}

int main()
{
eEmpleado* lista[50];
eEmpleado* unEmpleado;
FILE* pArchivo;

char legajo[10];
char nombre [20];
char apellido [10];
int i=0;

pArchivo = fopen("datos.csv", "r");


while(!feof(pArchivo)){
fscanf(pArchivo,"%[^,],%[^,],%[^\n]\n" ,legajo, nombre, apellido);

unEmpleado = new_Empleado();

unEmpleado -> legajo = atoi(legajo);
strcpy(unEmpleado -> nombre,nombre);
strcpy(unEmpleado -> apellido,apellido);



lista[i] = unEmpleado;
i++;
}

fclose(pArchivo);

for(i=0; i<50; i++){

    printf("%d--%s--%s\n", lista[i]->legajo, lista[i]->nombre, lista[i]->apellido);

}


    return 0;
}
