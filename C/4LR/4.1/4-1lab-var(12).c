#include <stdio.h>

int mystrcmp(const char* a, const char* b) {
    while (*a && *b && *a == *b)
        ++a, ++b;
    return *a - *b;
}
char* mystrchr(const char* str, int c) {
    int i = 0;
    while (str[i] && str[i] != c) ++i;
    return c == str[i] ? (char*)str + i : NULL;
}
char* mystrtok(char* str, const char* delim)
{
    static char* last = 0;
    if (str) last = str;
    if ((last == 0) || (*last == 0)) return 0;
    char* c = last;
    while (mystrchr(delim, *c)) ++c;
    if (*c == 0) return 0;
    char* start = c;
    while (*c && (mystrchr(delim, *c) == 0)) ++c;
    if (*c == 0)
    {
        last = c;
        return start;
    }
    *c = 0;
    last = c + 1;
    return start;
}


struct Dictionary {
    int         val;
    const char* key;
    struct Dictionary* left, * right;
};

void add(struct Dictionary** root, const char* key) {

    while (*root) {
        int cmp = mystrcmp(key, (*root)->key);
        if (cmp == 0) {
            (*root)->val++;
            return;
        }
        if (cmp < 1) {
            root = &(*root)->left;
        }
        else {
            root = &(*root)->right;
        }
    }
    *root = (struct Dictionary*) malloc(sizeof(struct Dictionary));
    if (!*root) {
        exit(1);
    }
    (*root)->key = key;
    (*root)->val = 1;
    (*root)->left = (*root)->right = NULL;
}

void getInfo(struct Dictionary* root) {
    if (root) {
        getInfo(root->left);
        printf("%s --- %d\n", root->key, root->val);
        getInfo(root->right);
    }
}

int main() {
    const char* delim = " ,.:;!?*#@$%^&()";
    struct Dictionary* root = NULL;
    char* tok;
    char str[256];
    printf("input some text into our Dictionary \n");
    gets(str); 
    tok = mystrtok(str, delim);
    while (tok) {
        add(&root, tok);
        tok = mystrtok(NULL, delim);
    }
    printf("Dictionary consist of :\n\n\n");
    getInfo(root);
    putchar('\n');
    return 0;
}