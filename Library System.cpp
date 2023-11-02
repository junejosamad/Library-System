#include<iostream>
#include<string>
using namespace std;
int main() {
	int option, issuedDateForReturn, returnDate;
	string bookIssue;
	cout << "Welcome to Bibliotheca Library" << endl;
	cout << "1. Borrow Books\n2. Return Books\n";
	cin >> option;
	if (option == 1) {
		
		cout << "Enter Book Name: ";
		cin >> bookIssue;
		cout << bookIssue << " book has been Issued for 7 Days";
	} 
	else if (option == 2) {
		string bookName;
		cout << "Book Name: ";
		cin >> bookName;
		cout << "Enter issued date ";
		cin >> issuedDateForReturn;
		cout << "Enter Return date ";
		cin >> returnDate;
		if ((returnDate - issuedDateForReturn) > 7) {
			
			int daysForMultiplication = (returnDate - issuedDateForReturn) - 7;
			daysForMultiplication * 1;
			cout << "Your Late fees is: " << daysForMultiplication << "$";
		}
		else {
			cout << "Book has been returned";
		}

	}
	else cout << "You have entered incorrect option";
	cout << endl;
	system("pause");
	return 0;
	
}