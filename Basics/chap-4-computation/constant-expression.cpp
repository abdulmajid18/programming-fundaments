
constexpr int max = 100;
void use(int n)
{
    constexpr int c1 = max + 7; // okay
    // constexpr int c2 = n + 7 // errorwe dont know the value of c2
}

int main()
{
}