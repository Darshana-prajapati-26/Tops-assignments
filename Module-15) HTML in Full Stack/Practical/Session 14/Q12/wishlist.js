// Named imports from wishlistUtils.js
import { addToWishlist, removeFromWishlist, listWishlistItems } from "./wishlistUtils.js";

let wishlist = [];

const products = [
  { id: 1, name: "Wireless Headphones", price: 1999 },
  { id: 2, name: "Mechanical Keyboard", price: 3499 },
  { id: 3, name: "Laptop Stand",        price: 1299 },
];

function renderWishlist() {
  const listEl = document.getElementById("wishlist-list");
  listEl.innerHTML = "";

  if (wishlist.length === 0) {
    listEl.innerHTML = "<p style='color:#aaa;font-style:italic;'>Wishlist is empty</p>";
  } else {
    wishlist.forEach(item => {
      const div = document.createElement("div");
      div.style.cssText = "padding:8px 0;border-bottom:1px solid #eee;font-size:15px;";
      div.innerHTML = `💙 <strong>${item.name}</strong> — ₹${item.price}
        <button onclick="handleRemoveWish(${item.id})" style="margin-left:10px;background:#c62828;color:#fff;border:none;border-radius:4px;padding:3px 10px;cursor:pointer;">Remove</button>`;
      listEl.appendChild(div);
    });
  }
  console.log(listWishlistItems(wishlist));
}

window.handleAddWish = (id) => {
  wishlist = addToWishlist(wishlist, products.find(p => p.id === id));
  renderWishlist();
};
window.handleRemoveWish = (id) => {
  wishlist = removeFromWishlist(wishlist, id);
  renderWishlist();
};

// Render product list
const productList = document.getElementById("product-list");
products.forEach(p => {
  const div = document.createElement("div");
  div.style.cssText = "background:#fff;border:1px solid #ddd;border-radius:8px;padding:12px 18px;margin:8px 0;max-width:440px;display:flex;justify-content:space-between;align-items:center;font-size:15px;";
  div.innerHTML = `<span><strong>${p.name}</strong> — ₹${p.price}</span>
    <button onclick="handleAddWish(${p.id})" style="background:#2874f0;color:#fff;border:none;border-radius:4px;padding:6px 14px;cursor:pointer;">+ Wishlist</button>`;
  productList.appendChild(div);
});

renderWishlist();
