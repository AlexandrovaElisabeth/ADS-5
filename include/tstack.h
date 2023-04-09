// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_
#include <string>
template<typename T, int size>
class TStack {
private:
    T arr[100];
    int top;
public:
    TStack():top(-1){}
    void push(T& value) {
        if (isFull())
            throw std::string("Full");
        else arr[++top] = value;
    }
    void pop(T& value) {
        if (isEmpty())
            throw std::string("Empty");
        else arr[top--] = value;
    }
    T get() const {
        return arr[top];
    }
    bool isFull() const {
        return top == size - 1;
    }
    bool isEmpty() const {
        return top == -1;
    }
};
#endif  // INCLUDE_TSTACK_H_
