#include <iostream>
using namespace std;
int main()
{
    class fruit
    {
    public:
        string color; // propertyname
        // property datatype
        string taste;
    };
    fruit apple; // object
    apple.color = "red";
    apple.taste = "sweet";
    cout << apple.color << " " << apple.taste << endl;

    class birds
    {
    public:
        string color;
        string name;
    };
    birds koyal;                 // object
    birds *parrot = new birds(); // allocates memory for a birds object using the new keyword and assigns the address of the allocated
    // memory to the pointer variable parrot. This creates a new instance of the birds class on the heap.
    parrot->color = "green";
    parrot->name = "parrot";
    cout << parrot->name << "-" << parrot->color << endl;

    class rectangle
    {
    public:
        int length;
        int breadth;

        rectangle() // default constructor(no arguments passed)
        {
            length = 2;
            breadth = 5;
        }
    };
    rectangle r;
    cout << r.length << "-" << r.breadth << endl;
    class square
    {
    public:
        int sides;

        square(int a) // parameterised constructor(arguments passed)
        {
            sides = a;
        }
    };
    square s(4);

    cout << s.sides << endl;
    // encapsulation in oops
    class a
    {
        int x;

    public:
        void set(int n)
        {
            x = n;
        }
        int get()
        {
            return x;
        }
    };
    a obj;
    obj.set(5);
    cout << obj.get() << endl;
    // function overloading
    class additionques
    {
    public:
        void add(int a, int b)
        {
            int sum = a + b;
            cout << sum << endl;
        }
        void add(int a, int b, int z)
        {
            int sum = a + b + z;
            cout << sum << endl;
        }
        void add(float x, float y)
        {
            float sum = x + y;
            cout << sum << endl;
        }
    };
    additionques ss;
    ss.add(2, 3);
    ss.add(6, 9, 8);
    ss.add(float(2.6), float(9.8));
   
}