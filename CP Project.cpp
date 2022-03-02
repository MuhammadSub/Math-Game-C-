#include <iostream> 
#include <windows.h>
#include <cmath>
#include <time.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdio>
using namespace std;
int j;
int score(0);
string J;
int main() 
{ 
while (true)
{
j=0;
score=0; 
	{
	Beep(0,300);Beep(2000,100);
	cout<<"Computer Programming Project \n\t\t\t\tWelcome to";
	Beep(0,600);
	cout<<" MATHS Game Quiz ";
	cout<<"\n\n***********\n";
	Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,700);Beep(0,400);
	cout<<"\nPlease Enter your name : ";
	cin>>J;
	cout<<"\n\nHello "<<J<<" !\n\n";
	Beep(0,700);
	cout<<"\n***********\n\n";
	for (int a=5; a>0 ; a--)
	{
		cout<<"\r\t\t\tHey! "<<J<<" be ready to play the game:  "<<a;
    	Beep(2000,300);Beep(0,700);
	}
    cout<<"\r\n\n\t\t\t\t*********\n";
    Beep(0,500);
	}
	{
		cout << "Level 1 : *Adding Quiz*(Answer within 5 sec)\n\n ";
		Beep(0,4000);
		for ( int i=1; i<=5; i++)
		{
			srand(time(0));
			int A = rand()%10+1+10*(i-1);
			int B = rand()%10+1+10*(i-1);
			cout << "Question" << i << " ::  " << A << " + " << B << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 5)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "\n\nUnfortunately! You are not able to atttempt within due time";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>5)
				{
					cout << "\n\nUnfortunately! You are not able to atttempt within due time";
					j=2;
				}
    			else if ( numInput == A+B ) cout << "\nGreat! "<<J<< " you gave right answer\n\n";
    			else
				{
					cout << "\nOops Answer is wrong";
					j=2;
				}
			}
			if (j==2) break;
			{
				Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,700);Beep(0,400);
			}
			score+=10;
		}
	}
		for (int Y=1 ; j!=2 && Y!=2 ; Y++)
		{
		cout << "\nLevel 2 : *Subtracting Quiz*(Answer within 5 sec)\n";
		Beep(0,4000);
		for ( int i=1; i<=5; i++)
		{
			srand(time(0));
			int A,B;
			int H = rand()%100+1;
			int K = rand()%100+1;
			if (H>=K)
			{
			 A=H;
			 B=K;
			}
			else
			{
				A=K;
				B=H;
			}
			cout << "Question" << i << " ::  " << A << " - " << B << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 5)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "\n\nUnfortunately! You are not able to atttempt within due time";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>5)
				{
				cout << "\n\nUnfortunately! You are not able to atttempt within due time";
					j=2;
				}
    			else if ( numInput == A-B )cout << "\nGreat! "<<J<<" you gave the right answer\n\n";
    			else
				{
					cout << "\nOops Answer is wrong";
					j=2;
				}
			}
			if (j==2) break;
			{
				Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,700);Beep(0,400);
			}
			score+=10;
		}
		}
		for (int Y=1 ; j!=2 && Y!=2 ; Y++)
		{
		cout << "\nLEVEL 3 : *Multiplication Quiz*(Answer within 5 sec)\n";
		Beep(0,4000);
		for ( int i=1; i<=5; i++)
		{
			srand(time(0));
			int A = rand()%(5*i)+1;
			int B = rand()%(5*i)+1;
			cout << "Question" << i << " ::  " << A << " x " << B << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 5)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "\n\nUnfortunately! You are not able to atttempt within due time";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>5)
				{
					cout << "\n\nUnfortunately! You are not able to atttempt within due time";
					j=2;
				}
    			else if ( numInput == A*B ) cout << "\nGreat! "<<J<<" you gave the right answer\n\n";
    			else
				{
					cout << "\nOops Answer is wrong";
					j=2;
				}
			}
			if (j==2) break;
			{
				Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,700);Beep(0,400);
			}
			score+=10;
		}
		}
	for (int Y=1 ; j!=2 && Y!=2 ; Y++)
	{
		cout << "\nLevel  4 : *Final Question*(Answer within 10 sec)\n\n";
		Beep(0,4000);
			srand(time(0));
			int A = rand()%(10)+6;
			cout << "Final Question" << " ::  " << A << " + " << A << " x " << A << " = ";
			int numInput;
    		time_t start = time(0);
			int y=5;
    		while ( !kbhit() )
    		{
        		if (abs(time(0) - start) > 10)
				{
					j=1;
					break;
				}
    		}
    		if (j==1)
			{
				cout << "\n\nUnfortunately! You are not able to atttempt within due time";
				j=2;
 			}
			 else
			{
 				cin >> numInput;
				if ((time(0)-start)>10)
				{
					cout << "\n\nUnfortunately! You are not able to atttempt within due time";
					j=2;
				}
    			else if ( numInput == A+A*A ) cout << "\nGreat! "<<J<<" you gave the right answer\n\n";
    			else
				{
					cout << "\nOops Answer is wrong";
					j=2;
				}
			}
			if (j==2) break;
			{
				Beep(2000,100);Beep(1500,100);Beep(2000,100);Beep(1500,100);Beep(2000,700);Beep(0,400);
			}
			score+=10;
	}
	{
	if (j==2)
			{
				cout << "\n\nGame Over \n\n Your Score (( " << score << " ))\n\n";
				Beep(2000,300);Beep(1700,300);Beep(1400,300);Beep(1100,1000);	
			}
}
{
	string names[3], firstname, secondname, thirdname;
	int scores[3]; 
	int test,first(-1),second(-1),third(-1);
	
	ifstream xx;
	xx.open("Top.txt");
	for (int i=0; i<=2 ;i++)
	{
		xx >> names[i];
		xx >> scores[i];
	}
	cout << " -------Heighest Scores-------\n    Names      Scores\n";
		for (int h=0 ; h<=3 ; h++)
	{
		if (h==3) test = score;
		else test = scores[h];
		if ( test > first )
		{
			first = test;
			if (h==3) firstname = J;
			else firstname = names[h];
		}
	}
	for (int h=0 ; h<=3 ; h++)
	{
		if (h==3) test = score;
		else test = scores[h];
		if ( test > second && test != first )
		{
			second = test;
			if (h==3) secondname = J;
			else secondname = names[h];
		}
	}
	for (int h=0 ; h<=3 ; h++)
	{
		if (h==3) test = score;
		else test = scores[h];
		if ( test > third && test != first && test != second)
		{
			third = test;
			if (h==3) thirdname = J;
			else thirdname = names[h];
		}
	}
	xx.close();
	ofstream yy;
	yy.open("Top.txt");	
	yy << firstname << " " << first << " " << secondname << " " << second << " " << thirdname << " " << third;
	cout << setw(10) << firstname << setw(11) << first << endl;
	cout << setw(10) << secondname << setw(11) << second << endl;
	cout << setw(10) << thirdname << setw(11) << third << endl;
	}
cout << "\n\nNew Player Press First Alphabet of your name to play again : ";
while (true)
{
	if ( kbhit() )
	{
		cout << "\r";
		break;
	}
}
}
return 0;
}
