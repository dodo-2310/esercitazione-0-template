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
usando git status --oneline -5

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

## Step 2 — Eco: seconda prova

Argomenti passati, comando e risultato:


Che cosa ho capito su testo, conversioni e stampa:
se uso echo $? posso verificare se c'è stato un errore, osservando se il programma stampa un num diverso da 0.
Se un argomento manca o non rappresenta quanto richiesto, il programma stampa un messaggio di errore  al suo posto.

## Step 2 — Risultato ed errori

Previsioni per l'esecuzione con argomenti validi e per quella con `dodici`:

Contenuto di `eco.txt`, messaggi nel terminale e codici di uscita osservati:

Come un controllo automatico può riconoscere un errore:

## Step 2 — Parametri e calcolo fisico

Quando serve ricompilare e quando basta cambiare gli argomenti:

## Step 2 — Git

Come riconosco nella cronologia i commit dei due step:

Come ho verificato che la versione finale sia presente su GitHub:
