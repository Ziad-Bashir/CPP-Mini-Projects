#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int data[50] = {};
int n = 10;

cout << "Enter 50 Numbers: \n";
for(int i = 0; i < n; i++)
{
    cin >> data[i];
}
int MaxNum = data[0];
int MinNum = data[0];

for(int i = 0; i < n; i++)
{
    if(data[i] > MaxNum)
    {
        MaxNum = data[i];
    }

    if(data[i] < MinNum)
    {
        MinNum = data[i];
    }
}
    int range = MaxNum - MinNum;
    cout << "Max = " << MaxNum <<"\n";
    cout << "Min = " << MinNum <<"\n";
    cout << "Range = " << range <<"\n";

    int k = 7;
    int w = ceil((range + 1.0) / k);

    int lower[k];
    int upper[k];
    float mid[k];

    int L = MinNum;
    for(int i = 0; i < k; i++)
    {
        lower[i] = L;
        upper[i] = L + w;
        mid[i] = (lower[i] + upper[i]) / 2.0;
        L = upper[i];
    }
    for(int i = 0; i < k; i++)
    {
        cout << lower[i] << " - " << upper[i] << " | Mid: " << mid[i] << "\n";
    }
    int freq[k];
    for(int i = 0; i < k; i++)
    {
        freq[i] = 0;
        for(int j = 0; j < n; j++)
        {
            if(data[j] >= lower[i] && data[j] < upper[i])
            {
                freq[i]++;
            }
        }
    } 

cout << "\n=======================================================\n";
cout << "Class Range\t\tMid-Point\tFrequency\n";
cout << "-------------------------------------------------------\n";

for(int i = 0; i < k; i++)
{
    cout << lower[i] << " - " << upper[i] << "\t\t" 
            << mid[i] << "\t\t" 
            << freq[i] << "\n";
}
cout << "=======================================================\n";

cout << "\n--- Frequency Polygon Coordinates (X, Y) ---" << endl;

cout << "(" << mid[0] - w << " , 0)" << endl;

for(int i = 0; i < k; i++) {
    cout << "(" << mid[i] << " , " << freq[i] << ")" << endl;
}

cout << "(" << mid[k-1] + w << " , 0)" << endl;

    return 0; 
}