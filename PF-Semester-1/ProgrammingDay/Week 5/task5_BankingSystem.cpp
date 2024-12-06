#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

//headers
void header();
int loginAsManager();
int managerMenu();
void addNewUser(string);
void viewRecords();
void deleteUser(int);
void addUser();

//// Global Variables
 
// for balance
float balanceUser1 = 100;
float balanceUser2 = 200;
float balanceUser3 = 400;
float balanceUser4 = 800;
float balanceUser5 = 0;

// for name
string userName1 = "moon";
string userName2 = "ateeb";
string userName3 = "ali";
string userName4 = "sheri";
string userName5 = ""; 

// for IBAN
string IBAN_1 = "PK03 BMT 000 01";
string IBAN_2 = "PK03 BMT 000 02";
string IBAN_3 = "PK03 BMT 000 03";
string IBAN_4 = "PK03 BMT 000 04";
string IBAN_5 = "PK03 BMT 000 0";

// for tracking
int newUser = 0;
int delUser = 0;
    
main()
{
    system("cls");

    header();

    int choice;
    cout << "\t\t\t\t\t\t\t\tLogin As Manager(press 1): ";
    cin >> choice;

    if (choice == 1)
    { 
        system("cls");
        header();

        string password;
        cout << "\t\t\t\t\t\t\t\thint its 'admin'\n\n" << endl;
        cout << "\t\t\t\t\t\t\t\tEnter Password: ";
        cin >> password;
        
        if (password == "admin")
        {
            system("cls");
            header();
            loginAsManager();
        }
        else
            cout << "\t\t\t\t\t\t\t\tInvalid Password...";
    }
}

int loginAsManager()
{
    while(true)
    {
        system("cls");
        header();

        managerMenu();
        
        int choice;
        cin >> choice;

        if (choice == 1)
        {
            system("cls");
            header();
            
            addUser();
            
        }
        
        if (choice == 2)
        {   
            system("cls");
            header();

            viewRecords();

        }   

        if (choice == 3)
        {  
            system("cls");
            header();
 
            delUser = 1;
            viewRecords();

            int choice;
            cout << "\n\t\t\t\t\t\t\t\tSelect user to Delete...";
            cin >> choice;     
            deleteUser(choice);
        }

        if (choice == 4)
            return 0;
    }
}

void addUser()
{
    cout << "\t\t\t\t\t\t\t\tData About the New User...\n" << endl;
    
    cout << "\t\t\t\t\t\t\t\tEnter Name: ";
    cin >> userName5;
    
    string id;
    cout << "\t\t\t\t\t\t\t\tEnter User ID: ";
    cin >> id;
    
    cout << "\t\t\t\t\t\t\t\tInitial Cash Deposit: ";
    cin >> balanceUser5;
    IBAN_5 += id;
    
    newUser = 1;
    
    cout << "\n\t\t\t\t\t\t\t\tProcessing Please wait...." << endl;
    Sleep(2000);
    
    cout << "\t\t\t\t\t\t\t\tSuccessfully created a new User..." << endl;
    cout << "\t\t\t\t\t\t\t\tPress any key to contine..";
    
    getch();
}

void deleteUser(int choice)
{
    if (choice == 1)
    {        
        userName1 = "";
        balanceUser1 = 0;
        IBAN_1 = "";
    }
    
    if (choice == 2)
    {    
        userName2 = "";
        balanceUser2 = 0;
        IBAN_2 = "";
    }
    
    if (choice == 3)
    {    
        userName3 = "";
        balanceUser3 = 0;
        IBAN_3 = "";
    }
    
    if (choice == 4)
    {    
        userName4 = "";
        balanceUser4 = 0;
        IBAN_4 = "";
    }
    
    if (choice == 5)
    {    
        userName5 = "";
        balanceUser5 = 0;
        IBAN_5 = "";
    }
}

