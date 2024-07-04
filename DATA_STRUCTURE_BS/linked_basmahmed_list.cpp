#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
    public:
    Node* head;

    LinkedList() : head(nullptr) {} // Constructor

    // Insert items at the beginning
    void insertAtBeginning(int val) {
        Node* new_node = new Node(val);
        new_node->next = head;
        head = new_node;
    }

    // Insert items at the end
    void insertAtEnd(int val) {
        Node* new_node = new Node(val);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* ptr = head;
        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }

    // Print the linked list
    void print() {
        Node* f = head;
        while (f != nullptr) {
            cout << f->data << " ";
            f = f->next;
        }
        cout << endl;
    }

    // Find the middle item
    void middleItem() {
        Node* ptr = head;
        vector<int> vect;
        while (ptr != nullptr) {
            vect.push_back(ptr->data);
            ptr = ptr->next;
        }
        if (!vect.empty()) {
            cout << "Middle item: " << vect[vect.size() / 2] << endl;
        }
    }

    // Search for a specific value
    void searchFor(int data) {
        Node* ptr = head;
        int count = 0;
        while (ptr != nullptr) {
            if (ptr->data == data) {
                count++;
            }
            ptr = ptr->next;
        }
        cout << "Count of " << data << ": " << count << endl;
    }

    // Check if the list is circular or single
    void circularOrSingle() {
        Node* ptr = head;
        while (ptr != nullptr) {
            if (ptr->next == head) {
                cout << "Circular list" << endl;
                return;
            }
            ptr = ptr->next;
        }
        cout << "Single list" << endl;
    }
    void convertToCircular() {
    

    Node* ptr = head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = head; // Make the last node point to the head
}
};

int main() {
    LinkedList p;
    
    p.insertAtBeginning(12);
    p.insertAtBeginning(100);
    p.insertAtBeginning(100);
    p.insertAtBeginning(1000002);
    
    p.insertAtEnd(0);
    p.convertToCircular();
    
    //cout << "Linked list: ";
    //p.print();

    //p.middleItem();
    //p.searchFor(100);
    p.circularOrSingle();

    return 0;
}
