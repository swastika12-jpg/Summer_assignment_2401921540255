#include <iostream>
using namespace std;
int main() {
    int nums[4] = {2, 7, 11, 15};
   int target = 9;
    int size = 4;
 int ans1 = -1;
   int ans2 = -1;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                ans1 = i;
                ans2 = j;
            }
        }
    }
    if (ans1 != -1) {
        cout << "Index 1: " << ans1 << endl;
        cout << "Index 2: " << ans2 << endl;
    } else {
        cout << "Koi pair nahi mila" << endl;
    }
    return 0;
}
