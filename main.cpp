#include "LL.cpp"
#include <iostream>


int main()
{
    LinkedList list;
    list.insert("Hello");
    list.insert("World");
    list.insert("This");
    list.insert("Is");
    list.insert("A");
    list.insert("Test");
    list.display();
    list.remove("Is");
    list.display();
    list.clear();
    list.display();
    return 0;
}