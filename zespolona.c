#include <stdio.h>

struct zespolona{
    double re;
    double im;
};
struct zespolona dodaj(struct zespolona x, struct zespolona y, struct zespolona *wynik )
{
    wynik->re=x.re+y.re;
    wynik->im=x.im+y.im;
}
int main() {
    struct zespolona a={1.3,4.2}, b={-8.2,2.6}, wynik;
    dodaj(a,b,&wynik);
    printf("a(%.2lf, %.2lf) + b(%.2lf, %.2lf)=w(%.2lf, %.2lf)\n",
           a.re,a.im,b.re,b.im,wynik.re,wynik.im);
    return 0;
}