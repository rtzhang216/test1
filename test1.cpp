#include <iostream>

using namespace std;

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a = 3;
    int b = 2;
    cout<<"a = "<<a<<" b = "<<b<<endl;

    swap(&a, &b);
    cout<<"a = "<<a<<" b = "<<b<<endl;
   
    return 0;
}