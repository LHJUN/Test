#include<iostream>
#include<math.h>
using namespace std;
////////込込込亜込込込込込込込込込込
class Queen {
private:
	bool check(int k);
	void work(int t);
	int *x;
	int n;
	long sum;
public:
	long run(int k) {
		n = k;
		x = new int[n + 1];
		sum = 0;
		work(1);
		return sum;
	}
};
bool Queen::check(int k){
	for (int i = 1; i < k; i++)
	if (abs(i - k) == abs(x[i] - x[k]) || x[i] == x[k]) return false;
	return true;
}
void Queen::work(int t) {
	if (t > n) {
		sum++;
		return;
	}
	for (int i = 1; i <= n; i++) {
		x[t] = i;
		if (check(t))work(t + 1);
	}
}
int main() {
	int k;
	while (cin >> k) {
		Queen q;
		cout << q.run(k) << endl;
	}
	return 0;
}