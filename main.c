#define _XOPEN_SOURCE 500
#include <stdio.h>
#include <ftw.h>
#include <stdbool.h>

static char *str;



bool valid_answer(char ans) {
    return (ans == 'Y' || ans == 'y' || ans == 'N' || ans == 'n');
}

static int display_test(const char *fpath, const struct stat *sb,
                        int tflag, struct FTW *ftwbuf) {
    char ans;
/*    printf("%s\n\n",fpath);*/
/*    printf("Enter \'Y\' or \'N\' to replace\n");*/
    /*
    while(!valid_answer(ans)) {
        scanf("%c",&ans);
    }
    */
    return 0;
}

int main(int argc, char **argv) {
    int flags = 0;
    if(argc > 1) {
        printf("argc is greater than 1\n");
    }

    nftw("/home/blauer/farr/", display_test, 20, flags);
    printf("sizeof(bool): %ld\n",sizeof(bool));
    return 0;
}
