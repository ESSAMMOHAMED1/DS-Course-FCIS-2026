#include <bits/stdc++.h>
using namespace std;
// Double linked list
struct Node
{
    string name; // set data
    int number;  // set data
    Node *next;  // set pointer to linke nodes
    Node *P;
};

Node *H = nullptr; // set main pointer  Head
Node *T = nullptr; // set main pointer  Tail
Node *C = nullptr; // set main pointer  Current
//==================================================================================

// add new node to head of list
void Add_Head(string A, int B)
{
    C = new Node;  // creat new node
    C->name = A;   // set data of node
    C->number = B; // set data of node
    // check if list is impety
    if (H == nullptr && T == nullptr)
    {
        H = C;          // set head = current
        T = C;          // set tail = current
        C->next = nullptr; //  set pointer next = nullptr
        C->P = nullptr;   //  set pointer prev = nullptr
    }
    else
    {
        C->next = H; // set current of next = head
        H->P = C;
        H = C;       // set current = head
        H->P = nullptr; // set head of prev = nullptr 
    }
}

//==========================================================================================

// add new node to tail

void Add_Tail(string A, int B)
{
    C = new Node;   // create new node
    C->name = A;    // set data of node
    C->number = B;  // set data of node
    C->next = nullptr; // set pointer next = nullptr >> case it's a tail (:

    // check if list is empty
    if (H == nullptr && T == nullptr)
    {
        H = C;          // set head = current
        T = C;          // set tail = current
        C->next = nullptr; //  set pointer next = nullptr
        C->P = nullptr;   //  set pointer prev = nullptr
    }
    else
    {

        T->next = C; // pointer tail oP next -> current
        C -> P = T; // set current oP prev = tali
        T = C;       // set tail = current
    }
}

//==============================================================================================
// Delete Head node

void Erase_Head()
{
    C = H;       // set current = head
    H = H->next; // set head =>> head oP next
    delete C;    // delete current
    H->P = nullptr;
}
//==============================================================================================

// delete Tail node

void Erase_Tail()
{
    C = T; // set current = head
    T->P = T; //set tail oP prev = tail 
    delete C; //dell current
    T->next = nullptr; // set pointer => nullptr
}

//=====================================================================================
// print linked list

void Print_Nodes()
{
    C = H;
    while (C != nullptr)
    {
        cout << "Name : " << C->name << ","
             << "ID : " << C->number << endl;
        C = C->next;
    }
}


void Revers_Print_Nodes()
{
    C = T;
    while (C != nullptr)
    {
        cout << "Name : " << C->name << ","
             << "ID : " << C->number << endl;
        C = C->P;
    }
}


int main()
{
    Add_Head("ahmed", 1);
    Add_Head("essam", 2);
    Add_Head("mohmaed", 3);
    Add_Head("gnaa", 4);
    Print_Nodes();
    cout << "=====================================" << endl;
    Add_Tail("essam", 12);
    Add_Tail("eseeeem", 1355);
    Print_Nodes();
    Erase_Tail();
    Erase_Head();
    cout << "=====================================" << endl;
    Print_Nodes();
}