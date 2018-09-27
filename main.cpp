#include <iostream>


using namespace std;

int main()
{
    
    int x[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    
    
    for ( auto i : x )
    {
        if (i % 3 == 0)
        {
             if (i % 5 == 0)
                 cout << "threefive" << endl;
            else
                 cout << "three" << endl;
        }
        else if (i % 5 == 0)
            cout << "five" << endl;
        else
            cout << i << endl;
    }
    return 0;
}
