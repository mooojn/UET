#include <iostream>

using namespace std;

string calculateHotelPrice(string month, int numberOfStays);

main(){
    string month;

    int numberOfStays;
    
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>month;

    cout<<"Enter the number of stays: ";
    cin>>numberOfStays;

    string result=calculateHotelPrice(month,numberOfStays);
    cout<<result;
}


string calculateHotelPrice(string month, int numberOfStays)
{
    float quantity;
    float apart;
    
    if(month=="May" || month=="October")
    {
        quantity=50; //given
        apart=65;    //given
        
        if(numberOfStays>7)
            quantity=quantity-quantity*0.05;
        
        if(numberOfStays>14)
        {
            quantity=quantity-quantity*0.3;
            apart=apart-(apart*0.1);
        }   
        quantity=quantity*numberOfStays;
        apart=apart*numberOfStays;
    }
    if(month=="June" || month=="September")
    {
        quantity=75.20;    //given
        apart=68.70;    //given
    if(numberOfStays>14)
    {
        quantity=quantity-(quantity*0.2);
        apart=apart-(apart*0.1);
    }
    quantity=quantity*numberOfStays;
    apart=apart*numberOfStays;
    }
    if(month=="July" || month=="August"){
        quantity=76;   //given 
        apart=77;   //given

        if(numberOfStays>14)
            apart=apart-(apart*0.1);

        quantity=quantity*numberOfStays;
        apart=apart*numberOfStays;
    }
    return "Apartment: " +to_string(apart)+"$.\nStudio: "+to_string(quantity)+"$.";
}
