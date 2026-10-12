#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> history;

    history.push("google.com");
    history.push("youtube.com");
    history.push("abcsc.com");
    history.push("facebook.com");

    // Press Back twice
    history.pop();
    history.pop();

    if (!history.empty()) {
        cout << "Current page: " << history.top() << endl;
    } else {
        cout << "No pages in history." << endl;
    }

    return 0;
}
