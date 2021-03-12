#include <stdio.h>


void sort(int *array, int elemente){
    int i,j,temp;
    
    while(elemente){
       
        int eltemp = elemente--;
        for (i = 1; i <= elemente; i++) {
            
            if(array[i-1] > array[i]){
                temp = array[i];
                array[i]=array[i-1];
                array[i-1]=temp;
            }
        }
        for(j = 0; j < eltemp; j++){
            printf("%d ", array[j]);
        }
        printf("\n");
    }
    
}

int main(void)
{
   int test_array[]= {8,9,3,7,1};
   int N = sizeof(test_array)/sizeof(int);
   sort(test_array, N);
   return 0;
}
