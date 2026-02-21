#include <iostream>
#include <vector>
#include <list>
#include "maps.cpp"

// keys are immutable so const K for an entry, value can change
template <typename K, typename V, typename H>
class HashMap
{
public:                                                // public types
    typedef Entry<const K, V> Entry;                   // a (key,value) pair
    class Iterator;                                    // a iterator/position
public:                                                // public functions
    HashMap(int capacity = 100) : n(0), B(capacity) {} // constructor
    int size() const { return n; }                     // number of entries
    bool empty() const { return size() == 0; }         // is the map empty?
    Iterator find(const K &k)
    {
        Iterator p = finder(k); // look for k
        if (endOfBkt(p))        // didn’t find it?
            return end();       // return end iterator
        else
            return p;
    } // find entry with key k
    Iterator put(const K &k, const V &v)
    {
        Iterator p = finder(k); // search for k
        if (endOfBkt(p))
        {                                    // k not found?
            return inserter(p, Entry(k, v)); // insert at end of bucket
        }
        else
        {                       // found it?
            p.ent->setValue(v); // replace value with v
            return p;           // return this position
        }
    } // insert/replace (k,v)
    void erase(const K &k) { eraser(p); } // remove entry with key k
    void erase(const Iterator &p)
    {
        Iterator p = finder(k);                               // find k
        if (endOfBkt(p))                                      // not found?
            throw NonexistentElement("Erase of nonexistent"); // . . .error
        eraser(p);
    }                // erase entry at p
    Iterator begin() // iterator to first entry
    {
        if (empty())
        {
            return end();
        }
        BItor bkt = B.begin(); // else search for an entry
        while (bkt->empty())
        {
            ++bkt; // find nonempty bucket
        }
        return Iterator(B, bkt, bkt->begin());
    }
    Iterator end() // iterator to end entry
    {
        return Iterator(B, B.end());
    }

protected:                                // protected types
    typedef std::list<Entry> Bucket;      // a bucket of entries
    typedef std::vector<Bucket> BktArray; // a bucket array
    // . . .insert HashMap utilities here
    Iterator finder(const K &k)
    {
        int i = hash(k) % B.size();             // get hash index i
        BItor bkt = B.begin() + i;              // the ith bucket
        Iterator p(B, bkt, bkt->begin());       // start of ith bucket
        while (!endOfBkt(p) && (*p).key() != k) // search for k
            nextEntry(p);
        return p;
    } // find utility
    Iterator inserter(const Iterator &p, const Entry &e)
    {
        EItor ins = p.bkt->insert(p.ent, e); // insert before p
        n++;                                 // one more entry
        return Iterator(B, p.bkt, ins);
    } // insert utility
    void eraser(const Iterator &p)
    {
        p.bkt->erase(p.ent); // remove entry from bucket
        n
    } // remove utility
    typedef typename BktArray::iterator BItor; // bucket iterator
    typedef typename Bucket::iterator EItor;   // entry iterator
    static void nextEntry(Iterator &p)         // bucket’s next entry
    {
        ++p.ent;
    }
    static bool endOfBkt(const Iterator &p) // end of bucket?
    {
        return p.ent == p.bkt->end();
    }

private:
    int n;      // number of entries
    H hash;     // the hash comparator
    BktArray B; // bucket array
public:         // public types
                // . . .insert Iterator class declaration here
    class Iterator
    { // an iterator (& position)
    private:
        EItor ent;          // which entry
        BItor bkt;          // which bucket
        const BktArray *ba; // which bucket array
    public:
        Iterator(const BktArray &a, const BItor &b, const EItor &q = EItor())
            : ent(q), bkt(b), ba(&a) {}
        Entry &operator*() const { return *ent; } // get entry
        bool Iterator::operator==(const Iterator &p) const
        {
            if (ba != p.ba || bkt != p.bkt)
                return false; // ba or bkt differ?
            else if (bkt == ba->end())
                return true; // both at the end?
            else
                return (ent == p.ent); // else use entry to decide
        }
        Iterator &operator++() // advance to next entry
        {
            ++ent;
            if (endOfBkt(*this))
            {
                ++bkt;
                while (bkt != ba->end() && bkt->empty())
                {
                    ++bkt;
                }
                if (bkt == ba->end())
                {
                    return *this;
                }
                ent = bkt->begin();
            }
            return *this;
        }
        friend class HashMap; // give HashMap access
    };
};
