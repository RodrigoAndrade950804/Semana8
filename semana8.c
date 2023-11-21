#include <stdio.h>
int main(int argc, char const * argv[]){
    int n , m; 
    printf("Ingrese filas: ");
    scanf("%d", &n);    
    printf("Ingrese columas: ");
    scanf("%d", &m);
    int Matriz[n][m];
    printf("Matriz:");
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