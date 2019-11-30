int poleKwadratu(int a)
{
    return a*a;
}

int potega(int n, int k)
{
    int wynik = 1;
    if (k==0)
        return 1;
    else
        for (int i=0; i<k; i++)
            wynik *= n;
    return wynik;
}
