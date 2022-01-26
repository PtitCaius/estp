# TP IOT et réseaux bas débit

Ici se retrouvera tout les TP du cours IOT et Réseaux Bas Débit. Ce TP est une introduction au monde de l'IOT en réalisant un petit projet de développement en C++ (cpp), sur une raspberry pi.

Le projet consiste à créer une petite application qui récupère un flux vidéo d'une caméra connectée a la raspberry pi, et de détecter s'il y a des visages dans le champs de vision de la caméra. De plus, il sera nécessaire de modifier la fréquence de rafraichissement du flux vidéo, afin de limiter la bande passante nécessaire à l'envoit de ce flux sur un réseaux de données (typiquement ethernet/wifi dans ce cas là).

# TP1

Trois exercices de développement cpp et Qt seront a faire pendant ce TP. Ces exercices permettrons de voir rapidement les bases du développement Qt et cpp et aussi commencer à voir la librairie opencv, qui permet de faire du traitement d'image.

## Exercice 1

Le but de cet exercice est de se familiariser avec Qt et le principe des signaux/slots.

Il faut complêter le code fourni afin de connecter les différents signaux/slots des moduless entre eux. Il faudra aussi compléter le code permettant l'affichage des informations reçue par l'interface utilisateur.

Le résultat attendu est un petit logiciel qui affiche la température du processeur de la rapsberry pi.

## Exercice 2

Le but de cet exercice est de se familiariser avec la librairie opencv. Un template de projet vide est fourni, et il faut compléter le code afin d'activer la caméra et afficher le flux vidéo. Des ressources sont disponible sur ce site web ainsi que dans la documentation officielle d'OpenCV.

## Exercice 3

Le dernier exercice sera dédié a la partie design d'interface utilisateur. Il faudra utiliser l'onglet design de Qtcreator afin de créer un interface utilisateur qui comporte plusieurs boutons (voir image en dessous). 

![image](./TP_01_ex3.png)

Ces boutons devront être associés à des actions. il faudra seulement cliquer droit sur le bouton dans l'onglet design -> aller au slot -> clicked. Cela va automatiquement créer un slot (comme au premier exercice), dans lequel il faudra seulement mettre la ligne suivante :
`qDebug() << "Nom du Bouton";`
