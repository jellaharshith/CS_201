//Question 1 

#include <iostream>
#include <string>

class Employee {
private:
    int employeeID;
    std::string name;
    int hoursWorked;
    double hourlyRate;

public:
    Employee(int id, std::string n, int hours, double rate)
        : employeeID(id), name(n), hoursWorked(hours), hourlyRate(rate) {}

    double calculateSalary() {
        return hoursWorked * hourlyRate;
    }

    void displaySalary() {
        std::cout << "Monthly Salary of " << name << ": " << calculateSalary() << std::endl;
    }
};

int main() {
    int numEmployees;
    std::cout << "Enter number of employees: ";
    std::cin >> numEmployees;

    if (numEmployees < 1 || numEmployees > 50) {
        std::cerr << "Invalid number of employees." << std::endl;
        return 1;
    }

    Employee** employees = new Employee*[numEmployees];

    for (int i = 0; i < numEmployees; ++i) {
        int id, hours;
        double rate;
        std::string name;

        std::cout << "Enter EmployeeID, Name, HoursWorked, HourlyRate: ";
        std::cin >> id;
        std::cin.ignore(); // ignore the newline character
        std::getline(std::cin, name);
        std::cin >> hours >> rate;

        employees[i] = new Employee(id, name, hours, rate);
    }

    for (int i = 0; i < numEmployees; ++i) {
        employees[i]->displaySalary();
        delete employees[i]; // Free memory
    }

    delete[] employees; // Free array of pointers
    return 0;
}


//Question 2

#include <iostream>
#include <string>
#include <vector>

enum CarStatus { AVAILABLE, RENTED, UNDER_MAINTENANCE };

struct Car {
    std::string make;
    std::string model;
    int year;
    CarStatus status;
};

void displayAvailableCars(const std::vector<Car>& cars) {
    std::cout << "Available Cars:" << std::endl;
    for (size_t i = 0; i < cars.size(); ++i) {
        if (cars[i].status == AVAILABLE) {
            std::cout << "- " << cars[i].make << " " << cars[i].model << " " << cars[i].year << std::endl;
        }
    }
}

int main() {
    int numCars;
    std::cout << "Enter number of cars: ";
    std::cin >> numCars;

    if (numCars < 1 || numCars > 100) {
        std::cerr << "Invalid number of cars." << std::endl;
        return 1;
    }

    std::vector<Car> cars(numCars);

    for (int i = 0; i < numCars; ++i) {
        std::string make, model, statusStr;
        int year;
        CarStatus status;

        std::cout << "Enter car details (make model year status): ";
        std::cin >> make >> model >> year >> statusStr;

        if (statusStr == "AVAILABLE") status = AVAILABLE;
        else if (statusStr == "RENTED") status = RENTED;
        else status = UNDER_MAINTENANCE;

        // Using struct initialization
        cars[i].make = make;
        cars[i].model = model;
        cars[i].year = year;
        cars[i].status = status;
    }

    displayAvailableCars(cars);
    return 0;
}


//Question 3

#include <iostream>
#include <string>
#include <vector>

enum Year { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

struct Student {
    std::string studentID;
    std::string name;
    Year year;
};

class Course {
private:
    std::string courseID;
    int maxStudents;
    std::vector<Student*> enrolledStudents;

public:
    Course(std::string id, int max) : courseID(id), maxStudents(max) {}

    void enrollStudent(std::string id, std::string name, Year year) {
        if (enrolledStudents.size() < maxStudents) {
            Student* newStudent = new Student;
            newStudent->studentID = id;
            newStudent->name = name;
            newStudent->year = year;
            enrolledStudents.push_back(newStudent);
        } else {
            std::cout << "Enrollment is full." << std::endl;
        }
    }

    void displayEnrolledStudents() {
        std::cout << "Enrolled Students:" << std::endl;
        for (int y = FRESHMAN; y <= SENIOR; ++y) {
            std::cout << "-" << (y == FRESHMAN ? " FRESHMAN" : y == SOPHOMORE ? " SOPHOMORE" : y == JUNIOR ? " JUNIOR" : " SENIOR") << ": ";
            for (size_t i = 0; i < enrolledStudents.size(); ++i) {
                if (enrolledStudents[i]->year == static_cast<Year>(y)) {
                    std::cout << enrolledStudents[i]->name << " ";
                }
            }
            std::cout << std::endl;
        }
        std::cout << "Enrollment Status: " << (enrolledStudents.size() >= maxStudents ? "FULL" : "NOT FULL") << std::endl;
    }

