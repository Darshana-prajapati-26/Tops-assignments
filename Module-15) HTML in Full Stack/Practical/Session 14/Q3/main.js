import { formatPrice, getDiscountedPrice } from "./utils.js";

// Test in console
console.log(formatPrice(199));               // ₹199.00
console.log(formatPrice(1499.5));            // ₹1499.50
console.log(getDiscountedPrice(1000, 20));   // 800
console.log(getDiscountedPrice(500, 10));    // 450

// Display on page
const items = [
  { name: "Laptop",     price: 60000, discount: 15 },
  { name: "Headphones", price: 2000,  discount: 25 },
  { name: "Watch",      price: 5000,  discount: 10 },
];

const container = document.getElementById("output");
items.forEach(item => {
  const final = getDiscountedPrice(item.price, item.discount);
  const div = document.createElement("div");
  div.style.cssText = "background:#fff;border:1px solid #ddd;border-radius:8px;padding:12px 18px;margin:8px 0;max-width:440px;font-size:15px;";
  div.innerHTML = `<strong>${item.name}</strong> &nbsp;|&nbsp;
    Original: ${formatPrice(item.price)} &nbsp;|&nbsp; Discount: ${item.discount}% &nbsp;|&nbsp;
    <span style="color:green;font-weight:bold;">Final: ${formatPrice(final)}</span>`;
  container.appendChild(div);
});
