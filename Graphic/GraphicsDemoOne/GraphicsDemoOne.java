//Graphics GraphicsDemoOne 20pts Justin Hsu

import java.awt.*;
import javax.swing.JFrame;

@SuppressWarnings("Serial")

public class GraphicsDemoOne extends Canvas{
    public void paint( Graphics g ){
        g.setColor(Color.green);
        g.drawRect(50,20,100,200);  // draw a rectangle
        g.fillOval(160,20,100,200); // draw a filled-in oval
        g.setColor(Color.blue);
        g.fillRect(200,400,200,20); // a filled-in rectangle
        g.drawOval(200,430,200,100);
        
        g.setColor(Color.black);
        g.drawString("Graphics are pretty neat.", 500, 100);
        int x = getWidth() / 2;
        int y = getHeight() / 2;
        g.drawString("The first letter of this string is at (" + x + "," + y + ")", x, y);
    }

    public static void main( String[] args ){
        // You can change the title or size here if you want.
        JFrame win = new JFrame("GraphicsDemoOne");
        win.setSize(800,600);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        GraphicsDemoOne canvas = new GraphicsDemoOne();
        win.add( canvas );
        win.setVisible(true);
    }
}