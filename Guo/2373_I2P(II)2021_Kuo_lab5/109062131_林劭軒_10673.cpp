#include <bits/stdc++.h>
using namespace std;
int main() {
    string op;
    queue<string> que;
    while (cin >> op) {
        if (op == "Push") {
            string name;
            cin >> name;
            que.push(name);
        } else if (op == "Pop") {
            if (!que.empty()) que.pop();
        } else if (op == "Front") {
            if (que.empty())
                cout << "empty\n";
            else
                cout << que.front() << "\n";
        }
    }
}