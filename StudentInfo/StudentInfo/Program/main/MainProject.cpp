///StudentInfoDatabase.............
/*Show the student database,
Edit the student database,
Searching */
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<fstream>
using namespace std;
struct based
{
    string name;
    int roll;
    string address;
    struct based *next;
};
int count(based **h1)
{
    int c = 0;
    based *t;
    t = *h1;
    while(t != NULL)
    {
      c++;
      t = t->next;
    }
    return c;
}
void traverse(based *he)
{
    ofstream out("Project.txt");
    based *temp;
    temp = he;
    system("color a");
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
            if(!out)
            {
                cout << "File Not Opened" << endl;
            }
            else
            {
            out << "Name -> " << temp->name << " " << "Roll -> " << temp->roll << " "
            << "Address -> " << temp->address << endl;
            }
            temp = temp->next;
        }
        cout << "\n\nPlease See the File" << endl;
    }

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
void InsertNthPosition(based **hen, string nan, int ron, string addn, int l)
{
    based *newnodent, *tempn;
    newnodent = new based;
    newnodent->name = nan;
    newnodent->roll = ron;
    newnodent->address = addn;
    newnodent->next = *hen;
    if(l == 1)
    {
        newnodent->next = *hen;
        *hen = newnodent;
        return;
    }
    tempn = *hen;
    for(int i = 0; i < l - 2; i++)
    {
        tempn = tempn->next;
    }
    newnodent->next = tempn->next;
    tempn->next = newnodent;
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
    if(*he == NULL)
    {
        cout << "Node is empty " << endl;
    }
    else
    {
        t = *he;
        *he = (*he)->next;
        free((t));
    }
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
void deleteNthPosition(based **hd, int ld)
{
    based *temp;
    temp = new based;
    temp = *hd;
    if(ld == 1)
    {
        *hd = temp -> next;
        free(temp);
        return;
    }
    for(int i = 1; i <= ld -2 ; i++)
    {
        temp = temp->next;
    }
    based *t;
    t = temp->next;
    temp->next = t ->next;
    free(t);
}
void UpdateByName(based **h2, string nam)
{
    based *t;
    t = *h2;
    string nam1;
    cout << "Enter Your Updating Name ->";
    getline(cin, nam1);
    while(t != NULL)
    {
        if(t->name == nam)
        {
            t->name = nam1;
            break;
        }
        t = t ->next;
    }
}
void UpdateByRoll(based **h2, int Roll)
{
    based *t;
    t = *h2;
    int Rol;
    fflush(stdin);
    cout << "Enter Your Updating Roll ->";
    //getline(cin, Rol);
    cin >> Rol;
    while(t != NULL)
    {
        if(t->roll == Roll)
        {
            t->roll = Rol;
            break;
        }
        t = t ->next;
    }
}
void UpdateByAddress(based **h2, string add)
{
    based *t;
    t = *h2;
    string addd;
    cout << "Enter Your Updating Address ->";
    getline(cin, addd);
    while(t != NULL)
    {
        if(t->address == add)
        {
            t->address = addd;
            break;
        }
        t = t ->next;
    }
}
void MainMenu()
{
   system("color b");
   cout << '\t' <<"............."<< "STUDENT INFO"<< "............." << endl << endl << endl;
   cout << '\t' << "1  ->  Show the Student Database " << endl << endl;
   cout << '\t' << "2  ->  Edit Student Database " << endl << endl;
   cout << '\t' << "3  ->  Update by name, roll and address " << endl << endl;
   cout << endl << endl << endl;
}
void MainMenu2()
{
   system("color c");
   cout << '\t' << "----------"<< "SELECT YOUR OPERATION" <<"----------" << endl << endl;
   cout << '\t' << "1  ->  Insert in First position " << endl << endl;
   cout << '\t' << "2  ->  Insert in Last position " << endl << endl;
   cout << '\t' << "3  ->  Delete First position " << endl << endl;
   cout << '\t' << "4  ->  Delete Last position " << endl << endl;
   cout << '\t' << "5  ->  Insert in Nth position " << endl << endl;
   cout << '\t' << "6  ->  Delete Nth position " << endl << endl;
   cout << endl << endl;
}
void MainMenu3()
{
   system("color d");
   cout << '\t' << "----------"<< "SELECT YOUR OPERATION" <<"----------" << endl << endl;
   cout << '\t' << "1  ->  Update by name " << endl << endl;
   cout << '\t' << "2  ->  Update by roll " << endl << endl;
   cout << '\t' << "3  ->  Update by address " << endl << endl;
   cout << endl << endl;
}
void Menu()
{
    based *a, *b, *c, *head, *temp;
    a = new based;
    b = new based;
    c = new based;

    system("color e");
    cout << "Given Name for a -> ";
    getline(cin, a->name);
    cout << "Given Roll for a -> ";
    cin >> a->roll;
    fflush(stdin);
    cout << "Given Address for a -> ";
    getline(cin, a->address);
    fflush(stdin);
    cout << "Given Name for b -> ";
    getline(cin, b->name);
    cout << "Given Roll for b -> ";
    cin >> b->roll;
    fflush(stdin);
    cout << "Given Address for b -> ";
    getline(cin, b->address);
    fflush(stdin);
    cout << "Given Name for c -> ";
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
    string nra;
    based:

    cout << "Enter your choise and press 1, 2, 3, and exit program press 10" << endl;
    getline(cin, nra);
    int val;
    while(1)
    {
        val = atoi(nra.c_str());
        if(val == 10)
        {
            exit(10);
        }
        if(val == 1 || val == 2 || val == 3)
        {
            switch(val)
        {
        case 1:
            {
                cout << endl;
                system("cls");
                traverse(head);
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                MainMenu();
            }
            break;
        case 2:
            {
                string opa;
                system("cls");
                based1:
                MainMenu2();
                cout << "Enter your choice ->1, 2, 3, 4, 5, 6  -> and press 10 for Main menu->" << endl;
                getline(cin, opa);
                int j, vopa;
                vopa = atoi(opa.c_str());
                j = vopa;
                if(j == 10)
                {
                    system("cls");
                    MainMenu();
                    goto based;
                }
                switch(j)
                {

                    case 1:
                    {
                        int r;
                        string s1, add1;
                        fflush(stdin);
                        system("cls");
                        cout << "Enter name for 1stnewnode -> ";
                        cout << endl;
                        getline(cin, s1);
                        cout << "Enter Roll for 1stnewnode -> ";
                        cout << endl;
                        cin >> r;
                        fflush(stdin);
                        cout << "Enter address for 1stnewnode -> ";
                        cout << endl;
                        getline(cin, add1);
                        fflush(stdin);
                        system("cls");
                        insertin1stNode(&head, s1, r, add1);
                        MainMenu();
                    }
                    break;

                    case 2:
                    {
                        int r1;
                        string s2, add2;
                        system("cls");
                        cout << "Enter name for LastNewnode -> ";
                        cout << endl;
                        fflush(stdin);
                        getline(cin, s2);
                        cout << "Enter Roll for LastNode ->";
                        cout << endl;
                        cin >> r1;
                        fflush(stdin);
                        cout << "Enter name for LastNewnode -> ";
                        cout << endl;
                        getline(cin, add2);
                        fflush(stdin);
                        system("cls");
                        InsertInLastNode(&head, s2, r1, add2);
                        MainMenu();
                    }
                    break;

                    case 3:
                    {
                        delete1stNode(&head);
                        system("cls");
                        MainMenu();
                    }
                    break;
                    case 4:
                    {
                        deleteLast(&head);
                        system("cls");
                        MainMenu();
                    }
                    break;
                    case 5:
                        {
                           string name, address, locat;
                           int roll, loca;
                           system("cls");
                           cout << "Enter name->";
                           getline(cin, name);
                           cout << "Enter Roll->";
                           cin >> roll;
                           fflush(stdin);
                           cout << "Enter Address -> ";
                           getline(cin, address);
                           cout << "Enter location ->";
                           based2:
                           getline(cin, locat);
                           loca = atoi(locat.c_str());
                           if(loca >=1 && loca <= count(&head))
                            {
                                fflush(stdin);
                                system("cls");
                                InsertNthPosition(&head, name, roll, address, loca);
                                MainMenu();
                            }
                            else
                            {
                                system("cls");
                                cout << "Invalid location " << endl << endl;
                                cout << "ReEnter location ->";
                                goto based2;
                            }
                        }
                        break;
                    case 6:
                        {
                           string locddd;
                           int locd;
                           fflush(stdin);
                           system("cls");
                           cout << "Enter location ->";
                           based3:
                           getline(cin, locddd);
                           locd = atoi(locddd.c_str());
                           if(locd >=1 && locd <= count(&head))
                            {
                                fflush(stdin);
                                system("cls");
                                deleteNthPosition(&head, locd);
                                MainMenu();
                            }
                            else
                            {
                                system("cls");
                                cout << "Invalid location " << endl << endl;
                                cout << "ReEnter location ->";
                                goto based3;
                            }
                        }
                        break;
                    default:
                    {
                        cout << "\a";
                        system("cls");
                        goto based1;
                    }
                    break;
                }
                break;
            }
            break;
        case 3:
            {
                string opa;
                system("cls");
                based10:
                MainMenu3();
                cout << "Enter your choice ->1, 2, 3  -> and press 10 for Main menu->" << endl;
                getline(cin, opa);
                int j, vopa;
                vopa = atoi(opa.c_str());
                j = vopa;
                if(j == 10)
                {
                    system("cls");
                    MainMenu();
                    goto based;
                }
                switch(j)
                {
                    case 1:
                        {
                            string name;
                            system("cls");
                            fflush(stdin);
                            cout << "Enter Name -> ";
                            getline(cin, name);
                            UpdateByName(&head, name);
                            fflush(stdin);
                            system("cls");
                            MainMenu();
                        }
                        break;
                        case 2:
                        {
                            //string ro;
                            int ro;
                            system("cls");
                            fflush(stdin);
                            cout << "Enter roll -> ";
                            //getline(cin, ro);
                            cin >> ro;
                            UpdateByRoll(&head, ro);
                            fflush(stdin);
                            system("cls");
                            MainMenu();
                        }
                        break;
                        case 3:
                        {
                            string addres;
                            system("cls");
                            fflush(stdin);
                            cout << "Enter address -> ";
                            getline(cin, addres);
                            UpdateByAddress(&head, addres);
                            fflush(stdin);
                            system("cls");
                            MainMenu();
                        }
                        break;
                    default:
                    {
                        printf("\a");
                        system("cls");
                        goto based10;
                    }
                    break;
                }
                break;
            }
            break;
        }
        }
        else{
        cout << endl;
        system("cls");
        printf("\a");
        //cout << "Wrong inforamtion " << endl << endl << endl;
        MainMenu();
        cout << endl;
        cout << endl;
        }
        cout << "Enter your choise and press 1, 2, 3, and exit program press 10" << endl;
        getline(cin, nra);
        val = atoi(nra.c_str());
        if(val == 10)
        {
            exit(10);
        }
    }

}
int main()
{
    Menu();
    return 0;
}

