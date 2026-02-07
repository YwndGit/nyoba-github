# Script start.sh

Script bash ini berfungsi untuk inisialisasi project C, C++, atau Python secara otomatis.

## Cara Kerja

### 1. Input
- meminta input nama project
- input tidak boleh kosong

### 2. Pemilihan Bahasa Pemrograman
- Menampilkan menu pilihan (C, C++, Python)
- Input berupa nomor 1-3

### 3. Setup Project
- Membuat direktori dengan nama project (input sendiri)
- Inisialisasi git repository
- Generate file sesuai template bahasa yang dipilih

### 4. File yang Dibuat
- `.gitignore` 
- `main.c/cpp/py` - file program utama berisi Hello World
- `Makefile` - automation untuk compile dan run program

### 5. Git Commit
- Auto staging semua file
- Commit dengan message "init"

### 6. Output
- Print konfirmasi pembuatan project
- Menampilkan path absolut lokasi project

## Error Handling
- Input kosong akan terminate script
- Pilihan invalid akan menghapus folder dan exit dari scriptnya

## Penggunaan

```bash
chmod +x start.sh
./start.sh
```

### Contoh Output

```
Nama project: test-app

1) C
2) C++
3) Python
Pilih bahasa pemrograman yg akan digunakan: 1

C project created

Done!
file test-app sudah berhasil dibuat
lokasi nya ada di = /home/user/test-app
```
