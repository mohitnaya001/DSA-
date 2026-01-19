// calculate NcR binominial coeficent 
#include <iostream>
using namespace std;

int factorialN(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++ ){
            fact *= i;
    }return fact;
}



int NcR(int n, int r){
    int fact_N = factorialN(n);
    int fact_R = factorialN(r);
    int fact_NmR = factorialN(n-r);
    return fact_N / (fact_R * fact_NmR);
}

int main(){
    int n=8;
    int r=2;
    cout <<NcR(n,r)<<endl;
     cout<<factorialN(10) <<endl;

    return 0;
}