#include<iostream>

double gettotal(double shop[],int size){
    double total = 0;
    for(int i = 0; i < size ;i++){
        total += shop[i];

    }
  return total;
}

int main(){
    double shop[] = {49.99,85,100,45.90,69};
    int size  = sizeof(shop)/sizeof(shop[0]);

    double total = gettotal(shop, size);
    std::cout << "$" << total ;

    return 0;
}