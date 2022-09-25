$komorebic = "C:\Users\ahmed\scoop\apps\komorebi\current\komorebic.exe"

for ($i = 0; $i -lt 9; $i++) {
  & $komorebic workspace-padding 0 $i 8
  & $komorebic container-padding 0 $i 8
  & $komorebic workspace-padding 1 $i 8
  & $komorebic container-padding 1 $i 8
}

& $komorebic workspace-name 0 0 "1"
& $komorebic workspace-name 0 1 "2"
& $komorebic workspace-name 0 2 "3"
& $komorebic workspace-name 0 3 "4"
& $komorebic workspace-name 0 4 "5"
& $komorebic workspace-name 0 5 "`u{fb6e}"
& $komorebic workspace-name 0 6 "`u{f1b6}"
& $komorebic workspace-name 0 7 "`u{f232}"
& $komorebic workspace-name 0 8 "`u{f1bc}"

& $komorebic workspace-name 1 0 "1"
& $komorebic workspace-name 1 1 "2"
& $komorebic workspace-name 1 2 "3"
& $komorebic workspace-name 1 3 "4"
& $komorebic workspace-name 1 4 "5"
& $komorebic workspace-name 1 5 "6"
& $komorebic workspace-name 1 6 "7"
& $komorebic workspace-name 1 7 "8"
& $komorebic workspace-name 1 8 "9"
 
# & $komorebic workspace-name 0 0 💬
# & $komorebic workspace-name 0 1 🌍
# & $komorebic workspace-name 0 2 📝
# & $komorebic workspace-name 0 3 🔧
# & $komorebic workspace-name 0 4 📚
# & $komorebic workspace-name 0 5 🚀
# & $komorebic workspace-name 0 6 🎮
# & $komorebic workspace-name 0 7 💬
# & $komorebic workspace-name 0 8 🎵
