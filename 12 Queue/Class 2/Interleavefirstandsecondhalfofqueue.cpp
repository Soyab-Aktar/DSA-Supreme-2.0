#include <iostream>
#include <queue>
using namespace std;

void interleave(queue<int> &first)
{
    queue<int> second;

    // Push first half of q in second q
    int size = first.size();
    for (int i = 0; i < size / 2; i++)
    {
        int temp = first.front();
        first.pop();
        second.push(temp);
    }

    // Merge both into orginal queue-> first
    for (int i = 0; i < size / 2; i++)
    {
        int temp = second.front();
        second.pop();

        first.push(temp);
        temp = first.front();
        first.pop();
        first.push(temp);
    }
}

void display(queue<int> &first)
{
    while (!first.empty())
    {
        int element = first.front();
        first.pop();
        cout << element << " ";
    }
}

int main()
{
    queue<int> first;

    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    first.push(50);
    first.push(60);
    first.push(70);
    first.push(80);

    interleave(first);
    display(first);
}