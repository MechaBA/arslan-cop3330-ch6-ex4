/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Berkay Arslan
 */

#include "std_lib_facilities.h"

class Name_value
{
public:
	string name;
	int score;
};

vector<Name_value>n;
void twice()
{
	int c=0;
	for(int i = 0; i < n.size; i++)
	{
		for(int j = i+1; j < (n.size()-i-1); j++)
	}
	if(n[i].name==n[j].name)
	{
		c++;
		break;
	}
}
c++;
break;
}
	}
	if(c!=0)
	{
		cout << "Invalid input (name entered twice)." << endl; //Invalid statement
		break;
	}
}
	cout << "Invalid input." << endl; //Invalid statement
}

void amount()
{
	cout << "\nName: " << n[i].name << "\nScore: " << n[i].value << endl; //Input name and Score
}

void total()
{
	Name_value n1;
	n1.name = "NoName 0";
	n1.score = 0;
	n.am(n1)
}

void addStudents()
{
	Name_value n1;
	cout << "Input name: " << endl;
	cin >> n1.name;
	cout << "Input score: " << endl;
	cin >> n1.score;
	n.am(n1)
}


int main() //Main function
{
	for(int i = 0;; i++)
	{
		int input
		char c;
		cout << "Enter student (1)." << endl; //Student identity
		cout << "Student total score (2)." << endl; //Amount total
		cout << "Student score (3)." << endl;
		cin >> input;
	}

	switch(input)
	{
		case 1:
		addStudents();
		break;
		
		case 2:
		amount();
		break;

		case 3:
		twice();
		break;
		
		default:
		cout << "Invalid."
		break;
	}
	cout << "Terminate program." << endl; //Program end
	break;
	return 0;
}