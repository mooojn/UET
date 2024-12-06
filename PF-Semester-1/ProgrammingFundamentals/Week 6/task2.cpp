#include<iostream>

using namespace std;

bool parityAnalysis(int);

main(){
    int number;

    cout << "Enter a 3-digit number: ";
    cin >> number;
    
    int result;
    result = parityAnalysis(number);
    cout << result;

}

bool parityAnalysis(int num){
   int individulSum = 0;
   int number = num;
   
   individulSum += num % 10;
   num = num / 10;
   
   individulSum += num % 10;
   num = num / 10;
   
   individulSum += num % 10;

    if ((individulSum % 2 == 0 && number % 2 == 0) || (individulSum % 2 != 0 && number % 2 != 0)){
        return true;
    }
    return false;
}