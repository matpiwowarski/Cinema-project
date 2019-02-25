# Projekt: Rezerwacja biletów do kina

## Aby uruchomić program:
Oprócz posiadania Visual Studio, należy zainstalować również Obsługę języka C++/interfejsu CLI w instalatorze Visual Studio.


![visual studio](https://i.ibb.co/yX6S8Qp/CLI.png)

## Specyfikacja zewnętrzna 
Program składa się z 5 etapów:
### 1. Okno startowe - wybór kina
Użytkownik ma do wyboru jedno z trzech miast: Katowice, Gliwice, Zabrze.

### 2. Kalendarz - wybór daty
Użytkownik może wybrać dzień w którym chciałby się wybrać do kina.
Uniemożliwiony został wybór dni z przeszłości.

### 3. Wybór filmów oraz godziny seansu
Użytkownik ma do wyboru jeden z trzech filmów, każdy odbywa się o innej godzinie.

### 4. Plan sali - wybór miejsc 
Użytkownik może wybrać dowolną ilość miejsc na sali, jeżeli tylko są dostępne. Miejsca niedostępne są zablokowane. Miejsca zaznaczone przez użytkownika wyświetlane są w kolorze pomarańczowym. Rezerwacja jednego miejsca na sali kosztuje 12$. 

### 5. Okno końcowe - potwierdzenie rezerwacji
Program wyświetla potwierdzenie o jakiej porze użytkownik wybrał seans, w jakim mieście, jaki film, rachunek za miejsca, numery miejsc oraz kod rezerwacji.

W etapach 2,3,4 użytkownik może powrócić do okna poprzedniego gdy zmieni swoje zdanie lub się pomyli.
W każdym etapie programu użytkownik może wyłączyć program odpowiednik przyciskiem, który znajduje się w prawym dolnym rogu.

## Specyfikacja wewnętrzna
Oprócz plików definiujących główne okna programu, projekt zawiera również pliki z klasami pomocniczymi:

### CodeGenerator
Klasa odpowiedzialna jest za generowanie kodu rezerwacji. Kod składa się z 6 znaków.
### Date
Klasa otrzymując bieżący rok oraz miesiąc, oblicza ile w danym obecnym miesiącu jest dni, co pozwala na blokowanie/chowanie odpowiednich przycisków tak aby użytkownik nie miał możliwości wybrać daty która nie istnieje np. 31 luty. Za pomocą operatorów ++ oraz -- możemy bez problemu przeglądać kolejne miesiące w kalendarzu.
### FileReader
Klasa pobiera informacje z plików tekstowych o seansach oraz godzinach filmów w dniu wybranym przez użytkownika.
### Reservation
Klasa, która służy do zapisywania wyborów użytkownika. Możemy nadpisywać informacje, jeżeli użytkownik zmienił zdanie. Informacje o rezerwacji są uzupełniane w każdym etapie programu, a w ekranie końcowym są wyświetlane.
### ReservationSaver
Klasa, która zapisuje rezerwacje dokonane przez użytkownika do pliku tekstowego. Przy następnym uruchomieniu programu, użytkownik nie będzie miał możliwości wyboru miejsc, które wcześniej zarezerwował.
### SeatsChecker
Klasa, która wczytuje z pliku miejsca zarezerwowane.

## Screenshoty:
![1](https://i.ibb.co/F7zJrh3/1.png)
![2](https://i.ibb.co/6yN3C5F/2.png)
![3](https://i.ibb.co/kJQJCxQ/3.png)
![4](https://i.ibb.co/qrrfrwP/4.png)
![5](https://i.ibb.co/KwLbWyN/6.png)
