//Question 1

#include <iostream>
#include <vector>
#include <algorithm>

int minEatingSpeed(std::vector<int>& piles, int h) {
    auto canEatAll = [&](int k) {
        long long total_hours = 0;
        for (int pile : piles) {
            total_hours += (pile + k - 1) / k; 
        }
        return total_hours <= h;
    };

    int left = 1, right = *max_element(piles.begin(), piles.end());
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (canEatAll(mid)) {
            right = mid; 
        } else {
            left = mid + 1; 
        }
    }
    return left;
}

int main() {
    std::vector<int> piles = {3, 6, 7, 11};
    int h = 8;
    std::cout << "Minimum eating speed: " << minEatingSpeed(piles, h) << std::endl; // Output: 4
    return 0;
}


//Question 2 

#include <iostream>
#include <vector>
#include <algorithm>

double minPenalty(std::vector<int>& stations, int k) {
    auto possible = [&](double D) {
        int count = 0;
        for (size_t i = 1; i < stations.size(); ++i) {
            double gap = stations[i] - stations[i - 1];
            count += static_cast<int>((gap - 1) / D); 
        }
        return count <= k;
    };

    double left = 0, right = stations.back() - stations.front();
    while (left < right) {
        double mid = left + (right - left) / 2;
        if (possible(mid)) {
            right = mid; 
            left = mid + 1e-7; 
        }
    }
    return left;
}

int main() {
    std::vector<int> stations = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 9;
    std::cout << "Minimum penalty: " << minPenalty(stations, k) << std::endl; 
    return 0;
}


//Question 3

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortPostsByLikes(std::vector<std::pair<int, int>>& posts) {
    
    std::stable_sort(posts.begin(), posts.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        
        return a.second > b.second;
    });

    
    std::vector<int> sortedPostIds;
    for (const std::pair<int, int>& post : posts) {
        sortedPostIds.push_back(post.first);
    }

    return sortedPostIds;
}

int main() {
    std::vector<std::pair<int, int>> posts = { {1, 150}, {2, 200}, {3, 150}, {4, 100} };
    std::vector<int> sortedPostIds = sortPostsByLikes(posts);

    
    for (int id : sortedPostIds) {
        std::cout << id << " ";
    }
    std::cout << std::endl; 

    return 0;
}


//Question 4

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortTasksByPriority(std::vector<std::pair<int, int>>& tasks) {
    
    std::stable_sort(tasks.begin(), tasks.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        
        return a.second > b.second;
    });

    
    std::vector<int> sortedTaskIds;
    for (const std::pair<int, int>& task : tasks) {
        sortedTaskIds.push_back(task.first);
    }

    return sortedTaskIds;
}

int main() {
    std::vector<std::pair<int, int>> tasks = { {1, 3}, {2, 2}, {3, 3}, {4, 1} };
    std::vector<int> sortedTaskIds = sortTasksByPriority(tasks);

    
    for (int id : sortedTaskIds) {
        std::cout << id << " ";
    }
    std::cout << std::endl; 

    return 0;
}


//Question 5 
#include <iostream>

void mergeArrays(int* arr1, int size1, int* arr2, int size2, int* result) {
    int i = 0; 
    int j = 0; 
    int k = 0; 

    
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }

    
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 4, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    
    int result[size1 + size2];

    
    mergeArrays(arr1, size1, arr2, size2, result);

   
    std::cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl; 

    return 0;
}
