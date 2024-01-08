#include <iostream>
#include <cmath>
#include <cstring>
#include "tasks.h"
int atoi_t(const char *_String)
{
    int result{0}, sign_flag = 1;
    int len = 0;
    for (const char *ps = _String; ps && (*ps); ps++, len++)
    {
        if ('0' <= (*ps) && (*ps) <= '9')
        {
            result *= 10;
            result += (*ps) - '0';
        }
        else if ((*ps) == '-' && len == 0)
        {
            sign_flag = -1;
        }
        else
        {
            std::cout << "已输入的字符串不表示整数，输入错误" << std::endl;
            return 0;
        }
    }
    return result * sign_flag;
}
long atol_t(const char *_String)
{
    long result{0}, sign_flag = 1;
    int len = 0;
    for (const char *ps = _String; ps && (*ps); ps++, len++)
    {
        if ('0' <= (*ps) && (*ps) <= '9')
        {
            result *= 10;
            result += (*ps) - '0';
        }
        else if ((*ps) == '-' && len == 0)
        {
            sign_flag = -1;
        }
        else
        {
            std::cout << "已输入的字符串不表示整数，输入错误" << std::endl;
            return 0;
        }
    }
    return result * sign_flag;
}
long long atoll_t(const char *_String)
{
    long long result{0}, sign_flag = 1;
    int len = 0;
    for (const char *ps = _String; ps && (*ps); ps++, len++)
    {
        if ('0' <= (*ps) && (*ps) <= '9')
        {
            result *= 10;
            result += (*ps) - '0';
        }
        else if ((*ps) == '-' && len == 0)
        {
            sign_flag = -1;
        }
        else
        {
            std::cout << "已输入的字符串不表示整数，输入错误" << std::endl;
            return 0;
        }
    }
    return result * sign_flag;
}
double atof_t(const char *_String)
{
    double result{0}, sign_flag = 1;
    int len = 0, point_flag = 0;
    for (const char *ps = _String; ps && (*ps); ps++, len++)
    {
        if ('0' <= (*ps) && (*ps) <= '9' && point_flag == 0)
        {
            result *= 10;
            result += (*ps) - '0';
        }
        else if ('0' <= (*ps) && (*ps) <= '9' && point_flag >= 1)
        {
            result += (double)((*ps) - '0') * (pow(10, -point_flag));
            point_flag++;
        }
        else if ((*ps) == '.')
        {
            point_flag++;
        }
        else if ((*ps) == '-' && len == 0)
        {
            sign_flag = -1;
        }
        else
        {
            std::cout << "已输入的字符串不表示整数，输入错误" << std::endl;
            return 0;
        }
    }
    return result * sign_flag;
}
void task()
{
    char input_str[1000];
    memset(input_str, 0, sizeof(input_str));
    int switch_type{0};
    std::cout << "请输入数字：" << std::endl;
    std::cin >> input_str;
    std::cout << "请输入转换类型：" << std::endl;
    std::cin >> switch_type;
    switch (switch_type)
    {
    case 1:
        std::cout << "转换结果为："<<atoi_t(input_str) << std::endl;
        break;
    case 2:
        std::cout << "转换结果为："<<atol_t(input_str) << std::endl;
        break;
    case 3:
        std::cout << "转换结果为："<<atoll_t(input_str) << std::endl;
        break;
    case 4:
        std::cout << "转换结果为："<<atof_t(input_str) << std::endl;
        break;
    default:
        break;
    }
}