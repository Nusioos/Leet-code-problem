#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* mergeList(ListNode* head,ListNode* dupa) {
ListNode* prev = nullptr;
ListNode* curr = head;

while (curr)
{
    ListNode* temp = curr->next;
    curr->next=prev;
    prev=curr;
    curr=temp;

}
return prev;
}
void insertAtHead(ListNode*& head, int value) {
    ListNode* newNode = new ListNode(value);  
    newNode->next = head;                     
    head = newNode;                           
}
void display(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;  
}

int main() {
    ListNode* head = nullptr; 


    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);

ListNode* dupa=nullptr;
insertAtHead(dupa, 11);
insertAtHead(dupa, 22);
insertAtHead(dupa, 33);
insertAtHead(dupa, 44);
    cout << "Lista przed odwróceniem: ";
    display(head);
    display(dupa);
    head = reverseList(head);

    cout << "Lista po odwróceniu: ";
    display(head);


}
