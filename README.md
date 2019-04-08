# Project: Booking cinema tickets
## IMPORTANT! In order to test the program, the date should be changed on the device supporting the program on February 2019, because the project was completed and the cinema repertoire will not be updated.

## To run the program:
In addition to having Visual Studio, you must also install C ++ language support / CLI in the Visual Studio installer.

![visual studio](https://i.ibb.co/yX6S8Qp/CLI.png)

## External specification
The program consists of 5 stages:
### 1. Start window - cinema selection
The user has one of three cities to choose from: Katowice, Gliwice, and Zabrze.

### 2. Calendar - date selection
The user can choose the day when he would like to go to the cinema.
Selected days from the past were prevented.

### 3. Selection of films and screening hours
The user has the choice of one of three films, each takes place at a different time.

### 4. Plan of the room - selection of seats
The user can choose any number of seats in the room, if available. Inaccessible seats are blocked. The seats marked by the user are displayed in orange. Booking one seat in the room costs $ 12. 

### 5. Final window - booking confirmation
The program displays confirmation at what time the user chose a screening, in which city, what movie, seats bill, seats numbers and reservation code.

In steps 2, 3, 4 the user can return to the previous window when he changes his mind or makes a mistake.
At each stage of the program, the user can disable the equivalent program with the button located in the lower right corner.

## Internal specification
In addition to files defining the main program windows, the project also contains files with auxiliary classes:

### CodeGenerator
The class is responsible for generating the reservation code. The code consists of 6 characters.
### Date
The class, receiving the current year and month, calculates how many days there are in the current month, which allows you to block / hide the appropriate buttons so that the user can not choose a date that does not exist, eg February 31. With the help of ++ and --operators, we can easily view subsequent months in the calendar.
### FileReader
The class retrieves information from text files about screenings and hours of videos on the day selected by the user.
### Reservation
The class that is used to save the user's choices. We can overwrite information if the user has changed his mind. Booking information is completed at each stage of the program, and the final screen is displayed.
### ReservationSaver
A class that saves reservations made by the user to a text file. The next time you start the program, you will not be able to choose the seats you have previously reserved.
### SeatsChecker
Class that reads reserved seats from the file.

## Screenshots:
![1](https://i.ibb.co/F7zJrh3/1.png)
![2](https://i.ibb.co/6yN3C5F/2.png)
![3](https://i.ibb.co/kJQJCxQ/3.png)
![4](https://i.ibb.co/qrrfrwP/4.png)
![5](https://i.ibb.co/KwLbWyN/6.png)
