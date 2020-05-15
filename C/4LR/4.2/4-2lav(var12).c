#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

#define MAXLINE  200  
#define MAXWORD  50

char mytolower(char a) {
    if (a >= 'A' && a <= 'Z') {
        a += 32;
    }
    return a;
}

int mystrlen(char s[])
{
    int i = 0;
    while (s[i++]);
    return --i;
}
char* mystrcpy(char* des, char* src) {

    char* tem = des;
    while (*tem++ = *src++);
    return des;
}
int mystrcmp(const char* a, const char* b) {
    while (*a && *b && *a == *b)
        ++a, ++b;
    return *a - *b;
}
char* reverse(char s[])
{
    char* p, * q;
    int c;

    p = q = s;
    while (*q)
        q++;
    for (q--; p < q; p++, q--)
        c = *p, * p = *q, * q = c;
    return s;
}
int sentencePalindrome(char* str) {
    int l = 0, h = mystrlen(str);

    for (int i = 0; i < h; i++)
        str[i] = mytolower(str[i]);

    while (l <= h) {

        if (!(str[l] >= 'a' && str[l] <= 'z'))
            l++;

        else if (!(str[h] >= 'a' && str[h] <= 'z'))
            h--;

        else if (str[l] == str[h])
            l++, h--;
        else
            return 0;
    }
    return 1;
}
main()
{
   
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    FILE* ifp, * ofp;
    char* reverse(char[]);
   char line[MAXLINE],
        word[MAXWORD],
        tmp[MAXWORD], 
        * p;
    int nc;
    const char* ifname = "file.txt",
        * ofname = "result.txt";
  
    if ((ifp = fopen(ifname, "r")) == NULL || (ofp = fopen(ofname, "w")) == NULL) {
        printf("can't open file");
        return 1;
    }

    while ((p = fgets(line, MAXLINE, ifp)) != NULL) {
        
        mytolower(p);
        if (sentencePalindrome(p) == 1) {
            fprintf(ofp, "%s\n", p); continue;
        }
        else  {
             if (p[0] == '\n' || (p[0] == '\r' && p[1] == '\n'))
               break;
            while (sscanf(p, "%s%n", word, &nc) == 1) {
                p += nc;
                mystrcpy(tmp, word);
                if (mystrcmp(word, reverse(tmp)) == 0 && mystrlen(word) > 1)
                    fprintf(ofp, "%s\n", word);
            }
        }
    }
    fclose(ifp);
    fclose(ofp);
    return 0;
}



