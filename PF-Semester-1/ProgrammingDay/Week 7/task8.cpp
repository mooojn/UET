#include<iostream>
#include<iomanip>

using namespace std;

main()
{
    int cargoCount;

    cout <<"Enter the count of cargo for transportation: ";
    cin >> cargoCount;

    float tonnage;

    float miniBus=0;
    float truck=0;
    float train=0;

    for (int i=1;i<=cargoCount;i++)
    {
        cout <<"Enter the tonnage of cargo " << i << ": ";
        cin >> tonnage;
    
        if(tonnage <= 3)
            miniBus += tonnage;

        if(tonnage > 3 && tonnage <= 11)
            truck += tonnage;

        if(tonnage > 11)
            train += tonnage;
    }
    
   int finalPrice = miniBus + truck + train;

   float  miniBusPercentage = (miniBus / finalPrice) * 100;
   float truckPercentage = (truck / finalPrice) * 100;
   float trainPercentage = (train / finalPrice) * 100;

   float averagePrice = (miniBus *200 + truck * 175 + train * 120) / finalPrice;

   cout << fixed << setprecision(2) << averagePrice <<endl;
   cout << fixed << setprecision(2) << miniBusPercentage <<"%" <<endl;
   cout << fixed << setprecision(2) << truckPercentage <<"%" <<endl;
   cout << fixed << setprecision(2) << trainPercentage <<"%";
}
