#include "Cell.hpp"





// Constructor
template<class DataType>
Table::Cell<DataType>::Cell(const int& key, const DataType& value):_key(key), _value(value), _next(nullptr){

}
template<class DataType>
Table::Cell<DataType>::Cell(const int& key, const DataType& value, Cell* next):_key(key), _value(value), _next(next){
    
}


// setters
template<class DataType>
void Table::Cell<DataType>:: next(Cell* next){
    _next = next;
}
template<class DataType>
void Table::Cell<DataType>:: value(const DataType& value){
    _value = value;
}


// getters


template<class DataType>
int Table::Cell<DataType>:: key()const{
    return _key;
}

template<class DataType>
Table::Cell<DataType>* Table::Cell<DataType>::next()const{
    return _next;
}
template<class DataType>
DataType Table::Cell<DataType>::value() const{
    return _value;    
}

// Destructor
template<class DataType>
Table::Cell<DataType>::~Cell(){

}