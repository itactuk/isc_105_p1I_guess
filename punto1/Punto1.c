#include<stdio.h>
#include<stdlib.h>


int main()
{
    char cadena[]={'t','o','d','a','y','\0'};

    printf("La palabra orginal es: %s \n",cadena);

    invertir(cadena);
}


void invertir(char palabra[])
{
    int i, j=0,size;
    size = sizeof(palabra);
    char letra, nueva_palabra[]={};

    nueva_palabra[size]='\0';

    for( i = size; i >= 0 ; i-- )
    {
        letra = palabra[i];
        nueva_palabra[j] = letra;
        j++;
    }

    printf("La palabra nueva es: %s ",nueva_palabra);
}
