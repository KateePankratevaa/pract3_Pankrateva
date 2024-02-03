#include <iostream>
#include <cmath>
#include <stdio.h>
#include <conio.h>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

//1 практика
#define z 1
#define t 2
#define y t+z
#define x (4 * log(y) - 2 - z / t);
#define x1 0.27
#define y1 4.38
#define z1 = ((x1 + y1 * sqrt(z)) / x1 + 10, 3);
#define b ((4 * pow(y1,2) * exp(3 * x1)) / (8 * pow(z1) + log(fabs(x1))));



//3 практика
struct Time {
    int hours;
    int minutes;
    int seconds;
};

int elapsedTimeInMinutes(Time t1, Time t2) {
    int total = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int total1 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int elapsedSeconds = total - total1;

    return elapsedSeconds / 60;
}

int elapsedTimeInMinutes(int hours1, int minutes1, int seconds1, int hours2, int minutes2, int seconds2) {
    Time t1 = { hours1, minutes1, seconds1 };
    Time t2 = { hours2, minutes2, seconds2 };

    return elapsedTimeInMinutes(t1, t2);
}

int elapsedTimeInMinutes(int hours1, int minutes1, int hours2, int minutes2) {
    Time t1 = { hours1, minutes1, 0 };
    Time t2 = { hours2, minutes2, 0 };

    return elapsedTimeInMinutes(t1, t2);
}



//2 практика

struct Bagazh {
    int numItems;
    double weight;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int zadanie;
    cout << "Введите номер задания (1, 2, 3, 4 или 5) \n";
    cin >> zadanie;
    if (zadanie == 1)
    {
        cout << "x= " << x
    }
    else if (zadanie == 2)
    {
        //#define x1 0.27
        //#define y1 4.38
       
        /*cout << "b= " << b*/
    }
    else if (zadanie == 3)
    {
        double alpha = 1.0;
        const double pi = 3.14159265;
        double y2 = (1.0 / 4 - 1.0 / 4 * sin(5.0 / 2 * pi - 8 * alpha));
        cout << "y = " << y2;
    }
    else if (zadanie == 4)
    {
        Time time1 = { 12, 30, 0 };
        Time time2 = { 15, 45, 0 };

        int minutes1 = elapsedTimeInMinutes(time1, time2);
        cout << "1 задание: " << minutes1 << std::endl;

        int minutes2 = elapsedTimeInMinutes(5, 20, 0, 10, 50, 0);
        cout << "2 задание: " << minutes2 << std::endl;

        int minutes3 = elapsedTimeInMinutes(8, 15, 12, 45);
        cout << "3 задание: " << minutes3 << std::endl;

        return 0;
    }
    else if (zadanie == 5)
    {
        int otv;
        cout << "Выберите действие (1, 2) \n1. запись в файл\n2. чтение из файла\n";
        cin >> otv;
        int kolvo;
        double mas;
        if (otv == 1)
        {
            ofstream oFile("file.txt");
            cout << "Введите количество вещей" << endl;
            cin >> kolvo;
            cout << "Введите вес в килограммах" << endl;
            cin >> mas;
            oFile << kolvo << " " << mas;
            cout << "Данные записаны в файл" << endl;
            cout << " " << endl;
            oFile.close();
        }
        if (otv == 2)
        {
            ifstream file("file.txt");

            if (!file.is_open()) {
                cout << "Ошибка открытия файла!" << std::endl;
                return 1;
            }

            Bagazh passenger;

            while (file >> passenger.numItems >> passenger.weight) {
                if (passenger.numItems > 2) {
                    cout << "Пассажир с " << passenger.numItems << " вещами и весом " << passenger.weight << " кг" << std::endl;
                }
            }
            file.close();
            return 0;

        }      
    }
}







