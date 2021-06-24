


struct Sznur
{
private:
    struct Node
    {
        int value;
        Node* next;
        Node(int V, Node* N = nullptr)
        {
            value = V;
            next = N;
        }
    };
    int Ciagcounter = 0;
    int counter = 0;
    Node* head = nullptr;
    Node* tail = nullptr;
public:
    Sznur() = default;
    ~Sznur();
    void wstaw(int A);
    void wypisz();
    void size();
    void usunCiagi(int S, int K);
    void clear();
};
