#include <iostream>
using namespace std;




int main() {
    int coef_colonne = 0;
    int coef_ligne = 0;

    int nb_colonne = 0;
    int nb_ligne = 0;
    int i = 0;
    int j = 0;

    cout << "choix du nombre de ligne : " << endl;
    cin >> nb_ligne;

    cout << "choix du nombre de colonne : " << endl;
    cin >> nb_colonne;

    int matricea[nb_ligne][nb_colonne];
    int matriceb[nb_ligne][nb_colonne];


    for(i = 0; i < nb_ligne; i++)
        for(j = 0; j < nb_colonne; j++)
        {
            cout << "Coefficient de la matrice a la ligne \n L = " << i << " ------ Colonne C = " << j << endl;
            cin >> matricea[i][j];
            cout << "A" << i + 1 << j + 1 << " = " << matricea[i][j] << endl;

        }

    for(i = 0; i < nb_ligne; i++)
        for(j = 0; j < nb_colonne; j++)
        {
            cout << "Coefficient de la matrice a la ligne \n L = " << i << " ------ Colonne C = " << j << endl;
            cin >> matriceb[i][j];
            cout << "B" << i + 1 << j + 1 << " = " << matriceb[i][j] << endl;

        }

    return 0;
}
