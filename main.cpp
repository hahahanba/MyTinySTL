//#include <iostream>
//#include <array>
//#include <vector>
//#include <list>
//#include <forward_list>
//#include <deque>
//#include <set>
//#include <map>
//#include <unordered_map>
//#include <unordered_set>
//
//using namespace std;
//
//void _display_category(random_access_iterator_tag)
//{
//    cout << "random_access_iterator" << endl;
//}
//
//void _display_category(bidirectional_iterator_tag)
//{
//    cout << "bidirectional_iterator" << endl;
//}
//
//void _display_category(forward_iterator_tag)
//{
//    cout << "forward_iterator" << endl;
//}
//void _display_category(output_iterator_tag)
//{
//    cout << "output_iterator" << endl;
//}
//void _display_category(input_iterator_tag)
//{
//    cout << "input_iterator" << endl;
//}
//
//template<class I>
//void display_category(I itr)
//{
//    typename iterator_traits<I>::iterator_category cagy;
//    _display_category(cagy);
//
//    cout << "typeid(itr).name()= " << typeid(itr).name() << endl << endl;
//}
//
//int main() {
//    cout << "\ntest_iterator_category()........... \n";
//
//    display_category(array<int, 10>::iterator());
//    display_category(vector<int>::iterator());
//    display_category(list<int>::iterator());
//    display_category(forward_list<int>::iterator());
//    display_category(deque<int>::iterator());
//
//    display_category(set<int>::iterator());
//    display_category(map<int,int>::iterator());
//    display_category(multiset<int>::iterator());
//    display_category(multimap<int,int>::iterator());
//    display_category(unordered_set<int>::iterator());
//    display_category(unordered_map<int,int>::iterator());
//    display_category(unordered_multiset<int>::iterator());
//    display_category(unordered_multimap<int,int>::iterator());
//
//    display_category(istream_iterator<int>());
//    display_category(ostream_iterator<int>(cout,""));
//
//    return 0;
//}
#include <iostream>

#define CALL_WITH_MAX(a, b) f((a) > (b) ? (a) : (b))


int main(int argc, char *argv[])
{
    int a = 5,b = 0;
    CALL_WITH_MAX(++a, b);    //a被累加二次
    CALL_WITH_MAX(++a, b+10); //a被累加一次

    return 0;
}