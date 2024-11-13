#include <iostream>
#include <vector>
using namespace std;

void customSort(vector<double>& v) {
    int n = v.size();
    
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[j] < v[i]) {
                
                swap(v[i], v[j]);
            }
        }
    }
}

int main() {
    
    vector<double> v = {2.8, 4.76, 89.4, 234.74, -6, 123, -9, 10};

    
    customSort(v);

    
    cout << "Sorted vector: ";
    for (double num : v) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