    ~Course() {
        for (size_t i = 0; i < enrolledStudents.size(); ++i) {
            delete enrolledStudents[i]; // Free allocated memory
        }
    }
};

int main() {
    std::string courseID;
    int maxStudents;

    std::cout << "Enter CourseID: ";
    std::cin >> courseID;
    std::cout << "Enter MaxStudents: ";
    std::cin >> maxStudents;

    Course course(courseID, maxStudents);

    int numStudents;
    std::cout << "Enter number of students to enroll: ";
    std::cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        std::string id, name;
        std::string yearStr;
        Year year;

        std::cout << "Enter StudentID, Name, Year: ";
        std::cin >> id >> name >> yearStr;

        if (yearStr == "FRESHMAN") year = FRESHMAN;
        else if (yearStr == "SOPHOMORE") year = SOPHOMORE;
        else if (yearStr == "JUNIOR") year = JUNIOR;
        else if (yearStr == "SENIOR") year = SENIOR;

        course.enrollStudent(id, name, year);
    }

    std::cout << "ENROLLMENT STATUS" << std::endl;
    course.displayEnrolledStudents();

    return 0;
}


//Question 4

#include <iostream>
#include <string>
#include <vector>

enum Diagnosis { DIABETES, HYPERTENSION, CANCER, CARDIAC };

struct Medication {
    std::string medicationID;
    std::string medicationName;
    int dosage; // in mg
    std::string startDate;
};

class Patient {
private:
    std::string patientID;
    std::string name;
    int age;
    Diagnosis diagnosis;
    std::vector<Medication*> medications;

public:
    Patient(std::string id, std::string n, int a, Diagnosis d)
        : patientID(id), name(n), age(a), diagnosis(d) {}

    void addMedication(const std::string& id, const std::string& name, int dosage, const std::string& startDate) {
        if (medications.size() < 20) { // Limit to 20 medications
            Medication* newMed = new Medication; // Create a new Medication instance
            newMed->medicationID = id;
            newMed->medicationName = name;
            newMed->dosage = dosage;
            newMed->startDate = startDate;
            medications.push_back(newMed);
        } else {
            std::cout << "Cannot add more medications. Limit reached." << std::endl;
        }
    }

    void displayMedications() {
        std::cout << "Diagnosis: " << (diagnosis == DIABETES ? "DIABETES" : 
                                       diagnosis == HYPERTENSION ? "HYPERTENSION" : 
                                       diagnosis == CANCER ? "CANCER" : "CARDIAC") << std::endl;
        std::cout << "Medications:" << std::endl;
        for (size_t i = 0; i < medications.size(); ++i) {
            std::cout << "- " << medications[i]->medicationName << ", Dosage: " << medications[i]->dosage << " mg, Started on " << medications[i]->startDate << std::endl;
        }
    }

    bool hasOngoingMedications() {
        return !medications.empty();
    }

    ~Patient() {
        for (size_t i = 0; i < medications.size(); ++i) {
            delete medications[i]; // Free allocated memory
        }
    }
};

int main() {
    std::string patientID, name;
    int age;
    std::string diagnosisStr;
    Diagnosis diagnosis;

    std::cout << "Enter PatientID: ";
    std::cin >> patientID;
    std::cin.ignore(); // Clear the newline character from the input buffer

    std::cout << "Enter Name: ";
    std::getline(std::cin, name); // Use getline to allow spaces in the name

    std::cout << "Enter Age: ";
    std::cin >> age;

    std::cout << "Enter Diagnosis (DIABETES, HYPERTENSION, CANCER, CARDIAC): ";
    std::cin >> diagnosisStr;

    if (diagnosisStr == "DIABETES") diagnosis = DIABETES;
    else if (diagnosisStr == "HYPERTENSION") diagnosis = HYPERTENSION;
    else if (diagnosisStr == "CANCER") diagnosis = CANCER;
    else if (diagnosisStr == "CARDIAC") diagnosis = CARDIAC;

    Patient patient(patientID, name, age, diagnosis);

    int numMedications;
    std::cout << "Enter number of medications: ";
    std::cin >> numMedications;

    for (int i = 0; i < numMedications; ++i) {
        std::string medID, medName, startDate;
        int dosage;

        std::cout << "Enter MedicationID, MedicationName, Dosage, StartDate: ";
        std::cin >> medID >> medName >> dosage >> startDate;

        patient.addMedication(medID, medName, dosage, startDate);
    }

    // Display medications
    patient.displayMedications();

    // Check ongoing medication status
    std::cout << "Ongoing Medication Status: " << (patient.hasOngoingMedications() ? "Yes" : "No") << std::endl;

    return 0;
}