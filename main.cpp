// ********************************************************* 
// Course: TCP1101 PROGRAMMING FUNDAMENTALS 
// Year: Trimester 1, 2022/23 (T2215) 
// Lab: TT2L 
// Names: Sharleen Ravi Mahendra | Nor Aliah Syuhaidah binti Sharuddin | Nur Farah Nabila binti Ramzairi
// IDs: 1211102087 | 1211102031 | 1221301140
// Emails: 1211102087@student.mmu.edu.my | 1211102031@student.mmu.edu.my | 1221301140@student.mmu.edu.my
// Phones: 010-8032495 | 018-7611854 | 012-6510599
// *********************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{ 
    int ROWS, ROW, COLS, COL, ZOMS, ZOM;
    char o;

    cout << " Default Game Setting " ;
    cout << " \n_______________________" ;
    cout << "\n\nBoard Rows : 5 " ;
    cout << "\nBoard Columns : 9 " ;
    cout << "\nZombie Count : 1 " ;

    cout << "\n\nDo you wish to change the game settings (y/n)? : " ;
    cin >> o ;

    if ( o=='y' || o=='Y' )
    {
   	 cout << "\n\n Board Settings " ;
   	 cout << " \n_____________________" ;
     cout << "\n\nEnter Rows : " ;
   	 cin >> ROW ;
     cout << "Enter Columns : " ;
     cin >> COL ;
   	 cout << "\n\n Zombie Settings " ;
   	 cout << " \n_____________________" ;
   	 cout << "\n\nEnter Zombies : " ;
   	 cin >> ZOM ;
    
    ROWS = ROW;
    COLS = COL;
    ZOMS = ZOM;
	}
	
	else if ( o=='n' || o=='N' )
	{
		cout << "\n\n Default Game Setting " ;
   		cout << " \n_______________________" ;
    	cout << "\n\nBoard Rows : 5 " ;
    	cout << "\nBoard Columns : 9 " ;
    	cout << "\nZombie Count : 1 " ;
		
		ROWS = 5;
		COLS = 9;
		ZOMS = 1;
	}
	
	else
	{
		cout << " Error! Please insert only y/n to continue ." ;
	}
	
	cout << "\n\nSettings Updated." ;
	cout << " \n\nPress any key to continue . . . . " ;
	
	cin.ignore ();
	cin.ignore ();
	system ("cls");
	
	char gameBoard[ROWS][COLS];
	
	cout << " .:|  Alien VS Zombies  |:." << endl << endl ;
	
	for (int i = 0; i < ROWS; i++) 
	{
        for (int j = 0; j < COLS; j++) 
		{
            gameBoard[i][j] = '|';
        }
    }
    
    for (int i = 0; i < ROWS; i++) 
	{
        for (int j = 0; j < COLS; j++) 
		{
            cout << gameBoard[i][j] << " ";
        }
        cout << endl;
    } 
    

	
	
}