// utils.js — shared utility (same as Q3)
export function formatPrice(price) {
  return `₹${parseFloat(price).toFixed(2)}`;
}

export function getDiscountedPrice(price, discount) {
  const discountAmount = (price * discount) / 100;
  return parseFloat((price - discountAmount).toFixed(2));
}
