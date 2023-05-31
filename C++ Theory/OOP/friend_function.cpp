#include<iostream>
#include<string>

class Point {
    private:
        int x;
        int y;

    public:
        Point(){}
        Point(int x, int y){
            this->x = x;
            this->y = y;
        }
        friend void print_point(Point point);   
        friend Point operator+(Point p1, Point p2);     
};

Point operator+(Point p1, Point p2){
    Point p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;
    return p3;
}

void print_point(Point point){
    std::cout << point.x << " " << point.y << std::endl;
}


int main(){
    // print_point(Point(1, 2));
    Point p1(1,2), p2(3,4);
    Point p3 = p1+p2;
    print_point(p3);
    return 0;
}