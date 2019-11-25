#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	void menu(){
		printf("\nELija una opcion\n");
		printf("1-Palabras reservadas\n");
		printf("2-Sentencias\n");
		printf("3-salir\n");
	
	}
	
	void agregar(char *&a ,char c){
		char *a,*b;
		int i=0;
	
			a[strlen(a)]=c;
			
			b=(char *)calloc(strlen(a),sizeof(char));
			
			for(i=0;i<strlen(a);i++){
				b[i]=a[i];
				
			}
			
			free(a);	
			a=(char *)calloc(strlen(b)+1,sizeof(char));
			
			for(i=0;i<strlen(b);i++)a[i]=b[i];
			
			
				for(i=0;i<strlen(a)-1;i++)printf("%c",a[i]);
					
		
	}
	
	void leerCxC(){
			int finTexto=0;
			int iCaracter;
			
		char *a,*b;
		
		a=(char *)calloc(1,sizeof(char));
			
			FILE* archivo=NULL;
			char* nArchivo="programa.txt";
			archivo=fopen(nArchivo,"r");
	
		
			while(!feof(archivo)){
					iCaracter=fgetc(archivo);
				agregar(a,iCaracter);
			}
			
				
		
	
		fclose(archivo);
	}
	
	void leerArchivo(){
		int finTexto=0;
		char *a,*b;
		
		a=(char *)calloc(1,sizeof(char));
		
	
	
	
		FILE* archivo=NULL;
		char* nArchivo="programa.txt";
		archivo=fopen(nArchivo,"r");
		
		char lectura[80];
		finTexto=fscanf(archivo," %[^\n]",&lectura);
		int indice=0;
	
		
		a=(char *)calloc(1,sizeof(char));
		while(finTexto!=EOF){
			
			
			printf("\n%s\n",lectura);
			finTexto=fscanf(archivo," %[^\n]",&lectura);
		}
		
		fclose(archivo);
	}
	
main(){
	int salir=0;
	int opcion;
	char pReservadas[][46]={"INICIO","inicio","definir","entero"};
	int longitudDelArreglo = sizeof(pReservadas) / sizeof(pReservadas[0]);

	/**/
	while(salir==0){
		opcion=-1;
		menu();
		fflush(stdin);
		scanf("%d",&opcion);
		switch(opcion){
			case 3:
				salir=1;
				break;
			case 1:
				leerCxC();
				
				
				
				break;
		}
	}

	
	
	return 0;
	
}
