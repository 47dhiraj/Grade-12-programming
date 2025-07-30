// Helloworld program in c++

#include <iostream>			// iostream header file is include to import all I/O stream library like cin, cout, endl, ws, cerr, clog, flush etc

using namespace std;		// to use all features from standard library without needing to type std::  each time (for eg: To use only cout, instead of std::cout )


// main() is the entry point of every c++ program
// int is the return type of main() function (which means, it return integer value to the OS, when the execution of program finishes.)

int main(){
	
	cout << "\n" << "Hello World !" << "\n";
	
	// cin.get();			// to hold the console screen until one key is pressed
	return 0;				// return 0; means, it tells the OS, that program executed successfully !!
}




// Alternative way:

//int main(){

//	cout << "\nHello World !" << endl;

//	cin.get();

//	// return 0; 			// return 0; is optional in latest c++ compiler version

//}



// IMP. NOTES


// iostream is a header file to be used on top of c++ program.
// iostream header file is include on top, to use Input/Output (I/O) stream classes and functions provided by C++ Standard Library, like:

// 1. cout --> for Console Output
// 2. cin --> for Console Input
// 3.cerr --> for Error Output
// 4.clog --> for Log Output



// to use all features from standard library without needing to type std::  each time (for eg: To use only cout, instead of std::cout )

