# ergodox-ez-yukinagae

## Requirements

- [teensy](https://www.pjrc.com/teensy/loader_mac.html)
- [qmk_firmware](https://github.com/qmk/qmk_firmware) - clone somewhere in your computer.

## Setup

Clone this repo.

```bash
cd [path to qmk]/qmk_firmware/keyboards/ergodox_ez/keymaps/
git clone git@github.com:yukinagae/ergodox-ez-yukinagae.git [your name]
```

Make it.

```bash
cd [path to qmk]/qmk_firmware
make ergodox_ez:[your name]
```

Now you get `ergodox_ez_[your name].hex`.

```bash
$ ls [path to qmk]/qmk_firmware | grep hex
ergodox_ez_[your name].hex
```

Follow [この手順](https://qiita.com/kei_s/items/40a896d1a1c70f2961e0#流し込み手順) to load the hex file into your keyboard using teensy.

Done :)

## References

- [kei-s/qmk_firmware](https://github.com/kei-s/qmk_firmware/blob/my-layout/keyboards/ergodox_ez/keymaps/osx_ja/keymap.c#L102)
- [ErgoDox EZ を日本語キーボードとして使えるようにした](https://bouzuya.hatenablog.com/entry/2017/09/08/235959)
- [bouzuya/keymap.c](https://gist.github.com/bouzuya/cb95efa40691ab8a556ddd487ac87346/0c8242eb6508ca8ea759d1a108470b9b31d74487)
- [Ergodox EZ を使ってみよう](https://qiita.com/kei_s/items/40a896d1a1c70f2961e0)
- [日本語配列でバリバリにErgoDox EZを使う](https://qiita.com/shuh/items/b94215d3b946d3ded0fe)
