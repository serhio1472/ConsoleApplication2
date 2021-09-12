#include <iostream>
#include <fstream>
#include <iomanip>
void Print();
int test();
using namespace std;
#define PATH "1text.txt"
#define PATH1 "datatype.txt"

int main()
{
    /*
    ios_base::in - читання
    ios_base::out - запис
    ios_base::ate - при відк. переміст. курсор в кінець ф-лу
    ios_base::app - відкр. для запису в кінець ф-лу
    ios_base::trunc - очищення вмісту ф-лу якщо він існує
    ios_base::binary
    */

    /*
    1 запис в файл (в кінець файлу)
    2 зчитування файлу

    3 додати запис в файл
        Антон - 3528

    */
    int temp = 0;
    while (true)
    {
        cout << "1 - start, 2- exit ";
        cin >> temp;
        if (temp==2)
        {
            system("exit 0");
        }
        else if(temp==1) {
            cout << "1 - add user, 2 - print all users ";
            temp = 0;
            cin >> temp;
            if (temp==1)
            {
                char buff[50];
                int value = 0;
                cout << " type name ";
                cin >> buff;
                cout << " type coins ";
                cin >> value;
                ofstream fout(PATH, ios_base::out | ios_base::app);
                fout << buff << " -" << setw(5) << value << endl;
                fout.close();
            }
            else if(temp == 2){
                ifstream fin(PATH);
                char buff[255];
                if (fin.is_open())
                {
                    while (fin.getline(buff, 255))
                    {
                        cout << buff << endl;
                    }
                }
                fin.close();
            }
        }
    }





    
    
    
    
    /*char buff[100];
    ifstream fin(PATH);
    if (fin.is_open())
    {
        fin.getline(buff, 100);
        cout << buff << endl;
    }
    else {
        cout << "wrong file" << endl;
    }

    fin.close();*/
    return 0;
}

int test() {
    return rand()%100 + 1;
}

