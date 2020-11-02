// StudentGradeEval.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>

// As getch() doesn't work
// in Visual Studio but _getch() does, following
// lines of code defines it.

#ifndef getch()

#define getch() _getch()

#endif // !getch()


using namespace std;

class GradeEvaluator {

protected:

    unsigned int marks;
    float grade;
    string classifedReport;

public:

    // Constructor that takes the marks of the student.s
    GradeEvaluator(unsigned int _marks) {
        // Assigning values.
        marks = _marks;
        grade = 0;
        classifedReport = "";
    }


    //Evaluate the grade
    float evaluate() {

        if (marks >= 98 && marks <= 100) 
        {
            grade = 1;
        }
        else if(marks >= 95 && marks <= 97)
        {
            grade = 1.25;
        }
        else if (marks >= 92 && marks <= 94)
        {   
            grade = 1.5;
        }
        else if (marks >= 89 && marks <= 91)
        {
            grade = 1.75;
        }
        else if (marks >= 86 && marks <= 88)
        {
            grade = 2;
        }
        else if (marks >= 83 && marks <= 85)
        {
            grade = 2.25;
        }
        else if (marks >= 80 && marks <= 82)
        {
            grade = 2.5;
        }
        else if (marks >= 77 && marks <= 79)
        {
            grade = 2.75;
        }   
        else if (marks == 75 || marks == 76)
        {
            grade = 3;
        }
        else if (marks <= 74)
        {
            grade = 5;
        }

        return grade;
    }


    // Get the classified report regarding Passed / Failed.
    string classifyReport() {
        // If the student's grade is less than 5 then he has passed.
        if (grade < 5) {
            return "passed";
        }

        // else he has failed.
       return "failed";
    }


};

int main()
{
 
    unsigned int marks;
    cout << "\nEnter Student's Marks : ";

    // Input marks
    cin >> marks;

    // Creating object implicitly by passing marks as an argument.
    GradeEvaluator gE(marks);

    // Evaluate the grade.
    float finalGrade = gE.evaluate();

    // Get the report.
    string report = gE.classifyReport();

    // Throw the output with result.
    cout << "The final grade of the student is " << finalGrade << " , the student has " << report << endl;

    // Display the output and wait for the user to press any key to exit.
    cout << "Press any key to exit.";

    getch();

    // All ok
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
