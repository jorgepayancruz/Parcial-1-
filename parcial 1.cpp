//Sección A — Opción múltiple (10 × 3 pts = 30 pts) 
// 1) ¿Cuál declara y define una variable entera con valor 10? 
//• ( ) A) int x; x == 10; 
//• (X) B) int x = 10; 
//• ( ) C) int x( ); x = '10'; 
//• ( ) D) int x { "10" }; 2) 
//¿Qué imprime? std::cout << 7/2 << " " << 7/2.0; 
//• ( ) A) 3 3 
//• (X) B) 3 3.5 
//• ( ) C) 3.5 3.5 
//• ( ) D) 3 3.0 3) Con bool a=true, b=false; 
//¿Qué imprime? std::cout << (a&&b) << " " << (a||b) << " " << (!b); 
//• ( ) A) true true false 
//• ( ) B) 0 1 1 
//• ( ) C) 1 1 0 
//• (X) D) false true true	
//4) Dado int x=3; if (x=0) { ... } else { ... } 
//¿qué ocurre? 
//• ( ) A) Error de compilación por asignación en if. 
//• ( ) B) Entra al if siempre. 
//• (X) C) Entra al else porque el valor es 0 tras la asignación. 
//• ( ) D) Comportamiento indefinido. 
//5) do-while respecto a while: 
//• ( ) A) Nunca ejecuta si la condición es falsa. 
//• (X) B) Ejecuta al menos una vez. 
//• ( ) C) Ejecuta exactamente una vez. 
//• ( ) D) Es más rápido por definición. 
//6) ¿Cuál lee dos enteros separados por espacio? 
//• ( ) A) cin << a << b; 
//• ( ) B) cin >> a, b; 
//• (X) C) cin >> a >> b; 
//• ( ) D) cin (a, b);
//7) ¿Qué imprime? int a=5, b=2; std::cout << a + b*3 << '\n'; 
//• ( ) A) 11 
//• (X) B) 21 
//• ( ) C) 10 
//• ( ) D) 7 
//8) ¿Cuál firma pasa un entero por referencia? 
//• ( ) A) void f(int n&); 
//• (X) B) void f(int& n); 
//• ( ) C) void f(ref int n); 
//• ( ) D) int& f(int n); 
//9) ¿Qué hace continue en un for? 
//• ( ) A) Termina por completo el bucle. 
//• (X) B) Salta a la siguiente iteración. 
//• ( ) C) Reinicia el contador a 0. 
//• ( ) D) Salta dos iteraciones. 
//10) ¿Cuál condición es verdadera? 
//• (X) A) (3 == 3) && !(2 > 5) 
//• ( ) B) (3 = 3) || (2 < 1) 
//• ( ) C) !(3 == 3) || (2 > 5) 
//• ( ) D) (3 != 3) && (2 <= 5)
//Sección B — Predice la salida (5 × 6 pts = 30 pts) 
//Escribe exactamente lo que se imprime (respeta espacios y saltos de línea). 
//1)int a=5, b=2; 
// std::cout << a + b*3 << std::endl; 
//Respuesta: 11
//2) int n=0;
//while (n<3) {
 //std::cout << n << " ";
 //n++;
//}
//Respuesta: 0 1 2  
//3) int x=10; if (x%2==0) 
//std::cout << "par"; else 
//std::cout << "impar";
//Respuesta: par
//4) int i=3;
//do {
 //std::cout << i--;
//} while (i>0);
//Respuesta: 

//321
//5) int a=1;
//int b = (a++ > 1) ? 100 : 200;
//std::cout << a << " " << b;
//Respuesta: 2 200

//Sección C — Implementación de funciones (4 × 10 pts = 40 pts) 
//Programa solo las funciones pedidas. Puedes probar mentalmente con casos de ejemplo. 
//C1) Firma: int max3(int a, int b, int c); Devuelve el mayor de tres enteros usando if/else. a=7 b=3 c=2  devuelve 7
//C2) Firma: int sumaRango(int a, int b); Devuelve la suma de todos los enteros en [a, b] (se asume a <= b) usando un bucle. a = 1, b = 4 → 1 + 2 + 3 + 4 = 10
//C3) Firma: bool contieneDigito(int n, int d); Devuelve true si n (no negativo) contiene el dígito d (0–9). Usa operadores aritméticos. n = 4527, d = 5 → true 
//C4) Firma: void tablaMultiplicar(int n); Imprime la tabla de n del 1 al 10 con el formato exacto: n x i = resultado (un renglón por i)
//2 x 1= 2
//2 x 2 = 4 
//2 x 3 = 6 
//2 x 4 = 8 
//2 x 5 = 10 
//2 x 6 = 12 
//…..
//2 x 10 = 20

//Programas 
#include <iostream>
using namespace  std;

int main(){
    
int max3(int a, int b, int c); {
    int max;
    if (a > b && a > c)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;
    return max;
}

int sumaRango(int a, int b); {
    int suma = 0;
    for (int i = a; i <= b; i++) {
        suma += i;
    }
    return suma;
}

bool contieneDigito(int n, int d); {
    if (n == 0 && d == 0)
        return true;
    while (n > 0) {
        if (n % 10 == d)
            return true;
        n /= 10;
    }
    return false;
}

void tablaMultiplicar(int n); {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << (n * i) ;
    }
}
}
