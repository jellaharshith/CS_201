//Question 1 

#include <iostream>
#include <vector>

using namespace std;

void transposeMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size(); // Assuming it's a square matrix (n x n)
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start from i + 1 to avoid double swapping
            swap(matrix[i][j], matrix[j][i]); // Swap elements
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " "; // Print each value in the row
        }
        cout << endl; // Move to the next line after printing a row
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    transposeMatrix(matrix);

    cout << "Transposed Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}


//Question 2 

#include <iostream>
#include <vector>
#include <utility> // For std::pair
#include <limits>  // For INT_MIN

using namespace std;

vector<pair<int, int>> findMaxValues(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return {}; // Return empty if the matrix is empty

    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<int> rowMax(rows, INT_MIN); // To hold max of each row
    vector<int> colMax(cols, INT_MIN); // To hold max of each column

    // Traverse the matrix to find max values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Update row max
            if (matrix[i][j] > rowMax[i]) {
                rowMax[i] = matrix[i][j];
            }
            // Update column max
            if (matrix[i][j] > colMax[j]) {
                colMax[j] = matrix[i][j];
            }
        }
    }

    // Prepare the result vector of pairs
    vector<pair<int, int>> maxValues;
    for (int j = 0; j < cols; j++) {
        maxValues.push_back(make_pair(rowMax[j], colMax[j]));
    }

    return maxValues;
}

void printMaxValues(const vector<pair<int, int>>& maxValues) {
    for (const auto& p : maxValues) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<pair<int, int>> maxValues = findMaxValues(matrix);

    cout << "Max values (row max, col max): ";
    printMaxValues(maxValues);

    return 0;
}


//Question 3 

#include <iostream>
#include <string>

using namespace std;

string compressString(const string& s) {
    if (s.empty()) return s; // Return empty string if input is empty

    string compressed;
    int count = 1; // Initialize count of consecutive characters

    for (size_t i = 1; i <= s.size(); i++) {
        // Check if the current character is the same as the previous one
        if (i < s.size() && s[i] == s[i - 1]) {
            count++; // Increment count if they are the same
        } else {
            // Append the character and its count to the compressed string
            compressed += s[i - 1]; // Previous character
            compressed += to_string(count); // Count of the character
            count = 1; // Reset count for the next character
        }
    }

    // Return the original string if the compressed version is not smaller
    return compressed.size() < s.size() ? compressed : s;
}

int main() {
    string s = "aabcccccaaa";
    string compressed = compressString(s);

    cout << "Compressed String: " << compressed << endl;

    return 0;
}


//Question 4 


#include <iostream>
#include <queue>
#include <vector>

using namespace std;

// Structure to represent an element in the min-heap
struct Element {
    int val;
    int row;
    int col;
    Element(int val, int row, int col) : val(val), row(row), col(col) {}
    bool operator<(const Element& other) const {
        return val > other.val; // Min-heap comparison
    }
};

int kthSmallest(vector<vector<int>>& matrix, int k) {
    if (matrix.empty() || k < 1 || k > matrix.size() * matrix[0].size()) {
        return -1; // Invalid input
    }

    priority_queue<Element> minHeap;
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Push the first element of each row into the min-heap
    for (int i = 0; i < rows; i++) {
        minHeap.push(Element(matrix[i][0], i, 0));
    }

    int count = 0;
    while (!minHeap.empty()) {
        Element top = minHeap.top();
        minHeap.pop();
        count++;

        if (count == k) {
            return top.val; // Return the k-th smallest element
        }

        // Push the next element from the same row into the min-heap
        if (top.col + 1 < cols) {
            minHeap.push(Element(matrix[top.row][top.col + 1], top.row, top.col + 1));
        }
    }

    return -1; // Should not reach here
}

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int k = 8;
    int kth_smallest = kthSmallest(matrix, k);

    cout << "k-th Smallest Element: " << kth_smallest << endl;

    return 0;
}


//Question 5 

#include <iostream>
#include <vector>

using namespace std;

void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Rotate the matrix layer by layer
    for (int layer = 0; layer < n / 2; layer++) {
        int first = layer;
        int last = n - layer - 1;

        for (int i = first; i < last; i++) {
            int offset = i - first; // Calculate offset within the layer
            // Save the top element
            int top = matrix[first][i];

            // Move left to top
            matrix[first][i] = matrix[last - offset][first];

            // Move bottom to left
            matrix[last - offset][first] = matrix[last][last - offset];

            // Move right to bottom
            matrix[last][last - offset] = matrix[i][last];

            // Move top to right
            matrix[i][last] = top; // Assign saved top to right
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    rotateMatrix(matrix);

    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix);

    return 0;
}

