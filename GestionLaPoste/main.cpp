#include <emballage.h>
using namespace std;

int main()
{
    /*Emballage colis1("xs",1,270,190);
    colis1.Visualiser();
    Emballage *pColis;
    pColis = new Emballage("xl",2,383,106,425);
    pColis->Visualiser();
    delete pColis;
    */
    Emballage *tabColis[5];
    string format;
    int hauteur,largeur,longueur,resistance;
    for (int i = 0; i < 2; ++i) {
        cout<< "Nom du format:";
        getline(cin,format);
        cout<<"Resistance:";
        cin>>resistance;
        cout<<"Largeur:";
        cin>>largeur;
        cout<<"Longueur:";
        cin>>longueur;
        cout<<"Hauteur:";
        cin>>hauteur;


        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        tabColis[i] = new Emballage(format,resistance,largeur,longueur,hauteur);


    }
    cout<< "+" <<setfill('-')<<setw(14)<< "+"<<setw(11)<<"+"<<setw(17)<<"+"<<endl;
    cout<< "|" <<setfill(' ')<<setw(13)<< left<<"Format"<< "|"<<"Resistance"<<setw(5)<< "| "<<"Dimensions "<<" |"<<endl;
    cout<< right<<"+" <<setfill('-')<<setw(14)<< "+"<<setw(11)<<"+"<<setw(17)<<"+"<<endl;
    for (int var = 0; var < 2; ++var) {
        tabColis[var]->Visualiser();
    }
cout<< "+" <<setfill('-')<<setw(14)<< "+"<<setw(11)<<"+"<<setw(17)<<"+"<<endl;
    if (*tabColis[0] < *tabColis[1]) {
    cout << "TabColis[0] est plus petit que tabColis[1]"<<endl;
                 }else
        cout << "TabColis[1] est plus petit que tabColis[0]"<<endl;

    return 0;
}
