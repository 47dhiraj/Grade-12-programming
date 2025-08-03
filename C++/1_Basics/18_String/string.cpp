#include <iostream>
using namespace std;

#include <cstring>


int main() {


    // Example 1: only get single word/string user input
    string firstName;
    string lastName;


    cout << "\nEnter your first name: "<<endl;
    cin >> firstName;                                   // cin enables only to get single word user input from the keyboard(i.e cin le whitespace vanda pachadi ko stirng/word lai lidaina)

    cout << "Enter your last name: "<<endl;
    cin >> lastName;   

    // // concatinating two string
    string fullName = firstName + " " + lastName;
    cout<<"\nyour full name is : "<<fullName<<endl;



    // Example 2 :
    string completeName;

    cout << "\nEnter your full name: "<<endl;
    getline(cin, completeName);                        // inbuilt getline() function is used to read line of text(i.e many string/words can be read)

    cout<<"\nyour full name is : "<<completeName<<endl;



    // Example 3 : finding the length of string
    cout<<"\n Lenght of your fullname is : " << completeName.size()<<endl;          // completeName.length() use garyo vani, whitespace lai pani count garcha,,, but size() le whitespace auto trim garera actual letter count garera length dincha


    // Example 4 : comparing two strings using .compare() inbuilt method
    string lowerCaseName = "dhiraj";
    string uppercaseName("Dhiraj");         // yesari pani string variable create garna sakincha

    int result = lowerCaseName.compare(uppercaseName);

    if (result == 0)
		cout << "\nBoth name are equal/same." << endl;
	else
		cout << "\nBoth name are not equal/same.\n";



    return 0;
}