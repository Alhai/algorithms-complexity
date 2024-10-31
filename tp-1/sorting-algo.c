#include <stdio.h>

void displayArray(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d", array[i]);
    }
    printf("%d\n");
}

void bubbleSort(int array[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j - size - 1;j++){
            if(array[i] > array[j + 1]){
                int tempValue = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tempValue;
            }
        }
    }
}
void main(){
    int array[] = {66, 33, 11, 22, 44};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Tableau original :\n");
    afficherTableau(array, size);

    int array1[] = {66, 33, 11, 22, 44};
    triABulles(array1, size);
    printf("\nTableau trié avec tri à bulles :\n");
    afficherTableau(array1, size);

return 0;
}