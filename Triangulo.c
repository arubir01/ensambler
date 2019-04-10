#include <stdio.h>
#include <stdlib.h>

typedef struct punto_{
	float x;
	float y;
	float z;
}punto;
typedef struct Triangulo_{
	punto p1;
	punto p2;
	punto p3;
}Triangulo;
int triangulos[3];
	float calcularPerimetro;
	float calcularArea;
	FILE leerDatos;
	int numLineasArchivos;
	int mayorArea;
	int mayorPerimetro;
int main(int argc, char *argv[]) 
{
	int i,j;
	Triangulo * pTriangulo;
	pTriangulo = (Triangulo *) malloc(sizeof(Triangulo)*3);

	for(i = 0; i<3;i++)
	{
		printf("\nValor de x: ", (j + 1));
		fscanf(f,"%f %f %f;",&(pTriangulo + i)->punto.p1.x, &(pTriangulo + i)->punto.p1.y,&(pTriangulo + i)->punto.p1.z);

		printf("\nValor de y: ", (j + 1));
		scanf("%f",&(pTriangulo + i)->punto.p2);

		printf("\nValor de z: ", (j + 1));
		scanf("%f",&(pTriangulo + i)->punto.p3);
		
		printf("\nTriangulo %d:",i);
		do{
		printf("\n %f;",&(pTriangulo + i)->puntos[i]);
		}while(i==2);
	}
	free(pTriangulo);
	return 0;
	
	
}
