///StudentInfoDatabase.............
/*Show the student database,
Edit the student database,
Searching */
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
struct based
{
    string name;
    int roll;
    string address;
    struct based *next;
};
void traverse(based *he)
{
    based *temp; int c = 0;
    temp = he;

    if(temp == NULL)
    {
        cout << "Link not possible " << endl;
    }
    else
    {
        while(temp != NULL)
        {
            cout << "Name -> " << temp->name << " " << "Roll -> " << temp->roll << " "
            << "Address -> " << temp->address << endl;
            c++;
            temp = temp->next;
        }
    }
    cout << "TotalNodeIs->" << c << endl;
}
void insertin1stNode(based **h,string s, int ro, string ad1)
{
    based *newnode;
    newnode = new based;
    newnode->name = s;
    newnode->roll = ro;
    newnode->address = ad1;
    newnode->next = *h;
    *h = newnode;
}
void InsertInLastNode(based **he1,string t, int ro1, string ad2)
{
    based *temp1, *newnode1;
    newnode1 = new based;
    newnode1->name = t;
    newnode1->roll = ro1;
    newnode1->address = ad2;
    temp1 = *he1;
    if(temp1 == NULL)
    {
        *he1 = newnode1;
        newnode1->next = NULL;
    }
    else
    {
        while(temp1->next != NULL)
        {
            temp1 = temp1 -> next;
        }
        temp1 ->next = newnode1;
        newnode1->next = NULL;
    }

}

void delete1stNode(based **he)
{
    based *t;
    t = *he;
    *he = (*he)->next;
    free((t));
}
void deleteLast(based ** hef)
{
    based *t5;
    t5 = *hef;
    if(t5 == NULL)
    {
        cout << "Empty Node " << endl;
    }
    else if(t5->next== NULL)
    {
        free(t5);
        t5 = NULL;
    }
    else
    {
        while(t5->next->next != NULL)
        {
            t5 = t5->next;
        }
        free(t5->next->next);
        t5->next = NULL;

    }
}
void MainMenu()
{
   cout << '\t' <<"............."<< "STUDENT INFO"<< "............." << endl << endl << endl;
   cout << '\t' << "1  ->  Show the Student Database " << endl << endl;
   cout << '\t' << "2  ->  Edit Student Database " << endl << endl;
   cout << '\t' << "3  ->  Search the Student Database " << endl << endl;
   cout << endl << endl << endl;
}
void MainMenu2()
{
   cout << '\t' << "1  ->  Insert in First position " << endl << endl;
   cout << '\t' << "2  ->  Insert in Last position " << endl << endl;
   cout << '\t' << "3  ->  Delete First position " << endl << endl;
   cout << '\t' << "3  ->  Delete Last position " << endl << endl;
   cout << endl << endl;
}
void Menu()
{
    based *a, *b, *c, *head, *temp;
    a = new based;
    b = new based;
    c = new based;

    cout << "Given String for a -> ";
    getline(cin, a->name);
    cout << "Given Roll for a -> ";
    cin >> a->roll;
    fflush(stdin);
    cout << "Given Address for a -> ";
    getline(cin, a->address);
    fflush(stdin);
    cout << "Given String for b -> ";
    getline(cin, b->name);
    cout << "Given Roll for b -> ";
    cin >> b->roll;
    fflush(stdin);
    cout << "Given Address for b -> ";
    getline(cin, b->address);
    fflush(stdin);
    cout << "Given String for c -> ";
    getline(cin, c->name);
    cout << "Given Roll for c -> ";
    cin >> c->roll;
    fflush(stdin);
    cout << "Given Address for c -> ";
    getline(cin, c->address);
    fflush(stdin);

    head = a;
    a->next = b;
    b->next = c;
    c->next = NULL;
    system("cls");
    MainMenu();
    int i;
    cout << "Enter your choice so press 1, 2, 3 and exit pogram press 0 ->";
    cin >> i;
    while(i)
    {
      if(i == 1 || i == 2 || i == 3)
    {
    while(i == 1 || i == 2 || i == 3)
    {
    system("cls");
    switch(i)
    {
    case 1:
        cout << endl;
        traverse(head);
        cout << endl;
        break;
    case 2:
//        int j;
//        system("cls");
//        MainMenu2();
//        cout << "Enter your choice ->5, 6, 7, 8 ->" << endl;
//        cin >> j;
//        if(j == 1 || j == 2 || j == 3 || j == 4)
//        {
//            while(j == 1 || j == 2 || j == 3 || j == 4)
//            {
//                switch(j)
//                {
//                case 1:
//                    int r;
//                    string s1, add1;
//                    fflush(stdin);
//                    cout << "Enter name for 1stnewnode -> ";
//                    cout << endl;
//                    getline(cin, s1);
//                    cout << "Enter Roll for 1stnewnode -> ";
//                    cout << endl;
//                    cin >> r;
//                    fflush(stdin);
//                    cout << "Enter address for 1stnewnode -> ";
//                    cout << endl;
//                    getline(cin, add1);
//                    fflush(stdin);
//
//                    insertin1stNode(&head, s1, r, add1);
//
//                    break;
//                case 2:
//                    int r1;
//                    string s2, add2;
//                    cout << "Enter name for LastNewnode -> ";
//                    cout << endl;
//                    getline(cin, s2);
//                    cout << "Enter Roll for LastNode ->";
//                    cout << endl;
//                    cin >> r1;
//                    fflush(stdin);
//                    cout << "Enter name for LastNewnode -> ";
//                    cout << endl;
//                    getline(cin, add2);
//                    fflush(stdin);
//
//                    InsertInLastNode(&head, s2, r1, add2);
//                    break;
//                case 3:
//                    delete1stNode(&head);
//                    break;
//                case 4:
//                    deleteLast(&head);
//                    break;
//                }
//            }
//        }
//        else
//        {
//
//        }
        cout << "This case number 2 " << endl;
        break;
    case 3:
        cout << endl;
        cout << "Edited by basedul islam" << endl;
        cout << "coming soon updated" << endl;
        cout << endl;
        break;
    }
    cout << "Enter your choice so press 1, 2, 3 and exit pogram press 0 ->";
    cin >> i;
       }
    }
    else if(i != 1 || i != 2 || i != 3)///character use krle program exit na kre bolbe j wrong information....aita korse na
    {
        cout << endl;
        system("cls");
        cout << "Wrong inforamtion " << endl << endl << endl;
        MainMenu();
        cout << "Enter your choice so press 1, 2, 3 and exit pogram press 0 ->";
        cin >> i;
    }
    }
}
int main()
{
    Menu();
    return 0;
}

