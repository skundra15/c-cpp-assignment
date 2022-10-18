#include <iostream>
using namespace std;
class classB;
class classA
{
private:
    double numA = 50.1;
friend class classB;

public:
    // classA():numA(12) {}
};

class classB
{

private:
    double numB = 40.69669;

public:
    // classB() : numB(1) {}

    int add()
    {

        classA objectA;

        return objectA.numA + numB;
    }
};

int main()

{

    classB objectB;

    cout << "sum: " << objectB.add();

    return 0;
}