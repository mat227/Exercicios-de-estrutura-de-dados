#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort (int *arr, int n){
    
    if (n==1){
        return;
    }
    for (int i=0;i < n - 1;i++){
        if(*(arr +i) > *(arr+i+1)){
            int temp= *(arr +i);
            *(arr +i)= *(arr+i+1);
            *(arr+i+1) =temp;
        }
    }
    bubbleSort(arr,n-1);
}

void printandoArray (int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d-",*(arr+i));
    }
    printf("\n");
}

int main(){
    int n=0;
    srand(time(0));
    printf("Digite a quantidade de números do array:");
    
    scanf("%d",&n);
    int *arr= (int *) malloc (n *sizeof (int));
    printf("Array desordenado:");
    for(int i=0;i<n;i++){
        *(arr+i)= rand() %101;
        printf("%d-",*(arr+i));
    }
    printf("\n");
    bubbleSort(arr,n);
    printf("Array ordenado:");
    printandoArray(arr,n);
    return 0;
}