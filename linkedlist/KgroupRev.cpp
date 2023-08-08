#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

int findLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
Node *revKnodes(Node *&head, int k)
{
    if (head == NULL)
    {
        cout << "ll is empty" << endl;
        return NULL;
    }
    int len = findLength(head);
    if (k > len)
    {
        // cout << "enter valid value for k" << endl;
        return head;
    }
    // no.of node in linkedlist if ll>=k

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // step B:RECURSIVE
    if (forward != NULL) // we still have node to reverse
    {
        head->next = revKnodes(forward, k);
    }

    return prev;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    print(head);
    cout << endl;
    head = revKnodes(head, 5);
    print(head);
    return 0;
}