# Introducción

Este sistema de exámenes le presenta los ejercicios uno por uno, y los corregirá a medida que vaya terminando los ejercicios, cuando usted lo pida.

Un examen es una sucesión de niveles, y cada nivel dispone de un conjunto de ejercicios posibles distribuidos de manera aleatoria. Su vecino probablemente no tendrá los mismos ejercicios que usted. Sí, es injusto, pero la vida es injusta, asúmalo.

Por cada nivel que valide, ganará puntos, hasta un máximo de 100.

## Antes del examen

Antes de pasar un examen, debe inscribirse a al menos un proyecto de examen en la intranet (o retry al menos un proyecto si no es su primera vez). Puede inscribirse a tantos exámenes como quiera; no hay restricciones a ese respecto.

Una vez que se haya inscrito a al menos un proyecto, podrá utilizar `examshell`.

Si quiere examinarse de verdad, debe inscribirse también a una sesión de examen en la intranet, llegar A LA HORA, y hacer login como "exam" en la sala apropiada. Sólo bajo esas condiciones podrá examinarse en modo real.

## Examshell


Va a examinarse a través de un programa llamado `examshell`.

Debe ejecutarlos desde un terminal aparte, como mucho diez minutos depués del inicio oficial del examen. Eso quiere decir que tiene que haber lanzado `examshell`, elegido un proyecto, un modo y un nivel de inicio antes de las <heure de départ> + 10 minutos.
Si para `examshell` sin querer una vez que el examen ha comenzado, no se preocupe, vuelva a lanzarlo y ya está.

# Versión corta

1. Ejecución de examshell
2. Examshell le presenta la lista de exámenes a los que tiene acceso
3. Elija un examen y un nivel de inicio
4. El sistema le crea un repositorio Git y lo clona en BASEDIR/rendu
5. El sistema le presenta un ejercicio aleatorio del nivel actual
6. Examshell recupera el enunciado y lo pone en BASEDIR/subjects/NOM_EXERCICE
7. Examshell le dirá qué ejercicio debe hacer, cuántos puntos puede ganar, y dónde debe entregarlo
8. Haga su ejercicio
9. Haga push de su ejercicio al repositorio de entrega, como de costumbre
10. Cuando esté seguro de haber terminado, pida a examshell que le corrija mediante el comando `grademe`
11. El sistema le corrige
12. Su traza queda salvaguardada en BASEDIR/traces/X_Y_NOM_EXERCICE
13. En caso de éxito, gana puntos y sube un nivel
14. En caso de fracaso: permanece en el mismo ejercicio y no gana puntos

¿No lo ha comprendido? ¡Qué se le va a hacer!. Lea la versión larga

## Etapa 1 : Ejecutar examshell

```
zaz@blackjack ~ $ examshell
examshell v0.1.1

WARNING
Your exam files will be stored in ~/exam-basedir
THIS DIRECTORY WILL BE ENTIRELY EMPTIED BEFORE YOU START
So, if you do have important things there, Ctrl-C NOW and back them up before running this.
(Press Enter to continue...)
```

## Etapa 2 : Preparación del directorio de trabajo

Después de confirmar, examshell va a preparar su directorio de trabajo, clonar el repositorio Gut adecuado, etc ...

```
[...]
Confirm ? [y/n] y
Selecting project...
Creating required directories...
Ensuring your Git repository for this exam is present and correct...
Git repository is not cloned yet. Cloning...
Cloning into '/Users/zaz/exam-basedir/rendu'...
vogsphere: (INFO) Transaction ID : 8ed938b3-fe1e-4eb6-b561-0f6622e12b82
vogsphere: (INFO) Please mention this ID in any ticket you create concerning this transaction
vogsphere: (INFO) This transaction has been started at 2015-05-28 11:07:49, server time.
vogsphere: (INFO) Rights will be determined using this time, so do NOT cut the connection.
vogsphere: (INFO) It appears you are mmontinet. If that's not true, check your Kerberos tickets (klist)
vogsphere: (INFO) You have read and write rights on this repository
warning: You appear to have cloned an empty repository.

Your git repository was successfully cloned to ~/rendu

The following commands are available to you:
  status: Displays the status of your session, including information about
    your current assignment, and the exam history.
  grademe: Asks the server to grade your current assignment. If you
    have done it right, you will gain the points of the current assignment, go
    up a level, and try the next one. If you fail, however, you will stay on the same assignment of the same level to do. So be sure of yourself before you launch
    this command !
  finish: Tells the server you are finished with your exam.

You can log out at any time. If this program tells you you earned points,
then they will be counted whatever happens.

(Press Enter to continue...)
```

## Etapa 4 : Obtener un ejercicio

Examshell va a recuperar para usted un ejercicio al azar

El enunciaco estará en el directorio `subjects`. Puede leerlo en un terminal, es sólo texto.

