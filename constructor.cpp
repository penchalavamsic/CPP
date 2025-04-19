#include<iostream>
using namespace std;
class cricket{
    public:
    int year;
    string team;
    int players;
    cricket(int x, string y, int z){
        year=x;
        team=y;
        players=z;
    }
};
main()
{
    cricket details(2025,"MI",11);
    cout<<details.year<<"\t"<<details.team<<"\t"<<details.players;
}
