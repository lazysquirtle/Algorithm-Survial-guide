#include <iostream>

using namespace std;

unsigned hanoi(unsigned n, char from, char to, char other){
    if (n == 1){
        cout << "move " << n << " from " << from << " to " << to << endl;
        return 1;
    }
    else{
        //n-1 plates from a to b
        unsigned step1 = hanoi(n-1, from, other, to);
        //biggest plate from a to c
        unsigned step2 = 1;
        cout << "move " << n << " from " << from << " to " << to << endl;
        //n-1 plates from b to c
        unsigned step3 = hanoi(n-1, other, to, from);
        return step1 + step2 + step3;
        
    }
}

int main()
{
    unsigned int n;
    cout << "enter n :" << endl;
    cin  >> n;
    unsigned int steps = hanoi(n, 'A', 'B', 'C');
    cout << "Steps : " << steps << endl;

    return 0;
}
