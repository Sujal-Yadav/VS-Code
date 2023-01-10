#include <bits/stdc++.h> using namespace std;

class Hash
{
    int BUCKET;
    list<int> *table;

    public:
    Hash(int V);

    void insertItem(int x);
    int
    hashFunction(int x)
    {
        ~return (x % BUCKET);

            void displayHash();
    }
    Hash::Hash(int b)
    {

        this->BUCKET = b;

        table = new list<int>[BUCKET];
    }

    void Hash::insertItem(int key) -

        {-

        } -

        int index = hashFunction(key);
    ¬ table[index].push_back(key);
    -

        void
        Hash::displayHash()
    {

        for (int i = 0; i < BUCKET; i++)
        {
            cout << i;
            -

                for (auto x : tablefil)

                    int
                    main()

                        int n;
            -cin >> n;
            -

                Hash h(n);
            -for (int i = 0; i < n; i++)
            {
                h.insertItem(x);

                int - x;
            }

            cout << "Hash table created:" << endl;
            -h.displayHash();
            -

                I

                return 0;
            -