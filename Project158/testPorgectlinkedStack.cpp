#include <iostream>
#include "linkedStack.h"
using namespace std;
void testCopy(linkedStackType<int> OStack);
int main()
{
    linkedStackType<int> stack;

    int num;

    stack.push(34);
    stack.push(43);
    stack.push(27);

    while (!stack.isEmptyStack())
    {
        stack.pop(num);
        cout << num << endl;
    }
    cout << endl;
    linkedStackType<int> otherStack;
    linkedStackType<int> newStack;
    newStack = stack;
    cout << "After the assignment operator, newStack: " << endl;
    while (!newStack.isEmptyStack())
    {
        newStack.pop(num);
        cout << num << endl;
    }
        otherStack = stack;
        cout << "Testing the copy constructor" << endl;
        testCopy(otherStack);
        cout << "After the copy costructor, otherStack: " << endl;

        while (!otherStack.isEmptyStack())
        {
            otherStack.pop(num);
            cout << num << endl;
        }
        system("pause");
        return 0;
}
    void testCopy(linkedStackType<int> OStack)
    {
        int num;
        cout << "stack in the function testcopy: " << endl;
        while (!OStack.isEmptyStack())
        {
            OStack.pop(num);
            cout << num << endl;
        }
    }
