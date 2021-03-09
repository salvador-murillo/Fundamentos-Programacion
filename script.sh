#! /bin/bash
salir=1

SECCIONES=(
    '1.Entrada-y-Salida' 
    '2.Estructura-IF' 
    '3.IF-Anidado' 
    '4.IF-Operadores-Logicos' 
    '5.Estructura-SWITCH' 
    '6.Ciclos-WHILE' 
    '7.Ciclos-FOR' 
    '8.FOR-Anidado' 
    '9.Arreglos' 
    '10.Programacion-Modular'
    '11.Proyecto'
)

array1=(
    '0.HolaMundo' 
    '1.Manejo-Basico-Salida' 
    '2.Manejo-Basico-Entrada' 
    '3.Area-Volumen-Cono' 
    '4.Cambio-Variable' 
    '5.Calificaciones-Semestre' 
    '6.Billetes-Monedas' 
    '7.Segundos-a-Horas-Minutos-Segundos' 
    '8.Convertidor-Unidades' 
    '9.Convertidor-Temperatura-1' 
    '10.Convertidor-Temperatura-2'
)

array2=(
    '11.Coutas' 
    '12.Calificaciones' 
    '13.Par-Impar'
)

array3=(
    '14.Calificaciones-Mensajes' 
    '15.Edades'
)

array4=(
    '16.Horario-Militar' 
    '17.Cifras' 
    '18.Datos-Numericos' 
    '19.Triangulos' 
    '20.Mayor-Menor' 
    '21.Ordenar-Numeros' 
    '22.Herencia' 
    '23.Dias-a-Mes'
    'T1.Tarea_1'
)

array5=(
    '24.Calculadora' 
    '25.Menu-de-Figuras' 
    '26.Convertidor-de-Medidas' 
    '27.Signo-Zodiacal'
    '28.Signo-Zodiacal-Chino'
)

array6=(
    '29.Multiplos-7' 
    '30.Multiplos-7-Entre-Rangos' 
    '32.Sumatoria' 
    '33.Producto-0' 
    '34.Pares-Impares' 
    '35.Conjetura-ULAM' 
    '36.Decimal-a-Binario' 
    '37.Numeros-v3'
)

array7=(
    '39.Tabla-Multiplicar' 
    '41.Numeros-Primos' 
    '42.Factorial' 
    '43.Fibonacci' 
    '44.Alfabeto-Doble' 
    '45.Linea-Cambio-Color-OPC'
)

array8=(
    '46.Piramide-1' 
    '50.Alfabeto' 
    '51.Piramide-del-Mal'
)

array9=(
    '54.Edades-Ninio' 
    '55.Arreglo-Invertido' 
    '56.Obtener-Posicion-Arreglo' 
    '57.Suma-Arreglos' 
    '58.Manejo-Arreglos'
)

array10=(
    '60.Menu-Operaciones' 
    'E1.Funcion-Sin-Paso-Parametros' 
    'E2.Funcion-Con-Paso-Parametros-Valor' 
    'E3.Funcion-Con-Paso-Parametros-Referencia' 
    'E4.Arreglo-Captura-Muestra'
)

array11=(
    'E1.Ordenamiento-ejemplo' 
    'P1.Proyecto-Final'
)

while true
do
    #--Bloque Para mostrar SECCIONES
    clear
    echo $'\t\t\t'"Fundamentos de Programacion"
    echo $'\n'"Secciones a mostrar:"$'\n'

    for i in ${SECCIONES[@]}
    do
        echo "$i" #Muestra SECCIONES
    done

    numeroSec=0
    read -p $'\n''Elige numero de seccion: ' numeroSec
    cd "${SECCIONES[$numeroSec-1]}"   
    #--Termina seleccion de bloque y entra a carpeta de la seccion 

    #--Bloque Para mostrar Programa a ejecutar
    clear
    echo $'\t\t\t'"Fundamentos de Programacion"
    echo $'\n'"Programas:"$'\n'
    
    pro=array$numeroSec[@] #Creacion de variable para array indirecto de acuerdo a la categoria
    for j in ${!pro}
    do
        echo $j #Muestra Programas de acuerdo a la categoria
    done
    
    numeroPro=0
    # echo $'\n'"Estas en: " && pwd
    read -p $'\n''Escriba NUMERO (14) o LETRA y NUMERO (E1) de programa: ' numeroPro

    if [[ $numeroPro -ge 11 && $numeroPro -le  13 ]]
        then
            numeroPro=$((numeroPro-11))
        elif [[ $numeroPro -eq 14 || $numeroPro -eq 15 ]]
        then
            numeroPro=$((numeroPro-14))
        elif [[ $numeroPro -ge 16 && $numeroPro -le 23 ]]
        then
            numeroPro=$((numeroPro-16))
        elif [[ $numeroPro -ge 24 && $numeroPro -le 28 ]]
        then
            numeroPro=$((numeroPro-24))
        elif [[ $numeroPro -ge 29 && $numeroPro -le 30 ]]
        then
            numeroPro=$((numeroPro-29))
        elif [[ $numeroPro -ge 32 && $numeroPro -le 37 ]]
        then
            numeroPro=$((numeroPro-30))
        elif [[ $numeroPro -eq 39 ]]
        then
            numeroPro=0
        elif [[ $numeroPro -ge 41 && $numeroPro -le 45 ]]
        then
            numeroPro=$((numeroPro-40))
        elif [[ $numeroPro -eq 46 ]]
        then
            numeroPro=0
        elif [[ $numeroPro -ge 50 && $numeroPro -le 51 ]]
        then
            numeroPro=$((numeroPro-49))
        elif [[ $numeroPro -ge 54 && $numeroPro -le 58 ]]
        then
            numeroPro=$((numeroPro-54))
        elif [[ $numeroPro -eq 60 ]]
        then
            numeroPro=0
        elif [[ $numeroSec -eq 4 && $numeroPro == 'T1' ]]
        then
            numeroPro=8
        elif [[ $numeroSec -eq 10 && $numeroPro == 'E1' ]]
        then
            numeroPro=1
        elif [[ $numeroSec -eq 10 && $numeroPro == 'E2' ]]
        then
            numeroPro=2
        elif [[ $numeroSec -eq 10 && $numeroPro == 'E3' ]]
        then
            numeroPro=3
        elif [[ $numeroSec -eq 10 && $numeroPro == 'E4' ]]
        then
            numeroPro=4
        elif [[ $numeroSec -eq 11 && $numeroPro == 'E1' ]]
        then
            numeroPro=0
        elif [[ $numeroSec -eq 11 && $numeroPro == 'P1' ]]
        then
            numeroPro=1
    fi
    ruta=array$numeroSec[$numeroPro]
    echo $'\n'"Cargando: Seccion ${SECCIONES[$numeroSec-1]} | Programa #${!ruta}"
    cd "${!ruta}"
    # echo $'\n'"Estas en: " && pwd

    clang++ -pthread -std=c++17 -o main main.cpp || make main && ./main
    read -p $'\nVolver a seleccion de programas? 1-SI 2-NO : ' salir
    if (($salir > 1))
        then
            cd ../..
            exit
    fi
    cd ../..
done