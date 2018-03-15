# Language Objet : C++

Ingesup B3 / YNOV / 2018

---

## Household

- Mickael Tardy
- mickael.a.tardy@gmail.com
- https://www.linkedin.com/in/mickael-tardy-54723235
- https://github.com/miketardy-ynov-classroom/ynov-b2-cpp-support

---

## Planning

- Rappels
- Gestion de dépendances
- Interface Utilisateur
- Au delà
- Takeaways

---

## Rappels
### Language object : Notions

- Classes
- Objets
- Abstraction
- Polymorphisme

- Principe SOLID

---

## Rappels
### C++ : Comme les autres

- Variables
- Opérateurs : + - * / % ++ -- > < == != ...
- Boucles : for, while
- Conditions : if ... else if ... else , switch
- Fonctions : return_type fn_name (parameters) { body }


## Rappels
### C++ : Spécificités

- Données typées
- Création de types `typedef std::vector<std::pair<int, int>>::iterator it_vec_pair;`
- Namespaces `namespace test { ... }` et `using namespace std`
- Pointeurs : `int var[MAX] = {10, 100, 200};` vs `int *ptr[MAX];`

https://www.tutorialspoint.com/cplusplus/

---

## Rappels
### Environment de développement

- XCode (macOS only)
- Visual Studio (win only)
- CodeBlocks (cross-plarform)

---

## Rappels
### Création des executables

- Compilateurs : gcc, clang, Visual C++
- Production : make, CMake, qmake

---

## Rappels
### Quelques outils

- Doxygen : gestion de documentation
- Easylogging : (un des) framework(s) de gestion de logs
- CMake : gestion de build multi-platform
- CTest : tests d'application
- CPack : packaging

---

## Rappels
### Environnements de production et d'execution

- Natif
- Containers : Docker
- Machines virtuelles : VirtualBox (ou autre)

---

## Rappels
### Champs d'application

- Logiciels (Adobe Suite, Firefox, Thunderbird, MySQL, etc)
- Librairies (DCMTK, ITK, VTK, Paraview,...)
- Systèmes d'exploitation (mais souvent pas le kernel)
- Logiciels embarqués
- Web (!) >> Demo

---

## Gestion de dépendances
### Introduction

- Eviter le copy-paste
- Controler et suivre l'évolution des versions
- Comme Maven en Java ou npm en javascript

---

## Gestion de dépendances
### Vaste choix de technologies

- Conan https://www.conan.io/
- Hunter https://github.com/ruslo/hunter/
- Buckaroo https://buckaroo.pm/
- Cget http://cget.readthedocs.io/en/latest/
- Meson http://mesonbuild.com/
- vcpkg https://github.com/Microsoft/vcpkg/
- Homebrew http://brew.sh/
- NuGet https://www.nuget.org

---

## Gestion de dépendances
### Exemples : Hunter

- https://github.com/ruslo/hunter/
- Integration avec cmake
- Prise en main quasi-immédiate

---

## Gestion de dépendances
### Exemples : Conan

- https://www.conan.io/
- Intégration avec cmake
- Nécessite une installation

- [Conan vs Hunter](https://www.google.fr/search?client=safari&rls=en&dcr=0&ei=7i6qWu_yBojKgAaR-KmYDA&q=hunter+vs+conan+&oq=hunter+vs+conan+&gs_l=psy-ab.3...4438.7865.0.8030.9.9.0.0.0.0.133.787.7j2.9.0....0...1c.1j2.64.psy-ab..0.6.583...0j0i203k1j0i67k1j0i20i263k1j35i39k1j0i7i30k1.0.3BnbLuXDelg)


## Gestion de dépendances
### Pratique

- https://github.com/nlohmann/json

---

## Interface Utilisateur
### Options : Platform specific

- Windows : .NET
- Linux : Xlib
- macOS : Cocoa

---

## Interface Utilisateur
### Options : Cross-platform

- .NET (kinda)
- GTK+ (mais C wrappé)
- Qt

---

## Interface Utilisateur
### Qt : Introduction (1)

- Initialement conçu pour l'UI est devenu un framework de création d'applications
- Intègre une multitude de modules

---

## Interface Utilisateur
### Qt : Introduction (2)

- GUI : fenêtres etc.
- OpenGL : OpenGL 3D dans une fenêtre
- Dessin : dessins dans une fenêtre
- Réseau :
- SVG : dessins vectoriels
- Script : Integration de Javascript
- XML
- SQL : BDD (MySQL, Oracle, PostgreSQL)

---

## Interface Utilisateur
### Qt : Outils

- Qt Create IDE
- qmake
- CMake

---

## Interface Utilisateur
### Qt : Hands-on

https://www.qt.io/download

---

## Interface Utilisateur
### Qt : Pratique

- Baby steps
- Layouts
- Text editor

---

## Interface Utilisateur
### Qt : Savoir plus

- https://wiki.qt.io/Main
- http://doc.qt.io/qt-5/qtexamplesandtutorials.html
- https://openclassrooms.com/courses/programmez-avec-le-langage-c/introduction-a-qt

---

## Au delà

- Jeux :  
  - http://oxygine.org  
  - https://www.sfml-dev.org  

- Traitement d'images :  
  - http://itk.org/  
  - http://cimg.eu  

- Apprentissage automatique :
  - https://github.com/caffe2/caffe2  
  - https://github.com/Itseez/opencv  

- https://github.com/fffaraz/awesome-cpp

---

## Takeaways

- Comme tous les langages, C++ a son champs d'application
- Savoir choisir le bon langage
- Savoir rester efficace

---

## Takeaways
### Quelques spécificités à prendre en compte

- Courbe d'apprentissage assez raide
- Spécificités plateforme

---

## Takeaways
### Connaitres les outils :

- Complitaeurs
- Builders  
- Gestion de build
- Gestionnaires de dépendances
- ...

## Takeaways

- Savoir chercher les informations
