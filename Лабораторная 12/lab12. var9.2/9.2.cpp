#include <iostream>
#include <cstdlib>

    using namespace std;

    const int A = 10, B = 15;

    int main()
    {
        setlocale(LC_ALL, "RUS");
        int mass[A], mas[B], min;
        int b;
        int r;
        cout << "��������:  ";
        for (r = 0; r < A; r++)
        {
            mass[r] = rand() % 10;
            cout << mass[r] << " ";
        }
        cout << endl;


        min = mass[0];
        for (int r = 1; r < A; r++)
        {

            if (min > mass[r]) min = mass[r];
        }
        cout << "Min: " << min << endl;


       
        int tmp = 0;
        cout << "��������:  ";
        for ( b = 0; b < B; b++)        
        {
        mas[b] = rand() % 75 ;
        printf("%d ", mas[b]);
        cout << mas[b]  << " ";
        if (mas[b] == min)
            tmp++;
        }
          if (tmp > 0)
        printf("\n����������");
          else 
        printf("\n�� ����������");
          

    return 0;
}
      
    

   