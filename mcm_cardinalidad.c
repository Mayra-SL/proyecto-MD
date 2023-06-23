#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int menu;
	int numero1, numero2, producto;
    int residuo, mcd, mcm;
    int cardinal1, cardinal2, combinaciones;
    
    printf("Elige una opcion: \n");
    printf("(1)MCM de 2 numeros \n(2)Cardinalidad \n");
    scanf("%i",&menu);

	
	if (menu>=1 && menu<=2){
	

	
		switch(menu) {
			
			case 1:
				
				printf("\nIngresa el primer termino: ");
			    scanf("%i", &numero1);
			
			    printf("\nIngresa el segundo termino: ");
			    scanf("%i", &numero2);
			
			    producto = numero1 * numero2;
			
			    do
			    {
			        residuo = numero1 % numero2;
			
			        if (residuo != 0)
			        {
			            numero1 = numero2;
			            numero2 = residuo;
			        }
			        else
			        {
			            mcd = numero2;
			        }
			
			    } while (residuo != 0);
			
			    mcm = producto / mcd;
			
			    printf("\nEl mcm es: %i\n", mcm);
			    
				
				
				break;
				
			case 2:
				
				printf("\nIngrese la cantidad de elementos del primer cartesiano |A|: (Ejemplo:|A|={1,12,4,56}=4 elementos) \n");
				scanf("%i",&cardinal1);
				
				printf("\nIngrese la cantidad de elementos del segundo Cartesiano |B|: (Ejemplo:|B|={1,12}=2 elementos) \n");
				scanf("%i",&cardinal2);
				
				combinaciones=(cardinal1*cardinal2);
				printf("\nLa cardinalidad total de las posibles combinaciones del producto cartesiano |A|•|B| es de: %i",combinaciones);
				
				break;
				
			default: 
			break;	
			
	}
	}
			
	return 0;
}
