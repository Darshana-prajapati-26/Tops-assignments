// Import default export + named export from the same module
// default → getDiscountedPrice, named → { formatPrice }
import getDiscountedPrice, { formatPrice } from "./utils.js";

const cartItems = [
  { name: "Running Shoes",    price: 3499, discount: 20 },
  { name: "Denim Jacket",     price: 1999, discount: 15 },
  { name: "Wireless Earbuds", price: 2499, discount: 30 },
];

const container = document.getElementById("cart-output");

cartItems.forEach(item => {
  const final = getDiscountedPrice(item.price, item.discount);
  console.log(`${item.name}: ${formatPrice(item.price)} → ${formatPrice(final)}`);

  const div = document.createElement("div");
  div.style.cssText = "background:#fff;border:1px solid #ddd;border-radius:8px;padding:12px 18px;margin:8px 0;max-width:480px;font-size:15px;";
  div.innerHTML = `<strong>${item.name}</strong><br/>
    Original: <s>${formatPrice(item.price)}</s> &nbsp;
    Discount: ${item.discount}% &nbsp;
    <span style="color:green;font-weight:bold;">Final: ${formatPrice(final)}</span>`;
  container.appendChild(div);
});
