#include <iostream>
using namespace std;

class NUM
{
private:
    int n;

public:
    // Function to get a number
    void getNum(int x)
    {
        n = x;
    }
    // Function to display the number
    void dispNum(void)
    {
        cout << "value of n is: " << n;
    }
    // Unary ++ operator overloading
    NUM operator++(void)
    {
        NUM temp;
        temp.n = ++n;
        return temp;
    }
    // Unary -- operator overloading
    NUM operator--(void)
    {
        NUM temp;
        temp.n = --n;
        return temp;
    }
};

int main()
{
    NUM num;
    num.getNum(10);

    NUM incremented = ++num;
    cout << "After increment - ";
    incremented.dispNum();
    cout << endl;

    NUM decremented = --num;
    cout << "After decrement - ";
    decremented.dispNum();
    cout << endl;
    return 0;
}
