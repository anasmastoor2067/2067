//#include <iostream>
//using namespace std;
//#include <cmath>
//
//class Point {
//private:
//    double x, y;
//
//public:
//    Point(double X, double Y) : x(X), y(Y) {}
//
//    double getx() const 
//    {
//        return x;
//    }
//
//    void setx(double nX)
//    {
//        x = nX;
//    }
//
//    double gety() const 
//    {
//        return y;
//    }
//
//    void sety(double nY)
//    {
//        y = nY;
//    }
//
//    double d(const Point& other) const
//    {
//        double dx = x - other.x;
//        double dy = y - other.y;
//        return sqrt(dx * dx + dy * dy);
//    }
//};
//
//int main() {
//    double x1, y1, x2, y2;
//
//    cout << "Emter x1 Coordinate For P1 : ";
//    cin >> x1 ;
//    cout << "Emter y1 Coordinate For P1 : ";
//    cin >> y1;
//
//    cout << "Emter x2 Coordinate For P2 : ";
//    cin >> x2;
//    cout << "Emter y2 Coordinate For P2 : ";
//    cin >> y2;
//
//    Point p1(x1, y1);
//    Point p2(x2, y2);
//
//    double distance ;
//    distance = p1.d(p2);
//
//
//    cout << "The Distance Between 2 Files Is : " << distance << endl;
//
//    return 0;
//}
//