```
[...]
================================================================================
You are currently at level 0
You are running in real mode (Your grade does not count)
Your current grade is 0/100
Assignments:
  Level 0:
    0: max for 16 potential points (Current)

Your current assignment is max for 16 potential points
It is assignment 0 for level 0
The subject is located at: ~/exam-basedir/subjects/max
You must turn in your files in a subdirectory of your Git repository with the
same name as the assignment (~/exam-basedir/rendu/max).
Of course, you must still push...

The end date for this exam is: 28/05/2015 15:07:47
You have 3 hours, 54 minutes and 11 seconds remaining
================================================================================
You can now work on your assignment. When you are sure you're done with it,
push it to vogsphere, and then use the "grademe" command to be graded.
examshell>
```

Este mensaje está siempre disponible gracias al comando `status` de examshell.

## Etapa 5 : Haga su ejercicio

Y ahora tiene que, bueno, pues hacer el ejercicio.

Tenga en cuenta de debe entregarlo en el directorio indicado por examshell, que será siempre un subdirectorio del clon de su repositorio de entrega. No haga faltas, o se queda sin nada. Si se equivoca de directorio, o de nombre de fichero, suspenderá su ejercicio sin posibilidad de vuelta atrás. Sería torpe.

En nuestro ejemplo, hay que poner un fichero `max.c` en el directorio `~/exam-basedir/rendu/max/`.

Debe hacer un push de su trabajo cuando haya erminado, como si de un proyecto normal se tratase. NO LO OLVIDE.

## EtapA 6 : Pida que le corrijan

Cuando esté seguro de que su trabajo está bien y que ha hecho push de todo lo necesario, utilice el comando `grademe` para solicitar una corrección:

```
examshell> grademe

Before continuing, please make ABSOLUTELY SURE that you have pushed your files,
that they are in the right directory, that you didn't forget anything, etc...
If your assignment is wrong, you will stay on the same assignment at the same level.

Are you sure? [y/N]
```

Supongamos que estamos seguros...

```
[...]

Are you sure? [y/N] y
OK, making grading request to server now.

We will now wait for the job to complete.
Please be patient, this CAN take several minutes...
(10 seconds is fast, 30 seconds is expected, 3 minutes is a maximum)
waiting...
```

Ahora, esperamos la respuesta del sistema. Puede tomarse algo de tiempo, pero es NORMAL, de manera que no se deje invadir por el pánico a menos que dure uno o dos minutos; en ese caso, pregunte a un miembro del staff.

### Victoria !

```
[...]
waiting...
>>>>>>>>>> SUCCESS <<<<<<<<<<
You have successfully completed the assignment and earned 16 points!
Trace saved to ~/exam-basedir/traces/0-0_max.trace

(Press Enter to continue...)
```

En este caso, lo hemos hecho bien. Se guarda la traza de la corrección para que podamos leerla si queremos.

El próximo status mostrará que:

* Hemos ganado los puntos en juego en el ejercicio (16)
* Hemos subido un nivel (ahora estamos en el nivel 1)
* Tenemos un nuevo ejercicio

```
[...]
(Press Enter to continue...)

================================================================================
You are currently at level 1
You are running in real mode (Your grade does not count)
Your current grade is 16/100
Assignments:
  Level 0:
    0: max for 16 potential points (Success)
  Level 1:
    0: wdmatch for 16 potential points (Current)

Your current assignment is wdmatch for 16 potential points
It is assignment 0 for level 1
The subject is located at: ~/exam-basedir/subjects/wdmatch
You must turn in your files in a subdirectory of your Git repository with the
same name as the assignment (~/exam-basedir/rendu/wdmatch).
Of course, you must still push...

The end date for this exam is: 28/05/2015 15:07:47
You have 3 hours, 42 minutes and 27 seconds remaining
================================================================================
You can now work on your assignment. When you are sure you're done with it,
push it to vogsphere, and then use the "grademe" command to be graded.
examshell>
```

Si se hubiese tratado del último nivel del examen, examshell nos habría dicho que el examen ha terminado.

### Lamentable derrota :(

Vamos a fallar ahora para ver qué pasa:

```
[...]
examshell> grademe

Before continuing, please make ABSOLUTELY SURE that you have pushed your files,
that they are in the right directory, that you didn't forget anything, etc...
If your assignment is wrong, you will stay on the same assignment at the same level.

Are you sure? [y/N] y
OK, making grading request to server now.

We will now wait for the job to complete.
Please be patient, this CAN take several minutes...
(10 seconds is fast, 30 seconds is expected, 3 minutes is a maximum)
waiting...
>>>>>>>>>> FAILURE <<<<<<<<<<
You have failed the assignment.
Trace saved to ~/exam-basedir/traces/1-0_wdmatch.trace

(Press Enter to continue...)

================================================================================
You are currently at level 1
You are running in real mode (Your grade does not count)
Your current grade is 16/100
Assignments:
  Level 0:
    0: max for 16 potential points (Success)
  Level 1:
    0: wdmatch for 16 potential points (Failure)
    1: wdmatch for 16 potential points (Current)

Your current assignment is wdmatch for 16 potential points
It is assignment 1 for level 1
The subject is located at: ~/exam-basedir/subjects/wdmatch
You must turn in your files in a subdirectory of your Git repository with the
same name as the assignment (~/exam-basedir/rendu/wdmatch).
Of course, you must still push...

The end date for this exam is: 28/05/2015 15:07:47
You have 3 hours, 41 minutes and 25 seconds remaining
================================================================================
You can now work on your assignment. When you are sure you're done with it,
push it to vogsphere, and then use the "grademe" command to be graded.
examshell>
```

