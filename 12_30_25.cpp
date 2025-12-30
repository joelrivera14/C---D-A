#include <iostream>
#include <string>

class Flower
{
private:
    std::string name;
    int pedals;
    double price;

public:
    Flower(const std::string &n, int p, double pr):name(n),pedals(p),price(pr){};
    std::string getName() const { return name; };
    int getPedals() const { return pedals; };
    double getPrice() const { return price; };
    void setName(std::string n) { name = n; }
    void setPedals(int p) { pedals = p; }
    void setPrice(double pr) { price = pr; }
};
std::ostream &operator<<(std::ostream &out, const Flower &f)
{
    out << f.getName() << "\n"
        << f.getPedals() << "\n"
        << f.getPrice();
    return out;
}

int main()
{
    std::string a = "abc";
    std::string b = "cde";
    std::cout << (a += a + b[1] + a) << "\n";

    double *dp[10];
    for (int i = 0; i < 10; ++i)
    {
        dp[i] = new double(0.0);
        std::cout << *dp[i] << " ";
    }
    std::cout << "\n";

    Flower *fl[10];
    for (int i = 0; i < 10; ++i)
    {
        fl[i] = new Flower("no name", 5, 5.0);
        std::cout << *fl[i] << " ";
    }
    return 0;
}