
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void fill(int lifeArray[][12], int generationArray[][12]);
void Check1(int lifeArray[][12], int generationArray[][12]);
void Check2(int lifeArray[][12], int generationArray[][12]);
void print1(int lifeArray[][12]);
void print2(int lifeArray[][12]);

const int ROWSIZE = 12, COLSIZE = 12;
int row, col;

int main()
{
    int lifeArray[ROWSIZE][COLSIZE], generationArray[ROWSIZE][COLSIZE];
    fill(lifeArray, generationArray);
    Check1(lifeArray, generationArray);
    print1(lifeArray);
	Check2(lifeArray, generationArray);
    print2(lifeArray);
    cout << "\n";
    system("PAUSE");
    return 0;
}
 
void fill(int lifeArray[][12], int generationArray[][12])
{  
    srand(time(0));
     
    for (row = 0; row < ROWSIZE; row++)
    {
        for (col = 0; col < COLSIZE; col++)
        {
            lifeArray[row][col] = rand() % 2;
            cout << setw(2) << lifeArray[row][col];
        }
        cout << endl;
    }
}

void Check1(int lifeArray[][12], int generationArray[][12])
{
    for(int row = 0; row < ROWSIZE; row++)
	{
    for(int col = 0; col < COLSIZE; col++)
    {
       int temp = 0;
       {
       if (lifeArray[row][col-1] = 'x')
       temp++;
       else
       if (lifeArray[row-1][col-1] = 'x')
       temp++;
       else
       if (lifeArray[row-1][col] = 'x')
       temp++;
       else
       if (lifeArray[row-1][col+1] = 'x')

       temp++;
       else
       if (lifeArray[row][col+1] = 'x')
       temp++;
       else
       if (lifeArray[row+1][col+1] = 'x')

       temp++;
       else
       if (lifeArray[row+1][col] = 'x')

       temp++;
       else
       if (lifeArray[row+1][col-1] = 'x')
       temp++;
     if(temp = 3)
         {
       generationArray[row][col] = 'x';
         }
         else
         {
       generationArray[row][col] = '.';
         }
       }
     } 
    }
    cout << endl;
}
 

void Check2(int lifeArray[][12], int generationArray[][12])
{
    for(row = 0; row < ROWSIZE; row++)

     {
        for(col = 0; col < COLSIZE; col++)
        {
           lifeArray[row][col] = generationArray[row][col];
        }
     }
    cout << endl;

}
 

void print1(int lifeArray[][12])
{

    for(row = 0; row < ROWSIZE; row++)

    {
       for(col = 0; col < COLSIZE; col++)     
	   {

          if(lifeArray[row][col] != 'x')
          {
             lifeArray[rand()%12][rand()%12] = 'x';
             lifeArray[row][col] = '.';
          }
       }
    }
}

void print2(int lifeArray[][12])
{
    for(row = 0; row < ROWSIZE; row++)
    {
       for(int col = 0; col < COLSIZE; col++)
       {
          cout << lifeArray[row][col];
       }

       cout << endl;

    }

}
