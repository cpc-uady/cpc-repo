#include <bits/stdc++.h>
using namespace std;

/*SOLUCION: Dividamos el problema en dos posibles escenarios. Primero si la llave se encuentra antes que el cofre,
podemos simplemente tomar la llave hasta llegar al cofre y abrirlo, por lo tanto la respuesta seria el distancia de la posicion 0 (donde iniciamos)
a la posicion inicial del cofre.El segundo escenario es cuando el cofre se encuentra antes que la llave, lo que podemos hacer es acercar el cofre lo maximo que podamos a la llave,
por lo tanto la respuesta seria, la distancia de 0 a la llave + la distancia que tendriamos que volver una vez con la llave hacia donde acercamos el cofre. 
*/
int main(){
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    //Ingreso numero de casos.
    int test_case;
    cin >> test_case;

    //Iteracion por cada caso.
    while (test_case--)
    {
       //Cargamos datos 
       int pos_cofre, pos_llave, resistencia;
        cin >> pos_cofre >> pos_llave >> resistencia;

        //primer escenario donde la llave se encuentra antes.
        if(pos_cofre>pos_llave)
        {
            //solo necesitamos cargar la llave hasta donde esta el cofre.
            cout << pos_cofre<<"\n";
        }
        else
        {
            //primero es obvio que necesitamos buscar la llave, pero en el transcurso de ida podemos hacercar el cofre lo mas posible
            int ans=pos_llave;
            //la funcion minimo nos ayuda a que no nos pasemos de acercar el cofre, como maximo lo acercamos a la casilla donde se encuentra la llave
            int nueva_pos_cofre=min(pos_llave,pos_cofre+resistencia);
            //le sumamos a nuesta respuesta la cantidad de casillas que necesitamos volver para llegar al cofre
            ans+=pos_llave-nueva_pos_cofre;
            //imprimimos resultado
            cout << ans <<"\n";
        }

    }
    
    return 0;

}