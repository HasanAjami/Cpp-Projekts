#include <iostream>
using namespace std;

void calc(int r12, int r34)
{
    
    int rnum = r12 * r34;
    int rden = r12 + r34;
    
    int rtotal = (rnum + (rden - 1)) / (rden);
    
    cout << rtotal;
}

int main ()
{
    cout << "Please enter R1, R2, R3 and R4" << endl;
    int R1, R2, R3, R4;
    cin >> R1 >> R2 >> R3 >> R4;
    int R12 = R1 + R2;
    int R34 = R3 + R4;

    calc(R12, R34);  

  return 0;
}





