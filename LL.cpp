#include "LL.h"
#include <vector>

LinkedList::LinkedList()
{
    head = nullptr;
    count = 0;
}

LinkedList::~LinkedList()
{
    clear();
}

void LinkedList::insert(std::string data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
    count++;
}

void LinkedList::remove(std::string data)
{
   
}

void LinkedList::display()
{
    std::vector<std::string> v;
    while (head != nullptr)
    {
        v.push_back(head->data);
        head = head->next;
    }
    for (auto i = v.rbegin(); i != v.rend(); i++) //prints in reverse order
    {
        std::cout << "{" << *i << "},";
    }
}

void LinkedList::clear()
{
    Node *temp = head;
    while (head != nullptr)
    {
        head = head->next;
        delete temp;
        temp = head;
    }
    count = 0;
}

bool LinkedList::isEmpty()
{
    if (count == 0)
    {
        return true;
    }
    return false;
}

bool LinkedList::contains(std::string data)
{
    while (head != nullptr)
    {
        if (head->data == data)
        {
            return true;
        }
        head = head->next;
    }

    return false;
}

int LinkedList::amountOfNodes()
{
    while (head != nullptr)
    {
        count++;
        head = head->next;
    }
    return count;
}

int LinkedList::get(int index)
{
    while (head != nullptr)
    {
        if (head->index == index)
        {
            return head->index;
        }
        head = head->next;
    }
}

int LinkedList::indexOf(std::string data)
{
    while (head != nullptr)
    {
        if (head->data == data)
        {
            return head->index;
        }
        head = head->next;
    }
    return 0;
}

void LinkedList::set(int index, std::string data)
{
    while (head != nullptr)
    {
        if (head->index == index)
        {
            head->data = data;
        }
        head = head->next;
    }
}

void LinkedList::add(int index, std::string data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->index = index;
    temp->next = head;
    head = temp;
    count++;
}

void LinkedList::removeAt(int index)
{
    Node *temp = head;
    Node *prev = head;
    while (temp != nullptr)
    {
        if (temp->index == index)
        {
            prev->next = temp->next;
            delete temp;
            count--;
        }
        prev = temp;
        temp = temp->next;
    }
}

void LinkedList::removeRange(int start, int end)
{
    Node *temp = head;
    Node *prev = head;
    while (temp != nullptr)
    {
        if (temp->index >= start && temp->index <= end)
        {
            prev->next = temp->next;
            delete temp;
            count--;
        }
        prev = temp;
        temp = temp->next;
    }
}

void LinkedList::removeDuplicates()
{
    Node *temp = head;
    Node *prev = head;
    while (temp != nullptr)
    {
        if (temp->data == prev->data)
        {
            prev->next = temp->next;
            delete temp;
            count--;
        }
        prev = temp;
        temp = temp->next;
    }
}
