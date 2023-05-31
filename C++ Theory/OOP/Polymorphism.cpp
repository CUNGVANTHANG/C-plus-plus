#include <iostream>

// Tính đa hình:
// - Nạp chồng
//      Nạp chồng hàm
//      Nạp chồng toán tử
// - Ghi đè
// - Phương thức ảo



// class Calculator {
//     public:
//         int x;
           // Nạp chồng hàm
//         Calculator() {}
//         Calculator(int x) {
//             this->x = x;
//         }

//         int add(int a, int b){
//             std::cout << "Integer" << std::endl;
//             return a + b;
//         }

//         float add(float a, float b){
//             std::cout << "Float" << std::endl;
//             return a + b;
//         }
// };



// class Point {
//     public:
//         int x;
//         int y;
//         Point(){}
//         Point(int x, int y){
//             this->x = x;
//             this->y = y;
//         }
//     // Nạp chồng toán tử
//     friend Point operator+(Point p1, Point p2){
//         Point p3;
//         p3.x = p1.x + p2.x;
//         p3.y = p1.y + p2.y;
//         return p3;
//     }
// };



// class Animal {
//     public:
//         // Ghi đè
//         void move(){
//             std::cout << "Animal move" << std::endl;
//         }
// };

// class Dog : public Animal{
//     public:
//         // Ghi đè
//         void move(){
//             std::cout << "Dog move" << std::endl;
//         }
//         // Ghi đè
//         void parent_move(){
//             Animal::move();
//         }
// };



class Animal {
    public:
        virtual void move() = 0; // Phương thức thuần ảo
        // virtual void move() { // Phương thức ảo
        //     std::cout << "Animal move" << std::endl;
        // }
};

class Dog : public Animal{
    public:
        void move(){
            std::cout << "Dog move" << std::endl;
        }
};

int main(){
    // Nạp chồng hàm
    // Calculator cal(3);
    // int a = 1, b = 2;
    // float c = 1.4, d = 1.5;
    // std::cout << "a + b = " << cal.add(a,b) << std::endl;
    // std::cout << "c + d = " << cal.add(c,d) << std::endl;

    // Nạp chồng toán tử
    // Point p1(1,2), p2(3,4);
    // Point p3 = p1+p2;
    // std::cout << "p3 = " << p3.x << ", " << p3.y;
    
    // Ghi đè
    // Animal animal;
    // animal.move();
    // Dog dog;
    // dog.move();
    // dog.parent_move();
    
    // Phương thức ảo
    Animal *animal = new Dog;
    animal->move();

    
    return 0;
}