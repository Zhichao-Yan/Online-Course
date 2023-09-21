template <typename T1,typename T2> 
class Example
{
private:
    T1 size;
    T2 *parray;
    T2 _min;
    T2 _max;

public:
    Example(T2 min, T2 max);
    Example(const T2 *array, T1 size);
    T2 &operator[](T1 index);
    bool operator==(const Example &) const;
    bool insert(const T2 *, T1);
    bool insert(T2);
    T2 min() const;
    T2 max() const;
    void min(T2);
    void max(T2);
    ~Example();
};
