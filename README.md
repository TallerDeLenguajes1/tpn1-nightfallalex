# tpn1-nightfallalex
tpn1-nightfallalex created by GitHub Classroom

#####GitIgnore

####¿Por qué es conveniente incluirlo?

Es conveniente incluirlo ya que este archivo de texto plano (como README.md) de extension ".gitignore" sirve para que Git ignore
los archivos y carpetas alli escritas, cuando hacemos un commit, es decir, si nosotros en nuestro archivo .gitignore escribimos
sin las comillas ".vscode/" git entiende de esa linea, que debe ignorar la carpeta .vscode al momento de commitear los cambios
tambien sirve para los archivos innecesarios, por ejemplo, si escribirmos una linea que diga "*.jpg", al momento de hacer un commit
Git dejara de lado, ignorara, a los archivos que terminen en .jpg, asi nos ahorramos espacio, y mejorara la interaccion con los archivos
del proyecto, dejando de lado todo lo innecesario.

####¿Cuándo se debe hacer?

Se debe usar este archivo siempre que se pueda, para poder maximizar la eficiencia a la hora de trabajar en equipo, tambien se puede usar
cuando tenemos archivos que no queremos rastrear con Git Bash.

####¿Cómo usaría la página [GitIgnore](https://www.gitignore.io/)? 

Esta pagina te brinda una plantilla en texto plano, a partir de una seleccion de programas, incluyendo sistemas operativos, en mi caso
utilize la pagina para que me brindara el texto plano para evitar archivos y carpetas de Windows, C, C++, VisualStudio Code, y VisualStudio
entre otras cosas.

####¿Cómo configuraría el archivo .gitignore?

creando un nuevo archivo de texto, pegando o escribiendo las lineas necesarias, utilizando el mismo sistema de texto plano utilizado en 
este texto, luego de eso, haciendo commit y pusheando el archivo al repositorio en la nube.



##Si resolvió correctamente los puntos ii y iii notará que el resultado es el mismo.
###¿a qué se debe?
La direccion de memoria almacenada por el puntero ES la direccion de memoria de la variable apuntada

###¿Qué obtiene en el punto 4?
Se obtiene la direccion de memoria DE LA VARIABLE PUNTERO en especifico, en este caso llamada "pNumero"

###¿es igual a los anteriores? ¿por qué?
No, no es igual, porque el puntero "pNumero" es una variable independiente a la variable (valga la redundancia) "numero", por
consiguiente, ambas variables tienen direcciones de memoria diferentes, y no necesariamente consecutivas.
