#include <iostream>

/*
coded by Fa'iz Maulana Habibi,
        Program Studi : Teknik Informatika
        NIM : A11.2024.15726
*/

// Node class
class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Singly Linked List class
class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList() : head(nullptr) {}

    ~SinglyLinkedList() {
        clear();
    }

    // Insert at the beginning
    void insertAtBeginning(int data) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    // Insert at the end
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }

    // Delete a node by value
    void deleteNode(int key) {
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }

        // If head node holds the key
        if (head->data == key) {
            Node* temp = head;
            head = head->next;
            delete temp;
            std::cout << "Deleted " << key << " from the list." << std::endl;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        // Search for the key
        while (current != nullptr && current->data != key) {
            prev = current;
            current = current->next;
        }

        // Key not found
        if (current == nullptr) {
            std::cout << "Key " << key << " not found." << std::endl;
            return;
        }

        // Unlink and delete the node
        prev->next = current->next;
        delete current;
        std::cout << "Deleted " << key << " from the list." << std::endl;
    }

    // Print the linked list
    void printList() {
        if (head == nullptr) {
            std::cout << "List is empty." << std::endl;
            return;
        }
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data;
            if (current->next != nullptr) {
                std::cout << " -> ";
            }
            current = current->next;
        }
        std::cout << " -> NULL" << std::endl;
    }

    // Clear the entire list (destructor helper)
    void clear() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }
};

int main() {
    SinglyLinkedList list;
    int choice, value;

    while (true) {
        std::cout << "\nSingly Linked List Operations:" << std::endl;
        std::cout << "1. Insert at the beginning" << std::endl;
        std::cout << "2. Insert at the end" << std::endl;
        std::cout << "3. Delete a node by value" << std::endl;
        std::cout << "4. Print the list" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to insert at the beginning: ";
                std::cin >> value;
                list.insertAtBeginning(value);
                break;
            case 2:
                std::cout << "Enter value to insert at the end: ";
                std::cin >> value;
                list.insertAtEnd(value);
                break;
            case 3:
                std::cout << "Enter value to delete: ";
                std::cin >> value;
                list.deleteNode(value);
                break;
            case 4:
                std::cout << "Current list: ";
                list.printList();
                break;
            case 5:
                std::cout << "Exiting program." << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
        }
    }
}