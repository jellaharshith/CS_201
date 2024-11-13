//Question 1

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    
    double** temperatures = new double*[N];
    for (int i = 0; i < N; i++) {
        temperatures[i] = new double[M];
    }

    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> temperatures[i][j];
        }
    }

    
    for (int i = 0; i < N; i++) {
        double sum = 0;
        for (int j = 0; j < M; j++) {
            sum += temperatures[i][j];
        }
        double average = sum / M;
        cout << "Sensor " << (i + 1) << ": " << fixed << setprecision(2) << average << "°C" << endl;
    }

    
    for (int i = 0; i < N; i++) {
        delete[] temperatures[i];
    }
    delete[] temperatures;

    return 0;
}


//Question 2 

#include <iostream>
#include <cstring>

using namespace std;

struct Book {
    int id;
    string title;
};

int main() {
    int Q;
    cin >> Q;

    Book* books = nullptr;
    int count = 0;

    for (int i = 0; i < Q; i++) {
        string command;
        cin >> command;

        if (command == "ADD") {
            int id;
            string title;
            cin >> id;
            cin.ignore(); 
            getline(cin, title);

            
            Book* temp = new Book[count + 1];
            for (int j = 0; j < count; j++) {
                temp[j] = books[j];
            }
            temp[count].id = id;
            temp[count].title = title;
            delete[] books;
            books = temp;
            count++;
            cout << "Added" << endl;

        } else if (command == "DEL") {
            int id;
            cin >> id;

            bool found = false;
            for (int j = 0; j < count; j++) {
                if (books[j].id == id) {
                    found = true;
                    
                    Book* temp = new Book[count - 1];
                    for (int k = 0; k < j; k++) {
                        temp[k] = books[k];
                    }
                    for (int k = j + 1; k < count; k++) {
                        temp[k - 1] = books[k];
                    }
                    delete[] books;
                    books = temp;
                    count--;
                    cout << "Deleted" << endl;
                    break;
                }
            }
            if (!found) {
                cout << "Not found" << endl;
            }
        }
    }

    delete[] books;
    return 0;
}


//Question 3 

#include <iostream>
#include <iomanip>

using namespace std;

struct Employee {
    int id;
    double salary;
};

int main() {
    int N;
    cin >> N;

    Employee* employees = new Employee[N];

    
    for (int i = 0; i < N; i++) {
        cin >> employees[i].id >> employees[i].salary;
    }

    
    string command;
    cin >> command;
    if (command == "Update") {
        int id;
        double newSalary;
        cin >> id >> newSalary;

        for (int i = 0; i < N; i++) {
            if (employees[i].id == id) {
                employees[i].salary = newSalary;
                break;
            }
        }
    }

    
    for (int i = 0; i < N; i++) {
        cout << employees[i].id << ": " << fixed << setprecision(2) << employees[i].salary << endl;
    }

    delete[] employees;
    return 0;
}


//Question 4 

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

struct Order {
    string name;
    double amount;
};

int main() {
    int O;
    cin >> O;

    
    Order* orders = new Order[O];

    
    for (int i = 0; i < O; i++) {
        cin >> orders[i].name >> orders[i].amount;
    }

    
    string command;
    cin >> command; 
    string nameToRemove;
    cin >> nameToRemove;

    int newCount = 0;
    Order* updatedOrders = new Order[O]; 

    for (int i = 0; i < O; i++) {
        if (orders[i].name != nameToRemove) {
            updatedOrders[newCount++] = orders[i]; 
        }
    }

    
    for (int i = 0; i < newCount; i++) {
        cout << updatedOrders[i].name << ": " << fixed << setprecision(2) << updatedOrders[i].amount << endl;
    }

    
    delete[] orders;
    delete[] updatedOrders;

    return 0;
}


//Question 5 

#include <iostream>
#include <iomanip>

using namespace std;

struct Student {
    int id;
    double gpa;
};

int main() {
    int S;
    cin >> S;

    
    Student* students = new Student[S];

    
    for (int i = 0; i < S; i++) {
        cin >> students[i].id >> students[i].gpa;
    }

    
    string command;
    cin >> command; 
    if (command == "Update") {
        int id;
        double newGPA;
        cin >> id >> newGPA;

        for (int i = 0; i < S; i++) {
            if (students[i].id == id) {
                students[i].gpa = newGPA; 
                break;
            }
        }
    }

  
    for (int i = 0; i < S; i++) {
        cout << students[i].id << ": " << fixed << setprecision(2) << students[i].gpa << endl;
    }

    
    delete[] students;

    return 0;
}