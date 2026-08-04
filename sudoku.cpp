#include <iostream>
#define MAX 9
using namespace std;

// Función para imprimir el tablero con formato
void Imprimir(int tablero[9][9]) {
    for (int fila = 0; fila < 9; fila++) {
        if (fila % 3 == 0 && fila != 0) {
            cout << "-+- \n";
        }
        for (int col = 0; col < 9; col++) {
            if (col % 3 == 0 && col != 0) {
                cout << " ";
            }
            cout << tablero[fila][col] << " ";
        }
        cout << endl;
    }
}

// Función auxiliar para saber si es válido colocar 'num' en 'fila' y 'col'
bool EsSeguro(int tablero[9][9], int fila, int col, int num) {
    // 1. Verificar la fila y la columna
    for (int x = 0; x < 9; x++) {
        if (tablero[fila][x] == num || tablero[x][col] == num) {
            return false; // El número ya está en la fila o columna
        }
    }

    // 2. Verificar el bloque de 3x3
    int inicioFila = fila - (fila % 3);
    int inicioCol = col - (col % 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tablero[i + inicioFila][j + inicioCol] == num) {
                return false; // El número ya está en el bloque 3x3
            }
        }
    }
    return true; // Es seguro colocar el número
}

// Función principal de Backtracking
bool SolucionarSudoku(int tablero[9][9]) {
    int fila = -1;
    int col = -1;
    bool vacio = true;

    // Buscar la primera celda vacía (que tenga un 0)
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (tablero[i][j] == 0) {
                fila = i;
                col = j;
                vacio = false;
                break;
            }
        }
        if (!vacio) break;
    }

    // Si no encontramos ninguna celda vacía, ¡el Sudoku está resuelto!
    if (vacio) {
        return true;
    }

    // Intentar colocar los números del 1 al 9 en la celda vacía
    for (int num = 1; num <= 9; num++) {
        // Comprobar si las reglas del Sudoku permiten poner este número aquí
        if (EsSeguro(tablero, fila, col, num)) {
            tablero[fila][col] = num; // Asignamos el número provisionalmente

            // Llamada recursiva: intentamos resolver el resto del tablero
            if (SolucionarSudoku(tablero)) {
                return true;
            }

            // BACKTRACKING: Si la llamada anterior no resolvió el Sudoku,
            // significa que este número nos llevó a un error. Lo borramos (ponemos 0)
            // y el bucle probará con el siguiente número.
            tablero[fila][col] = 0;
        }
    }

    // Si probamos del 1 al 9 y ninguno funcionó, necesitamos retroceder más
    return false;
}

int main() {
    // Redirigir la entrada estándar para que lea desde "in.txt"
    if (!freopen("in.txt", "r", stdin)) {
        cout << "Error: No se pudo abrir el archivo 'in.txt'" << endl;
        return 1;
    }

    int tablero[9][9] = {0}; // Inicializamos todo el tablero con ceros (vacío)
    int pos_x, pos_y, valor;

    // Ingresamos los valores iniciales del Sudoku desde el archivo
    while (cin >> pos_x >> pos_y >> valor) {
        tablero[pos_x - 1][pos_y - 1] = valor;
    }

    cout << "--- Tablero Inicial ---" << endl;
    Imprimir(tablero);
    cout << endl;

    // Intentamos resolver el Sudoku
    if (SolucionarSudoku(tablero)) {
        cout << "--- Sudoku Resuelto ---" << endl;
        Imprimir(tablero);
    } else {
        cout << "No se encontró solución para este Sudoku." << endl;
    }

    return 0;
}
