//Graphics GraphicsDemoOne 20pts Justin Hsu

import java.awt.*;
import javax.swing.JFrame;

@SuppressWarnings("Serial")


public class ACircle extends Canvas{
    
    public void paint( Graphics g ){
        g.setColor(Color.green);
        g.fillOval(160,160,160,160); // draw a filled-in oval
    }

    public static void main( String[] args ){
        JFrame win = new JFrame("ACircle");
        win.setSize(800,600);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        win.add( new ACircle() );
		win.setVisible(true);
    }
}