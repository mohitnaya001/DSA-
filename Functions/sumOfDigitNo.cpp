#include <iostream>

using namespace std;

int digitSum(int Number){

    int SumOfDigit = 0;
    while (Number > 0){
        int lastDigit = Number % 10;
        Number = Number/10;
        SumOfDigit += lastDigit;


    }return SumOfDigit;
}

int main(){
    cout <<digitSum(146)<<endl;
    cout <<digitSum(2001)<<endl;
    return 0;
}