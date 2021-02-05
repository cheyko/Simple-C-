#include <iostream>
#include <string>

using namespace std;
 
int main()
{

    int countdown[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    cout << " \n \t\t\t Countdown  \n\n\n";
    
    for (int x = 0 ; x < 10; x++)
    {
        cout <<'\t' << countdown[9-x];
    }
    cout << "\n\n End \n\n";  
    return 0;
}
