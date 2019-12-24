int main()
{
    int n, a = 0, b, c;
    

    printf("numar: ");
    scanf("%d", &n);
    c = n;
    
    while( n!=0 )
    {
        b = n%10;
        a = a*10 + b;
        n /= 10;
    }
    
    if (c == a)
        printf("%d e un palindrom.", c);
    else
        printf("%d nu e palindrom", c);
    
    return 0;
}