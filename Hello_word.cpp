#include<iostream>
#include<vector>
struct my_class
{
    int x,y,z;
    my_class(int x,int y,int z):x(x),y(y),z(z){}
    my_class(const my_class& mc)
    {
        std::cout<<"copy!!!"<<std::endl;
    }
    ~my_class()
    {
        std::cout<<"destructor"<<std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os,const my_class& mc);
};
std::ostream& operator<<(std::ostream& stream,const my_class& mc)
{
    stream<<"("<<mc.x<<","<<mc.y<<","<<mc.z<<")";
    return stream;
}
int main()
{
    std::vector<my_class> v;
    v.push_back(my_class(1,2,3));
    v.push_back(my_class(4,5,6));
    v.push_back(my_class(7,8,9));
    return 0;
}