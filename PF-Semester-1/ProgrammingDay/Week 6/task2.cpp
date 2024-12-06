#include<iostream>

using namespace std;

float calculateAverage(float, float, float, float, float);
string calculateGrade(float);

main()
{
    string name;
    
    float englishMarks, mathMarks, chemistryMarks, socialScienceMarks, biologyMarks;
    
    cout << "Enter student name: ";
    cin >> name;

    cout << "Enter marks for English: ";
    cin >> englishMarks;

    cout << "Enter marks for Maths: ";
    cin >> mathMarks;

    cout << "Enter marks for Chemistry: ";
    cin >> chemistryMarks;

    cout << "Enter marks for Social Science: ";
    cin >> socialScienceMarks;

    cout << "Enter marks for Biology: ";
    cin >> biologyMarks;

    float percentage;
    percentage = calculateAverage(englishMarks, mathMarks, chemistryMarks, socialScienceMarks, biologyMarks);
    
    string grade;
    grade = calculateGrade(percentage);

    cout << "Student Name: " << name << endl;
    cout << "Percentage: " << percentage << "%"<< endl;
    cout << "Grade: " << grade;
}

float calculateAverage(float englishMarks, float mathMarks, float chemistryMarks, float socialScienceMarks, float biologyMarks)
{
    float average;
    average = (englishMarks + mathMarks + chemistryMarks + socialScienceMarks + biologyMarks) / 5;
    return average;
}

string calculateGrade(float percentage)
{
    string grade;

    if (percentage >=90 && percentage <= 100)
        grade = "A+";

    else if (percentage >=80 && percentage <= 90)
        grade = "A";

    else if (percentage >=70 && percentage < 80)
        grade = "B+";

    else if (percentage >=60 && percentage < 70)
        grade = "B";

    else if (percentage >=50 && percentage < 60)
        grade = "C";

    else if (percentage >=40 && percentage < 50)
        grade = "D";

    else
        grade = "F";

    return grade;
}