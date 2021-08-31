//GUIs ABoaringWindow 10pts Justin Hsu

import javax.swing.*;

public class BoringWindow extends JFrame{
    
    public static void main (String[] args){
        JFrame f = new BoringWindow(); //Create window
        f.setDefaultCloseOperation( JFrame.EXIT_ON_CLOSE );
        f.setSize(300,200); //Size
        f.setVisible(true); //Visible
    }
}
