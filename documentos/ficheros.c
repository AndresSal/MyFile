//ejercicio en c para la lectura de un fichero
//usando fgetc

#include <stdio.h>
#include <stdlib.h>
int main(int  argc, char** argv){

FILE *archivo; 
FILE *salida;
int caracter;

archivo = fopen("fichero.txt","r");

if(archivo == NULL){
printf("error de ejecución, no existe el fichero!");
exit(1);
} 

else{
salida= fopen("resultados.txt","w");
char cadena[]="El contenido del fichero evaluado es el siguiente: \n";
fprintf(salida,cadena);
while((caracter=fgetc(archivo))!=EOF){
fputc(caracter,salida);
}
}
int aleatorio= rand()% (50-30) + 30; 
fprintf(salida,"\n Ahora se generará un número aleatorio.\n Procesando ---\n El resultado es: ");
fprintf(salida,aleatorio);

char mensaje[]="\n Eso es todo amigos.\n Muchas gracias!";
fwrite(mensaje,sizeof(char),sizeof(mensaje), salida);
fclose(salida);
fclose(archivo);
return 0;
}


