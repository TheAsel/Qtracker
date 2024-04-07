#ifndef CONTAINER_H
#define CONTAINER_H

namespace cnt{

template<class T>
class container{
private:
    T * cont;
    int capacity;
    int elementNum;

public:

    container(): cont(new T[1]), capacity(1), elementNum(0){}
    container(int size): cont(new T[size]), capacity(size), elementNum(0){}
    container(const container<T>& oldCont): capacity(oldCont.capacity), elementNum(oldCont.elementNum){
        cont = new T[capacity];

        for(int i = 0; i<elementNum; i++){
            cont[i]=oldCont.cont[i];
        }
    }

    ~container(){
        delete[] cont;
    }

    container<T>& operator=(const container<T>& oldCont){
        if (this == &oldCont){
            return *this;
        }

        T * tempCont;

        capacity = oldCont.capacity;        //Sostiusice l'ampiezza e il numero di elementi con quelli di oldCont
        elementNum = oldCont.elementNum;
        T* newCont = new T[capacity];       //creo un nuovo vettore che andrà a sostituire quello attualmente presente nell'oggetto su cui viene chiamato il metodo;

        for(int i = 0; i < capacity; i++){
            newCont[i]=oldCont.cont[i];     //inserisco nel nuovo vettore i contenuti di oldCont
        }

        tempCont=newCont;                   //scambio gli indirizzi del nuovo vettore e del vettore dell'oggetto su cui viene chiamato il metodo
        newCont=cont;
        cont=tempCont;

        delete[] newCont;                   //dealloco il vecchio vettore

        return *this;
    }

    T& operator[](int pos){
        return *(cont+pos);
    }

    bool operator==(const container<T>& oldCont) const{
        if(this== &oldCont){
            return true;
        }

        bool isEqual=true;

        if(capacity==oldCont.capacity && elementNum==oldCont.elementNum){
            for(int i=0; i<oldCont.capacity && isEqual==true; i++){
                if(cont[i]!=oldCont.cont[i])
                {
                    isEqual=false;
                }
            }
            return isEqual;
        }
        else{
            return false;
        }
    }

    bool operator!=(const container<T>& oldCont) const{
        if(this== &oldCont){
            return false;
        }

        bool isEqual=false;

        if(capacity==oldCont.capacity && elementNum==oldCont.elementNum){
            for(int i=0; i<oldCont.capacity && isEqual==false; i++){
                if(cont[i]==oldCont.cont[i])
                {
                    isEqual=true;
                }
            }
            return isEqual;
        }
        else{
            return true;
        }
    }

    int getCapacity(){
        return capacity;
    }

    int getSize(){
        return elementNum;
    }

    void push_back(const T& element){
        if(elementNum==capacity){
            T* tempCont= new T[capacity*2];
            for(int i=0; i<capacity; i++){
                tempCont[i]=cont[i];
            }

            delete[] cont;
            capacity=capacity*2;
            cont=tempCont;
        }

        cont[elementNum]=element;
        elementNum++;
    }

    void pop_back(){
        if(elementNum>0)
        {
            elementNum--;
        }
    }

    class customiterator
    {
    friend class container<T>;
    private:
        T* ptr;
    public:
        customiterator(): ptr(nullptr){}
        customiterator(const customiterator& it): ptr(it.ptr){}
        customiterator(T* t): ptr(t){}
        ~customiterator() = default;

        bool operator!=(const customiterator& it) const{
            return ptr!=it.ptr;
        }

        bool operator==(const customiterator& it) const{
            return ptr==it.ptr;
        }

        const T& operator*() const{
            return *ptr;
        }

        const T& operator[](int pos) const{
            return *ptr[pos];
        }

        customiterator& operator=(const customiterator & it) = default;
        const customiterator operator+(int num) const{
            container<T>::customiterator temp(ptr+num);
            return temp;
        }

        const customiterator operator-(int num) const{
            container<T>::customiterator temp(ptr-num);
            return temp;
        }

        customiterator& operator--(){
            ptr--;
            return *this;
        }

        customiterator operator--(int){
            container<T>::customiterator temp = *this;
            ptr--;
            return temp;
        }

        customiterator& operator++(){
            ptr++;
            return *this;
        }

        customiterator operator++(int){
            container<T>::customiterator temp = *this;
            ptr++;
            return temp;
        }

        bool operator<(const customiterator& it) const{
            return ptr<it.ptr;
        }

        bool operator>(const customiterator& it) const{
            return ptr>it.ptr;
        }

        bool operator<=(const customiterator& it) const{
            return ptr<=it.ptr;
        }

        bool operator>=(const customiterator& it) const{
            return ptr>=it.ptr;
        }
    };

    void insert(const T& element, const customiterator pos){
        if(capacity>=elementNum+1 && pos>=begin() && pos<capacityEnd()){
            int i=0;
            T* tempCont= new T[capacity+1];
            container<T>::customiterator it;
            for(it = begin(); it!=pos;it++, i++){
                tempCont[i]=cont[i];
            }
            tempCont[i]=element;
            i++;
            for(it = pos; it!=capacityEnd(); it++,i++){
                tempCont[i]=cont[i-1];
            }
            elementNum++;
            delete[] cont;
            cont=tempCont;
        }
    }

    const T& operator[](const customiterator& pos){
        return *pos;
    }

    customiterator begin(){
        container<T>::customiterator temp(cont);
        return temp;
    }

    customiterator end(){
        container<T>::customiterator temp(cont + elementNum);
        return temp;
    }

    customiterator capacityEnd(){
        container<T>::customiterator temp(cont+capacity);
        return temp;
    }
};

}

#endif // CONTAINER_H
