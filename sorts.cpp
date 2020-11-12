#include <vector>

#include "sorts.h"

using namespace std;

vector<int> bubbleSort(vector<int> v) {
	size_t n = v.size();
	for (size_t i = 1; i < n; i++)
		for (size_t j = 0; j + i < n; j++)
			if (v[j] < v[j + 1]) {
				v[j] = v[j] + v[j + 1];
				v[j + 1] = v[j] - v[j + 1];
				v[j] -= v[j + 1];
			}
	return v;
}

vector<int> insertionSort(vector<int> v) {
	size_t n = v.size();
	for (size_t i = 1; i < n; i++) {
		if (v[i] > v[i - 1])
			for (size_t j = i; j > 0; j--)
				if (v[j] > v[j - 1]) {
					v[j] += v[j - 1];
					v[j - 1] = v[j] - v[j - 1];
					v[j] -= v[j - 1];
				}
				else
					break;
	}
	return v;
}

vector<int> selectionSort(vector<int> v) {
	size_t n = v.size();
	for (size_t i = 0; i + 1 < n; i++) {
		float max = v[i];
		int max_ind = i;
		for (size_t j = i + 1; j < n; j++)
			if (v[j] > max) {
				max_ind = j;
				max = v[j];
			}
		if (max_ind != i) {
			v[i] += v[max_ind];
			v[max_ind] = v[i] - v[max_ind];
			v[i] -= v[max_ind];
		}
	}
	return v;
}