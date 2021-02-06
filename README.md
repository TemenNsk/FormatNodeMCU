# FormatNodeMCU

This script will attempt to format and fix the corrupted from the previous flash content in NodeMCU. How it works, is actually pretty simple. This script will store some simple Base64s and it will loop a print function. If the flash content isn't showing correctly, The NodeMCU will learn on how to show them correctly. This script was meant for that.

![Serial Monitor](https://i.ibb.co/8MbsDYg/image.png)
## How to use?

Pretty simple actually, before you upload the script. You'll need to attempt and try to erase the entire Flash content first, which you can do in the Upload Settings. Go into Tools > Erase Flash > All Flash Content.

Once you edited the settings, just directly upload the Script into your NodeMCU. It'll not take too much time. Now, once you've uploaded it. Open up Serial Monitor on Baudrate 9600. 

If the output is still corrupted and the line isn't showing correctly or showing gibberish stuff like below, then just let it continue. The NodeMCU will learn itself and attempt to show the line in the correct way. It will take some time, though.
```C++
ucsfly⸮⸮⸮⸮ ꑕ⸮jU.Q
Scssuyfom odM.
ucsflyfra oeC.
Scesfu+ ⸮ɅNdeMU⸮H⸮Sucsulyfr ⸮ 8⸮5U.4
SJ⸮⸮⸮⸮⸮.V +⸮⸮⸮( r⸮5U.4
Su⸮⸮%.V.⸮+ ⸮K⸮⸮8⸮⸮5
4
Scesul orm NdeU
ucsflyforN+⸮ 8⸮5U.4
Scesuly ⸮ɵ⸮ ꑤSU%H⸮Scesul omtNdeU
```
Once you saw the line correctly, and doesn't have any misspelled letters or symbols, you may now unplug and plug again the NodeMCU. You can now start uploading your flash.
