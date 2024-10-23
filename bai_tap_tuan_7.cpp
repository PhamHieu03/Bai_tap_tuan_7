#include<bits/stdc++.h>
using namespace std;
struct quan_ly_dan_so {
	int nam;
	int so_luong_sinh;
};
void nhap(vector<quan_ly_dan_so>& so_luong) {
	int n;
	cout << "nhap so luong nam"<<endl;
	cin >> n;
	for (int i = 0; i < n; i++) {
		quan_ly_dan_so data;
		cout << "nhap nam"<<endl;
		cin >> data.nam;
		cout << "so luong sinh trong 1 nam" << endl;
		cin >> data.so_luong_sinh;
		so_luong.push_back(data);
	}
}
void tim_max(vector<quan_ly_dan_so>& so_luong) {
	if (so_luong.empty()) {
		return;
	}
	int max_nam = so_luong[0].nam;
	int max_so_luong_sinh = so_luong[0].so_luong_sinh;
	for (int i = 1; i < so_luong.size(); i++) {
		if (so_luong[i].so_luong_sinh > max_so_luong_sinh) {
			max_nam = so_luong[i].nam;
			max_so_luong_sinh = so_luong[i].so_luong_sinh;
		}
	}
	cout << "nam :" << " " << max_nam << "so luong max:" << " " << max_so_luong_sinh << endl;
}
void tim_min(vector<quan_ly_dan_so>& so_luong) {
	if (so_luong.empty()) {
		return;
	}
	int min_nam = so_luong[0].nam;
	int min_so_luong_sinh = so_luong[0].so_luong_sinh;
	for (int i = 1; i < so_luong.size(); i++) {
		if (so_luong[i].so_luong_sinh < min_so_luong_sinh) {
			min_nam = so_luong[i].nam;
			min_so_luong_sinh = so_luong[i].so_luong_sinh;
		}
	}
	cout << "nam :" << " " << min_nam << "so luong min:" << " " << min_so_luong_sinh << endl;
}
void tim_kiem(vector<quan_ly_dan_so>& so_luong) {
	bool found = false;
	for (int i = 0; i < so_luong.size()-1; i++) {
		for (int j = i+1; j < so_luong.size(); j++) {
			if (so_luong[i].so_luong_sinh == so_luong[j].so_luong_sinh) {
				cout << "nam " << so_luong[i].nam << "va " << so_luong[j].nam << " co cung " << so_luong[i].so_luong_sinh << endl;
				found = true;
			}
		}
	}
	if (!found) {
		cout << "ko co nam nao cung so luong" << endl;
	}
}
int main() {
	vector< quan_ly_dan_so> so_luong;
	nhap(so_luong);
	tim_max(so_luong);
	tim_min(so_luong);
	tim_kiem(so_luong);

}