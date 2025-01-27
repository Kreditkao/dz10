#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

template <typename T>
class Queue {
private:
    vector<T> queueArray;
public:
    bool isEmpty() const {
        return queueArray.empty();
    }

    T first() const {
        if (!isEmpty()) {
            return queueArray.front();
        }
        else {
            throw out_of_range("Queue is empty");
        }
    }

    void push(const T& value) {
        queueArray.push_back(value);
    }

    void pop() {
        if (!isEmpty()) {
            queueArray.erase(queueArray.begin());
        }
        else {
            throw out_of_range("Queue is empty");
        }
    }

    void show() const {
        for (const auto& element : queueArray) {
            cout << element << " ";
        }
        cout << endl;
    }

    vector<T> getElements() const {
        return queueArray;
    }
};

#endif
