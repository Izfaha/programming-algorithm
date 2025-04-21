#include <iostream>
using namespace std;

struct Bil {
    int a;
    Bil *next;
}; 

int main(){
    // Inisialisasi single link list
    Bil *node1, *node2, *node3;
    node1 = new Bil();
    node2 = new Bil();
    node3 = new Bil();

    // Pengisian code
    node1->a = 8;
    node1->next = node2;

    node2->a = 12;
    node2->next = node3;

    node3->a = 20;
    node3->next = NULL;

    Bil* cur;
    cur = node1;
    while(cur != NULL){
        cout << "Bilangan " << cur->a << endl;
        cur = cur -> next;
    }
    return 0;
}
/*
int main(){
    cout << "List of Algorithms\n"
        << "[1] Bubble Sort.\n"
        << "[2] Selection Sort.\n"
        << "[3] Insertion Sort.\n"
        << "[4] Linear Sort.\n"
        << "[5] Single Link List.\n";
    return 0;
}
*/