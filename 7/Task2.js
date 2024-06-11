class Product {
    constructor(name, count, price) {
        this.name = name,
            this.count = count,
            this.price = price
    };
}

class Cheque {
    constructor() {
        this._products = [];
    }

    addProduct(product) {
        if (product instanceof Product) {
            if (this._products.find(p => p === product)) {
                p.count += product.count;
                return;
            }

            this._products.push(product);
        } else {
            throw new Error("Only instances of Product can be added to the products array.");
        }
    }

    displayCheque() {
        this._products.forEach(product => {
            const name = product.name.padEnd(8, ' ');
            const count = String(product.count).padStart(2, ' ');
            const price = (product.price * product.count).toFixed(2).padStart(2, ' ');

            console.log(`Name: ${name} Count: ${count} \t Price: ${price}`);
        });

        console.log(`Total: ${this.totalPrice()}$`);
    }

    totalPrice() {
        let totalPrice = 0;
        this._products.forEach(product => {
            const price = (product.price * product.count).toFixed(2).padStart(2, ' ');
            totalPrice += parseFloat(price);
        });

        return totalPrice.toFixed(2);
    }

    getMostExpensive() {
        let mostExpensive = this._products[0];

        this._products.forEach(product => {
            if (product.price > mostExpensive.price) {
                mostExpensive = product;
            }
        });

        return mostExpensive;
    }

    averageCost() {
        let count = this._products.length;
        let totalPrice = this.totalPrice();

        return (totalPrice / count).toFixed(2);
    }
}