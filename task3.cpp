#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tasks;
    int choice;
    string task;
    do {
        cout << "\n1. Add Task\n2. View Tasks\n3. Delete Task\n4. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
        } else if (choice == 2) {
            if (tasks.empty()) cout << "No tasks available.\n";
            else {
                cout << "Tasks:\n";
                for (int i = 0; i < tasks.size(); i++)
                    cout << i + 1 << ". " << tasks[i] << "\n";
            }
        } else if (choice == 3) {
            int index;
            cout << "Enter task number to delete: ";
            cin >> index;
            if (index > 0 && index <= tasks.size())
                tasks.erase(tasks.begin() + index - 1);
            else
                cout << "Invalid task number.\n";
        }
    } while (choice != 4);
    return 0;
}
