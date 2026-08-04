# 🧩 Solucionador de Sudoku en C++ (Backtracking)

Este es un programa en C++ que resuelve rompecabezas de Sudoku clásicos (9x9) utilizando el algoritmo de Backtracking (Vuelta atrás)[cite: 1]. El programa lee la configuración inicial del tablero desde un archivo de texto, procesa la solución y la imprime en la consola con un formato amigable[cite: 1].

---

## 🚀 Características

* **Algoritmo Eficiente:** Implementación limpia y eficiente del algoritmo de Backtracking mediante recursividad[cite: 1].
* **Lectura Automática:** Carga automatizada de los valores iniciales del tablero a través del archivo `in.txt`[cite: 1].
* **Formato Visual:** Interfaz de consola que imprime de forma clara y dividida tanto el tablero inicial como el resuelto[cite: 1].

---

## 📁 Estructura del Proyecto

* `sudoku.cpp`: Contiene el código fuente, la lógica de validación y el algoritmo principal[cite: 1].
* `in.txt`: Archivo de entrada que almacena las coordenadas y los valores iniciales de las pistas del Sudoku[cite: 1].

---

## 🛠️ Cómo compilar y ejecutar

### Requisitos previos

Debes tener un compilador de C++ instalado en tu sistema (como `g++`, MinGW para Windows)[cite: 1].

### Pasos a seguir

1. Clona o descarga este repositorio en tu equipo local[cite: 1].
2. Asegúrate de que el archivo `sudoku.cpp` y el archivo `in.txt` se encuentren en la misma carpeta[cite: 1].
3. Abre tu terminal (por ejemplo, PowerShell o CMD) y navega hasta la carpeta del proyecto[cite: 1].
4. Compila el código ejecutando:
   ```bash
   g++ sudoku.cpp
