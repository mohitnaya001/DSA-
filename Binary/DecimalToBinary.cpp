// Decimal To Binary Conversion 

#include <iostream>
using namespace std;

int Decimal(int DecNum){
    int ans = 0;
    int power = 1;
    while(DecNum > 0){
        int rem = DecNum % 2;
        DecNum /= 2;
        ans += (power * rem);
        power *= 10; 
    }return ans;
}

int main(){
    int DecNum = 50;
    cout <<Decimal(DecNum)<< endl;
    return 0;
}