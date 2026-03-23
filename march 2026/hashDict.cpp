

template <typename K, typename V, typename H>
class HashDict : public HashMap<K, V, H>
{
public: // public functions
    typedef typename HashMap<K, V, H>::Iterator Iterator;
    typedef typename HashMap<K, V, H>::Entry Entry;
    // . . .insert Range class declaration here
    class Range
    {
    public:
        Range(const Iterator &b, const Iterator &a) : _begin(b), _end(a) {}
        Iterator &begin() { return _begin; }
        Iterator &end() { return _end; }
        friend class Iterator;

    private:
        Iterator _begin;
        Iterator _end;
    };

public:                                      // public functions
    HashDict(int capacity = 100);            // constructor
    Range findAll(const K &k);               // find all entries with k
    Iterator insert(const K &k, const V &v); // insert pair (k,v)
};
