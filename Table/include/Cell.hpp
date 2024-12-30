#ifndef TABLE_CELL_HPP
#define TABLE_CELL_HPP
#include <iostream>
using namespace std;





namespace Table{
    template<class DataType>
    class Cell{
        private:
            int _key;
            Cell* _next;
            DataType _value;
        public:
            // Constructor
            Cell(const int& key, const DataType& value);
            Cell(const int& key, const DataType& value, Cell* next);


            // setters
            void next(Cell* next);
            void value(const DataType& value);
            
            // getters
            int key()const;
            Cell* next()const;
            DataType value() const;
            // Destructor
            ~Cell();
    };
}; // namespace Table



#include "../source/Cell.cpp"

#endif // TABLE_CELL_HPP
