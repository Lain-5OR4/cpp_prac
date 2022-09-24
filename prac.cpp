#include <iostream>
using namespace std;

int main(){
    int value[] = {-20, 10, 5, -40, 0, 10, -30};

    for (int elem : value)
    {
        if (elem < 0)
        {
            cout << "continue" << endl;
            continue;
        }
        if (elem == 0)
        {
            cout << "break" << endl;
            break;
        }
        cout << "elem: " << elem << endl;
    }
    cout << "ループ修了" << endl;
}