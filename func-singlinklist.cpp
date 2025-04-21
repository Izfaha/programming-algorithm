#include <iostream>
using namespace std;

// komponen member
struct Bil{
    int a;
    Bil* next;
};

Bil *head, *tail, *cur, *newnode, *del;

void createSingleLinkedList(int a){
    head = new Bil();
    head->a = a;
    head->next = NULL;
    tail = head;
}

void addFirst(int a){
    newnode = new Bil();
    newnode->a = a;
    newnode->next = head;
    head = newnode;
}

void addLast(int a){
    newnode = new Bil();
    newnode->a = a;
    newnode->next = NULL;
    tail->next = newnode;
    tail = newnode;
}

void printSingleLinkedList(){
    cur = head;
    while(cur != NULL){
        cout << "Bilangan " << cur->a << endl;
        cur = cur -> next;
    }
}

void removeFirst(){
    del = head;
    head = head->next;
    delete del;
    //cout << "\n\n" << endl;
}

void removeLast(){
    del = tail;
    cur = head;
    while(cur->next = tail){
        cur = cur->next;
    }

    tail = cur;
    tail->next = NULL;
    delete del;
}

int main(){
    createSingleLinkedList(9);
    addLast(10);
    addFirst(2);
    //addFirst(12);
    //addFirst(22);
    
    removeFirst();
    removeLast();
    printSingleLinkedList();
    return 0;
}