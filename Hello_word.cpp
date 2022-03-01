#include<iostream>
#include"cpp_tools.h"
#include"include\GLFW\glfw3.h"

int main()
{
    int init_flag=glfwInit();
    std::cout<<init_flag<<std::endl;
    return 0;
}