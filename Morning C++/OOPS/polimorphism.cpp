#include <iostream>
using namespace std;
class shape{
    private:
        int length , breath;
        float radius,ans;
        float PI;
    public:
        shape()
        {
            cout<<"\nThis is the default Constructor.";
            length = 0;
            breath = 0;
            radius = 0.0;
            PI = 3.14;
        }
        // First area calculates the area of the square.
        void area()
        {
           ans = length * length;
            cout<<endl<<"The area of the square is : "<<ans;
        }
        void area(int l , int b)
        {
            length = l;
            breath = b;
            ans = length * breath;
            cout<<endl<<"The area of the rectangle is : "<<ans;
        }
        void area(float r)
        {
            radius = r;
            ans = PI * radius * radius;
            cout<<endl<<"The area of the circle is : "<<ans;
        }
        void area(float base,float height)
        {
            length = base;
            breath = height;
            ans = 0.5*base*height;
            cout<<endl<<"The area of the triangle is : "<<ans;
        }
};
int main() 
{
    shape obj;
    obj.area();
    obj.area(2,3);
    obj.area(3.4);
    obj.area(2,2);
    return 0;
}