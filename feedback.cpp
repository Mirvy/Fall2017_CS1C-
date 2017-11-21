#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

struct list
{
	string name;
	string feedback;
};

void WriteTo(vector <list>& vec);
void ReadFrom(vector <list>& vec);
void print(vector <list>& vec);

int main()
{
	vector <list> vec;
	//vector <int> vecInt;

	ReadFrom(vec);

	for(int i=0; i<2; ++i)
	{
		list *list1 = new list;
		cout << "Enter name: ";
		getline(cin, list1->name);

		cout << "Enter feedback: ";
		getline(cin, list1->feedback);
		vec.push_back(*list1);
		//vecInt.push_back(1);
	}

	print(vec);
	WriteTo(vec);
	return 0;
}


void WriteTo(vector <list>& vec)
{
	ofstream oFile;
	oFile.open("text.txt");


	string name = "A man with a mustache";
	string feedback = "im an oil man and this is my son H.W.";

	/*oFile << '\n';
	oFile << "User name: " << name;
	oFile << '\n';
	oFile << "User feedback: " << feedback;*/
	//getline(oFile, name);


	for(int i=0; i<vec.size(); ++i)
	{
		oFile << '\n';
		oFile << "User name: " << vec[i].name << '\n';
		oFile << "User feedback: " << vec[i].feedback<< '\n';
	}

	oFile.close();
}

void ReadFrom(vector <list>& vec)
{
	ifstream inFile;
	inFile.open("text.txt");
	string str;
	int i = 0;

	while(!inFile.eof())
	{
		list *list1 = new list;

		getline(inFile, str);

		getline(inFile, list1->name);
		getline(inFile, list1->feedback);

		vec.push_back(*list1);

		++i;
	}



	inFile.close();
}

void print(vector <list>& vec)
{
	for(int i = 0; i<vec.size(); ++i)
	{
		cout << endl;
		cout << vec[i].name << endl;
		cout << vec[i].feedback << endl;
	}
}
