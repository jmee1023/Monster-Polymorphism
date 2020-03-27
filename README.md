Water_monster_main
      The reason eat_person is not polymorphism is because it performs the same actions regaurdless of the the type. It is not an overridden in the sub classes
      Therefore it is not polymorphism

     The scare method is a form of polymorphism because it has been overwritten in the subclasses and performs slightly different for each class


 Darkness_monster_main
    The scare method is a form of polymorphism because it acts different in for each subclass. Under_bed_monster and closet_monster have overwrtitten the method
    and have different characteristics

    For these classes the poke method is not polymorphic because it is declared in the super class and not over written in any subclass


    Sky_monster_main
        For my main method I followed a similar format of Water_monster_main. I populated a vector of unique pointers of both sub classes randomly.
        Based on user input i then displayed each of the classes functions. You can clearly see the classes polymorphic behavior when i call the same function
        but different actions occur based on the type of monster .


      Test cases:
        The test case implementation went very well. I have a perfect pass rate except once in a while the under the bed monster test case
        fails. I believe the reason for this was in the if conditonal I used a method the returns an integer and that is what causes it to fail
        I tried to do a toString call but then the test case was failing much more often that how I originally had it so I opt with my original design

