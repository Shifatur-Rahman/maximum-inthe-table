#include <iostream>
using namespace std;

class max_table{
   public:
   	int n;
};

int main(){
  max_table obj1;
  int m = obj1.n;
  cin>>m;

  int arr[m][m];

  for(int i=0; i<m; i++){
      arr[0][i] = 1;
      arr[i][0] =1;
  }

  for(int i=1; i<m; i++){
	for(int j=1; j<m; j++){
		arr[i][j] = arr[i][j-1] + arr[i-1][j];

	}

  }

cout<<arr[m-1][m-1]<<endl;
}
