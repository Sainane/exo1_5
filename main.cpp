#include <iostream>
using namespace  std;

int main() {
    double distance(0);
    double prixTrain(0);
    double consoVoiture(0);
    double prixEssence(0);
    double prixAmortissement(0);

    cout << "Distance : ";
    cin >> distance;
    cout << "Prix du billet de train : ";
    cin >> prixTrain;
    cout << "Consommation de la voiture en L par 100 Km : ";
    cin >> consoVoiture;
    cout << "Prix de l'essence en CHF/L : ";
    cin >> prixEssence;
    cout << "Prix de l'amortissement de la voiture en CHF/Km : ";
    cin >> prixAmortissement;

    double prixTrajetVoiture = distance*consoVoiture/100*(prixEssence+prixEssence);
    double prixTrajetTrain =prixTrain;
    if(prixTrajetTrain < prixTrajetVoiture) {
        cout << "Le trajet en train est moins cher" << endl;
    } else if(prixTrajetTrain > prixTrajetVoiture) {
        cout << "Le trajet en voiture est moins cher" << endl;
    } else {
        cout << "Le trajet coûte la même chose en voiture ou en train" << endl;
    }
    return 0;
}
