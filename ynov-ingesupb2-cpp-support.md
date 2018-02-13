# Programmation Orientée Objet 

## Household

_*YNOV - INGESUP B2 - Février 2018*_

_Mickael Tardy, mickael.a.tardy@gmail.com_

https://www.linkedin.com/in/mickael-tardy-54723235/

## Planning 

- Objectifs  
- Généralités OOP
- Univers C/C++
- Principes de base 
- Outils 

## Objectifs

- Présentation de l'univers C/C++
- Introduction des notions d'un langage OOP
- Rappels sur les principes généraux
- Prise en main des outils


## Prologue 

- Difficultés  
  - Sujet très large  
  - Beaucoup de spécificités et de détails  

- Démarche 
  - Maitrise de concepts de base 
  - Apprendre à chercher l'information 

## Resources 

### Développer 

- GPP/G++ : https://gcc.gnu.org
- Visual C++  : http://landinghub.visualstudio.com/visual-cpp-build-tools ; https://docs.microsoft.com/en-us/cpp/
- CMake : https://cmake.org
- Supports du cours : https://github.com/miketardy-ynov-classroom
- (Bonus) https://hub.docker.com/_/mono/

### Apprendre

- Accelerated C++ Practical Programming by Example by Andrew Koenig and Barbara E. Moo
- http://devdocs.io/cpp/
- http://www.cplusplus.com/doc/tutorial/
- http://www.learncpp.com/
- https://hackr.io/tutorials/learn-c-plus-plus
- https://www.hackerrank.com/domains/cpp
- https://openclassrooms.com/courses/programmez-avec-le-langage-c/
- https://github.com/ttroy50/cmake-examples

## Univers C

### Historique

- C est crée par Dennis Ritchie en 1969 - 1973 à AT&T Bell Labs.
- C++ est créé par Bjarne Stroustrup en 1979 et est une version OOP de C
- C# est crée par Anders Hejlsberg en 2000 et n'a pas grande chose à voir avec C++

### Eléments clefs

- Rapidité
- Langage compilé : i.e. création du code binaire

### C++ Aujourd'hui

