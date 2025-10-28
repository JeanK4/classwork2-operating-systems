#include <iostream>
using namespace std;

// ============================================================================
// ACTIVIDAD 1: Variables y Punteros
// ============================================================================
void actividad1() {
    cout << "\n========== ACTIVIDAD 1 ==========\n";
    cout << "Variables y Punteros\n\n";
    
    // 1. Declarar y asignar variable entera
    int numero = 42;
    
    // 2. Presentar dirección de memoria
    cout << "Variable numero = " << numero << endl;
    cout << "Direccion de memoria de numero: " << &numero << endl;
    
    // 3. Modificar valor usando punteros
    int* ptr = &numero;
    *ptr = 100;
    
    // 4. Presentar nuevo valor y dirección
    cout << "\nDespues de modificar con puntero:" << endl;
    cout << "Nuevo valor de numero = " << numero << endl;
    cout << "Direccion de memoria de numero: " << &numero << endl;
    cout << "Direccion almacenada en ptr: " << ptr << endl;
}

// ============================================================================
// ACTIVIDAD 2: Punteros y Referencias
// ============================================================================
void actividad2() {
    cout << "\n========== ACTIVIDAD 2 ==========\n";
    cout << "Punteros y Referencias\n\n";
    
    // 1. Declarar puntero y variable
    int valor = 25;
    int* puntero = &valor;
    
    cout << "Valor inicial: " << valor << endl;
    cout << "Direccion de valor: " << &valor << endl;
    
    // 2. Usar puntero para modificar
    *puntero = 50;
    cout << "\nDespues de modificar con puntero:" << endl;
    cout << "Nuevo valor: " << valor << endl;
    
    // 3. Crear referencia y modificar
    int& referencia = valor;
    referencia = 75;
    
    cout << "\nDespues de modificar con referencia:" << endl;
    cout << "Valor final: " << valor << endl;
    
    // 4. Presentar direcciones
    cout << "\nDirecciones de memoria:" << endl;
    cout << "Direccion de valor: " << &valor << endl;
    cout << "Direccion almacenada en puntero: " << puntero << endl;
    cout << "Direccion de referencia: " << &referencia << endl;
}

// ============================================================================
// ACTIVIDAD 3: Arrays y Punteros
// ============================================================================
void actividad3() {
    cout << "\n========== ACTIVIDAD 3 ==========\n";
    cout << "Arrays y Punteros\n\n";
    
    // 1. Declarar array de enteros
    int numeros[5] = {10, 20, 30, 40, 50};
    
    cout << "Array inicial: ";
    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    // 2. Usar punteros para modificar elementos
    int* ptr = numeros;  // ptr apunta al primer elemento
    
    *(ptr + 0) = 100;    // Modificar primer elemento
    *(ptr + 2) = 300;    // Modificar tercer elemento
    *(ptr + 4) = 500;    // Modificar quinto elemento
    
    cout << "\nArray modificado con punteros: ";
    for(int i = 0; i < 5; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    
    // 3. Presentar direcciones de memoria
    cout << "\nDirecciones de memoria:" << endl;
    cout << "Direccion del array (primer elemento): " << numeros << endl;
    cout << "Direccion del puntero: " << ptr << endl;
    
    cout << "\nDirecciones de cada elemento:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "numeros[" << i << "] en " << (ptr + i) << " = " << *(ptr + i) << endl;
    }
}

// ============================================================================
// ACTIVIDAD 4: Memoria Dinámica - Matriz 2D
// ============================================================================
void actividad4() {
    cout << "\n========== ACTIVIDAD 4 ==========\n";
    cout << "Asignacion Dinamica - Matriz 2D\n\n";
    
    int filas = 3, columnas = 4;
    
    // 1 y 2. Crear matriz dinámica 2D con new
    int** matriz = new int*[filas];
    for(int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    
    // 3. Llenar la matriz con datos
    cout << "Llenando la matriz con valores...\n";
    int contador = 1;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            matriz[i][j] = contador++;
        }
    }
    
    // Mostrar la matriz
    cout << "\nMatriz " << filas << "x" << columnas << ":\n";
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\nDirecciones de memoria de las filas:" << endl;
    for(int i = 0; i < filas; i++) {
        cout << "Fila " << i << ": " << matriz[i] << endl;
    }
    
    // 4. Liberar memoria con delete
    for(int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    
    cout << "\nMemoria liberada correctamente.\n";
}

// ============================================================================
// EXTRA: Stack, Heap y Code
// ============================================================================
void funcionEjemplo() {
    cout << "Funcion ejemplo ejecutandose...\n";
}

void actividadExtra() {
    cout << "\n========== ACTIVIDAD EXTRA ==========\n";
    cout << "Stack, Heap y Code en C++\n\n";
    
    // STACK: Variables locales
    int variableLocal = 10;
    int otraVariable = 20;
    
    cout << "=== STACK (Variables locales) ===" << endl;
    cout << "variableLocal en: " << &variableLocal << endl;
    cout << "otraVariable en:  " << &otraVariable << endl;
    
    // HEAP: Memoria dinámica
    int* ptrHeap1 = new int(100);
    int* ptrHeap2 = new int(200);
    
    cout << "\n=== HEAP (Memoria dinamica) ===" << endl;
    cout << "ptrHeap1 apunta a: " << ptrHeap1 << " (valor: " << *ptrHeap1 << ")" << endl;
    cout << "ptrHeap2 apunta a: " << ptrHeap2 << " (valor: " << *ptrHeap2 << ")" << endl;
    
    // CODE: Direcciones de funciones
    cout << "\n=== CODE (Segmento de codigo) ===" << endl;
    cout << "Direccion de funcionEjemplo(): " << (void*)&funcionEjemplo << endl;
    cout << "Direccion de actividad1(): " << (void*)&actividad1 << endl;
    cout << "Direccion de actividad2(): " << (void*)&actividad2 << endl;
    
    // Análisis
    cout << "\n=== ANALISIS ===" << endl;
    cout << "Las variables del stack suelen estar en direcciones altas" << endl;
    cout << "El heap esta en direcciones intermedias" << endl;
    cout << "El codigo esta en direcciones bajas" << endl;
    
    // Liberar memoria del heap
    delete ptrHeap1;
    delete ptrHeap2;
}

// ============================================================================
// MAIN - Menú Principal
// ============================================================================
int main() {
    int opcion;
    
    do {
        cout << "\n============================================\n";
        cout << "  ACTIVIDADES - MANEJO DE MEMORIA EN C++\n";
        cout << "============================================\n";
        cout << "1. Actividad 1 - Variables y Punteros\n";
        cout << "2. Actividad 2 - Punteros y Referencias\n";
        cout << "3. Actividad 3 - Arrays y Punteros\n";
        cout << "4. Actividad 4 - Memoria Dinamica (Matriz 2D)\n";
        cout << "5. Actividad Extra - Stack, Heap y Code\n";
        cout << "6. Ejecutar TODAS las actividades\n";
        cout << "0. Salir\n";
        cout << "============================================\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                actividad1();
                break;
            case 2:
                actividad2();
                break;
            case 3:
                actividad3();
                break;
            case 4:
                actividad4();
                break;
            case 5:
                actividadExtra();
                break;
            case 6:
                actividad1();
                actividad2();
                actividad3();
                actividad4();
                actividadExtra();
                break;
            case 0:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpcion invalida. Intente nuevamente.\n";
        }
        
        if(opcion != 0) {
            cout << "\nPresione Enter para continuar...";
            cin.ignore();
            cin.get();
        }
        
    } while(opcion != 0);
    
    return 0;
}
