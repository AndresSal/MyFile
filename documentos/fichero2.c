//programa lectura de ficheros en c
//usando fscanf

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){

if(argc == 1){
printf("Error. Necesita ingresar argumentos al programa.");
exit(1);}

else{
FILE *file;
char memoria[100];

file=fopen(argv[1],"r");
if(file==NULL){
printf("Error.  El archivo ingresado está vacío!");
exit(1);
}
else{
fscanf(file,"%s",memoria);
printf("%s",memoria);
}
fclose(file);
}
return 0;

}

