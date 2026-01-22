#include<iostream>
int getnum(int array[],int size,int num){
    for(int i = 0;i < size; i++){
        if(array[i] == num){
            return i;
        }
    }
    return -1;
}
int main(){
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(array)/sizeof(array[0]);
    int num;
    int index;

    std::cout << "Enter the num : " ;
    std::cin >> num;

    index = getnum(array,size,num);

    if(index != -1){
        std::cout << num << " is at index " << index << '\n';
    }
    else{
        std::cout << num << " not in the array " <<'\n';
    }

    

    return 0;
}