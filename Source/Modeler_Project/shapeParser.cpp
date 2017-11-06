#include <iostream>
#include "shape.h"
#include "vector.h"

vector<Shape> shapeParser()
{
    vector<Shape> shapes;
    vector<string> tempShape;
    string temp;
    char ptemp;
    ifstream shapeFile;
    shapeFile.open("shapes.txt");
    while(!shapeFile.eof())
    {
        getline(shapeFile,temp);
        while(temp != ' ' || temp != '\n')
        {
            int i = 0;
            while(temp[i] != ' ' || i < temp.size())
            {
                ++i;
            }
            tempShape.push_back(temp.substr(i+1,temp.size()));
            getline(shapeFile,temp);
        }
        temp = (tempShape.begin());
        switch(*(temp+1))
        {
        case "Line":
                    break;

        case "Polyline":
                    break;

        case "Polygon":
                    break;

        case "Recangle":
                    break;

        case "Square":
                    break;

        case "Ellipse":
                    break;

        case "Circle":
                    break;

        case "Text":
                    break;
        }
    }
}
