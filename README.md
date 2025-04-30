# El Valle Iridiano

📘Descripción del proyecto:
El Valle Iridiano es un juego inspirado en el Juego de la vida de John Conway , este consiste en simular ciclos en la vida de unas criaturas realizado en lenguaje C + +, donde las criaturas tienen la posibilidad de realizar diferentes acciones en un mapa de nodos como mutar, reproducirse, desplazarse o morir. El usuario tiene como misión lograr adivinar o predecir cuántas criaturas quedarán al finalizar el juego y entre más criaturas iniciales decida agregar, mayor será la cantidad de puntos que obtendrá. 

En este juego existen tres tipos de criaturas que poseen diferentes habilidades especiales y enfrentan restricciones específicas:

- 🔥 Chispa: Puede desplazarse aleatoriamente a cualquier nodo en el mapa.
  
- 💧 Cambio: Se desplaza un solo nodo en una dirección específica decidida aleatoriamente (no en diagonal).
  
- 🌿 Raíz: No puede desplazarse, pero tiene la capacidad de recuperar vida en cada ciclo.
  
A partir de una cantidad de ciclos determinada, las criaturas comienzan a mutar, debido a que el entorno se encuentra en peligro, por lo que les ingresan parásitos y su comportamiento empieza a cambiar.

El mundo en el que habitan las criaturas está dividido por cuatro entornos:
Altos Cálidos (3 ciclos para mutar)
Lomas Mansas (4 ciclos para mutar)
Llanos Opacos (5 ciclos para mutar)
Zonas Profundas (6 ciclos para mutar)

Estos cuatro entornos influyen en la forma en que las criaturas se desarrollarán y en cada uno de estos los nodos que están activos o no van variando.

La simulación permitirá al usuario observar el distinto comportamiento de las criaturas y cómo se desarrolla su vida durante los ciclos.  

En este mundo el usuario cumplirá la función de observador.

El proyecto está dirigido a cualquier tipo de usuario interesado en juegos de simulación como a desarrolladores interesados en la programación orientada a objetos.

🧑‍💻 Manual de usuario: 

Inicio del juego

Al ejecutar el programa, el usuario tendrá que:

Ingresar su nombre: Este será utilizado para llevar el registro de sus puntos acumulados.

Configurar tamaño de mapa: El usuario debe especificar el tamaño del mapa que desea, debe ser cuadrado (nxn).Se recomienda un mínimo de 8x8 para asi garantizar suficiente espacio para que las criaturas se desplacen e interactúen correctamente.

Tipo de entorno: Se escoge en cuál de los cuatro entornos desarrollar la simulación (Altos Cálidos, Lomas Mansas, Llanos Opacos, Zonas Profundas.)

Una vez configurado el entorno, se genera el mapa con las especificaciones del usuario mostrando nodos activos e inactivos y se inicia el juego.

Agregar criaturas

En este paso, el usuario añadirá las criaturas al entorno, una por una. Debe tener en cuenta lo siguiente:
Escoger el tipo de criatura (chispa, cambio o raíz) a agregar.

Vida de la criatura 

Máximo de hijos que podrá generar la criatura.

Coordenadas donde se desea posicionar a la criatura.

Generar ciclos

Después de agregar criaturas el usuario puede iniciar la simulación por ciclos. En cada ciclo:

Las criaturas realizan desplazamientos, se reproducen o mueren, en el caso de la raíz puede recuperar vida.
Después de un ciclo, se muestran los cambios realizados en el mapa.

Las condiciones de cada entorno pueden afectar a las criaturas.

En este punto, el usuario actúa como el observador, viendo como varia el ecosistema dependiendo de las distintas condiciones.
 
Finalizar el juego
Cuando el usuario desee terminar el juego, se le pedirá adivinar cuántas criaturas siguen vivas.

El sistema mostrará una lista con las criaturas vivas y muertas y este número será comparado al ingresado por el usuario.

Puntuación 🏆:

El usuario obtiene 100 puntos por cada criatura viva que haya adivinado de forma correcta, esta puntuación se guardará en un archivo junto con la manera en que haya terminado la simulación, de esta forma, si el usuario desea continuar su juego, puede hacerlo desde donde lo dejó.

🛠️ Instrucciones de compilación:

Clonar el repositorio:

Entrar al git bash.

Navegar a la carpeta donde se desea clonar el repositorio (cd ruta/del/directorio).

git clone https://github.com/-usuario-/ElValleIridiano.git

cd ElValleIridiano.

Ejecutar el proyecto.

🗂️ Estructura del código fuente:

El código está organizado de la siguiente forma:

main.cpp: Control principal del programa. Aquí se gestiona el menú de interacción del usuario y se da el flujo principal del juego.

Entorno: En esta clase se presenta el mapa del mundo de las criaturas y se definen los cuatros tipos de entorno.

Nodo: En esta clase, se define el estado de los nodos como activos o inactivo y almacena las criaturas 

Criatura (clase base): Define atributos comunes como vida, hijos, posición, y métodos virtuales para las acciones de las criaturas.

Chispa / Cambio / Raíz: Heredan de Criatura, se definen las características específicas de cada criatura:

Chispa: Movimiento aleatorio a otro nodo.

Cambio: Un solo desplazamiento en una sola dirección.

Raíz: No se desplaza, pero puede recuperar vida.

👥Créditos y roles del equipo:

Hanna Lozano:

Creación de mapa de nodos

Movimiento de criaturas

Valerie Marmolejo:

Creación de clase criaturas

Posicionar criaturas en nodos

Proyecto desarrollado para el curso de Programación orientada a objetos.

Universidad: Pontificia Universidad Javeriana.

Profesor: Yoan Pinzon (Profesorcito)

Fecha: Abril/2025
