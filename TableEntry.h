#ifndef TABLEENTRY_H
#define TABLEENTRY_H

#include <string>
#include <iostream>

using namespace std;

template <typename V> 
class TableEntry {
    public:
        string key;
	V value;

    TableEntry(){
  key = "";
value = V{};     
    }

    TableEntry(string key){
 this-> key = key;
value = V{};     
    }


    TableEntry(string key, V value){
 this-> key = key;
this->value = value;     
    }

friend bool operator==(const TableEntry<V>& T1, const TableEntry<V>& T2){
if(T1.key == T2.key)
return true;

return false;
}

friend bool operator!=(const TableEntry<V>& T1, const TableEntry<V>& T2){
if(T1.key != T2.key)
return true;

return false;
}

friend ostream& operator<< (ostream& out, TableEntry<V>& T1){
out <<T1.key<<"->"<<T1.value;

return out;

}



};

#endif
