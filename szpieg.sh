#!/bin/bash

who

if [ "$who" = "turlej" ]
then

	mutt -s "uzytkownik turlej jest zalogowany" szpieg.sh@gmail.com

fi
