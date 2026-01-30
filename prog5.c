#include <stdio.h>

int main() 
{
    int i, j;
    int count = 11; 
    int rows = 5;   
  
    for (i = 1; i <= rows; i++) 
	{
        
       
        for (j = 1; j <= i; j++) {
            printf("%d ", count);
            count++;
        }
        
        printf("\n");
    }

    return 0;
}
