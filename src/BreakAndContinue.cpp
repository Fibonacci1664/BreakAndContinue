/*
 * BreakAndContinue.cpp
 *
 *  Created on: 28 May 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
//	for(int i = 0; i < 5; i ++)
//	{
//		cout << "i is: " << i << endl;
//
//		if(i == 3)
//		{
//			break;
//		}
//
//		cout << "Looping..." << endl;
//	}

//	for(int i = 0; i < 5; i ++)
//		{
//			cout << "i is: " << i << endl;
//
//			if(i == 3)
//			{
//				continue;		// Any code below will not be executed when i == 3.
//			}
//
//			cout << "Looping..." << endl;
//		}
//
//	cout << "Program quitting..." << endl;

	const string password = "Password";

		string input;

		do
		{
			cout << "Please enter your password:> " << flush;

			cin >> input;

			if(input == password)
			{
				break;
				cout << "Access denied!" << endl;
			}

		}
		while (true);

		cout << "Welcome" << endl;



	return 0;
}


