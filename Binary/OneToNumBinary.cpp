// One to any number of binary number 

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
    int num;
    cout<<"Enter the Number :";
    cin >>num;
    for(int i = 1; i <= num; i++ ){
        cout <<Decimal(i)<<endl;
    }
    return 0;
}