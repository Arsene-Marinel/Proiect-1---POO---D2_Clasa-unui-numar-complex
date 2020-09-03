/**
D2 Clasa pentru numar complex, avand:
- membrii privati pentru partea reala si partea imaginara (double);
- constructori pentru initializare si copiere;
- metode publice pentru setat/furnizat partea reala si partea imaginara;
- metoda publica pentru citire;
- metoda publica de afisare (sub forma "a", "i*a", "-i*a", "a+i*b", "a-i*b", dupa caz);
- operatori friend: + (adunare), +(numarul insusi), - (scadere), - (opus), * (inmultire), / (impartire),
      +=, -=, *=, /= (cu efectul cunoscut), ^ (ridicare la putere naturala), == (test de egalitate), != (test de neegalitate);
      operatorii binari +, -, *, /, ==, != se scriu in cate trei variante, pentru a putea lucra cu operanzi complex-complex, double-complex, complex-double;
      operatorii +=, -=, *=, /= se scriu in doua variante, pentru a putea lucra cu operanzi complex-complex, complex-double.
- functii friend: "abs" (furnizeaza modulul), "sqrt" (furnizeaza radicalul de ordinul doi).
Program de rezolvare a ecuatiei de ordinul doi cu coeficienti complecsi.
Pentru clasa "complex" se va scrie un fisier header si un fisier de implementare.
Programul se va scrie ca un project.
*/

#include <iostream>
#include <Complex.h>
using namespace std;

int main()
{
    Complex a, b(2, 0), c(-1, -2), *v;
    citire(v);
    cout << '\n';
    cin >> a;
    c = a * b;
    Complex d(0, 2);
    cout << c << d;
    a += b;
    cout << a;
    ecuatie(a, b, c, v);
    cout << v[0] << v[1];
    return 0;
}
