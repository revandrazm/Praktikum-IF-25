module Ekspresi where

-- EKSPRESI ARITMATIKA
-- DEFINISI TYPE
data Expr = Val Int | Add Expr Expr | Mul Expr Expr deriving (Show, Read)
-- DEFINISI DAN SPESIFIKASI
evaluasi :: Expr -> Int
-- evaluasi e menghasilkan hasil perhitungan ekspresi e.

-- REALISASI
evaluasi (Val e) = e
evaluasi (Add a b) = evaluasi a + evaluasi b 
evaluasi (Mul a b) = evaluasi a * evaluasi b

-- APLIKASI
-- evaluasi (Add (Val 3) (Mul (Val 2) (Val 4)))
