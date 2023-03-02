#include "math2.h"
int binKoef(int m, int n) {
int rez = 1;
int i;
if (n < m -n)
for (i = 1; i <= n; ++i)
rez = rez * (m -n + i) / i;
else
for (i = 1; i <= m -n; ++i)
rez = rez * (n + i) / i;
return rez;
}