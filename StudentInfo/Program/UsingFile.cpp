#include<iostream>
#include<cstdio>
#include<stdlib.h>
using namespace std;
void readFile();
int main()
{
    char name[80], address[255];
    int roll;
    int garb;

    FILE *fp;
    fp = fopen("project.txt", "r");
    while(fgets(name, 80, fp) != NULL)
    {
        fscanf(fp, "%d", &roll);
        fgetc(fp);
        fgets(address, 255, fp);
        printf("1. %s2. %d\n3. %s\n", name, roll, address);
    }
    return 0;
}
