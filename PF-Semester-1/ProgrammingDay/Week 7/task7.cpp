#include<iostream>

using namespace std;

main()
{
    int days;
    
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;

    int patientCount;
    int treatedPatients = 0;
    int untreatedPatients = 0;
    int doc = 7;

    for (int i = 1; i <= days; i++)
    {
        if ((i % 3 == 0) && untreatedPatients > treatedPatients)
            doc += 1;
        
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patientCount;

        if (patientCount <= doc)
        {
            treatedPatients += patientCount;
            untreatedPatients += 0;
        }
    
        else if (patientCount > doc)
        {
            untreatedPatients += (patientCount - doc);
            treatedPatients += doc;
        }
    }    
    cout << "Treated Patients: " << treatedPatients << endl;
    cout << "Untreated Patients: " << untreatedPatients;
}
