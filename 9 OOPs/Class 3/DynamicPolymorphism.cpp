#include <iostream>
using namespace std;

class animal
{
public:
    virtual void sound()
    {
        cout << "Animal creates sound." << endl;
    }

    virtual ~animal()
    {
        cout << "Animal dtor called." << endl;
    }
};

class Dog : public animal
{
public:
    void sound() override
    {
        cout << "Dog barks." << endl;
    }

    ~Dog() override
    {
        cout << "Dog dtor called." << endl;
    }
};

class Cat : public animal
{
public:
    void sound() override
    {
        cout << "Cat meows." << endl;
    }

    ~Cat() override
    {
        cout << "Cat dtor called." << endl;
    }
};

int main()
{
    animal *newanimal = new Dog();
    newanimal->sound(); // Output: Dog barks.

    newanimal = new Cat();
    newanimal->sound(); // Output: Cat meows.

    delete newanimal; // Clean up memory
    return 0;
}
