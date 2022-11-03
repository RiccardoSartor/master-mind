# master-mind

## Per salvare in VICE - da michi

### CASO 1 - CREAZIONE FILE DA ZERO

Una volta aperto l'emulatore, per iniziare un nuovo file basterà

1. andare su File > Create and attach an empty disk image > salvare il file in .d64 dove si vuole
2. quando si vuole salvare nel file basterà eseguire il comando `SAVE "NOMEPROGRAMMA", 8`
3. eseguire un comando list (altrimenti resta in "fase di salvataggio" e non salva l'ultima modifica)

qualche accorgimento: 
  * nomeprogramma e nome file non devono per forza essere identici, il nome del file è semplicemente un disco virtuale, che può contenere più programmi, quindi con più nomi diversi.
  * il passo n°1 si può eseguire anche dopo un po' che si ha iniziato a programmare, basta ricordarsi di farlo prima di salvare
  * attenzione che se avete un VICE aperto e volete vedere eseguendo un altro VICE se il file è corretto, spesso darà errore perchè il programma ha accesso prioritario sul file, quindi non da accesso a un'altra istanza di questo.

### CASO 2 - SI HA APERTO UN FILE ESISTENTE E SI VUOLE MODIFICARLO E SALVARLO

da emulatore aperto, file trascinato al suo interno, bisogna ripetere sostanzialmente i passaggi del caso 1, basta ricordarsi sempre l'ordine e il nomeprogramma

#ALTRO METODO (più sicuro)
quando si ha il programma scritto e lo si vuole salvare in modo più sicuro: 
1. eseguire il comando `PRINT CHR$(147)` (un clearscreen)
2. eseguire il comando `LIST`
3. andare su `Edit` > `Copy` e incollare il tutto in un file di testo su windows
4. quando serve basta andare su `Edit` > `Paste` e tutte le linee di codice verranno importate
## download Vice
https://netcologne.dl.sourceforge.net/project/vice-emu/releases/binaries/windows/GTK3VICE-3.6.1-win64.zip
