//Найти сумму цифр натуральных чисел
#include <iostream>
//using namespace std;  ЗАПРЕЩЕНО!

/*
//рекурсия на спуск
int rec1(int x) {
    if (x == 0) {
        return 0;
    } else {
        
        return x%10 + rec1(x/10);
    }
}

//рекурсия на возврат
int rec2(int x) {
    if (x == 0) {
        return 0;
    } else {
        int y = rec2(x / 10);
        return y + x % 10;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int a = 0;
    int summ = 0;
    std::cout << "Введите натуральное число: ";
    std::cin >> a;
    //ОБЯЗАТЕЛЬНО ПРОВЕРКА ВВОДА
    //1. Что это число, а не буква
    //2. Что это натуральное число
    if (a <= 0) {
        std::cerr << "Ошибка! x < 0";
        return 1;
    }
    summ = rec1(a);
    std::cout << "Сумма цифр на спуске: " << summ << std::endl;
    summ = rec2(a);
    std::cout << "Сумма цифр на возврате: " << summ;

    return 0;
}
*/


//Найти максимальную цифру натурального числа
//рекурсия на спуск
int rec1(int x, int max) {
    if (x < max) {
        return max;
    } else {
        if (x % 10 > max) {
            max = x % 10;
        }
        rec1(x / 10, max);
    }
}

//рекурсия на возврат
int rec2(int x) {
    if (x < 10) {
        return x;
    } else {
        int max = rec2(x / 10);
        if (x % 10 > max) {
            max = x % 10;
        }
        return max;
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int a = 0;
    int max_num = 0;
    std::cout << "Введите натуральное число: ";
    std::cin >> a;
    //ОБЯЗАТЕЛЬНО ПРОВЕРКА ВВОДА
    //1. Что это число, а не буква
    //2. Что это натуральное число
    if (a <= 0) {
        std::cerr << "Ошибка! x < 0";
        return 1;
    }
    max_num = rec1(a, 0);
    std::cout << "Максимальная цифра на спуске: " << max_num << std::endl;
    max_num = rec2(a);
    std::cout << "Максимальная цифра на возврате: " << max_num;

    return 0;
}
