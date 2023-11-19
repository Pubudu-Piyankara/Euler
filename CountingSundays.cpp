#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string daysArr[] = {"Sunday", "Monday", "Tusday", "Wednesday", "Thursday", "Friday", "Saturday"};
    vector<string> daysVector(daysArr, daysArr + sizeof(daysArr) / sizeof(daysArr[0]));
    int startDayIndex = 2;
    int count =0;
    for (int year = 1901; year < 2001; year++)
    {
        if (year % 4 == 0)
        {
            if (startDayIndex==0)
            {
                count += 3;
            }
            else if (startDayIndex==1 || startDayIndex==3 || startDayIndex==4)
            {
                count += 2;
            }
            else{
                count++;
            } 
            startDayIndex = (startDayIndex + 2)% daysVector.size();
        }

        else
        {
            if (startDayIndex==4)
            {
                count += 3;
            }
            else if (startDayIndex==0 || startDayIndex==1 || startDayIndex==2)
            {
                count += 2;
            }
            else
            {
                count++;
            }
            
            startDayIndex = (startDayIndex + 1)% daysVector.size();
        }
        
        
    }
    
    cout << "Final count : " << count ;
    return 0;
}
