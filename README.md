How to install:

Clone the library into a new folder in the libraries folder of your Arduino installation.

(ex: C:\Program Files\Arduino\libraries\OneSheeld)
```
git clone https://github.com/Integreight/1Sheeld-Arduino-Library.git ./OneSheeld
```

Follow the [getting started tutorial](http://www.1sheeld.com/tutorials/getting-started) on our website to know how to operate 1Sheeld and run the library's examples.

If you need more help, don't hesitate posting a question on our [website's forum](http://www.1sheeld.com/forum).

If you want to contribute, please discuss you proposed feature on our forum first so that you can coordinate with the other developers working on the library.

Change Log:

--------- Version 1.2(003) -----------
- Added the data logger shield
- Added the terminal shield
- Added the text to speech shield
- Added the pattern shield
- Added the voice recognition shield
- Added posting photos from Facebook
- Fixed a typo in the GPS shield
- Added a way to decrease the size occupied by the library by disabling some shield from compilation
- Added more printing functions to the LCD shield
- Fixed a major bug that made the sketches hang after a couple of minutes
- Decreased the forced delay between frames to 200ms instead of 300ms
- Added examples for the new shields

--------- Version 1.1(002) -----------

- Added support for Intel Galileo board.
- Added a getAsFahrenheit() Helper Function.
- Refactored the LCD shield example.

--------- Version 1.0(001) -----------

- Initial Release

1Sheeld Arduino Library by Integreight, Inc. is licensed under GNU Lesser General Public License v3.0 (GNU LGPL v3.0).