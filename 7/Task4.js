class Auditorium {
    constructor(name, seats, faculty) {
        this.name = name;
        this.seats = seats;
        this.faculty = faculty;
    }
}

class Group {
    constructor(name, students, faculty) {
        this.name = name;
        this.students = students;
        this.faculty = faculty;
    }
}

class Academy {
    constructor() {
        this.auditoriums = [];
    }

    addAuditorium(auditorium) {
        this.auditoriums.push(auditorium);
    }

    displayAllAuditoriums() {
        this.auditoriums.forEach(auditorium => {
            console.log(`Name: ${auditorium.name}, Seats: ${auditorium.seats}, Faculty: ${auditorium.faculty}`);
        });
    }

    displayAuditoriumsForFaculty(faculty) {
        this.auditoriums.filter(auditorium => auditorium.faculty === faculty).forEach(auditorium => {
            console.log(`Name: ${auditorium.name}, Seats: ${auditorium.seats}, Faculty: ${auditorium.faculty}`);
        });
    }

    displaySuitableAuditoriumsForGroup(group) {
        this.auditoriums.filter(auditorium => auditorium.faculty === group.faculty && auditorium.seats >= group.students).forEach(auditorium => {
            console.log(`Name: ${auditorium.name}, Seats: ${auditorium.seats}, Faculty: ${auditorium.faculty}`);
        });
    }

    sortAuditoriumsBySeats() {
        this.auditoriums.sort((a, b) => a.seats - b.seats);
    }

    sortAuditoriumsByName() {
        this.auditoriums.sort((a, b) => a.name.localeCompare(b.name));
    }
}