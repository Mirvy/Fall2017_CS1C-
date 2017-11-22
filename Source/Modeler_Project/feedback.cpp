#include "MainWindow.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;
using namespace ourList;

class ourList::list;
//Forward Declaration

//ReadFrom(): reads in user feedback from file
void ReadFrom(std::vector<ourList::list> &vec)
{
	ifstream inFile;
	inFile.open("text.txt");
	string str ="";
	int i=0;

	while(!inFile.eof())
	{
        ourList::list *list1 = new ourList::list;

		getline(inFile, str);
		getline(inFile, list1->name);
		getline(inFile, list1->feedback);

		vec.push_back(*list1);
		++i;
	}
    if(inFile.peek() == inFile.eof())
    {

    }
	inFile.close();
}

//WriteTo(): writes current user feedback to file
void WriteTo(std::vector<ourList::list> &vec)
{
	ofstream oFile;
	oFile.open("text.txt");

	for(unsigned int i=0; i<vec.size(); ++i)
	{
		oFile << '\n';
        oFile << vec[i].name << '\n';
        oFile << vec[i].feedback << '\n';
	}
	oFile.close();
}
