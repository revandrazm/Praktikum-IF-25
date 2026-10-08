module Pesta where

-- Pesta Eksklusif
-- DEFINISI DAN SPESIFIKASI
tamuEksklusif :: [Int] -> [Int] -> [Int]
-- tamuEksklusif menerima dua Himpunan ID tamu (berupa list of integer), lalu mengembalikan Himpunan baru yang berisi gabungan dari Tamu Eksklusif Mebel dan Tamu Eksklusif Pacific. Tamu Eksklusif adalah tamu yang hanya diundang oleh salah satu dari mereka saja, dan tidak diundang oleh keduanya (Symmetric Difference dari kedua himpunan). Urutannya adalah tamu eksklusif Mebel sesuai daftar Mebel, lalu tamu eksklusif Pacific sesuai daftar Pacific.

checkExist :: Int -> [Int] -> Bool
checkExist n l
    | (length l <= 0) = False
    | (n == head l) = True
    | otherwise = checkExist n (tail l)

tamuEksklusifSebelum :: [Int] -> [Int] -> [Int]
tamuEksklusifSebelum mebel pacific
    | (length mebel == 1) && (checkExist (head mebel) pacific) = []
    | (length mebel == 1) && not (checkExist (head mebel) pacific) = [head mebel]
    | (checkExist (head mebel)) pacific = tamuEksklusifSebelum (tail mebel) pacific
    | otherwise = [head mebel] ++ (tamuEksklusifSebelum (tail mebel) pacific)

-- REALISASI
tamuEksklusif mebel pacific = (tamuEksklusifSebelum mebel pacific) ++ (tamuEksklusifSebelum pacific mebel)

-- APLIKASI
-- > tamuEksklusif [1, 2, 3] [3, 4, 5]
-- [1, 2, 4, 5]
-- > tamuEksklusif [9, 8] [9, 8]
-- []
