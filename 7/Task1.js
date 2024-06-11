class Product {
    constructor(name, count, purchased) {
        this.name = name,
            this.count = count,
            this.purchased = purchased
    };
}

class ProductList {
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

    displayProducts() {
        this._products.forEach(product => {
            if (product.purchased == false) {
                console.log(`Name: ${product.name}`);
                console.log(`Count: ${product.count}`);
                console.log(`Purchased: ${product.purchased}`);
            }
        });

        this._products.forEach(product => {
            if (product.purchased == true) {
                console.log(`Name: ${product.name}`);
                console.log(`Count: ${product.count}`);
                console.log(`Purchased: ${product.purchased}`);
            }
        });
    }

    buy(productName, count) {
        if (this._products.find(p => p.name == productName)) {
            p.count -= count;
        }
    }
}