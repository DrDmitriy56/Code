//#include <iostream>
//#include <set>
//
//using namespace std;
//
//set<int> Union(set<int> A, set<int> B) {
//	for (auto& item : B)
//		A.insert(item);
//	return A;
//}
//
//set<int> Intersaction(set<int> A, set<int> B) {
//	set<int> Tmp;
//	for (auto& item : A) {
//		auto iter = B.find(item);
//		Tmp.insert(*iter);
//	}
//	return Tmp;
//}
//
//set<int> Difference(set<int> A, set<int> B) {
//    set<int>::iterator itB;
//    set<int> result;
//    for (auto itA = A.begin(); itA != A.end(); ++itA) {
//        itB = B.find(*itA);
//        if (itB == B.end()) {
//            result.insert(*itA);
//        }
//    }
//
//    return result;
//
//}
// 
//
//int main() {
//
//}