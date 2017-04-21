//programa en c para la lectura y escritura de archivos
//usando fgets

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv){

if(argc==1){
printf("Lo lamento, debe ingresar más argumentos.");
exit(1);
}

else{
FILE *archivo;
char cadena[100];

archivo=fopen(argv[1],"r");

if(archivo == NULL){
printf("Error, ha ingresado un archivo en blanco!");
exit(1);
}
else{
printf("El contenido del archivo ingresado es el siguiente: \n");
//while((fgetc(archivo))!= EOF){
while(feof(archivo) == 0){
fgets(cadena,75,archivo);
printf("%s",cadena);
}
}

fclose(archivo);
}
return 0;
}
