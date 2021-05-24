#include <iostream>

using namespace std;

int main()
{
    struct bagaj
    {
        string lastName;
        int count;
        double weight;
    };

    int SIZE = 0;
    cout << "Vvedite kolichestvo bagajei: ";
    cin >> SIZE;

    bagaj* arrayBagaj = new bagaj[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Bagaj #" << i + 1 << endl;
        cout << "Last Name: ";
        cin >> arrayBagaj[i].lastName;
        cout << "Kolichestvo veschei: ";
        cin >> arrayBagaj[i].count;
        cout << "Obschii ves: ";
        cin >> arrayBagaj[i].weight;
    }

    cout << "---------------------------------------------------------" << endl;
    cout << "Bagaji:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Bagaj #" << i + 1 << endl;
        cout << "Familija: " << arrayBagaj[i].lastName << ", kolichestvo veschei: " << arrayBagaj[i].count << ", obschii ves: " << arrayBagaj[i].weight << endl;
        cout << "---------------------------------------------------------" << endl;
    }

    int max = 0;
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (count < arrayBagaj[i].count)
        {
            count = arrayBagaj[i].count;
            max = i;
        }
    }

    int kol = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arrayBagaj[max].weight > arrayBagaj[i].weight)
        {
            cout << "Bagajei po zaprosu netu" << endl;
            kol++;
        }
    }

    if (kol == 0)
        cout << "bagaj pod nomerom " << max + 1 << " podhodit pod vash zapros" << endl;

    delete arrayBagaj;
    return 0;
}