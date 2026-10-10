# Osservazioni — Esercitazione 0

Gruppo:

Componenti (nome, cognome e username GitHub di entrambi):
Antonio Ottaviano (dodo-2310)

URL del repository condiviso:
---

Chi ha usato la tastiera nello step 1 e nello step 2:
---

Compilate insieme le osservazioni e discutete le risposte: entrambi dovete
saper spiegare le prove svolte.

## Step 1 — Hello World: compilazione ed esecuzione

Comando di compilazione:
gcc..

Comando di esecuzione e risultato osservato:
./hello non succede nulla

Che cosa ho capito su sorgente ed eseguibile:
sorgente è il file che mi permette di scrivere in linguaggio di programmazione, eseguibile è il file tradotto in linguaggio macchina, affinché il computer lo esegua. Se modifico il file sorgente senza ricompilare, utilizzo ancora l'eseguibile prima della modifica.
Se aggiungo output.txt la stampa viene eseguita su un file di testo.

Output richiesto e comportamento del programma prima della modifica:
l'output richiesto è di stampare "Hello, computational physics!", prima della modifica l'eseguibile non stampa niente a schermo.

Esito dopo la modifica e spiegazione della correzione:
Rimosso il todo in box di annullamento testo e sostituito con comando stampa printf.

## Step 1 — Git

Quali file ho incluso nel commit e perché:
ho incluso i file modificati, per mandare le modifiche su github

Come ho verificato che la versione provata sia presente su GitHub:
usando git pull e vedendo se ruportava "already up to date."

Che cosa ho osservato prima e dopo `git pull`, e perché non serve un nuovo clone:
Dopo git pull ho osservato le modifiche in osservazioni.md. Non serve un nuovo clone perché mio bastano solo le modifiche a un dato file, non che mi scarichi la repository.

## Step 2 — Eco: prima prova

Argomenti passati, comando e risultato:
Gli argv sono stringhe di testo, ./eco ciao 12 3.5, il programma stampa a schermo quanto richiesto dopo eco

Che cosa posso concludere:
Gli argv sono stringhe di testo e devono essere convertite per apparire correttamente a schermo, mi aspetto che stampi 0012 comunque, perché vale come testo.
Virgolettando posso usare spazi nella stampa del testo.
Se scrivo 25e1, essendo base 10, mi aspetto 250.000000 come numero in uscita. La rappresentazione non deve rimanere uguale, perché il programma converte la stringa in double.
Se un argomento manca o non rappresenta quanto richiesto, il programma stampa 0 al suo posto.
stampa con stderr
    if (argc != 4) {
        fprintf(stderr, "Uso: %s TESTO INTERO REALE\n", argv[0]);
        return 2;
    }

stdout
  printf("%s, %d, %.6f\n", testo, intero, reale);

Nel primo caso eco contiene la stampa richiesta, nel secondo uno 0 al posto di 12.
Perché > redirige solo la stampa di stdout e non di stderr.

Con > posso redirigere la stampa su un file di testo.

I codici di uscita che osservo sono 0 o 2

Utilizzando il condizionale if e nel main, posso chiedere al programma di farmi avere 0 o 2 a seconda dell'esito.

se uso echo $? posso verificare se c'è stato un errore, osservando se il programma stampa un num diverso da 0.



## Step 2 — Eco: seconda prova

Argomenti passati, comando e risultato:


Che cosa ho capito su testo, conversioni e stampa:
Nel caso di eco se mando un input con un valore di troppo, a schermo torna un messaggio di errore, mentre se uso un valore non corrispondente a testo, intero o reale, viene sostituito con un 0.
Nel caso di eco2, ci sono dei condizionali che mandano in stampa dei messaggi di errori espliciti, in base a cosa non è stato inserito correttamente.
In entrambi i casi, posso verificare col comando echo $? se al programmail programma è stato passato quanto serve o no (0 o 2).

## Step 2 — Risultato ed errori

Previsioni per l'esecuzione con argomenti validi e per quella con `dodici`:
Prevedo che 12 venga sostituito da uno 0, mentre quella corretta stampi regolarmente.

Contenuto di `eco.txt`, messaggi nel terminale e codici di uscita osservati:
Contiene la stampa stdout,

Come un controllo automatico può riconoscere un errore:

## Step 2 — Parametri e calcolo fisico

Quando serve ricompilare e quando basta cambiare gli argomenti:
Per cambiare il passo di un'eventuale simulazione, non dovrei ricompilare, mi basterebbe eseguire nuovamente il programma. Dovrei ricompilare, invece, per cambiare la formula usata dal programma, perché in quel caso dal terminale non potrei passare al programma l'input. Quindi, il testo ricevuto è un input mandato dal terminale, che viene eseguito. L'eseguibile prende questo input e lo converte in base al sorgente. La rappresentazione stampata è il risultato di questa conversione.

## Step 2 — Git

Come riconosco nella cronologia i commit dei due step:
Vedendo che appaia il commit con messaggio descrittivo con git log --oneline -5

Come ho verificato che la versione finale sia presente su GitHub:
git pull e "Already up to date"