#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

void deleteNode(Node *head, Node *n)
{
    if(head == n)
    {
        if(head->next == nullptr)
        {
            cout << "There is only one node." << "The list can't be made empty";;
            return;
        }
        head->data =  head->next->data;
        n = head->next;
        head->next = head->next->next;
        free(n);
        return;
    }
    Node *prev = head;
    while(prev->next != nullptr && prev->next != n)
        prev->next == nullptr;
    if (prev->next == nullptr)
    {
        cout << "Given node is not present in Linked List\n";
        return;
    }
    prev->next = prev->next->next;
    free(n);
    return;
}

void insertEnd(Node ** head, int newData)
{
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = nullptr;
    if (*head == nullptr) {
        *head = newNode;
    } else {
        Node* last = *head;
        while (last->next != nullptr){
               last = last->next;
               }
            last->next = newNode;
        }
}

void displayList(Node* node)
{
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node* head = nullptr;
    insertEnd(&head, 1);
    insertEnd(&head, 2);
    insertEnd(&head, 3);

    cout << "Given Linked List:";
    displayList(head);

    cout << "Deleting node" << head->next->next->data << " ";
    deleteNode(head, head->next->next);

    cout << "Modified Linked List:";
    displayList(head);

    cout << "Deleting first node";
    deleteNode(head, head);

    cout << "Modified Linked List";
    displayList(head);
    return 0;
}
