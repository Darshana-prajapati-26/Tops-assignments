/*
  Q12:
  Imagine you are building a Flipkart-style wishlist feature. Move all functions related
  to adding, removing, and listing wishlist items from wishlist.js into a new file
  wishlistUtils.js, and import them back into wishlist.js using named imports.
  Hint: Make sure to update all import paths and function calls after moving the code.
*/

// Named export: add product to wishlist (no duplicates)
export function addToWishlist(wishlist, product) {
  if (wishlist.find(item => item.id === product.id)) return wishlist;
  return [...wishlist, product];
}

// Named export: remove product by id
export function removeFromWishlist(wishlist, productId) {
  return wishlist.filter(item => item.id !== productId);
}

// Named export: return a formatted summary string
export function listWishlistItems(wishlist) {
  if (wishlist.length === 0) return "Wishlist is empty.";
  return wishlist.map((item, i) => `${i + 1}. ${item.name} — ₹${item.price}`).join("\n");
}
