#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

string readFile(string filename)
{
    ifstream input (filename);
    ostringstream output;
    string str = "";
    if(!input.is_open())
        return str;
    else 
    {
        while (!input.eof())
        {
            getline(input, str);
            output << str << endl;
        }
        str = output.str();
        return str;
    }

    input.close();
}

string extractParagraphs(string content)
{
    int index1, index2;
    ostringstream paragraph;
    index1 = content.find("<p>");
    index2 = content.find("</p>");
    
    while(index1 != -1)
    {
        paragraph << content.substr(index1 + 3, index2 - index1 - 3) << '\n' << '\n';
        index1 = content.find("<p>", index1 + 3);
        index2 = content.find("</p>", index2 + 4);
    }
    return paragraph.str();
}

string removeTags(string content)
{
    int index1, index2;
    index1 = content.find("<");
    index2 = content.find(">");
    
    while(index1 != -1)
    {
        content.erase(index1,index2 - index1 + 1);
        index1 = content.find("<");
        index2 = content.find(">");
    }
    return content;
}

int main()
{
    string str;
    str = readFile("schools.html");
    str = extractParagraphs(str);
    str = removeTags(str);
    cout << str;

    return 0;
}