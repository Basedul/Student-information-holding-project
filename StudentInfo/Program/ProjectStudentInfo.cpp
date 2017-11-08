///StudentInfoDatabase.............
/*Show the student database,
Edit the student database,
Searching */
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
#include<stdlib.h>
using namespace std;

void ShowStudentDatabase()
{
   ifstream in("StudentInfo.txt");
    if(!in)
    {
        cout << "No file " << endl;
    }
    else
    {

        string s[10];
        for(int i = 0; i < 10; i++)
        {
            getline(in, s[i]);
        }
        for(int i = 0; i < 10; i++)
        {
            cout << s[i] << endl << endl;
        }
        in.close();
    }
}

int main()
{
    cout << '\t' <<"............."<< "STUDENT INFO"<< "............." << endl << endl << endl;
    cout << '\t' << "1  ->  Show the Student Database " << endl << endl;
    cout << '\t' << "2  ->  Edit Student Database " << endl << endl;
    cout << '\t' << "3  ->  Search the Student Database " << endl << endl;
    cout << endl << endl << endl;

    int i;
    cout << "Enter 1, 2, 3 for your choice or you press others then exit it->";
    cin >> i;
    while(i == 1 || i == 2 || i == 3)
    {
       system("cls");
    switch(i)
    {
    case 1:
        cout << endl;
        ShowStudentDatabase();
        cout << endl;
        break;
    case 2:
        cout << endl;
        //EditStudentDatabase();
        cout << "Edited by basedul islam" << endl;
        cout << "coming soon updated" << endl;
        cout << endl;
        break;
    case 3:
        cout << endl;
        //searchStudentDatabase();
        cout << "Edited by basedul islam" << endl;
        cout << "coming soon updated" << endl;
        cout << endl;
        break;
    }
    cout << "Enter 1, 2, 3 for your choice or you press others then exit it->";
    cin >> i;
    }

    return 0;
}
