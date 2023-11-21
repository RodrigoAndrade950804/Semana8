//Crear una matriz cuyas dimensiones sean ingresadas por el usuario. La matriz puede tener cualquier dimensiòn.
//Inicializar toda la matriz en ceros.
//Impriuma la matriz con la diagonal princpal con valores en 1.
#include <stdio.h>
int main(int argc, char const * argv[]){
    //Inicializacion y lectura de variables
    int n , m; 
    printf("Ingrese filas: ");
    scanf("%d", &n);    
    printf("Ingrese columas: ");
    scanf("%d", &m);
    int Matriz[n][m];
    //Imprime titulo de la matriz
    printf("Matriz:");
    //Se agrega estructuras 
    for (int i = 0; i < n; i++)
    {     
        printf("\n");          
        for(int j = 0; j < m; j++){            
            if(i==j)
            {
            Matriz[i][j]=1;
            }else
            {
            Matriz[i][j]=0;
            }  
            printf("%d\t", Matriz[i][j]);                               
        }
    }       
    return 0;
}