#include <iostream> #include <unordered_set> using namespace std;

struct Node { int val; Node* left; Node* right;
Node(int x) : val(x), left(NULL), right(NULL) {}
};


bool dfs(Node* root, unordered_set<int>& seen) { if (root == NULL) return false;

if (seen.count(root->val)) {
return true; // duplicate value found
}
seen.insert(root->val);
 
return dfs(root->left, seen) || dfs(root->right, seen);
}


bool hasDuplicate(Node* root) { unordered_set<int> seen; return dfs(root, seen);
}


int main() {
Node* root = new Node(5); root->left = new Node(3); root->right = new Node(7);
root->left->left = new Node(2); root->left->right = new Node(5);

if (hasDuplicate(root))
cout << "Duplicates Found"; else
cout << "No Duplicates"; return 0;
}
