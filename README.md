# newYearGift
D.I.Y noel gift to my girlfriend. ***And yes, we broke up***

## HARDWARE NEEDS
    ARDUINO BOARD (In my case, it's UNO R3)  
    Dot Matrix Display (I used 5x7 red one)  
    
    Note: I additionally used Li-Po battery and Adafruit POWERBOOST 1000 to make that thing working without any power cable.  
    
## SCHEMATICS
    As given in code, column pins goes Arduino's Digital 2-6 pins and rows goes to 7-13.  
    Note: If you need these are Digital I/O's then I can suggest you to use multiplexer.  
    
## TRICKS
  
  ### Power Stuff
      You can use cheap chineese powerbank instead of Adafruit's POWERBOOST thing.  

  ### Communication
      Multiplexer is more useful and educational for you, using 12 Digital pin for one component does not make sense.  

  ### Creating Letterrs and Shapes
      I used the website http://dotmatrixtool.com/ fill the blanks and click generate button.  
      Status of the boxes in website might be different to light a led, depends on your dot matrix's type. (anode or kathode) some of them lights on "1" bit, some of lights on "0".  
