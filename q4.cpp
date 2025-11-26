#include <iostream> #include <unordered_map> using namespace std;

int firstNonRepeating(int nums[], int n) { unordered_map<int, int> freq;
for (int i = 0; i < n; i++) { freq[nums[i]]++;
}


for (int i = 0; i < n; i++) { if (freq[nums[i]] == 1) {
return nums[i];
}
}
return -1; // if none
}


int main() {
int nums[] = {4, 5, 1, 2, 0, 4};
int n = 6;


int ans = firstNonRepeating(nums, n); if (ans != -1)
cout << ans; else
cout << "No non-repeating element";


return 0;
}
