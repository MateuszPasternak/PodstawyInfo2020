#!/bin/bash



if [ "$(who | grep -c "turlej")" = 1 ]
then

		echo -e "kontrolowany uzytkownik sie zalogowal.\n $(finger turlej)" | mutt -s "zalogowany=turlej" szpieg.sh@gmail.com

fi
