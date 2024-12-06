#include<iostream>

using namespace std;

main()
{
    string sorted = "[";
    cout << "Enter the weights of the 10 packages:"<< endl;

    // int weight[10] = {120 ,45 ,78 ,23 ,56 ,89 ,34 ,67 ,101 ,243};    
    
    int weight[10];
    for (int i = 0; i < 10; i++)
        cin >> weight[i];        /// getting input
    
    int min = 0;
    for (int i = 0; i < 10; i++) 
    {
        int minIndex = i;           /// assuming the current index has the minimum value
        /// finding the index of the min value in array
        for (int j = i + 1; j < 10; j++) 
        {
            if (weight[j] < weight[minIndex])
                minIndex = j;
        }
        int temp = weight[i];               ///  storing the index value to temporary var :]
        weight[i] = weight[minIndex];     //  now storing minvalue at that index
        weight[minIndex] = temp;          /// changing the value stored at minIndex with temp
        ///Values swaaped ;}

        sorted += to_string(weight[i]) + ", ";
    }
    sorted = sorted.substr(0, sorted.length() - 2);      //// removing last 2 elements from the string
    sorted += "]";
    cout << "Sorted array in ascending order: " << sorted;
}
