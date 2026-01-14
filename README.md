# Find Character Position From End

This project implements a string search algorithm in C that locates a character's position relative to the **end** of the string.

## ⚙️ Logic

1.  **Length Calculation:** Iterate to find total length ($L$).
2.  **Reverse Search:** Loop from $L-1$ down to $0$.
3.  **Position Calculation:**
    * If `char[i] == target`:
    * $\text{Position from End} = \text{Length} - \text{Index}$

## 🚀 Example Output

Based on Question 4:
**String:** `"Programlamanin Temeli"`
**Target:** `'m'`

* **Total Length:** 21
* **Search:**
    * ...
    * Index 17: 'm' $\to$ **Match!**
* **Calculation:** $21 - 17 = 4$

```text
--- Sondan Karakter Bulma ---
Metin: Programlamanin Temeli
Aranan Karakter: 'm'
Sonuc: Karakter sondan 4. sirada bulundu.
