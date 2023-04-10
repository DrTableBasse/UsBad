 # USBad <img src="src\img\logo.png" alt="Logo" width="96" align="center">

## What is it about ?
This repo is intended to show how you can design and use scripts via macro injections through Digispark-85 board.

## Disclaimer :

This repo is for demonstration only. <br/>
**Please don't use injection on real people !**

## Base requirements : 

- Arduino IDE.
- Attinny 85 Digispark.

    If you don't have one you can go to -> [Amazon](https://www.amazon.fr/ZHITING-Digispark-Kickstarter-d%C3%A9veloppement-compatible/dp/B08B3N57ZP/ref=sr_1_6?__mk_fr_FR=%C3%85M%C3%85%C5%BD%C3%95%C3%91&crid=HQFJA0K3LXRH&keywords=attiny85+digispark&qid=1681031001&sprefix=attiny85+digispar%2Caps%2C127&sr=8-6) or [Aliexpress](https://fr.aliexpress.com/item/4000051261168.html?spm=a2g0o.productlist.main.23.267067edr3PXQJ&algo_pvid=e88e6c3a-7b7f-4345-84ec-5d4d022612cf&algo_exp_id=e88e6c3a-7b7f-4345-84ec-5d4d022612cf-11&pdp_npi=3%40dis%21EUR%212.46%212.33%21%21%21%21%21%402145274c16810310553187628d06ee%2110000010923830551%21sea%21FR%210&curPageLogUid=0SJbZC3m1MvB).

## Designing custom scripts :
- Take into account scripts syntax can differ from different system / keyboard layout on the computer you want to inject code on.
- Default keyboard layout is QWERTY, you can change this by modifying `scancode-ascii-table.h` in your arduino library


## Flashing your Digispark :

By default, your Digispark memory is empty. <br/>
you'll need to flash your board with your script through Arduino IDE.

You can follow [this tutorial](https://www.locoduino.org/spip.php?article285) to setup your flash process.

Congratulations, now you can start scripting !

## Source Of Inspiration :
You can find an [other repository](https://github.com/MTK911/Attiny85) which we use to create UsBad project.