int managerMenu()
{    
    cout << "\t\t\t\t\t\t\t\tPlease Select an Option...\n" << endl;
 
    cout << "\t\t\t\t\t\t\t\t1.Add a New User" << endl;
    cout << "\t\t\t\t\t\t\t\t2.View Record of Users" << endl;
    cout << "\t\t\t\t\t\t\t\t3.Delete a User" << endl;
    cout << "\t\t\t\t\t\t\t\t4.End\n" << endl;

    cout << "\t\t\t\t\t\t\t\tYour Option: ";
}

void viewRecords()
{
    cout << "\t\t\t\t\t\t\t\t Sr No\t NAME \t    IBAN No. \t Balance" << endl;
    cout << "\t\t\t\t\t\t\t\t########################################" << endl;

    cout <<"\n\t\t\t\t\t\t\t\t   1 \t "<< userName1 << " \t" << IBAN_1 << "\t  " << "$" << balanceUser1 << endl <<endl;
    cout <<"\t\t\t\t\t\t\t\t   2 \t "<< userName2 << " \t" << IBAN_2 << "\t  " << "$" << balanceUser2 << endl <<endl;
    cout <<"\t\t\t\t\t\t\t\t   3 \t "<< userName3 << " \t" << IBAN_3 << "\t  " << "$" << balanceUser3 << endl <<endl;
    cout <<"\t\t\t\t\t\t\t\t   4 \t "<< userName4 << " \t" << IBAN_4 << "\t  " << "$" << balanceUser4 << endl <<endl;
    
    if (newUser == 1)
        cout <<"\t\t\t\t\t\t\t\t   5 \t "<< userName5 << " \t" << IBAN_5 << "\t  " << "$" << balanceUser5 << endl;
    
    else
    {
        cout << "\n\t\t\t\t\t\t\t\tPress any key to continue...";
        getch();
    }
    delUser = 0;
}

void header()
{
    cout << "                                                               ######       ####     ###    ##   ##   ##                                     " << endl;
    cout << "                                                               ##    ##   ##    ##   ## #   ##   ##  ##                                      " << endl;
    cout << "                                                               ######     ## ## ##   ##  #  ##   ####                                        " << endl;
    cout << "                                                               ##    ##   ##    ##   ##   # ##   ##  ##                                      " << endl;
    cout << "                                                               ######     ##    ##   ##    ###   ##   ##                                     " << endl;
    
    cout << endl;
                
    cout << "                                ###   ###     ####     ###    ##     ####      ######     #####   ###   ###    #####   ###    ##   ########  " << endl; 
    cout << "                                ## # # ##   ##    ##   ## #   ##   ##    ##   ##         ##       ## # # ##   ##       ## #   ##      ##     " << endl; 
    cout << "                                ##  #  ##   ## ## ##   ##  #  ##   ## ## ##   ##  ###    ####     ##  #  ##   ####     ##  #  ##      ##     " << endl; 
    cout << "                                ##     ##   ##    ##   ##   # ##   ##    ##   ##    ##   ##       ##     ##   ##       ##   # ##      ##     " << endl; 
    cout << "                                ##     ##   ##    ##   ##    ###   ##    ##    ######     #####   ##     ##    #####   ##    ###      ##     " << endl;

    cout << endl; 
    
    cout << "                                                         #####   ##    ##    #####   ########    #####   ###   ###                           " << endl; 
    cout << "                                                        #         ##  ##    #           ##      ##       ## # # ##                           " << endl; 
    cout << "                                                         ####       ##       ####       ##      ####     ##  #  ##                           " << endl; 
    cout << "                                                             #      ##           #      ##      ##       ##     ##                           " << endl; 
    cout << "                                                        #####       ##      #####       ##       #####   ##     ##                           " << endl;
    cout                                                                                                                                                    << endl;
    cout << "                               ############################################################################################################# " << endl; 
    cout                                                                                                                                                    << endl;
    cout                                                                                                                                                    << endl;
}
