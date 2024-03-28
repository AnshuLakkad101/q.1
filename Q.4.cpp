#include<iostream>

class MyClass {
public:
    void func_0() {
        std::cout << "Function with 0 arguments called\n";
    }

    void func_1(int arg1) {
        std::cout << "Function with 1 argument called. Argument: " << arg1 << "\n";
    }

    void func_2(int arg1, int arg2) {
        std::cout << "Function with 2 arguments called. Arguments: " << arg1 << ", " << arg2 << "\n";
    }

    void func_3(int arg1, int arg2, int arg3) {
        std::cout << "Function with 3 arguments called. Arguments: " << arg1 << ", " << arg2 << ", " << arg3 << "\n";
    }

    void func_all_args_defaulted(int arg1 = 0, int arg2 = 0, int arg3 = 0, int arg4 = 0) {
        std::cout << "Function with all arguments defaulted called. Arguments: " << arg1 << ", " << arg2 << ", " << arg3 << ", " << arg4 << "\n";
    }
};

int main() {
    MyClass obj;

    obj.func_0();
    int arg1;
    std::cout << "Enter argument for func_1: ";
    std::cin >> arg1;
    obj.func_1(arg1);

    int arg2, arg3;
    std::cout << "Enter arguments for func_2: ";
    std::cin >> arg2 >> arg3;
    obj.func_2(arg1, arg2);

    int arg4, arg5, arg6;
    std::cout << "Enter arguments for func_3: ";
    std::cin >> arg4 >> arg5 >> arg6;
    obj.func_3(arg1, arg2, arg3);

    obj.func_all_args_defaulted(); 
    std::cout << "Enter argument for func_all_args_defaulted: ";
    std::cin >> arg1;
    obj.func_all_args_defaulted(arg1); 

    std::cout << "Enter arguments for func_all_args_defaulted: ";
    std::cin >> arg2 >> arg3;
    obj.func_all_args_defaulted(arg1, arg2);

    std::cout << "Enter arguments for func_all_args_defaulted: ";
    std::cin >> arg4 >> arg5 >> arg6;
    obj.func_all_args_defaulted(arg1, arg2, arg3);

    std::cout << "Enter arguments for func_all_args_defaulted: ";
    std::cin >> arg1 >> arg2 >> arg3 >> arg4;
    obj.func_all_args_defaulted(arg1, arg2, arg3, arg4); 

}