En este caso, hemos fallado, por lo que:

* No ganamos puntos
* No subimos de nivel
* Nos quedamos en el mismo ejercicio

### Error :<

Existe una (pequeña) posibilidad de que examshell le diga que la corrección ha dado un ERROR. Eso no quiere decir que ha fallado en el ejercicio, sino que se ha producido un error en el propio sistema de corrección.

QUE NO CUNDA EL PÁNICO

Disponde de las opciones "retry" y "abort". DEBE hacer retry al menos una vez: los errores en el sistema de corrección son poco frecuentes, y generalmente efímeros, por lo que a menudo se resuelven así.

Si un retry ne arregla el error, llame a un miembro del staff!

Si de verdad nada funciona, es posible que el staff le diga que haga abort. En ese caso, el ejercicio se considerará fallado, se le presentará un nuevo ejercicio, pero no tendrá ninguna penalización.

## Etape 7 : Y vuelta a empezar

Y eso es más o menos todo. Va a seguir recibiendo ejercicios hasta que apruebe el examen o hasta que falle en todos los ejercicios de un nivel.

Si quiere parar antes, puede utilizar el comando `finish`:

```
examshell> finish
Please confirm that you REALLY want to end your current session.
If you do, you will not be able to do anything with it anymore!
Are you finished? [y/N] y
Your session has been marked as finished. You may now log out.
zaz@blackjack ~ $
```

# FAQ / Preguntas Frecuentes

##  ¡He parado examshell, socorro!

Vuelva a ejecutarlo, no tiene importancia

## Examshell me dice "Login window expired", ¿y eso qué es?

Dispone de 10 minutos para elegir un examen después de la fecha y hora de inicio; después, recibirá ese mensaje de error, porque ya será demasiado tarde.
No, ya no puede hacer nada.

## Examshell me dice "Mismatched versions"

Su Mac no está actualizado. Cambie de puesto, o venga al Bocal a pedir que se lo actualicemos.

## ¡No me han caído los mismos ejercicios que a mi vecino, ES INJUSTO!

Pues sí. Mala suerte. Así es la vida.

## ¿Puedo acceder a mi repositorio después del examen? ¿Y a los enunciados?

En principio, recibirá un informe de su examen por correo cuando el examen aparezca como terminado. El informe contiene los enunciados, trazas y su entrega.

Si no lo recibe, incluso después de una larga espera... Mala suerte, La vida es injusta.

## ¡Examshell me dice que he suspendido, pero estoy seguro de haberlo hecho bien!

Seguro que se le ha olvidado algo:

* ¿Se ha acordado de hacer push ?
* ¿De verdad ?
* ¿No, en serio, de verdad?
* ¿Repositorio de entrega correcto?
* ¿Nombres de ficheros correctos?
* ¿Era el ejercicio que correspondía?
* ¿A ver, sin bromas, ha hecho push?
* Etc...

Si está seguro, de verdad de verdad de verdad, pero de verdad de la buena, de haberlo hecho bien, podrá venir a hablar con el staff, DESPUÉS DEL EXAMEN. Lo miraremos, pero POR PIEDAD, piénselo dos veces antes de venir a vernos. SEGURO que es usted quien lo ha hecho mal, y nos lleva tiempo mirar un ejercicio para intentar encontrar un hipotético error.

## ¡Su sistema es una porquería, que me traigan el antiguo!

No, no es una porquería. y además, no le vamos a dar el antiguo. Mala suerte.

## ¡He encontrado un error! ¡HE ENCONTRADO UN ERROR!

¿En serio?

Bueno, pues vale, venga a enseñarnoslo. No le vamos a pegar, salvo si se aprovecha de él.

## ¡He encontrado un error, me he aprovechado, pero no me pillarán nunca!

Sí, le pillaremos. Tarde o temprano. Y esperamos de todo corazón que le lleve un buen rato encontrar una nueva escuela :)

En serio, no haga tonterías, venga a enseñarnos el error y siga con otra cosa. ¿Merece la pena correr el riesgo de ser expulsado por unos puntos?

## ¡He solicitado una corrección, pero está tardando un montón!

¿Termina en algún momento? Si sí, no hay problema.

Si después de un minuto o dos no ha terminado, busque a alguien del staff, porque no es normal. Probablemente no le ocurra sólo a usted, y es fácil de arreglar.