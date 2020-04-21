#include<stdio.h>
void display(int [],int);
void insertionSort(int[],int);
void perform_sorting(int[],int);
void swap(int*,int*);
int main(){

    //Worst Case
    int numbers[]={7,5,3,2,1};
    int size=sizeof(numbers)/sizeof(numbers[0]);

    //Best Case
    int numbers2[]={1,2,3,5,7};  
    int size2=sizeof(numbers2)/sizeof(numbers2[0]);

    //Average case
    int numbers3[]={2,1,5,3,7};  
    int size3=sizeof(numbers3)/sizeof(numbers3[0]);

    printf("\nPerforming Insertion Sort [Worst Case] \n");
    perform_sorting(numbers,size);


    printf("\nPerforming Insertion Sort [Average Case] \n");
    perform_sorting(numbers3,size3);

    printf("\nPerforming Insertion Sort [Best Case] \n");
    perform_sorting(numbers3,size3);

    return 0;
}

void perform_sorting(int array[],int size){
    printf("Before sorting \n");
    display(array,size);
    insertionSort(array,size);
}
void insertionSort(int array[],int size){

    int outer_for_loop_counter=0, inner_for_loop_counter=0, temp,j;
    for(int i=1;i<size;i++){
        
        outer_for_loop_counter++;
        temp=array[i];
        for(j=i-1;j>=0 && array[j]>temp;j--){
            
            inner_for_loop_counter++;
            array[j+1]=array[j];
        }
        array[j+1]=temp;
    }
    

    printf("After sorting \n");
    display(array,size);
    printf("\nComparison Information\n");
    printf("outer_for_loop_counter : %d \n", outer_for_loop_counter);
    printf("inner_for_loop_counter : %d \n", inner_for_loop_counter);
    printf("--------------------------------------------------------------------------------\n");
}

void display(int array[],int size){
    printf("\n");
    for(int i=0;i<size;i++){    
        printf("%d | ",array[i]); 
    }
    printf("\n\n");
}

void swap(int *a, int *b){
    int c=*a;
    *a=*b;
}

// gcc -o hello hello.c