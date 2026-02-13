#include <iostream>
/* maps: consists of a key value pair where key serves as a label and value serves as a folder
   together they are a labeled folder
   associative container: the key of an object determines its location within the data structure
   a map stores key-value pairs called entries
   */
template <typename K, typename V>
class Entry
{
public:
    Entry(const K &k = K(), const V &v = V()) : _key(k), _value(v) {};
    const K &key() const { return _key; }
    const V &value() const { return _value; }
    void setKey(const K &k) { _key = k; }
    void setValue(const V &v) { _value = v; }

private:
    K _key;
    V _value;
};
int main()
{

    return 0;
}