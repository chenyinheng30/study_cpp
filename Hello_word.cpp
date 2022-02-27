#include<iostream>
#include<vector>
struct my_class
{
    int x,y,z;
    my_class(int x,int y,int z):x(x),y(y),z(z){}
    my_class(const my_class& mc):x(mc.x),y(mc.y),z(mc.z)
    {
        std::cout<<"copy!!!"<<*this<<std::endl;
    }
    ~my_class()
    {
        std::cout<<"destructor:"<<*this<<std::endl;
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
    v.resize(3);
    v.push_back(my_class(1,2,3));
    v.push_back(my_class(4,5,6));
    v.push_back(my_class(7,8,9));

    // for(const my_class& mc:v)
    // {
    //     std::cout<<mc<<std::endl;
    // }
    return 0;
}