#include <iostream>
using namespace std;


class Shop                          // Shop class
{
    int itemId[100];                // itemId chai array ho
    int itemPrice[100];             // itemPrice pani auta rray ho
    int counter;

    public:                         // publice access modifiers
        // intiCounter() function definition
        void initCounter(void)      // paramater void vannale, this function receives no parameter
        { 
            counter = 0;            // counter lai initialize gareko i.e 0 (khas yo kaam pachi constructor batw garincha, just ahile basic class & obj bujda kheri jasari gare pani  vayo)
        }
        void setPrice(void);
        void displayPrice(void);
};


// setPrice() function definition
void Shop ::setPrice(void)          // Syntax for definition function ==> type Class:functionname()
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];                     // jati id input garcha user le, tyo id yo cin ma aaucha & itemId array ma halincha

    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];                  // jati price input garcha user le, tyo id yo cin ma aaucha & itemPrice array ma halincha

    counter++;
}


// displayPrice() function defintion
void Shop ::displayPrice(void)      // Syntax for definition function ==> type Class:functionname()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}


int main()                              // main() executable function // entry point of program
{
    Shop dukaan;                        // dukan vanni Shop object create gareko

    // calling all function for/using dukaan object
    dukaan.initCounter();               
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();


    return 0;
}
