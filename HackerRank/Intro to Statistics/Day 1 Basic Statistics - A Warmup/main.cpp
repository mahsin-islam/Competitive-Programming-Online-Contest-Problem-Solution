#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void median(int array[], int size){
    //CALCULATE THE MEDIAN (middle number)
    if(size % 2 != 0){// is the number of elements odd?
        int temp = ((size+1)/2)-1;
        cout << array[temp] << endl;
    }
    else{// then it's even!
        cout<< float(array[(size/2)-1] + array[size/2])/2 << endl;
    }
}

float standard_deviation(int array[], int size, float mean)
{
    float sum_deviation=0.0;
    int i;
    for(i=0; i < size;++i)
        sum_deviation+=(array[i]-mean)*(array[i]-mean);
    return sqrt(sum_deviation/size);
}

int mode(int array[], int size)
{
        int counter = 1;
        int max = 0;
        int mode = array[0];
        for (int pass = 0; pass < size - 1; pass++)
        {
           if ( array[pass] == array[pass+1] )
           {
              counter++;
              if ( counter > max )
              {
                  max = counter;
                  mode = array[pass];
              }
           } else
              counter = 1; // reset counter.
        }
    return mode;
   // cout << mode << endl;
}
int main()
{
    int array[100001],n,i;
    float total;
    float sum = 0.0;

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
        sum += array[i];
    }

    float mean = sum / n;
    printf("%.1f\n",mean);
    sort(array, array + n);
    median(array, n);
    int m = mode(array, n);
    cout << m << endl;
    float sd = standard_deviation(array, n, mean);
    cout << sd << endl;

    return 0;
}
