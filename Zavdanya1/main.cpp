#include <iostream>
#include "Queue.h"
using namespace std;

int main() {
    Queue<string> q;

    // Додавання елементів до черги
    q.push("one");
    q.push("two");
    q.push("three");
    q.push("four");
    q.push("five");
    q.push("six");

    cout << "Queue after adding elements: ";
    q.show();

    // Видалення двох елементів з черги
    q.pop();
    q.pop();

    cout << "Queue after popping two elements: ";
    q.show();

    // Додавання нового елемента до черги
    q.push("seven");

    cout << "Queue after adding 'seven': ";
    q.show();

    // Підрахунок рядків, що починаються на 'f' або 't'
    int count = 0;
    vector<string> elements = q.getElements(); // звернення до методу getElements
    for (const auto& element : elements) {
        if (!element.empty() && (element[0] == 'f' || element[0] == 't')) {
            count++;
        }
    }
    cout << "Number of strings starting with 'f' or 't': " << count << endl;

    return 0;
}
