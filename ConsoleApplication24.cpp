
#include <iostream>
#include <conio.h>
using namespace std;

void print(int h,int r) {
    for (int i = 0; i < h; i++)
        cout << '\n';
    for (int i = 0; i < r; i++)
        cout << "  ";

    cout << "с новым годом!";
}
void zvezda(int h, int r, int size = 9) {
    for (int i = 0; i < h; i++)
        cout << '\n';
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < r; j++)
            cout << " ";
        for (int j = 0; j < size; j++)
            if (i == size / 2 || j == size / 2 || i == j || i + j == size - 1)
                cout << " *";
            else
                cout << " ";
        cout << endl;
    }


}

int main() {
    setlocale(0, "");
    int size = 9;
        int h = 0;
        int r = 0;
        while (true) {
            if (_kbhit()) {
                system("cls");
                char a = _getch();
                if (a == 'a') 
                    r--;
                if (a == 's')
                    h++;
                if (a == 'w')
                    h--;
                if (a == 'd')
                    r++;
                if (a == 'r')
                    cout << "\033[0;31;40m";
                if(a=='g')
                    cout << "\033[0;32;40m";
                if(a=='b')
                    cout << "\033[0;34;40m";
                if (a == 'q')
                    
                    break;
                zvezda(h, r,size);
            }
        }


       


    
}

