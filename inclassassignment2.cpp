//Question 1 

#include <iostream>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    
    while (numStudents < 1 || numStudents > 100) {
        cout << "Invalid number of students. Please enter a number between 1 and 100: ";
        cin >> numStudents;
    }

    
    int* studentMarks = new int[numStudents];

    
    for (int i = 0; i < numStudents; i++) {
        int mark;
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> mark;

        
        while (mark < 0 || mark > 100) {
            cout << "Invalid mark. Please enter a mark between 0 and 100: ";
            cin >> mark;
        }

        studentMarks[i] = mark;
    }

    
    cout << "Marks of students:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i + 1 << ": " << studentMarks[i] << endl;
    }

    
    delete[] studentMarks;

    return 0;
}


//Question 2 

#include <iostream>
using namespace std;

int main() {
    int numDays;
    cout << "Enter the number of days: ";
    cin >> numDays;

    
    while (numDays < 1 || numDays > 365) {
        cout << "Invalid number of days. Please enter a number between 1 and 365: ";
        cin >> numDays;
    }

    
    float* temperatures = new float[numDays];

    
    for (int i = 0; i < numDays; i++) {
        float temperature;
        cout << "Enter the temperature for day " << i + 1 << ": ";
        cin >> temperature;

        
        while (temperature < -50 || temperature > 50) {
            cout << "Invalid temperature. Please enter a temperature between -50°C and 50°C: ";
            cin >> temperature;
        }

        temperatures[i] = temperature;
    }

    
    cout << "Temperatures in reverse order:" << endl;
    for (int i = numDays - 1; i >= 0; i--) {
        cout << "Day " << i + 1 << ": " << temperatures[i] << endl;
    }

    
    delete[] temperatures;

    return 0;
}