#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to calculate the sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Custom sorting function
bool compare(int a, int b) {
    int sumA = digitSum(a);
    int sumB = digitSum(b);
    if (sumA != sumB) {
        return sumA < sumB;
    } else {
        return a < b;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end(), compare);
    for (int i = 0; i < n; i++) {
        cout << nums[i] << endl;
    }
    return 0;
}