- Multiples Applications (http://www.stroustrup.com/applications.html)
- Frameworks d'apprentissage automatique (Caffe, Caffe2, TensorFlow)
- Frameworks et outils industriels  
  - dcmtk  
  - Kitware : ITK, VTK  
- Jeux 

## C++ vs. ...

- Quelques comparaisons courantes :  
  - C : Contrairement à C++ n'est pas OOP  
  - C#, Java : Sont des langages interpreté  
- Peu/pas comparables  
  - JavaScript, Python, PHP  


### Difficultés et obstacles 

https://www.quora.com/What-makes-C++-really-difficult-to-learn

- Language très générique
- Beaucoup (trop) de liberté : trust the programmer
- Gestion de mémoire par le développeur
- Syntaxe puissant et complèxe 

### Dernières évolutions 

- C++17 en 2017  
  - https://en.wikipedia.org/wiki/C%2B%2B17
- C++14 en 2014  
  - https://en.wikipedia.org/wiki/C%2B%2B14
  - https://isocpp.org/wiki/faq/cpp14-language  
- C++11 en 2011  
  - https://en.wikipedia.org/wiki/C%2B%2B11  
  - https://blog.smartbear.com/development/the-biggest-changes-in-c11-and-why-you-should-care/  

### Environnement de travail

- Editeur texte : atom.io, vim, notepad++, etc.
- Compilateur: gcc/g++, clang, visual c++
- Debugger : LLDB (https://lldb.llvm.org)

### Environnement utilitaire 

- Doxygen : gestion de documentation
- Easylogging : (un des) framework(s) de gestion de logs
- CMake : gestion de build multi-platform
- CTest : tests d'application
- CPack : packaging 


## Programmation orientée objet

### Notions 

- Classes
- Objets 
- Abstraction
- Polymorphisme

### Notions : Classe

- Une entité réunissant des membres, méthodes et propriétés (attributs)

### Notions : Objet

- Une instance d'une classe

### Notions : Abstraction

- Généralisations sur un ensemble de classes 

### Notions : Polymorphisme

Capacité d'un objet de jouer plusieurs rôles 

## Notions : Heritage 

## Notions 
- Heritage (en: inheritance) vs Composition 

### Principes SOLID

- Single responsibility principle
- Open/closed principle
- Liskov substitution principle
- Interface segregation principle
- Dependency inversion principle

#### Principes SOLID : S

*Single responsibility principle (Responsabilité unique)*
une classe, une fonction ou une méthode doit avoir une et une seule responsabilité

#### Principes SOLID : O

*Open/closed principle (Ouvert/fermé)*
une classe doit être ouverte à l'extension, mais fermée à la modification

#### Principes SOLID : L

*Liskov substitution principle (Substitution de Liskov)*
Une instance de type T doit pouvoir être remplacée par une instance de type G, tel que G sous-type de T, sans que cela ne modifie la cohérence du programme

#### Principes SOLID : I

*Interface segregation principle (Ségrégation des interfaces)*
préférer plusieurs interfaces spécifiques pour chaque client plutôt qu'une seule interface générale

#### Principes SOLID : D

*Dependency inversion principle (Inversion des dépendances)*
il faut dépendre des abstractions, pas des implémentations

## Introduction dans la syntaxe 

### Premier aperçu du code

```c++
#include<iostream>
#include <string>
#include "Helloer.h"

#define newline "\n\n\n"

using namespace std;


namespace test {
  /** @brief Create and Call Helloer
   *  
   *  Creating Helloer and calling its methods
   *
   *  @param Message String to pass to Helloer constructor
   *  @return void
   */
  void createAndCallHelloer(string message = "Hi!") {
    Helloer helloer(message);
    cout << helloer.SayHello() << endl;
    cout << helloer.SayMessage() << endl;
    return;
  }
}

/** @brief Program entrypoint
 *
 *  @return 0
 */
int main()
{
  
  test::createAndCallHelloer();
  cout << newline;
  
  string mess = "Yo";
  string* messPtr = &mess;
  
  test::createAndCallHelloer(*messPtr);
  
  return 0;
}
```

### Compilation 

- GCC: 
```bash
g++ -std=c++11 program.cpp -o program
```

- Clang (OS X)
```bash
clang++ -std=c++11 -stdlib=libc++ example.cpp -o example_program
```

### Bases 

#### Variables et types 


```c++
boolean a;
float mynumber;
double b,c,d;	
int x = 0;
int y (0);
```


#### Constantes et Preprocesseurs 


```c++
const double pi = 3.14159;
const char newline = '\n';
```

```c++
#define PI 3.14159
#define NEWLINE '\n'
```


#### Operateurs 

- Affectation (=)
- Arithmétique (+, -, *, /, % )
- Incrémentation et décroissance (++, --)
- Operateurs composés (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)
- Comparaison (==, !=, >, <, >=, <=)
- Logique ( !, &&, || )
- Opération ternaire ( ?  : )
- Operateurs de bit ( &, |, ^, ~, <<, >> )

#### Input / Output 


```c++
// i/o example

#include <iostream>
using namespace std;

int main ()
{
  int i;
  cout << "Please enter an integer value: ";
  cin >> i;
  cout << "The value you entered is " << i;
  cout << " and its double is " << i*2 << ".\n";
  return 0;
}
```


#### Gestion de flux

- switch (case, break, default) : *Attention* Seulement constantes 
- boucles (for, while, do... while)
- (Bonus) goto : https://homepages.cwi.nl/~storm/teaching/reader/Dijkstra68.pdf


```c++
// range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str {"Hello!"};
  for (char c : str)
  {
    cout << "[" << c << "]";
  }
  cout << '\n';
}
```


#### Functions 

- Déclaration et implementation 
- Valeurs retournées : type ou void
- Valeurs de paramètres par défaut 
- Arguments : par valeur ou par référence
- Prefix inline : injection de la fonction à l'endroit de l'appel
- Recursivité : capacité de la fonction de faire appel à elle même 
- Overloading : déclaration multiple 
- templates 


```c++
// overloading functions
#include <iostream>
using namespace std;

int operate (int a, int b)
{
  return (a*b);
}

double operate (double a, double b)
{
  return (a/b);
}

int main ()
{
  int x=5,y=2;
  double n=5.0,m=2.0;
  cout << operate (x,y) << '\n';
  cout << operate (n,m) << '\n';
  return 0;
}
```


```c++
// function template
#include <iostream>
using namespace std;

template <class T>
T sum (T a, T b)
{
  T result;
  result = a + b;
  return result;
}

int main () {
  int i=5, j=6, k;
  double f=2.0, g=0.5, h;
  k=sum<int>(i,j);
  h=sum<double>(f,g);
  cout << k << '\n';
  cout << h << '\n';
  return 0;
}
```


#### Scope 

- Blocks
- Namespaces 


#### Tableaux 

- Initialization :  
  - Déclaration de la taille obligatoire 
  - La taille doit être connue lors de compilation
  - `int foo [5];`  
  - `int bar [5] = { 10, 20, 30 };`  
  - `int foo [] = { 16, 2, 77, 40, 12071 };`  
- Accès aux valeurs  
  - `foo[2] = 10` (vs `int foo[2]`);  
- Dimensions multiples  
  - `char century [100][365][24][60][60];`  
- Librarie arrays  
  - `#include <array>`  

#### Pointeurs 

- Adresse (memoire) : `foo = &myvar;`
```c++
myvar = 25;
foo = &myvar;
bar = myvar;
```

- Accès à valeur 
```c++
myvar == 25
&myvar == 1776
foo == 1776
*foo == 25
```

- Initialization 
```c++
int myvar;
int * myptr = &myvar;
```

- Opérations
```c++
const char * foo = "hello";
*(foo+4); // Quel valeur ?
foo[4];  // Quel valeur ?
```

- Void pointer
```c++
// increaser
#include <iostream>
using namespace std;

void increase (void* data, int psize)
{
  if ( psize == sizeof(char) )
  { char* pchar; pchar=(char*)data; ++(*pchar); }
  else if (psize == sizeof(int) )
  { int* pint; pint=(int*)data; ++(*pint); }
}

int main ()
{
  char a = 'x';
  int b = 1602;
  increase (&a,sizeof(a));
  increase (&b,sizeof(b));
  cout << a << ", " << b << '\n';
  return 0;
}
```

#### Structures 

- Groupment des attributs 

```c++
struct type_name {
member_type1 member_name1;
member_type2 member_name2;
member_type3 member_name3;
.
.
} object_names;
```

- Pointeurs vers les structures : `pmovie->title` == `(*pmovie).title`

```c++
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
};

int main ()
{
  string mystr;

  movies_t amovie;
  movies_t * pmovie;
  pmovie = &amovie;

  cout << "Enter title: ";
  getline (cin, pmovie->title);
  cout << "Enter year: ";
  getline (cin, mystr);
  (stringstream) mystr >> pmovie->year;

  cout << "\nYou have entered:\n";
  cout << pmovie->title;
  cout << " (" << pmovie->year << ")\n";

  return 0;
}
```

#### Alias de types 

- typedef
```c++
typedef char C;
typedef unsigned int WORD;
typedef char * pChar;
typedef char field [50];
```

```c++
using C = char;
using WORD = unsigned int;
using pChar = char *;
using field = char [50]; 
```

- Unions : a ne pas confondre avec les struct

```c++
union mytypes_t {
  char c;
  int i;
  float f;
} mytypes;
```

- Enum
```c++
enum colors_t {black, blue, green, cyan, red, purple, yellow, white};
```

```c++
enum class Colors {black, blue, green, cyan, red, purple, yellow, white};
```


### Création d'un environnement de travail 

#### Rappels 

- OS :  
  - Linux
  - MacOS
  - Windows

- Compilateurs :  
  - gcc `apt-get install -y gcc g++` https://gcc.gnu.org/install/download.html  
  - clang,  
  - mingw http://www.mingw.org,  
  - visual c++ http://landinghub.visualstudio.com/visual-cpp-build-tools 
  
- Le plus simple : linux (debian, ubuntu)

#### Virtualisation pour un environnement de développement commun

- VirtualBox https://www.virtualbox.org
- Vagrant https://www.vagrantup.com
- (VirtualBox , Vagrant ) + Ansible : https://www.ansible.com
- Docker https://www.docker.com/ 
- Docker Toolbox https://docs.docker.com/toolbox/toolbox_install_windows/

#### Docker Basics 

- https://www.docker.com/what-container
- Image : Dockerfile pour décrire le système
- Container : Brick running container

#### Docker Hands On

- Download https://www.docker.com/community-edition#/download
- Install ... 
- Build image 
```
mkdir -p ~/dev/
cd ~/dev/
git clone https://github.com/miketardy-ynov-classroom/linux-gpp-cmake-docker
cd linux-gpp-cmake-docker
docker build -t linux-gpp-cmake-img .
```
- Run  
  - `docker run -it --name linux-gpp-cmake-ctr linux-gpp-cmake-img` ou `docker run -it --name linux-gpp-cmake-ctr -v /Development/share/dev/:/home/dev linux-gpp-cmake-img`  
  - `mkdir -p /home/dev/first-project`  
  - `cd /home/dev/first-project`  
  - `vi hello.cpp`
```c++
#include<iostream>
using namespace std;

int main()
{
    double a(4.3), b(5.2);
    cout << "Hello world " << endl << "a = " << a << endl << "b = " << b <<endl;
    return 0;
}
```  
  - `g++ *.cpp -std=c++11  -o hello-app`  
  - `./hello-app`  

## Compilation 

### Plusieurs Options

#### Option 1 : Execution du compilateur avec toutes les dependences nécessaires  

- g++ ` g++ *.cpp -o app`
- MinGW :  `g++ *.cpp -o app.exe`
- Visual Studio -> Build
- Code::Blocks -> Build

#### Option 2 : Scripts bash 

```bash
#!/bin/bash

name=$1

g++ *.cpp -o ${name}
```

#### Option 3 : Utilisation d'un outil de build 

- makefile : https://www.gnu.org/software/make/, https://cognitivewaves.wordpress.com/makefiles-windows/
```bash
# Spécifier le compilateur
CC=g++

CFLAGS=-c -Wall

all: hello

hello: main.o hello.o
    $(CC) main.o hello.o -o hello

main.o: main.cpp
    $(CC) $(CFLAGS) main.cpp

hello.o: hello.cpp
    $(CC) $(CFLAGS) hello.cpp

clean:
    rm *o hello
```

- MSBuild (Visual Studio) https://msdn.microsoft.com/en-us/library/dd393573.aspx

```xml
<?xml version="1.0" encoding="utf-8" ?>
<Project xmlns="http://schemas.microsoft.com/developer/msbuild/2003">
  <Target Name="Build">
    <Message Text="Building msbuildintro" />
    <MSBuild Projects="msbuildintro.csproj" Targets="Build" />
  </Target>
</Project>
```

- nmake (Visual studio, Windows) https://msdn.microsoft.com/en-us/library/dd9y37ha.aspx, http://www.bojankomazec.com/2011/10/nmake-and-its-environment.html


#### Option 4 : Cmake

Prise en charge de la création des scripts de build

- Définition du comportement avec un ou plusieurs CMakeLists.txt
- Execution avec 
```bash
cd build/path
cmake <src/path>
cmake --build .
```

### Introduction en CMake 

https://cmake.org
https://cmake.org/cmake/help/latest/index.html

Outil de build, de test et de packaging cross-platform multi-language 

- Support de plusieurs langages (ASM, ASM-ATT, ASM-MASM, ASM-NASM, C, CSharp. CUDA, CXX, Fortran, Java, RC (Windows Resource Compiler), Swift
- Cross Platform 
- Couteau suisse : gestion de build, de tests, de packaging
- Langage de scripting


#### Quelques opportunités fonctionnelles 

- Parametrage, injections de variables et options
- Inclusion des librairies externes 
- Doxygen :  Documentation 
- CTest : validation 
- CDash : Dashboard de résultats  
- CPack : Application Packaging


#### Combinaisons d'outils 

- CMake + Make + Gcc
- CMake + MinGW + make
- CMake + Xcode + clang
- CMake + Code::Blocks
- CMake + Visual Studio + Visual C++

#### Notions de variables 

Quelques exemples 
- CMAKE_CXX_COMPILER
- PROJECT_SOURCE_DIR, CMAKE_CURRENT_SOURCE_DIR, 
- PROJECT_BINARY_DIR, CMAKE_CURRENT_BINARY_DIR, 

Paramétrage 
- via ligne de commande : `cmake .. -DCMAKE_CXX_COMPILER=g++`
- dans le fichier CMakeLists.txt : `set(CMAKE_CXX_STANDARD 11)`

#### Cmake : Etape par étape

##### Menage dans le code (suggestion)

- Sources dans ./src/
- Build dans ./build/
- Fichiers de config dans ./config/

##### Création du premier projet 

- Créer un fichier CMakeLists.txt
- Initialiser `cmake_minimum_required (VERSION 2.6)`
- Nommer le projet `project (Cmake Playground Project)`
- Ajouter un executable `add_executable(App main.cpp)`


##### Execution 

- Créer un projet de build 
`mkdir build; cd build`
- Lancer CMake 
`cmake ..`
- Builder 
`cmake --build .`

##### Customisation

- Spécifier le compilateur 
`SET(CMAKE_CXX_COMPILER /path/to/cpp/compiler)`
- Paramétrer le compilateur 
```bash
set(CMAKE_CXX_STANDARD 11)
set (CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
set(CMAKE_CXX_STANDARD_REQUIRED ON)
```
- Messages informatifs 
`message("Cmake run successfully")`

##### Introduction de doxygen

http://www.stack.nl/~dimitri/doxygen/download.html

- Création d'un fichier de configuration Doxyfile (ou Doxyfile.in)
```
OUTPUT_DIRECTORY        = @CMAKE_CURRENT_BINARY_DIR@/doc_doxygen/
INPUT                   = @CMAKE_CURRENT_SOURCE_DIR@/../src/ @CMAKE_CURRENT_SOURCE

PROJECT_NAME            = Playground application
```

- Introduction de doxygen dans cmake 
```
option(BUILD_DOC "Build documentation" ON)
find_package(Doxygen)
```

```
if (DOXYGEN_FOUND)
    # set input and output files
    set(DOXYGEN_IN ${CMAKE_CURRENT_SOURCE_DIR}/../docs/Doxyfile.in)
    set(DOXYGEN_OUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    # request to configure the file
    configure_file(${DOXYGEN_IN} ${DOXYGEN_OUT} @ONLY)
    message("Doxygen build started")

    # note the option ALL which allows to build the docs together with the application
    add_custom_target( doc_doxygen ALL
        COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_OUT}
        WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
        COMMENT "Generating API documentation with Doxygen"
        VERBATIM )
else (DOXYGEN_FOUND)
  message("Doxygen need to be installed to generate the doxygen documentation")
endif (DOXYGEN_FOUND)
```

##### Introduction de tests

- Activations de tests
`enable_testing()`

- ajout d'un test 

`add_test (FirstTest App)`

- Vérification des résultats 
`set_tests_properties (FirstTest PROPERTIES PASS_REGULAR_EXPRESSION "Hello world")`

- Déroulement de tests : `ctest` ou `make test`

##### Introduction d'une librairie externe 

Exemple d'easylogging https://muflihun.github.io/easyloggingpp/

- inclure easylogging dans le code 
```c++
#include "easylogging++.h"
 
INITIALIZE_EASYLOGGINGPP
```
- Eventuellement reconfigurer les règles de traçage
```c++
el::Loggers::reconfigureAllLoggers(conf("../config/logger.conf"));
```
```
* GLOBAL:
   FORMAT               =  "%datetime %msg"
   FILENAME             =  "generator.log"
   ENABLED              =  true
   TO_FILE              =  true
   TO_STANDARD_OUTPUT   =  true
   SUBSECOND_PRECISION  =  6
   PERFORMANCE_TRACKING =  true
   MAX_LOG_FILE_SIZE    =  2097152 ## 2MB - Comment starts with two hashes (##)
   LOG_FLUSH_THRESHOLD  =  100 ## Flush after every 100 logs
* INFO:
   ENABLED              =  true
* DEBUG:
   FORMAT               = "%datetime{%d/%M} %func %msg"
   ENABLED              =  false
```

```c++
```
- Tracer les messages
```c++
LOG(INFO) << "Hello, world";
```

- Retour dans CMakeLists
```
target_link_libraries(ImageGenerator /usr/local/include/easylogging++.cc)
```

#### Packaging avec Cpack

- Configuration dans CMake
```
# Numero de version
set (App_VERSION_MAJOR 1)
set (App_VERSION_MINOR 0)
```
```
include (InstallRequiredSystemLibraries)
set (CPACK_RESOURCE_FILE_LICENSE  
     "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
set (CPACK_RESOURCE_FILE_LICENSE  
     "${CMAKE_CURRENT_SOURCE_DIR}/README.md")
set (CPACK_PACKAGE_VERSION_MAJOR "${APP_VERSION_MAJOR}")
set (CPACK_PACKAGE_VERSION_MINOR "${APP_VERSION_MINOR}")
include (CPack)
```

- Execution
```
cmake ..
cmake --build .
cpack --config CPackConfig.cmake
```

### Travaux pratiques : C++

- https://www.hackerrank.com/domains/cpp

- https://www.hackerrank.com/challenges/c-tutorial-functions/problem
- https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem
- https://www.hackerrank.com/challenges/c-tutorial-strings/problem
- https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem
- https://www.hackerrank.com/challenges/c-tutorial-class/problem


### Travaux pratiques : CMake

- https://github.com/ttroy50/cmake-examples
- CMake Tutorial : https://cmake.org/cmake-tutorial/, https://gitlab.kitware.com/cmake/cmake/blob/master/Tests/Tutorial/