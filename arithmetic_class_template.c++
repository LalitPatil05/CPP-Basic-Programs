#include<iostream>
using namespace std;
template<class T>
class calculator
{
    private:
    T num1 , num2;

        public:
        calculator(T n1, T n2)
        {
            num1=n1;
            num2=n2;
        }
        void displayResult()
        {
            cout<<"Numbers are ="<<num1<<" and "<<num2<<" "<<endl;
            cout<<"Addition is :"<<add()<<endl;
            cout<<"Substraction is :"<<subtract()<<endl;
            cout<<"Multiplication is :"<<multiply()<<endl;
            cout<<"Divison is :"<<divide()<<endl;
        }

        T add()
        {
            return num1 + num2;
        }

        T subtract()
        {
            return num1 - num2;
        }

        T multiply()
        {
            return num1 * num2;
        }

        T divide()
        {
            return num1 / num2;
        }
};

int main()
{
    calculator<int> intcalc(2,1);
    calculator<float> floatcalc(2.4,1.2);
    
    cout<<"Int results :"<<endl;
    intcalc.displayResult();
    
    cout<<endl;
    
    cout<<"Float Result :"<<endl;
    floatcalc.displayResult();

    return 0;
}