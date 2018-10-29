int a, b, c;
float m, n;
int ar[1];
char d;
string g;

struct ts
{
int a;
char b;
float c;
string d;
};
// 斐波拉契
int fibo(int a)
{
    if (a == 1 || a == 2)
        return 1;
    return fibo(a - 1) + fibo(a - 2);
}


/* 主函数 */
int main()
{
    int m, n, i;
    char hello;
    string hello2;

    m = read();
    hello = 'a';
    hello2 = "dasfa";
    i = 1;
    while (i <= m)
    {
        n = fibo(i);
        write(n);
        i++;
    }

    for (i = 1; i <= m; i = i + 1)
    {
        i = i + 1;
    }
    i += 1;

    return 1;
}
