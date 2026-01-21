ft_printf
Una ricreazione della funzione printf della libreria standard C.
📋 Descrizione
Il progetto ft_printf consiste nell'implementare una versione personalizzata della funzione printf che gestisce diverse conversioni di formato. Questo progetto aiuta a comprendere meglio le funzioni variadiche in C e la formattazione dell'output.
Conversioni Implementate
La funzione gestisce le seguenti conversioni:

%c - Stampa un singolo carattere
%s - Stampa una stringa
%p - Stampa un puntatore in formato esadecimale
%d - Stampa un numero decimale (base 10)
%i - Stampa un intero in base 10
%u - Stampa un numero unsigned decimale
%x - Stampa un numero in esadecimale minuscolo
%X - Stampa un numero in esadecimale maiuscolo
%% - Stampa un segno di percentuale

Compilazione
bash# Compila la libreria
make

# Pulisce i file oggetto
make clean

# Pulisce tutto (inclusa la libreria)
make fclean

# Ricompila tutto da zero
make re

c#include "ft_printf.h"

Compila con la libreria:
bashgcc main.c libftprintf.a -o test
./test
Struttura del Progetto
ft_printf/
├── ft_printf.c      # Funzione principale
├── ft_printf.h      # Header file
├── ft_options.c     # Gestione delle conversioni
├── ft_putchar.c     # Stampa carattere
├── ft_putstr.c      # Stampa stringa
├── ft_putnbr.c      # Stampa numero intero
├── ft_putunbr.c     # Stampa unsigned int
├── ft_puthex.c      # Stampa esadecimale
├── ft_putptr.c      # Stampa puntatore
├── Makefile         # File di compilazione
└── README.md        # Questo file
Requisiti

Compilatore: gcc o cc
Flag: -Wall -Wextra -Werror

📝 Note

La funzione restituisce il numero di caratteri stampati
Gestisce correttamente i valori NULL per stringhe e puntatori
Non implementa il buffer interno di printf
Non gestisce flag, larghezza di campo o precisione
