#include <iostream> #include <unordered_set> using namespace std;

int main() {
int A[] = {1, 2, 3, 4};
int B[] = {3, 4, 5, 6};
int nA = 4, nB = 4;


unordered_set<int> s; for (int i = 0; i < nA; i++) {
s.insert(A[i]);
}


cout << "Common elements: ";
 
for (int i = 0; i < nB; i++) { if (s.count(B[i])) {
cout << B[i] << " ";
s.erase(B[i]); // avoid printing duplicates
}
}


return 0;
}
