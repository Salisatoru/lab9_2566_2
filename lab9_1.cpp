#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double NewBalance, rpy, pyp;
	cout << "Enter initial loan: ";
	cin >> NewBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> rpy;
	cout << "Enter amount you can pay per year: ";
	cin >> pyp;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	int i=1;
	double Interest, Total;
	do{
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i;
		cout << setw(13) << left << NewBalance;
		Interest=NewBalance*rpy/100;
		cout << setw(13) << left << Interest;
		Total=NewBalance+Interest;
		cout << setw(13) << left << Total;
		if(Total>=pyp){
			cout << setw(13) << left << pyp;
		}else{
			cout << setw(13) << left << Total;
		}
		if(Total>=pyp){
			NewBalance=Total-pyp;
		}else{
			NewBalance=Total-Total;
		}
		cout << setw(13) << left << NewBalance;
		cout << "\n";	
		if(NewBalance==0) break;
		i++;
	}while (true) ;
	
	return 0;
}
