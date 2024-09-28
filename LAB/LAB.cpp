
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;

string* resize(string*, int);

int main()
{
	string localbname;
	int size = 0;
	string* localbusinesslist = new string[size];
	bool _continue = true;

	cout << "\nHello, this is your local business list probram" << endl;


	while (_continue)
	{

		cout << "\nType 'yes' to enter a business list:\nOr any other character to 'exit'" << endl;
		getline(cin, localbname);
		 if (localbname == "yes" || localbname == "YES" || localbname == "Y" || localbname == "y")
		{
			
			 cout << "Enter a local business name:" << endl;
			 getline(cin,localbname);

			localbusinesslist = resize(localbusinesslist, size);
			localbusinesslist[size] = localbname;
			size = size + 1;


		}
		 else {
				 _continue = false;
	      }
		


	}

	sort(localbusinesslist, localbusinesslist + size);

	cout << "\nPrinting everything in your local business list: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << localbusinesslist[i] << endl;
	}
	
	cout << "\n\nThank you for using the program!" << endl;
	cout << endl;
	

	delete[] localbusinesslist;

	return 0;
}

string* resize(string *_localbusinesslist, int size)
{
	string* new_business_array = new string[size + 1];

	
	for (int i = 0; i < size; i++)
	{
		new_business_array[i] = _localbusinesslist[i];
	}

	delete[] _localbusinesslist;


	return new_business_array;
}
