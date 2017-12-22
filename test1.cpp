#include <iostream>
#include <string>
#include <string.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
int main()
{
    string s;
    int count = 0;
    scanf("%[^\n]s",s);
    int i, l;
    l=s.length();
    for(i=0;i<l;i++)
    {
	printf("%c\n",s.at(i));
        if(s.at(i) ==' ' || s.at(i)=='\t')
            count++;
    }
    cout << count << endl;
    return 0;
}
