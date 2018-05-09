/* main.cc */

#include "cooked_read.hh"
#include "cooked_rand.hh"

int n[4] = {-1, -1, -1, -1};

int main(int argc, char* argv[]) 
{
    cooked_rand(n, 4, 1, 5);

    for (int i = 0; i < sizeof(n)/sizeof(int); i++)
    {
        std::cout<<"-> "<<n[i]<<std::endl;
    }

    return 0;
}
