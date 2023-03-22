#include <iostream>
#include "add.h"
#include "celsiusConverter.h"

#define NAME "Ulvi"
//typedef int int_t;  // bu keyword ile deyisenin tipini ozumun yaraddigi type ile define ede bilirik.
//int_t a = 5;
using std::cout, std::cin, std::endl, std::string;


//double imReturningDouble(double x, double y); burada prototipi define etdik. onun badisi asagida declare oldu.
//int add(int x, int y);



int main() {
//    int x = 5;// tam ededleri ifade edir.basic data tipidir. het bir int memoryde bir yerde yarinir ve ona yaddas ayrilir.
//    int y{6};// list intilization.
//    int c = 8; //copy intilization.
//    int b(7);//directly initilization.
//<< instertation operatorudur console outputuna bir data gonderir.
// aritmatic operatorlar + - * / %.
// double intide ozunde saxlayan butun ededlere double deyilir.
//// casting iki cur olur implicit ve explicit. iimplicit avto kasting demekdir. explicit ise ozumuz deyirik ki bunu cast edle
//    int a = 5;
//    int b = 3;
//    int c = a/b; //tam ededi qaytarir
//    double d = a%b; // qaligi tapmaq ucun istifade olunur
    //Pemda birinic morterizenin icerisi ikinci vurma bolme emeliyyatlari sonra toplama cixma emeliyyatlari.
//    char c = 'ca'; // tek bir herifi ve ya simvolu ifade edir. charlar eger iki ve daha artiq simvol goturublerse sonuncu simvolu qaytarir.
//    bool isTrue = true; // boolieanlar iki cur data dasiyir bunlar ya turedur ya false. capa ya 1 ya 0 verir 1 olanda true 0 olanda false
//    std::string name = "Ulvi";
//std::cout << name  << 3 << '\n';
//        const int YAS = 26;//keywordu ile biz define etdiyimiz deyisenin valuesunu basqa bir yerde istifade ede bilerik ancaq deyise bilmerik.


//   int x{};//c11++ beri var.
//        cout << "Hello" << " How are you" << '\n'; // cout buffered dir '\n' ise coutu flush edib coutu bize qaytarir yeni setirde.
//    int x{};
//    cout << "Xais edirik tam eded daxil ediniz." << '\n';
//    cin >> x;
//    cout << x * 2 << '\n'; >> insertation operatorudur hansi ki userin daxil etdiyi datani varibleye calayir assign ede bilir.
//  salamDunya name convention camel case
//  salam_dunya name convention snake case
    cout << "Hello please insert a Celsius to convert it to Fahrenheit" << endl;
    double x{};
    cin >> x;
    cout << celsiusToFahrenheit(x) << 'F' << endl;

}

//int add(int x, int y) {
//    return x + y;
//}
//
//double imReturningDouble(double x, double y) {
//    cout << imReturningBool() << endl;
//    return x + y;
//} prototipi yuxaridan qebul etdi ve bunu icra etdi. forward declaration ve ya funksiyanin prototypi.