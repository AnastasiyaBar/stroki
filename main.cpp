#include <iostream>
using namespace std;
bool slog(char k,char glasnye[12]);
int numberslog(char str[100], int &n, char glasnye[12]);
void allslog(char str[100],int &n,char glasnye[12],int &sl1,int &sl2,int &sl3);
void input(char str[100]);
int main()
{
    char glasnye[12]={'a','e','y','u','i','o','A','E','Y','U','I','O'};
    char str[100];
    input(str);
    int sl1=0,sl2=0,sl3=0;
    int n=0;
    allslog(str,n,glasnye,sl1,sl2,sl3);
    cout << "Number of the words with one syllable: " << sl1 << endl;
    cout << "Number of the words with two syllables: " << sl2 << endl;
    cout << "Number of the words with three syllables: " << sl3 << endl;
    return 0;
}
bool slog(char k,char glasnye[12])
{
    for (int i=0; i<12; i++)
    {
        if (glasnye[i]==k)
        {
            return true;
        }
    }
    return false;
}
int numberslog(char str[100], int &n, char glasnye[12])
{
    int num=0;
    int i=n;
    while (str[i]!=' '&&str[i]!='\0')
    {
        char k=str[i];
        if (slog(k,glasnye))
        {
            num++;
        }
        i++;
        n++;
    }
    return num;
}
void allslog(char str[100],int &n,char glasnye[12],int &sl1,int &sl2,int &sl3)
{
    int i=0;
    while (str[i]!='\0')
    {
        int f=numberslog(str,n,glasnye);
        if (f==1)
        {
            sl1++;
        }
        if (f==2)
        {
            sl2++;
        }
        if (f==3)
        {
            sl3++;
        }
        f=0;
        i=n;
        n++;
    }
}
void input(char str[100])
{
    cout << "Enter text" << endl;
    cin.getline(str,100);
}
