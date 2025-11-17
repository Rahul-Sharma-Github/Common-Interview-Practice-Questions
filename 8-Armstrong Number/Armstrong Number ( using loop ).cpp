#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // variables
    int n=1;
    int original=n;
    int digits=0;
    int sum=0;
    int temp=n;
    
    
    // calculating the digits
    while(temp){
        digits ++;
        temp = temp/10;
    }
    
    temp=n;
    
    // Logic to calculate sum of digits with power
    while(temp){
        int d = temp % 10;
        sum = sum + (int)pow(d,digits);
        temp = temp / 10;
    }
    
    if(sum == original){
        cout<<original<<" is an Armstrong Number";
    }else{
        cout<<original<<" is not an Armstrong Number";
    }

    return 0;
}

