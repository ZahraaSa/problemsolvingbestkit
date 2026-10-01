#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
///////

int normal_kadane(const vector<int>& arr, int start, int end) {
    int max_so_far = arr[start];
    int curr_max = arr[start];
    for (int i = start + 1; i <= end; i++) {
        curr_max = max(arr[i], curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }
    return max_so_far;
}