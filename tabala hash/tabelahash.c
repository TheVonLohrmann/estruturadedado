#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

// Definição da estrutura do nó da lista encadeada
typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

// Definição da estrutura da tabela hash
typedef struct HashTable {
    Node* table[TABLE_SIZE];
} HashTable;

// Função para criar um novo nó da lista encadeada
Node* createNode(int key, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    return newNode;
}

// Função para criar uma nova tabela hash
HashTable* createHashTable() {
    HashTable* newHashTable = (HashTable*)malloc(sizeof(HashTable));
    for (int i = 0; i < TABLE_SIZE; i++) {
        newHashTable->table[i] = NULL;
    }
    return newHashTable;
}

// Função para calcular o índice da tabela hash usando a função de dispersão
int hashFunction(int key) {
    return key % TABLE_SIZE;
}

// Função para inserir um elemento na tabela hash
void insert(HashTable* hashTable, int key, int value) {
    int index = hashFunction(key);
    Node* newNode = createNode(key, value);

    // Verifica se já existe um nó no índice da tabela
    if (hashTable->table[index] == NULL) {
        hashTable->table[index] = newNode;
    } else {
        // Se já existir um nó, insere o novo nó no início da lista encadeada
        newNode->next = hashTable->table[index];
        hashTable->table[index] = newNode;
    }
}

// Função para buscar um elemento na tabela hash
int search(HashTable* hashTable, int key) {
    int index = hashFunction(key);
    Node* currentNode = hashTable->table[index];

    // Percorre a lista encadeada para buscar a chave
    while (currentNode != NULL) {
        if (currentNode->key == key) {
            return currentNode->value;
        }
        currentNode = currentNode->next;
    }

    return -1; // Elemento não encontrado
}

int main() {
    HashTable* hashTable = createHashTable();

    insert(hashTable, 11, 100);
    insert(hashTable, 22, 200);
    insert(hashTable, 33, 300);

    printf("Valor encontrado para a chave 11: %d\n", search(hashTable, 11));
    printf("Valor encontrado para a chave 22: %d\n", search(hashTable, 22));
    printf("Valor encontrado para a chave 33: %d\n", search(hashTable, 33));
    printf("Valor encontrado para a chave 44: %d\n", search(hashTable, 44));

    return 0;
}