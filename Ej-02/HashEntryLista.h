#ifndef INC_05_HASH_HASHENTRYLISTA_H
#define INC_05_HASH_HASHENTRYLISTA_H

template<class K, class T>
class HashEntryLista {
private:
    K key;

    T dato;
public:
    K getKey() const {
        return key;
    }

    void setKey(K key) {
        HashEntryLista::key = key;
    }

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        HashEntryLista::dato = dato;
    }

    HashEntryLista(K key, T dato) : key(key), dato(dato) {

    }


};

#endif //INC_05_HASH_HASHENTRYLISTA_H
