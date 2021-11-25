#define _XOPEN_SOURCE 500
#include <stdio.h>
#include <ftw.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

#define ARRAY_SIZE(arr) (sizeof((arr)) / sizeof((arr)[0]))

static char *str;
regex_t regex;
char re[250];

void search_for_regex(const char *fpath)
{
    regmatch_t pmatch[1];
    char string[250];
    FILE *fp = fopen(fpath, "r+")

    if(fp == NULL)
    {
        printf("Unable to open file\n");
    }

    while(fscanf(fp, "%s", string) == 1)
    {
        
    }
        if(regexec(&regex, re, ARRAY_SIZE(pmatch), pmatch, 0))
        {
            
        }
}

bool valid_answer(char *ans)
{
    return (*ans == 'Y' || *ans == 'y' || *ans == 'N' || *ans == 'n');
}

static int process_file(const char *fpath, const struct stat *sb,
                        int tflag, struct FTW *ftwbuf)
{
    search_for_regex(fpath);
    return 0;
}

int main(int argc, char **argv)
{
    int flags = 0;

    if(argc > 1)
    {
        printf("Argument passed to binary\n");
    }

    strcpy(re,"void");
    if(regcomp(&regex, re, 0))
    {
        printf("Unable to compile regex\n");
        exit(EXIT_FAILURE);
    }

    nftw("/home/blauer/farr/", display_test, 20, flags);
    printf("sizeof(bool): %ld\n",sizeof(bool));
    return 0;
}
