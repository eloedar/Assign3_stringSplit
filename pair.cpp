#include "pair.h"

#include <iostream>
#include <cstring>

using namespace std;

Pair *splitPair(string s, int &length)
{
    string str = s;
    int len = 0;
    static Pair *pair = new Pair;
    for (int i = 0 ;; i+=2) {
        if (str.length() >= 3)
        {
            Pair *pairTmp = new Pair;
            pairTmp->a = str[0];
            pairTmp->b = str[2];
            pair[i] = *pairTmp;
            len++;
        }
        if (str.length() >= 4)
        {
            Pair *pairTmp = new Pair;
            pairTmp->a = str[1];
            pairTmp->b = str[3];
            pair[i+1] = *pairTmp;
            len++;
        }
        if (str.length() < 4)
        {
            length = len;
            return pair;
        }
        else
        {
            str = str.substr(4);
        }
    }
}

void printPair(Pair *pair)
{
    cout << pair->a << " "
         << pair->b << endl;
}
