#include <iostream>
#include <queue>
#include "Ingredient.h"
using namespace std;

int main() {
    priority_queue<Ingredient> pq;
    int choice;

    while (true) {
        cout << "Enter what you want to do:\n"
            << "1 - Add ingredient\n"
            << "2 - Cook a dish\n";
        cin >> choice;

        if (choice == 1) {
            string name;
            int time;
            cout << "Enter name of ingredient: ";
            cin >> name;
            cout << "Enter time of cooking (seconds): ";
            cin >> time;
            pq.push(Ingredient(name, time));

        }
        else if (choice == 2) {
            if (pq.empty()) {
                cout << "No ingredients to cook!\n";
            }
            else {
                Ingredient current = pq.top();
                cout << "Cooking " << current.name << " for " << current.cookingTime << " seconds.\n";
                pq.pop();
            }
        }
        else {
            cout << "Invalid choice. Please select 1 or 2.\n";
        }
    }

    return 0;
}
