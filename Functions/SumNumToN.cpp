// calculate the sum of N number

#include <iostream>
using namespace std;

int sumN(int n){
    int sum = 0;
    for (int i=1; i<=n; i++ ){
        sum += i;
    }
    return sum;
}

int main(){
    cout<<"Your Number sum = " <<sumN(200) <<endl;
    return 0;
}