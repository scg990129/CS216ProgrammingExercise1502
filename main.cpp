#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

using namespace std;

void printRow(const int& , int );

int main() {
    int rowNumber;
    cin >> rowNumber;
    printRow(rowNumber+1, 0);

    return 0;
}

void printRow(const int& rowNumber, int currentRow){
    if(currentRow > rowNumber*2){
        return;
    }

    cout << setw(abs(rowNumber - currentRow)+2);
    for(int i = 0; i < rowNumber - abs(rowNumber - currentRow); i++)
        cout << "* ";
//    cout << abs(rowNumber - currentRow)
    cout << endl;

    printRow(rowNumber, currentRow + 1);
}

//5
//printf("     * \n"
//"    * * \n"
//"   * * * \n"
//"  * * * * \n"
//" * * * * * \n"
//"* * * * * * \n"
//" * * * * * \n"
//"  * * * * \n"
//"   * * * \n"
//"    * * \n"
//"     * \n");