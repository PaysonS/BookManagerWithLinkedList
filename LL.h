#ifndef LL_H
#define LL_H
#include <iostream>

class LinkedList {
    private:
    struct Node {
        int data;
        Node* next;
    };
    Node* head;
    int count;
public:
    LinkedList();
    ~LinkedList();
    void insert(int data);
    void remove(int data);
    void display();
    void reverse();
    void sort();
    void clear();
    int size();
    bool isEmpty();
    bool contains(int data);
    int get(int index);
    int indexOf(int data);
    int lastIndexOf(int data);
    void set(int index, int data);
    void add(int index, int data);
    void removeAt(int index);
    void removeRange(int start, int end);
    void removeDuplicates();
};


#endif // LL_H
