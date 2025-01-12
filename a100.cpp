#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    for (int i = 0; i < 15; ++i) {
        cout << "Top element: " << myStack.top() <<endl;
        myStack.pop();
    }


    myStack.push("hello");

    return 0;
}
