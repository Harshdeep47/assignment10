#include <iostream> #include <unordered_set> using namespace std;

struct ListNode { int val; ListNode* next;
ListNode(int x) : val(x), next(NULL) {}
};


bool hasCycle(ListNode* head) { unordered_set<ListNode*> seen; ListNode* curr = head;

while (curr != NULL) {
if (seen.count(curr)) {
 
return true;
}
seen.insert(curr); curr = curr->next;
}
return false;
}


int main() {
ListNode* n1 = new ListNode(1); ListNode* n2 = new ListNode(2); ListNode* n3 = new ListNode(3); ListNode* n4 = new ListNode(4);

n1->next = n2; n2->next = n3; n3->next = n4;
n4->next = n2; // loop


if (hasCycle(n1)) cout << "true";
else
cout << "false";


return 0;
}
