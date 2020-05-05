CPE_corewar_2019
===

![presentation](file:///C:/Users/cleme/OneDrive/Bureau/presentation-readme-corewar.png)

Comment utiliser le programme ?
- make

Un jeu ?
===

- QU'EST-CE QUE C'EST ?

   Le corewar est un jeu qui consiste à faire combattre de petits programmes dans une machine virtuelle.
Le but du jeu est d’empêcher les autres programmes de fonctionner correctement, et ce par tout les moyens disponibles.

La war zone !
===

![presentation](documents/readme/warzone.png)

Le jeu va donc créer une machine virtuelle dans la quelle les programmes (écrits pas les joueurs) s’affrontent. L’objectif de chaque programme est de « survivre ». Par « survivre » on entends exécuter une instruction spéciale (live) qui veut dire « je suis en vie ». Ces programmes s’éxecutent simultanément dans la machine virtuelle et ce dans un même espace mémoire, et peuvent donc écrire les uns sur les autres. Le gagnant du jeu est le dernier a avoir exécuté l’instruction « live ».

L'assembleur !
===

![presentation](documents/readme/asm.png)

Il va permettre d’écrire des programmes destinés a se battre. Il devra donc comprendre le langage assembleur et générer des programmes en binaire compréhensibles par la machine virtuelle.

La VM !
===

![presentation](documents/readme/arene.jpg)

Elle va héberger les programmes binaires que sont les champion et leur fournir un environnement d’execution standard. Elle offre tout un tas de fonctionnalités utiles au combat des champions. Il va de soi qu’elle doit pouvoir exécuter plusieurs programmes a la fois (sinon, les combats vont pas êtres passionnants …)

Les champions !
===

![presentation](documents/readme/champions.png)
C’est votre oeuvre perso. Il devra pouvoir se battre et sortir vainqueur de l’arène qu’est la machine virtuelle.
