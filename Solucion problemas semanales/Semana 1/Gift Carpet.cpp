#include <bits/stdc++.h>
using namespace std;

/*SOLUCION: Buscar columna por columna si existe primero la 'V' luego la 'I' y asi sucesivamente, 
si logramos encontrar todas las letras entonces es posible, en otro caso no.*/
int main(){
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    //ingreso numero de casos.
    int test_case;
    cin >> test_case;
    //iteracion por cada caso.
    while (test_case--)
    {
        //ingreso de datos.
        int n, m;
        cin >> n >> m;

        //ingreso matriz de datos.
        vector<vector<char>> letras(n,vector<char> (m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin >> letras[i][j];
            }
        }
       
        //creacion de variable auxilar para guardar la letra actual que estamos buscando.
        string nombre="vika";
        int posicion=0;

        //buscamos por columna la letra actual.
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                //en caso de coindicir con la letra que estamos buscandon entonces pasamos a buscar la siguiente.
                if(letras[j][i]==nombre[posicion])
                {
                    posicion++;
                    //cortamos la busqueda de la columna actual.
                    //ya que solo es posible tomar una letra por columna.
                    break;
                }
            }
            //en caso de haber encontrado todas las letras ya no seguimos buscando.
            if(posicion==4)
             break;
        }

        //si encontramos todas las letras imprimir YES, en otro caso NO
        if(posicion==4) cout << "YES\n";
        else cout <<"NO\n";
    }
    
    return 0;

}