#pragma once

#include<iostream>
using namespace std;


template<class Type>
class Stack
{
    private:
        struct Node{
            Node* next;
            Type value;
            Node(const Type& value, Node* next = nullptr) : next(next), value(value){}
        };
        Node* _head;
        bool _verbose;
    public:
        // Constructor
        Stack(const bool& verbose = false);

        // methods
        Type top() const;
        Stack pop();
        Stack push(const Type& element);

        bool isEmpty() const;
        bool isNotEmpty() const;

        Stack clear();
        Stack reverse();

        void display() const;
        string toString() const;

        // Destructor
        ~Stack();
};
#include "../source/stack.cpp"
