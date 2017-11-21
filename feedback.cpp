#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

struct list
{
	string name;
	string feedback;
};

void ReadFrom(vector <list>&vec)
{
	ifstream inFile;
	inFile.open("text.txt");
	string str ="";
	int i=0;

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

void Print(vector <list>&vec)
{
	for(unsigned int i= 0; i < vec.size(); ++i)
	{
		cout << endl;
		cout << vec[i].name << endl;
		cout << vec[i].feedback << endl;
	}
}

string promptName()
{
	string name;
	cout << "Name: ";
	getline(cin, name);
	return name;
}

string promptFeedback()
{
	string feedback;
	cout << "Feedback: ";
	getline(cin, feedback);
	return feedback;
}

void GetInfo(vector <list>&vec)
{
	list *list1 = new list;
	string newName = promptName();
	string newFeedback = promptFeedback();

	list1->name = newName;
	list1->feedback = newFeedback;

	vec.push_back(*list1);
}

void WriteTo(vector <list>&vec)
{
	ofstream oFile;
	oFile.open("text.txt");

	for(unsigned int i=0; i<vec.size(); ++i)
	{
		oFile << '\n';
		oFile << "User name: " << vec[i].name << '\n';
		oFile << "User feedback: " << vec[i].feedback << '\n';
	}
	oFile.close();
}

int main()
{
	vector<list> vec;
	ifstream iFile;

	if(iFile.peek() != iFile.eof())
	{
		ReadFrom(vec);
	}

	GetInfo(vec);
	Print(vec);
	WriteTo(vec);
	return 0;
}
