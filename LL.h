#ifndef LL_H
#define LL_H
#include <iostream>

class LinkedList
{
private:
    struct Node
    {
        int index;
        Node *next;
        std::string data = " ";
    };
    Node *head;
    int count;

public:
    LinkedList();
    ~LinkedList();
    void insert(std::string data);
    void remove(std::string data);
    void display();
    void clear();
    bool isEmpty();
    bool contains(std::string data);
    int amountOfNodes();
    int get(int index);
    int indexOf(std::string data);
    void set(int index, std::string data);
    void add(int index, std::string data);
    void removeAt(int index);
    void removeRange(int start, int end);
    void removeDuplicates();
};

#endif // LL_H
