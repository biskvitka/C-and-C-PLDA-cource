/* 
 * File:   List.hpp
 * Author: ggrozeva
 *
 * Created on September 15, 2015, 11:43 AM
 */

#ifndef LIST_HPP
#define	LIST_HPP
template <typename T>
class List{
public:
    List(T );
    ~List();
    T getData();
    List<T> *getNext();
    void addNode(List<T> *);
private:
    T data;
    List<T> *next;
};


#endif	/* LIST_HPP */

