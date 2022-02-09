#include <iostream>
#include <vector>

template<typename T1>
void input_data(std::vector<T1>& _array)
{
    T1 input;
    for(size_t i=0;i < _array.size();++i)
    {
        std::cin >> input;
        _array[i] = input;
    }
}
template<typename T>
T average(std::vector<T>& _array)
{
    T sum = 0;
    for(const auto& i : _array)
    {
        sum += i;
    }
    return sum/_array.size();
}

int main() {

    size_t size;
    do
    {
        std::cout << "Enter the size of the array:";
        std::cin >> size;
        if (size <= 0) std::cout << "Size must be a positive number. Try again." << std::endl;
    } while (size <= 0);
    std::vector<double> array(size,0);

    std::cout << "Input " << size << " array elements:" << std::endl;
    input_data(array);

    std::cout << "Average of array: " << average(array);
    return 0;
}
