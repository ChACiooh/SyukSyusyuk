#include <cstdio>

using namespace std;

int main()
{
    FILE *ifp = fopen("Syuk.txt", "rt");
    FILE *ofp = fopen("result.txt", "wt");
    char read;
    char buf[] = "Hello, World!";
    char *bp = buf;
    printf("%cp:%p %s\n", '%', bp, bp);
    while(fscanf(ifp, "%c", &read) != EOF)
    {
        char flag = 0;
        switch(read) {
        case '>':
            bp++;
            flag = 1;
            break;
        case '<':
            bp--;
            flag = 1;
            break;
        case '+':
            (*bp)++;
            break;
        case '-':
            (*bp)--;
            break;
        case '.':
            fprintf(ofp, "%c", *bp);
            printf("printed:%c\n", *bp);
            break;
        case ',':
            *bp = read;
            break;
        case '[':
        case ']':   // skip
            break;
        default:
            break;
        }
        //if(flag)
            //printf("%cp:%p\n", '%', bp);
    }
    printf("final:\nbuf=[%s], bp=[%s]\n", buf, bp);
    fclose(ifp);    fclose(ofp);
    return 0;
}