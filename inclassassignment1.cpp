//Question 1

#include <iostream>
#include <vector>
using namespace std;

bool searchSubmissionID(vector<int> submission_ids, int target_id) {
    for (int id : submission_ids) {
        if (id == target_id) {
            return true; // Assignment found
        }
    }
    return false; // Assignment not found
}

int main() {
    vector<int> submission_ids = {1203, 1250, 1234, 1290, 1210};
    int target_id = 1234;
    if (searchSubmissionID(submission_ids, target_id)) {
        cout << "Assignment found" << endl;
    } else {
        cout << "Assignment not found" << endl;
    }
    return 0;
}

//Question 2
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> times = {300, 250, 310, 270, 240};
    sort(times.begin(), times.end());
    for (int time : times) {
        cout << time << " ";
    }
    cout << endl;
    return 0;
}