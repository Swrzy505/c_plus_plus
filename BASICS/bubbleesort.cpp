#include<iostream>
 void sortarray(int arr[],int size){
    int temp;
    for(int i = 0; i < size-1; i++){
        for(int j = 0;j < size-i-1; j++){
            
           if (arr[j] > arr[j + 1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j + 1] = temp;
            }
        }
 
    }
}

int main(){
    int arr[] = {4,8,9,1,5,2,6,3,7,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    sortarray(arr,size);
    for(int element : arr ){
        std::cout << element << " ";
    }

    return 0;
}

// i is the number of times looping through the array 
// j is comparing through the array repteadly form starting keep getting less because we have already arrange the larger number at the last of array so no need to compare them every new i it compares from starting