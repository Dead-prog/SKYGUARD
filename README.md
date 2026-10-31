<img width="1024" height="559" alt="image" src="https://github.com/user-attachments/assets/862dccae-f3c6-4fa1-b78d-504364d51015" />


VTOL SWARM

Auteur : DIABY DIABY Bakoutoubo


1. Origine et motivation du projet

L'idée de développer VTOL SWARM est née de mon intérêt pour les nouvelles technologies, l'ingénierie et leur capacité à répondre à des problèmes concrets.
Mais ce projet est également motivé par plusieurs catastrophes qui m'ont particulièrement marqué, notamment les incendies en France, les glissements de terrain au Népal et l'effondrement d'une décharge en Guinée (mon pays natale).
Ces événements ont un point commun : lorsqu'une catastrophe survient, les équipes de secours doivent souvent intervenir sur de vastes zones, parfois difficiles d'accès, tout en essayant de localiser rapidement les personnes en danger.
Le glissement de terrain survenu au Népal, qui a fait de nombreuses victimes et des milliers de disparus, illustre particulièrement les difficultés rencontrées lors des opérations de recherche après une catastrophe naturelle.
En Guinée, l'effondrement d'une décharge ayant entraîné la mort de nombreuses personnes m'a également marqué. Étant moi-même originaire de Guinée, cette catastrophe a donné une dimension encore plus personnelle à ma réflexion. Elle m'a amené à m'interroger sur les moyens technologiques qui pourraient être mis à disposition des équipes de secours dans des pays disposant de ressources financières plus limitées.
Les hélicoptères représentent des moyens d'intervention précieux, mais leur acquisition, leur entretien et leur utilisation nécessitent des ressources importantes. Il est donc difficile pour certains pays de disposer d'un nombre suffisant de ces appareils.
C'est dans cette perspective que j'ai commencé à réfléchir à une solution reposant sur plusieurs drones capables de travailler simultanément.
Mon objectif est de développer un système relativement accessible financièrement, évolutif et capable d'aider les équipes de secours à couvrir de grandes zones de recherche.

2. Présentation générale du projet

VTOL SWARM est un projet visant à concevoir et développer un système composé de plusieurs drones à décollage et atterrissage verticaux (VTOL), destinés à assister les opérations de recherche et de secours.
Le principe repose sur l'utilisation de plusieurs appareils capables de couvrir différentes zones simultanément afin d'accélérer les opérations de localisation des personnes en danger.
Chaque drone sera équipé de différents systèmes embarqués, notamment :
    • Un système de géolocalisation GPS.
    • Une caméra classique permettant la transmission d'images en temps réel.
    • Une caméra thermique permettant de détecter des sources de chaleur.
    • Un système de communication permettant de transmettre les informations à une station de contrôle.
Les données collectées par les drones seront centralisées au niveau d'une station de contrôle. Les équipes pourront ainsi visualiser les images transmises, suivre la position des appareils et disposer d'une meilleure vue d'ensemble de la zone d'intervention.
L'un des objectifs principaux est de permettre à un seul opérateur expérimenté de superviser plusieurs drones simultanément, plutôt que de mobiliser un pilote pour chaque appareil.
À terme, le système pourrait également évoluer vers le transport de petits équipements ou de fournitures utiles aux opérations de secours.

3. Choix de la technologie VTOL

Le choix de la technologie VTOL constitue un élément central du projet.
Contrairement à un quadricoptère classique, un aéronef VTOL combine deux modes de vol :
    • Le décollage et l'atterrissage verticaux, qui permettent de se passer d'une piste.
    • Le vol horizontal, durant lequel les ailes assurent une partie importante de la portance.
Cette configuration permet de profiter de la flexibilité des drones multi-rotors tout en bénéficiant d'une meilleure efficacité énergétique en vol horizontal.
L'objectif est ainsi de développer des appareils capables de décoller depuis des espaces relativement restreints, puis de parcourir de plus grandes distances en utilisant leurs ailes pour assurer leur portance.
Cette architecture semble particulièrement intéressante pour des missions de recherche nécessitant de couvrir de vastes territoires.

4. Objectifs à long terme

À long terme, VTOL SWARM a pour ambition de devenir un système de recherche et de secours évolutif, capable de coordonner plusieurs appareils.
Le développement ne se limite donc pas à la fabrication d'un drone, mais concerne également la création d'une infrastructure permettant aux différents appareils de communiquer et de partager leurs informations.
L'intelligence artificielle pourrait éventuellement être intégrée afin d'améliorer la coordination des drones, l'analyse des images et la répartition des zones de recherche.
Cette fonctionnalité reste cependant une perspective d'évolution. La priorité actuelle est de développer des appareils fonctionnels et fiables, ainsi que les systèmes de communication et de contrôle nécessaires.
L'objectif final est de proposer une solution qui puisse compléter les moyens d'intervention existants, notamment dans les régions où les ressources disponibles sont limitées.

5. Phases de développement

Phase 1 – Développement d'un premier prototype
La première phase consiste à développer un petit quadricoptère basé sur un ESP32-S3.
Cette étape permettra d'acquérir les connaissances nécessaires en électronique embarquée, en programmation, en contrôle des moteurs, en stabilisation et en physique du vol.
Elle servira également de base pour comprendre les difficultés techniques qui seront rencontrées lors du développement du premier VTOL.

Phase 2 – Développement du premier VTOL

La deuxième phase consistera à concevoir et fabriquer le premier prototype VTOL, ainsi qu'une station de contrôle permettant de superviser son fonctionnement.

L'objectif sera de permettre à l'opérateur de définir une zone géographique de recherche directement depuis l'interface de la station. Le VTOL devra alors pouvoir effectuer sa mission dans la zone qui lui aura été attribuée.

La station de contrôle constituera l'interface centrale entre l'opérateur et le drone. Elle permettra notamment de visualiser les informations transmises par le VTOL, de suivre sa position et de gérer les paramètres de sa mission.

Le VTOL devra intégrer :
    • Un système de propulsion adapté au vol vertical et horizontal.
    • Un système de géolocalisation GPS.
    • Une caméra classique.
    • Une caméra thermique.
    • Un système de communication avec la station de contrôle.
La station de contrôle devra intégrer :
    • Une Raspberry Pi, destinée à certaines fonctions de gestion électronique et de communication.
    • Un moniteur tactile.
    • Un système de communication avec le VTOL.
    • Une application dédiée à la gestion et à la supervision du drone.

Cette phase permettra de valider le fonctionnement du concept sur un appareil réel et de développer les premières fonctionnalités destinées aux missions de recherche.

Phase 3 – Développement du système multi-drones

La troisième phase consistera à fabriquer deux VTOL supplémentaires afin de constituer un premier essaim de trois appareils.
Un système de communication et de coordination sera alors développé pour permettre aux différents drones d'échanger leurs informations et de travailler sur différentes zones de recherche.
Cette phase représentera une étape importante vers l'objectif final : permettre à un seul opérateur expérimenté de superviser plusieurs appareils simultanément.
