# Sudoku Solver | C++ Backtracking Implementation

Este repositorio contiene una implementación eficiente en C++ para la resolución automática de tableros de Sudoku (9x9). El motor de resolución está fundamentado en el algoritmo de **Backtracking** (vuelta atrás), un enfoque clásico para problemas de satisfacción de restricciones (CSP).

El programa evalúa sistemáticamente el espacio de búsqueda mediante recursividad, validando en tiempo real las reglas del juego para encontrar la solución óptima sin agotar innecesariamente la memoria.

## ⚙️ Características Técnicas

- **Algoritmo Optimizado:** Implementación recursiva que poda el árbol de búsqueda inmediatamente cuando se detecta una violación de las restricciones del Sudoku.
- **Validación de Restricciones:** Comprobación algorítmica de unicidad en filas, columnas y subcuadrículas de 3x3 en tiempo constante relativo.
- **Manejo de I/O (Entrada/Salida):** Carga automatizada del estado inicial del tablero mediante redirección de flujos estándar (`stdin`) a través de un archivo de configuración, desacoplando los datos de la lógica del código.
- **Renderizado en Consola:** Formateo visual de matrices para una depuración y visualización clara tanto del input como del output.

## 📂 Arquitectura del Proyecto

```text
├── sudoku.cpp    # Lógica central, algoritmo de backtracking y punto de entrada
├── in.txt        # Dataset de configuración inicial del tablero
└── README.md     # Documentación técnica del proyecto
```
## 📊 Formato de Entrada (in.txt)
El programa requiere un archivo de texto plano llamado in.txt en el directorio raíz para inicializar el tablero. Cada línea del archivo debe contener tres valores enteros separados por espacios, correspondientes a: [Fila] [Columna] [Valor] (índices basados en 1).

- **Ejemplo de formato:**

1 1 5   # Coloca el número 5 en la fila 1, columna 1
1 2 3   # Coloca el número 3 en la fila 1, columna 2

## 🚀 Guía de Instalación y Uso
- **Prerrequisitos**
Compilador de C++ (GCC/G++, Clang, o MSVC).

Entorno de terminal (Bash, PowerShell, CMD).

-**Compilación**
Clona este repositorio y navega al directorio del proyecto. Luego, utiliza el compilador de tu preferencia. Con g++, el comando estándar es:

g++ sudoku.cpp -o sudoku_solver -O2

-**Ejecución**
Asegúrate de que el archivo in.txt se encuentre en el mismo directorio que el binario ejecutable.

-**En entornos Unix/Linux/macOS:**

./sudoku_solver

-**En entornos Windows:**

.\sudoku_solver.exe
