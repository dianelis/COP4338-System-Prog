#include<stdio.h>

/**
 *  question 1)
 **/
# if 0
int strlen(char *str);
void reverse(char* str) {
    if (strlen(str) == 0)
        return;
    reverse(str+1);
    putchar(*str); // print the initial letter
}

main() {
    reverse("hello world!");
}
#endif

/**
 *  question 2)
 **/

/**
 * a)
 * output: infinite odd numbers and n
 *         501n = -13583503n = -13583505n = -13583507n = -13583509n
**/
# if 0
int main()
{
    int n;
    for(n = 7; n!=0; n--)
        printf("n = %d", n--); getchar();
    return 0;
}
#endif

/**
 * b)
 * output: %s Hello World!  Hello World!
**/
# if 0
#define scanf "%s Hello World! "
main()
{
    printf(scanf, scanf); getchar();
    return 0;
}
#endif

/**
 * c)
 * output: 1
**/
//# if 0
int main()
{
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
        if(i < 15)
            continue;
    } while (0);

    getchar();
    return 0;
}
//#endif

/**
 * d)
 * output: Nice test for strings
**/
# if 0
char *getString() {
    char *str = "Nice test for strings";
    return str; }
int main() {
    printf("%s", getString()); getchar();
    return 0;
}
#endif

/**
 * e)
 * output: returns garbage since it's stored in the stack
**/
# if 0
char *getString() {
    char str[] = "Will I be printed?";
    return str;
}
int main() {
    printf("%s", getString());
    getchar();
}
#endif

/**
 * f)
 * output: 0 0 0 0
**/
# if 0
int main() {
    static int i=5; if(--i){
        main();
        printf("%d ",i);
    }
}
#endif

/**
 * g)
 * output: 5 4 3 2 1
**/
# if 0
int main() {
    static int var = 5; printf("%d ",var--); if(var)
        main();
}
#endif

/**
 * h)
 * output: 16  21
**/
# if 0
int main()
{
    int i=0;
    for(i=0; i<20; i++) {
        switch(i) {
            case 0: i+=5;
            case 1: i+=2;
            case 5: i+=5;
            default: i+=4;
                break; }
        printf("%d  ", i);
    }
    getchar();
    return 0;
}
#endif

/**
 * i)
 * output: 24653632
**/
# if 0
int main()
{
    printf("%d", main); getchar();
    return 0;
}
#endif

/**
 * j)
 * output: error: use of undeclared identifier
 *         func, anotherfunc
**/
# if 0
struct {
    char *name;
    int (*funcptr)();
}
        symtab[] = {
        "func", func, "anotherfunc", anotherfunc,
};
int main() {
    printf("%s",(symtab+1)->name); getchar();
    return 0;
}
#endif

/**
 * k)
 * output: i = 1
 *         i = 3
**/
# if 0
int main()
{
    int i;
    i = 1, 2, 3;
    printf("i = %d\n", i);
    i = (1, 2, 3);
    printf("i = %d\n", i); getchar();
    return 0;
}
#endif

/**
 * l)
 * output: 110 /* And this? */
 /*
**/
# if 0
int main()
{
    int first = 50, second = 60, third;
    third = first /* Will this comment work? */ + second;
    printf("%d /* And this? */ \n", third);

    getchar();
    return 0;
}
#endif

/**
 * m)
 * output: syntax err
 *         Can't init vars when also initializing
 *         the structure for the first time
**/
# if 0
int main()
{
    struct site
    {
        char name[] = "Hello World!";
        int no_of_pages = 200;
    };
    struct site *ptr;
    printf("%d",ptr->no_of_pages);
    printf("%s",ptr->name);
    getchar();
    return 0;
}
#endif

/**
 * n)
 * output: make C great!
**/
# if 0
int main() {
    char a[2][3][3] = {'m','a','k','e',' ','C',' ', 'g','r','e','a','t','!'};
    printf("%s ", **a);
    getchar();
    return 0;
}
#endif

/**
 * o)
 * output: xaisa
 *         minute!!
**/
# if 0
int main() {
    char str[]= "waita\nminute!!";
    char *ptr1, *ptr2;
    ptr1 = &str[3];
    ptr2 = str + 5;
    printf("%c", ++*str - --*ptr1 + *ptr2 + 2);
    printf("%s", str);
    getchar();
    return 0;
}
#endif

/**
 * p)
 * output: 120
**/
# if 0
int fun(int n)
{
    int i, j, sum = 0;
    for(i = 1;i<=n;i++)
        for(j=i;j<=i;j++)
            sum=sum+j;
    return(sum);
}

int main() {
    printf("%d", fun(15)); getchar();
    return 0;
}
#endif

/**
 * q)
 * output: Process finished with exit code 136 (interrupted by signal 8: SIGFPE)
**/
# if 0
int main()
{
    int c = 5, no = 1000;
    do {
        no /= c;
    } while (c--);
    printf ("%d\n", no);
    return 0;
}
#endif

/**
 * r)
 * output: 1233
 * note: code doesn't reach out return 0; line
**/
# if 0
int main() {
    while (1) {
        if (printf("%d", printf("%d", 123)))
            break;
        else
            continue;
        return 0;
    }
}
#endif

/**
 * s)
 * output:
 *        -377144624 0
 *        -403449136 0
 *        -529388848 0
 *        -338986288 0
**/
# if 0
int main()
{
    int x,y=2,z,a;
    if( x = y%2)
        z =2;
    a=2;
    printf("%d %d ",z,x);
    return 0;
}
#endif

/**
 * t)
 * output: 10
**/
# if 0
#define prod(a,b) a*b
int main()
{
    int x=3,y=4;
    printf("%d",prod(x+2,y-1));
    return 0;
}
#endif

/**
 * u)
 * output: 4
**/
# if 0
int main() {
    int a[10]; printf("%d",*a+1-*a+3); return 0;
}
#endif
