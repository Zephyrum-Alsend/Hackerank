#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> deq;
    int max, temp;
    
    for ( int i = 0; i < k; i++ ) {
        deq.push_back(arr[i]);
    }

    max = deq.front();
    for (auto it : deq) {
        if ( it > max ) {
            max = it;
        }
    }
    
    cout << max << ' ';
    
    for ( int i = k; i < n; i++ ) {
        if ( max != deq.front() ) {
            deq.pop_front();
            temp = arr[i];
            deq.push_back(temp);
            
            if ( temp > max ) {
                max = temp;
            }
        }
        else {
            deq.pop_front();
            deq.push_back(arr[i]);
            
            max = deq.front();
            for (auto it : deq) {
                if ( it > max ) {
                    max = it;
                }
            }
        }
        
        cout << max << ' ';
    }
    
    cout << endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
