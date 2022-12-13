# PUNTO SUSPENSIÓN DEL CARRO
La autopista en sentido sur-norte se ha visto deteriorada hace muchos años con grandes huecos que han visto comprometidos muchos accidentes que ponen en riesgo la vida de los conductores. Esta vía es muy concurrida, incluso por viajeros que transitan por primera vez por allí, y Mark es uno de ellos. Mark debe recorrer un tramo de 3km, donde debe saber si aumenta o disminuye la velocidad, cambiarse para el carril de la derecha, izquierda o el del centro, teniendo precaución con los otros vehículos que transitan en la vía y se encuentran alrededor del auto de Mark. Diseña un programa donde ayudes a Mark a saber si puede esquivar los huecos de la autopista. Tendrás una matriz 3xN que representará los 3 carriles de la vía, debes tener en cuenta que todos los otros vehículos alrededor de Mark viajan a una misma velocidad continua (no acelerarán o frenarán) y son representados con una V, los huecos se representarán con una O, y la posición inicial de Mark será representada con una X. Si Mark puede evadir los huecos de la autopista deberás imprimir en consola “LA SUSPENCIÓN SOBREVIVIÓ”, llegado el caso Mark se tope con al menos un hueco deberás imprimir “MARK DEBERÁ COMPRAR UNA CAMIONETA 4x4”.

La primera línea contiene un entero N que representa la longitud del trayecto de la autopista que deberá transitar Mark. Posterior a esto se deberán leer los 3xN caracteres que llenarán la matriz, representados en caracteres ‘O’, ‘V, ‘X’, ‘-‘, que significan los huecos, los vehículos en la vía, el auto de Mark y los espacios libres en la autopista respectivamente.

Si Mark puede evadir los huecos de la autopista deberás imprimir en consola “LA SUSPENCIÓN SOBREVIVIÓ”, llegado el caso Mark se tope con al menos un hueco deberás imprimir “MARK DEBERÁ COMPRAR UNA CAMIONETA 4x4”.

# PANINI 2022

Eric es un aficionado a los cromos y llenar los álbumes de los mundiales, pero a veces es descuidado y en su afán de ver las páginas llenas, pega cromos en lugares donde no van.
Este año, Panini tiene un nuevo diseño para llenar su álbum. Hay diseños que necesitan solo un cromo, otros con un diseño 2x2 donde necesitan 4 cromos, y por último un diseño 3x3 que necesitan 9 cromos para que su figura esté completa.
Tendrás una matriz de NxN posiciones que representa la hoja del álbum, donde los diseños de 1, 4 y 9 cromos se representarán con los números 1, 2 y 3 respectivamente.
Ayuda a Eric a saber si determinada hoja del álbum está llena correctamente con sus respectivos diseños; si es así muestra en pantalla el mensaje “ROAD TO QATAR 2022”, si por el contrario no está correctamente lleno, muestra en pantalla el mensaje “CONSIGUE MAS CROMOS, TIENES M ERROR(ES)”, donde M corresponde a la cantidad de diseños mal formados.

La primera línea corresponde a una variable N de tipo entera que representa la dimensión de la matriz.
Posterior a esto leerás las NxN variables tipo enteras que llenarán la matriz haciendo el diseño de la hoja del álbum.

Si Eric llenó correctamente el álbum muestra en pantalla el mensaje "ROAD TO QATAR 2022", si por el contrario no está correctamente lleno, muestra en pantalla el mensaje "CONSIGUE MAS CROMOS, TIENES M ERROR(ES)", donde M corresponde a la cantidad de diseños mal formados.

# PLACAS MÁGICAS Y SEMIMÁGICAS

En un viaje realizado por la familia Ramírez Cañaveral de San Jerónimo a Medellín, llego el momento de detenerse varias horas por culpa de un accidente en la carretera. Luego de la primera hora, los dos niños, que viajaban en el vehículo, Yoselin y Miguel Ángel, empezaron un juego llamado placas mágicas y semimágicas. Este juego consistia en mirar las placas de los vehículos que viajaban en el carril contrario y sumar 3 puntos si la placa era mágica o 1 punto si la placa era semimágica.

Una placa es considerada como mágica y tiene 3 letras iguales o 3 números iguales; mientras que si tiene 2 letras o 2 números iguales consecutivos es considerada semimágica.
Para este reto de programación vamos a simular este juego para los dos niños en un juego de N cantidad de vehículos, mostrando el puntaje total que podrían alcanzar las placas ingresadas.

La primera línea contiene una variable entera N que corresponde a la cantidad de vehículos que pasan por el carril contrario.
Las siguientes N líneas están compuestas por las placas de cada uno de los vehículos

Imprima el puntaje total que podrían alcanzar estas placas ingresadas. Tenga en cuenta que las placas mágicas (tienen 3 letras o 3 números iguales) valen 3 puntos y las semimágicas 1. 

# PINTA LA MATRIZ

En una matriz algunas columnas han sido pintadas de azul y algunas filas han sido pintadas de rojo, cada fila/columna ha sido pintada en un orden específico y se sabe que cada vez que se pinta alguna esta repinta todo por donde pasa, sin importar si tenía o no otro color antes.

Tu tarea es determinar cuál fue el último color usado.

El input contiene 8 líneas de caracteres compuesto por 'R', 'B' y '.', que denotan un cuadro rojo, un cuadro azul y un cuadro vacío respectivamente. Cada línea contiene 8 caracteres exactamente y se asegura que al menos una línea fue pintada.

Imprima una 'R' si el último color usado fue rojo o 'B' si el último color fue azul

# GOOD JOB AND DEV

Una famosa empresa de programación está pidiendo que diseñes una aplicación web para la secretaría de tránsito, sin embargo, hay operaciones que no te han detallado; pero es importante la validación del ingreso de la información.
En el formulario de contacto debes tener presente todos los campos de entrada para que el usuario no se equivoque cuando vaya a interactuar con la aplicación. Estos campos tienen restricciones específicas donde validarás si hiciste bien tu trabajo. 

Deberás evaluar tu código ingresando los valores correspondientes a cada uno de los campos en líneas diferentes, validar que estos estén en el formato correcto, si es así, mostrarás en pantalla el mensaje “CODIGO LIMPIO”; Si por el contrario hay errores debes mostrar en pantalla “REEVALUAR CODIGO, SE HAN ENCONTRADO N ERROR(ES)”, donde N es la cantidad de campos con errores.

Leerás 3 variables de tipo string en diferentes líneas, donde el orden de los campos son correo, documento y placa.

Si todos los campos cumplen con el formato correspondiente, mostrarás en pantalla el mensaje “CODIGO LIMPIO”; Si por el contrario hay errores debes mostrar en pantalla “REEVALUAR CODIGO, SE HAN ENCONTRADO N ERROR(ES)”, donde N es la cantidad de campos con errores.