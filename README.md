# master-mind

## Per salvare in VICE - da michi

### CASO 1 - CREAZIONE FILE DA ZERO

Una volta aperto l'emulatore, per iniziare un nuovo file basterà

1. andare su File > Create and attach an empty disk image > salvare il file in .d64 dove si vuole
2. quando si vuole salvare nel file basterà eseguire il comando ' SAVE "NOMEPROGRAMMA", 8 '

qualche accorgimento: 
  * nomeprogramma e nome file non devono per forza essere identici, il nome del file è semplicemente un disco virtuale, che può contenere più programmi, quindi con più nomi diversi.
  * il passo n°1 si può eseguire anche dopo un po' che si ha iniziato a programmare, basta ricordarsi di farlo prima di salvare
  * attenzione che se avete un VICE aperto e volete vedere eseguendo un altro VICE se il file è corretto, spesso darà errore perchè il programma ha accesso prioritario sul file, quindi non da accesso a un'altra istanza di questo.

### CASO 2 - SI HA APERTO UN FILE ESISTENTE E SI VUOLE MODIFICARLO E SALVARLO

da emulatore aperto, file trascinato al suo interno, bisogna ripetere sostanzialmente i passaggi del caso 1, basta ricordarsi sempre l'ordine e il nomeprogramma
