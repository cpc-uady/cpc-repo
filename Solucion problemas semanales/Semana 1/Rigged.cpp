#include <bits/stdc++.h>
using namespace std;

/*SOLUCION: Ponemos como limite el peso maximo que puede cargar el primer atleta, asi evitamos que entre gente menos fuerte y posiblemente ganen,
luego revisamos si la resistencia del primer atleta es la mayor absoluta de todos los demas atletas que puedan competir, en caso de que si, imprimimos el peso
maximo del atleta 1, en caso de no, imprimimos -1.
*/
int main(){
    ios_base::sync_with_stdio(0); cout.tie(0); cin.tie(0);
    //Ingreso numero de casos.
    int test_case;
    cin >> test_case;

    //Iteracion por cada caso.
    while (test_case--)
    {
        //Ingreso de datos.
        int n;
        cin >> n;
        //varibale para guarda datos de los atletas.
        int fuerza_atleta, resistencia_atleta;

        //varibles guardar datos del atleta 1.
        int fuerza_atleta1, resistencia_atleta1;

        //varible donde se guardara nuestra respuesta.
        int ans;
        for(int i=0;i<n;i++)
        {
            //en caso de ser el primer atleta guardamos en sus respectivas variables
            if(i==0)
            {
                cin >> fuerza_atleta1 >> resistencia_atleta1;
                //por el momento guardamos la respuesta posible como el peso que puede levantar nuestro atleta
                ans=fuerza_atleta1;
            }
            //en otro caso cargamos datos y lo comparamos con el atleta1
            else 
            {
                cin >> fuerza_atleta >> resistencia_atleta;

                //en caso de tener la fuerza necesaria para 
                if(fuerza_atleta>=fuerza_atleta1)
                {
                    //en caso de que el participante supere o iguale la resistencia de nuestro atleta 1, entonces o habra empate o habra derrota
                    //en ambos casos, el atleta 1 ya no podra ser ganador y cambiamos nuestra respuesta.
                    if(resistencia_atleta1<=resistencia_atleta) ans=-1;
                }

            }
        }

        //Imprimimos la respuesta encontrada:
        cout << ans <<"\n";

    }
    
    return 0;

}