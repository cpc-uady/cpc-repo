#include <bits/stdc++.h>
using namespace std;

/*SOLUCION: Primero vemos que la minima suma que podemos obtener es la suma de los primero k numeros, es decir si k=5,
la minima suma que podemos obtener es 1+2+3+4+5. Ahora nos preguntamos cual es la máxima suma que podemos obtener? en este caso,
seria tomar los k numeros mas grandes, es decir si n=5 y k=3 tomariamos 5+4+3. Por lo tanto el numero x debera estar entre ese intervalo. 
La pregunta que surge es, podemos hallar una suma que de exactamente cualquier numero dentro de ese intervalo? La respuesta es si, podemos seguir la siguiente idea:
imagina que la suma minima es 1+2+3=6, si necesitamos sumar 7 podemos sumarle 1 al ultimo elemento de nuestra suma, es decir al 3. 
si necesitamos sumar 8 le sumamos 1 a los ultimos dos elementos de nuestra suma, es decir al 2 y al 3. con el 9 le sumamos 1 a lo ultimos 3 elementos de nuestra suma.
en el caso del 10, al no tener otro numero a cual sumaerle 1, empezamos de nuevo, es decir le sumamos 1 a cada elemento, excepto al ultimo que le sumaremos 2(1 primera vuelta y 1 segunda vuleta). 
Ahora el numero de vueltas que podamos hacer seria dependiendo del valor maximo de nuesta suma.(en  caso de no quedar claro, manden mensaje en el grupo para una mejor explicacion). 
Notemos que este algoritmo no lo tenemos que simular, ya que no nos piden los numeros, unicamente si es posible o no.
*/
int main(){
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    //Ingreso numero de casos.
    int test_case;
    cin >> test_case;

    //Iteracion por cada caso.
    while (test_case--)
    {
        //carga de datos
       long long n, k, x;
        cin >> n >> k >> x;

        //calculamos suma minima con gauss
        long long  suma_minima=k*(k+1)/2;
        //calculamos suma maxima (gauss de n - gauss de n-k) (<--- de esta forma nos quedan los ultimos k numeros en nuestra suma)
        long long suma_maxima=n*(n+1)/2-(n-k)*(n-k+1)/2;
        //revisamos si esta dentro del intervalo
        if(x>=suma_minima && x<=suma_maxima)
        {
            cout <<"YES\n";
        }
        else cout <<"NO\n";
    }

    
    return 0;

}