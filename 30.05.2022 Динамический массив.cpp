// 30.05.2022 Динамический массив.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <xmemory>
#include <chrono>

#include <vector>

int main()
{
    int *p;
   /* std::auto_ptr<int> p_auto;// не используем. владеющие указатель
    std::unique_ptr<int> p_uniq;// владеющие указатель. следит чтоб блок данных существовал один раз
    std::shared_ptr<int> p_share;// владеющие указатель. хранит и уничтожает
    std::weak_ptr<int> p_weak; // не владеющий указатель*/

    //std::vector<std::chrono::seconds> a;
    //auto p_uniq_int = std::make_unique<int>(7);

    //std::cout << *p_uniq_int;

    // Итератор - умный указатель знающий 
    
    std::vector<int> collection;
    collection.push_back(1);
    collection.insert(collection.begin(), 2);

    for (const auto &el : collection) {
        std::cout << el << " ";
    }
    // Либо:
    for (std::vector<int>::iterator it = collection.begin(); it != collection.end(); ++it) {
        std::cout << *it << " ";
    }
    for (auto &el : collection) {
        std::cout << el << " ";
    }
    for (std::vector<int>::const_iterator it = collection.cbegin(); it != collection.cend(); ++it) {
    std::cout << *it << " ";

}

