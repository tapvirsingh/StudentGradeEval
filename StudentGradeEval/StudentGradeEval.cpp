// StudentGradeEval.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class GradeEvaluator {

protected:

    unsigned int marks;

public:

    // Constructor that takes the marks of the student.s
    GradeEvaluator(unsigned int _marks) {
        marks = _marks;
    }


    //Evaluate
    float evaluate() {
            
    }


    // Get the classified report regarding Passed / Failed.
    string classifyReport() {

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
