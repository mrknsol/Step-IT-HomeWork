//Task1 
var car = {
    brand: "Toyota",
    model: "Camry",
    year: 2022,
    color: "silver",
    transmission: "automatic",
    features: ["GPS", "Bluetooth", "Keyless Entry"],
    averageSpeed: 150,

    display: function () {
        console.log(`Brand: ${this.brand}`);
        console.log(`Model: ${this.model}`);
        console.log(`Year: ${this.year}`);
        console.log(`Color: ${this.color}`);
        console.log(`Transmission: ${this.transmission}`);

        for (let index = 0; index < this.features.length; index++) {
            console.log(`Features: ${this.features[index]}`);
        }
        console.log(`Average speed: ${this.averageSpeed}`);
    },
    calculateTravelTime: function (distance) {
        var timeWithoutBreaks = distance / this.averageSpeed;

        var breaks = Math.floor(timeWithoutBreaks / 4);

        var totalTime = timeWithoutBreaks + breaks;

        console.log(`Total time: ${totalTime}`);
    }
}

//Task2

class Fraction {
    constructor(numerator, denominator) {
        this.numerator = numerator;
        this.denominator = denominator;
    }

    add(other) {
        this._checkFractionObject(other);
        const newNumerator = this.numerator * other.denominator + other.numerator * this.denominator;
        const newDenominator = this.denominator * other.denominator;
        return new Fraction(newNumerator, newDenominator);
    }

    subtract(other) {
        this._checkFractionObject(other);
        const newNumerator = this.numerator * other.denominator - other.numerator * this.denominator;
        const newDenominator = this.denominator * other.denominator;
        return new Fraction(newNumerator, newDenominator);
    }

    multiply(other) {
        this._checkFractionObject(other);
        const newNumerator = this.numerator * other.numerator;
        const newDenominator = this.denominator * other.denominator;
        return new Fraction(newNumerator, newDenominator);
    }

    divide(other) {
        this._checkFractionObject(other);
        const newNumerator = this.numerator * other.denominator;
        const newDenominator = this.denominator * other.numerator;
        return new Fraction(newNumerator, newDenominator);
    }

    _checkFractionObject(obj) {
        if (!(obj instanceof Fraction)) {
            throw new Error("Parameter must be a Fraction object");
        }
    }
}

//Task3

class Time {
    constructor(hours, minutes, seconds) {
        this.hours = hours;
        this.minutes = minutes;
        this.seconds = seconds;
    }

    displayTime() {
        const formattedHours = this._formatNumber(this.hours);
        const formattedMinutes = this._formatNumber(this.minutes);
        const formattedSeconds = this._formatNumber(this.seconds);
        console.log(`${formattedHours}:${formattedMinutes}:${formattedSeconds}`);
    }

    addSeconds(seconds) {
        this.seconds += seconds;
        this._normalizeTime();
    }

    addMinutes(minutes) {
        this.minutes += minutes;
        this._normalizeTime();
    }

    addHours(hours) {
        this.hours += hours;
        this._normalizeTime();
    }

    _normalizeTime() {
        let extraMinutes = Math.floor(this.seconds / 60);
        this.seconds %= 60;
        this.minutes += extraMinutes;

        let extraHours = Math.floor(this.minutes / 60);
        this.minutes %= 60;
        this.hours += extraHours;

        this.hours %= 24;
    }

    _formatNumber(number) {
        return number < 10 ? `0${number}` : `${number}`;
    }
}