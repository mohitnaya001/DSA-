#include <iostream>
using namespace std;

int sum(int a, int b ){
    int c = a+b;
    return c;
}

int minoftwo(int a, int b){
    if (a<b){
        return a;
    }else{
        return b;
    }
    
}
int main(){
    cout <<" min = "<< minoftwo(100,30);
    return 0;
}