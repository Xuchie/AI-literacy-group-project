#include <stdio.h>
typedef struct
{
    int hour;
    int minute;
    int second;

} Time;

typedef struct
{
    char name[50];
    Time time;
} Attendence;

int compareTime(Time time1, Time time2)
{
    if (time1.hour != time2.hour)
    {
        return time1.hour > time2.hour ? 1 : -1; // if time1> time2 return 1 else return -1
    }
    if (time1.minute != time2.minute)
    { // its ternary operator
        return time1.minute > time2.minute ? 1 : -1;
    }
    if (time1.second != time2.second)
    {
        return time1.second > time2.second ? 1 : -1;
    }

    return 0;
}

Attendence getLatest(Attendence att[5])
{
    Attendence latest = att[0];
    for (int i = 0; i < 5; i++)
    {
        if (compareTime(att[i].time, latest.time) == 1)
        {
            latest = att[i];
        }
    }
    return latest;
}

int main()
{
    Attendence att[5] = {
        {"Sokha", 5, 10, 30},
        {"Vichea", 5, 20, 30},
        {"Sreyneath", 5, 30, 30},
        {"Sreynich", 5, 40, 30},
        {"Roth", 5, 50, 30}};

    Attendence result = getLatest(att);
    printf("the latest student is : %s", result.name);
    return 0;
}