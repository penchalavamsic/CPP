#include<iostream>
using namespace std;
class movie{
    public:
    void movie_name(){
        cout<<"OG"<<"\n";
    }
    void release_year();
};
void movie::release_year(){
    cout<<2026;

}
main(){
    movie details;
    details.movie_name();
    details.release_year();
}