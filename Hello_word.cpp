#include<iostream>
#include"cpp_tools.h"
#include"include\GLFW\glfw3.h"

int main()
{
    int init_flag=glfwInit();
    SIMPLE_LOG(init_flag);
    SIMPLE_LOG(sizeof(intmax_t));
    return 0;
}