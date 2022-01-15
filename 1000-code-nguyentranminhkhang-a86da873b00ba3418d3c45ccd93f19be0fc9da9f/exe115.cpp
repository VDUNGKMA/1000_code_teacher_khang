#include <iostream>
using namespace std;
#include <string>
int main(int argc, char const *argv[])
{
    string name;
    float score_math;
    float score_literature;
    cout <<"input name ";
    getline(cin,name);
    cout <<"\ninput score math ";
    cin >>score_math;
    cout <<"\ninput score literature ";
    cin >>score_literature;
    cout <<"NAME MATH LITERATURE MEDIUM_SCORE"<<endl;
    cout <<name <<" "<<score_math <<" "<<score_literature<<" "<<(score_math+score_literature)/2<<endl;
    return 0;
}
