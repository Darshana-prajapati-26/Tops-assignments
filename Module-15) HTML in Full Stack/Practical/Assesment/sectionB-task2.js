/**
 * ╔══════════════════════════════════════════════════════════════════╗
 * ║  M1-A1  ·  Section B  ·  Task 2 — Menu Filter & Summary        ║
 * ╚══════════════════════════════════════════════════════════════════╝
 *
 * Requirements:
 *  ✔ Array of at least 6 dish objects (name, price, category, isVegetarian)
 *  ✔ filter()  → extract vegetarian dishes, log array
 *  ✔ map()     → formatted strings like 'Paneer Tikka - Rs 180', log array
 *  ✔ reduce()  → total price of all dishes, log result
 *  ✔ 3 clearly labelled console outputs
 *
 * Run:  node sectionB-task2.js
 */

// ── 1. Dish Array (7 items) ───────────────────────────────────────────────
const menu = [
  { name: "Paneer Tikka",    price: 180, category: "Food",     isVegetarian: true  },
  { name: "Chicken Biryani", price: 250, category: "Food",     isVegetarian: false },
  { name: "Dal Makhani",     price: 140, category: "Food",     isVegetarian: true  },
  { name: "Fish Curry",      price: 220, category: "Food",     isVegetarian: false },
  { name: "Aloo Paratha",    price: 90,  category: "Food",     isVegetarian: true  },
  { name: "Mango Lassi",     price: 70,  category: "Beverage", isVegetarian: true  },
  { name: "Cold Coffee",     price: 80,  category: "Beverage", isVegetarian: true  },
];

console.log("=".repeat(55));
console.log("  MENU FILTER & SUMMARY");
console.log("=".repeat(55));

// ── 2. filter() — vegetarian dishes ──────────────────────────────────────
const vegDishes = menu.filter(dish => dish.isVegetarian);

console.log("\n[OUTPUT 1] Vegetarian Dishes Array:");
console.log(vegDishes);
console.log(`Vegetarian dish count: ${vegDishes.length}`);   // 5

// ── 3. map() — formatted strings ─────────────────────────────────────────
const formattedMenu = menu.map(dish => `${dish.name} - Rs ${dish.price}`);

console.log("\n[OUTPUT 2] Formatted Menu Array:");
console.log(formattedMenu);
/*
[
  'Paneer Tikka - Rs 180',
  'Chicken Biryani - Rs 250',
  'Dal Makhani - Rs 140',
  'Fish Curry - Rs 220',
  'Aloo Paratha - Rs 90',
  'Mango Lassi - Rs 70',
  'Cold Coffee - Rs 80'
]
*/

// ── 4. reduce() — total price ─────────────────────────────────────────────
const totalPrice = menu.reduce((acc, dish) => acc + dish.price, 0);

console.log("\n[OUTPUT 3] Total Price of All Dishes:");
console.log(`Total Price: Rs ${totalPrice}`);   // Rs 1030

console.log("=".repeat(55));
