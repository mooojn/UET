#include <iostream>
#include <iomanip> 

using namespace std;

main()
{
    int inputCount;
    
    cout << "Enter numbers count: ";
    cin >> inputCount;

    int i = inputCount;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    int number;

    while(inputCount>0)
    {
        cout << "Enter a number: ";
        cin >> number;

        if (number <= 199) 
            p1 += 1;

        else if (number < 200 || number < 400)
            p2 += 1;

        else if (number < 400 || number < 600)
            p3 += 1;

        else if (number < 600 || number < 800)
            p4 += 1;
        
        else if (number >= 800)  
            p5 += 1;
            
        inputCount -= 1;        
    }
    
    cout << fixed << setprecision(2) << (p1 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (p2 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (p3 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (p4 / i) * 100 << "%" << endl;
    cout << fixed << setprecision(2) << (p5 / i) * 100 << "%" ;


// without round off
    // cout << (p1 / i) * 100 << "%" << endl;
    // cout << (p2 / i) * 100 << "%" << endl;
    // cout << (p3 / i) * 100 << "%" << endl;
    // cout << (p4 / i) * 100 << "%" << endl;
    // cout << (p5 / i) * 100 << "%";
}
