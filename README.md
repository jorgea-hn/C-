# Curso de C++ – Progreso y Aprendizajes

Este repositorio documenta mi aprendizaje y práctica en el curso de **C++** de [Código Facilito](https://codigofacilito.com/). Aquí encontrarás ejemplos, ejercicios y proyectos que abarcan desde los fundamentos hasta programación orientada a objetos y buenas prácticas.

---

## 🚀 Introducción

Este proyecto está diseñado para ayudar a estudiantes y entusiastas de C++ a comprender los conceptos clave del lenguaje a través de ejemplos prácticos y ejercicios resueltos. Cada módulo aborda un tema fundamental y contiene archivos fuente listos para compilar y ejecutar.

---

## 📦 Requisitos

- Compilador de C++ (recomendado: [g++](https://gcc.gnu.org/), [MinGW](http://www.mingw.org/), o [Visual Studio](https://visualstudio.microsoft.com/))
- Editor de código (recomendado: [VS Code](https://code.visualstudio.com/))

---

## 🛠️ Cómo compilar y ejecutar

Puedes compilar cualquier archivo `.cpp` usando el siguiente comando en tu terminal:

```bash
# Ejemplo para compilar hola_mundo.cpp
g++ 1_Fundamentos/hola_mundo.cpp -o 1_Fundamentos/hola_mundo.exe
# Para ejecutar:
./1_Fundamentos/hola_mundo.exe
```

En Windows, puedes ejecutar el archivo `.exe` directamente.

---

---

## ✅ Módulos completados


### 📘 1. Fundamentos
En este módulo se abordan los conceptos esenciales para comenzar a programar en C++:
- Entrada y salida de datos (`cin`, `cout`)
- Sintaxis básica de un programa en C++ (estructura de `main`)
- Tipos de datos primitivos (`int`, `float`, `char`, `bool`)
- Operadores aritméticos, lógicos y de comparación
- Comentarios y buenas prácticas de escritura de código
- Ejercicios de integración para afianzar los conceptos básicos

Ejemplos prácticos:
- Programa "Hola Mundo"
- Conversión de tipos de datos
- Operaciones matemáticas básicas
- Uso de variables y constantes

Archivos:
- `hola_mundo.cpp`, `tipo_datos.cpp`, `operadores.cpp`, `entrada_salida_datos.cpp`, `practica.cpp`

---


### 🔁 2. Control de flujo y funciones
Este módulo profundiza en la lógica de programación y la reutilización de código:
- Uso de condicionales (`if`, `else`, `switch`) para tomar decisiones
- Ciclos (`while`, `for`) para repetir acciones
- Funciones: definición, argumentos, valores de retorno y alcance de variables
- Ejercicios prácticos como calculadora, validación de datos y generación de secuencias
- Introducción a la recursividad y modularidad

Ejemplos prácticos:
- Calculadora básica
- Contadores y sumadores
- Validación de entrada de usuario
- Ejercicios de lógica y algoritmos simples

Archivos:
- `bucles.cpp`, `switch_case.cpp`, `while.cpp`, `calculadora.cpp`, `condicional_if_else.cpp`, `funciones.cpp`, `Ejercicios.cpp`

---


### 🧠 3. Arreglos y Cadenas
En este módulo se exploran estructuras de datos fundamentales y manipulación de texto:
- Declaración y uso de arreglos unidimensionales y multidimensionales
- Acceso, modificación y recorrido de arreglos
- Manipulación de cadenas de caracteres: lectura, escritura, comparación y funciones de la librería estándar
- Introducción al manejo de punteros y su relación con arreglos
- Ejercicios prácticos como búsqueda, ordenamiento y procesamiento de texto

Ejemplos prácticos:
- Suma y promedio de elementos de un arreglo
- Búsqueda de valores en arreglos
- Concatenación y comparación de cadenas
- Uso básico de punteros para acceder a datos


Archivos:
- `arreglos_uni.cpp`, `arreglos_multi.cpp`, `arreglos_multidimensionales.cpp`, `cadena_caracteres.cpp`, `Ejercicios.cpp`, `punteros.cpp`

---

### 🧩 4. Memoria, Referencias y Buenas Prácticas
Este módulo aborda el manejo avanzado de memoria y técnicas para escribir código más seguro y eficiente:
- Memoria dinámica: uso de `new`, `delete`, y gestión manual de recursos
- Referencias y punteros: diferencias, usos y buenas prácticas
- Prevención de errores comunes como fugas de memoria y acceso indebido
- Ejercicios prácticos para reforzar el uso correcto de memoria y referencias
- Recomendaciones para escribir código legible y mantenible

Ejemplos prácticos:
- Creación y liberación de arreglos dinámicos
- Paso de variables por referencia
- Ejercicios de depuración y corrección de errores

Archivos:
- `memorias_dinamicas.cpp`, `referencias.cpp`, `Buenas_practocas.cpp`, `Ejercicio_practico.cpp`, `Ejercicios.cpp`

---

### 🛠️ 5. STL, Patrones de Diseño y Buenas Prácticas
En este módulo se exploran herramientas y técnicas profesionales para el desarrollo en C++:
- Uso de la STL (Standard Template Library): `vector`, `list`, `map`, `set`, iteradores y algoritmos
- Manejo de excepciones y errores: `try`, `catch`, `throw`
- Introducción a patrones de diseño básicos: Singleton, Factory, Observer, etc.
- Ejercicios prácticos aplicando la STL y patrones para resolver problemas reales
- Buenas prácticas para el desarrollo profesional en C++

Ejemplos prácticos:
- Implementación de listas y mapas con STL
- Manejo de errores y validaciones
- Aplicación de patrones de diseño en pequeños proyectos

Archivos:
- `STL.cpp`, `patrones_diseno.cpp`, `Iteradores.cpp`, `Excepciones.cpp`, `Ejemplo_errores.cpp`, `Ejercicios.cpp`

---

### 🏛️ 6. Programación Orientada a Objetos (POO)
Este módulo introduce los pilares de la POO y su aplicación en C++:
- Conceptos clave: clases, objetos, atributos y métodos
- Encapsulación, herencia, abstracción, polimorfismo y sobrecarga
- Constructores y destructores
- Ejercicios prácticos para modelar problemas reales usando POO
- Ejemplo de integración de todos los conceptos en un mini-proyecto

Ejemplos prácticos:
- Definición y uso de clases
- Herencia entre clases y reutilización de código
- Polimorfismo y sobrecarga de métodos
- Encapsulación y protección de datos

Archivos:
- `conceptos_basicos.cpp`, `encapsulacion.cpp`, `herencia.cpp`, `abstraccion.cpp`, `constructores_y_destructores.cpp`, `polimorfismo_y_sobrecarga.cpp`, `ejemplo_practico.cpp`, `ejercicios.cpp`

---

## ⚙️ Estructura del Proyecto

```bash
CURSO_C++
│
├── 1_Fundamentos/                  # Conceptos básicos de C++
├── 2_Control_flujo_y_funciones/    # Condicionales, ciclos y funciones
├── 3_Arreglos_cadenas/             # Arreglos y cadenas de caracteres
├── 4_Memoria_referencia_buenas_practicas/ # Memoria dinámica y buenas prácticas
├── 5_STL_patrones_diseño_buenas_practicas/ # STL y patrones de diseño
├── 6_POO/                          # Programación orientada a objetos
└── .gitignore
```

---

## 📅 Próximos pasos / To-Do
- Completar el proyecto final
- Agregar más ejercicios prácticos
- Mejorar la documentación de cada módulo
- Añadir ejemplos de uso de librerías externas

---

## 🤝 Créditos
- Curso por [Código Facilito](https://codigofacilito.com/)

---

## 📄 Licencia
Este proyecto se distribuye bajo la licencia MIT. Puedes usar, modificar y compartir libremente el contenido.
