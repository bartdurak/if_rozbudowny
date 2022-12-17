#include <iostream>

using namespace std;

//   if rozbudowany
int main() {
    int MetsScore, YankeesScore;
    cout << " Wpisz wynik dla Metsow";
    cin >> MetsScore;

    cout << "\nWpisz wynik dla Yankees: ";
    cin >> YankeesScore;

    cout << "\n";

    if (MetsScore > YankeesScore)
        cout << "Let`s Go Mets!\n";

    if (MetsScore < YankeesScore) {
        cout << "Go Yankees!\n";
    }

    if (MetsScore == YankeesScore) {
        cout << " Remis? ..\n";
        cout << " Podaj mi prawdziwy wynik dal Yanks: ";
        cin >> YankeesScore;

        if (MetsScore > YankeesScore)
            cout << "Wiedziałem Go Yanks! ";

        if (MetsScore < YankeesScore)

            cout << "Wiedziałem Go Yanks! ";
        {
            if (YankeesScore == MetsScore)
                cout << " Cóż , faktycznie remis";
        }
        cout << "dzięki za informacje. \n ";
        return 0;
    }}
