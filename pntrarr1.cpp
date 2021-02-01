#include<iostream>
using namespace std;

int main()
{
    string texts[3]={"one","two","three"};
    string *pTexts = texts;
    int i=0;

    string *pElem = texts;
    string *pEnd = &texts[2];
    //printf("%d %d",sizeof(texts),sizeof(string));
    // for(int i=0;i<3;i++)
    // {
    //     cout<<pTexts[i]<<endl;
    // }

    // for(int i=0;i<3;i++)
    // {
    //     cout<<*pTexts<<endl;
    //     pTexts++;
    // }

    for(int i=0;i<3;i++,pTexts++)
    {
        cout<<*pTexts<<endl;
    }
// 
    while(i>)
    {
        cout<<*pElem<<endl;
        if(pElem==pEnd)
        {
            break;
        }
        pElem++;
    }
    return 0;
}