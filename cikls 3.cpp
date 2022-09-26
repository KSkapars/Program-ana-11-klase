#include <iostream>
using namespace std;
    int main(){
    int z, y, m;
    int x = 1;

    cout<<"Ievadi divus skaitïus:)"<<endl;
    cin>>z>>y;

    if(z<y){
        m= z;
    }else{
        m= y;


}
for(x; x<=m; x++){
if(z%x==0 && y%x==0){
  cout<<x<<endl;


}




}
cout<<"Rekur tava atbilde:)";



return 0;

}
