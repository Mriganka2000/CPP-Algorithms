#include <iostream>
#define MAX 8

class Stack {
    int arr[MAX];
    int top1 = -1, top2 = MAX;

public:
    void push1(int data) {
        if (top1 < (MAX - 1 - (MAX - top2 - 1))) {
            arr[++top1] = data;
        } else {
            std::cout << "Overflow" << std::endl;
        }
    }

    void push2(int data) {
        if (top2 - 1 == top1) {
            std::cout << "Overflow" << std::endl;
        } else {
            arr[--top2] = data;
        }
    }

    void pop1() {
        if (top1  == -1) {
            std::cout << "Underflow" << std::endl;
        } else {
            top1--;
        }
    }

    void pop2() {
        if (top2 == MAX) {
            std::cout << "Underflow" << std::endl;
        } else {
            top2++;
        }
    }

    int peek1() {
        if (top1  == -1) {
            std::cout << "Underflow" << std::endl;
            return -1;
        } else {
            return arr[top1];
        }
    }

    int peek2() {
        if (top2 == MAX) {
            std::cout << "Underflow" << std::endl;
            return -1;
        } else {
            return arr[top2];
        }
    }

    void print() {
        for (int i = 0; i < MAX; i++) {
            std::cout << arr[i] << std::endl;
        }
    }

    void print1() {
        if (top1  == -1) {
            std::cout << "Underflow" << std::endl;
        } else {
            for (int i = 0; i <= top1; i++) {
                std::cout << arr[i] << std::endl;
            }
        }
    }

    void print2() {
        if (top2 == MAX) {
            std::cout << "Underflow" << std::endl;
        } else {
            for (int i = MAX -1; i >= top2; i--) {
                std::cout << arr[i] << std::endl;
            }
        }
    }
};

int main() {
    Stack stack;
    stack.push1(1);
    stack.push1(2);
    stack.push1(3);
    stack.push1(4);
    stack.push1(5);
    stack.push1(6);
    stack.push1(7);
    stack.push2(1);
    stack.push2(2);

    stack.print();
    std::cout << std::endl;
    stack.print1();
    std::cout << std::endl;
    stack.print2();
    std::cout << std::endl;
}
