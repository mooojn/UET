#include<iostream>

using namespace std;

float perimeter(string, float);

main(){
    string shape;
    float value;

    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> shape;

    cout << "Enter the value : ";
    cin >> value;
    
    float result;
    result = perimeter(shape, value);
    cout << "The perimeter is: " << result;

}

float perimeter(string shape, float value){
    float result = 0;
    
    if (shape == "s"){
        result = value * 4;
    }

    if (shape == "c"){
        result = value * 9;
    }
    
    if (shape == "t"){
        result = value * 3;
    }
    
    if (shape == "h"){
        result = value * 6;
    }

    return result;
}

