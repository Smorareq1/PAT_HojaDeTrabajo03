#include "Ejercicio03.h"
#include <unordered_map>

using namespace std;

Node<int>* Ejercicio03::copyList(Node<int>* head)
{   
    if (head == nullptr)
    {
		return nullptr;
	}

    unordered_map<Node<int>*, Node<int>*> viejoANuevo;

    Node<int>* current = head;
    while (current != nullptr) { //crea los nuevos nodos en la lista copiada
        viejoANuevo[current] = new Node<int>{ current->value };
        current = current->next;
    }

    current = head;
    while (current != nullptr) //resetea los punteros next
    {
        viejoANuevo[current]->next = viejoANuevo[current->next];
        current = current->next;
    }

    return viejoANuevo[head];
}
