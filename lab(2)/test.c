int a, b, c;
float m, n;
int ar[10];
char d;

// 斐波拉契
int fibo(int  a)
{   
    int qu ;
    if (a == 1 || a == 2)
        return 1;
    return fibo(a - 1) + fibo(a - 2);
}


/* 主函数 */
int main()
{ 
    int m, n, i;
    char hello;
    m = read();
    while (hello)
    {
        n = fibo(m);
        write(n);
        i++;
    }
    return 1;
}
