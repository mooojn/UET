#include<iostream>

using namespace std;

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);

main()
{
    int examHour,examMinute,studentHour,studentMinute;
    
    cout << "Enter Exam Starting Time (hour): ";
    cin >> examHour;
    
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> examMinute;
    
    cout << "Enter Student hour of arrival: ";
    cin >> studentHour;
    
    cout << "Enter Student minutes of arrival: ";
    cin >> studentMinute;
    
    string result=checkStudentStatus(examHour,examMinute,studentHour,studentMinute);
    cout << result;
}

string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
    string M,H;
    
    int remainingTime,remainingHours,remainingMinutes;
    int overTime,overHours,overMinutes;
    
    if(examHour>=24)
        examHour=examHour%24;
    
    if(studentHour>=24)
        studentHour=studentHour%24;

    int examTime=examHour*60+examMinute;            // converted hour to mins
    int studentTime=studentHour*60+studentMinute;   // converted hour to mins
    
    if(examTime>studentTime && (examTime-studentTime)>30)
    {
        remainingTime=examTime-studentTime;
        remainingHours=remainingTime/60;        // converted to hours
        remainingMinutes=remainingTime%60;      // converted to mins
        
        if (remainingHours>=1)
        {
            M=to_string(remainingMinutes);
            H=to_string(remainingHours);
            return "Early\n"+H+":"+M+" hours before the start";
        }   
        if(remainingHours<1)
        {
            M=to_string(remainingMinutes);
            return "Early\n"+M+" minutes before the start";
        }
    }
    else if(examTime>=studentTime && (examTime-studentTime)<=30)
    {
        if(examTime==studentTime)
            return "On time";
        
        else
        {
            M=to_string(examTime-studentTime);
            return "On time\n"+M+" minutes before the start";
        }
    }
    else if(examTime<studentTime)
    {
        overTime=studentTime-examTime;
        overHours=overTime/60;
        overMinutes=overTime%60;
        
        if (overHours>=1)
        {
            M = to_string(overMinutes);
            H = to_string(overHours);
            return "Late\n"+H+":"+M+" hours after the start";
        }
        
        if(overHours<1)
        {
            M = to_string(overMinutes);
            return "Late\n"+M+" minutes after the start";
        }       
    }
}
