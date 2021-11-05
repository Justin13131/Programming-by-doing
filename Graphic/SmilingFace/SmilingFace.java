//Graphic Smiling Face Function 80pts Justin Hsu
import java.awt.*;
import javax.swing.JFrame;

public class SmilingFace extends Canvas
{
    public void paint( Graphics g )
    {
        drawSmilingFace(g,100,100);
        // etc
    }

    public void drawSmilingFace( Graphics g, int x, int y )
    {
        // Draws a smiling face on the screen, where the point (x,y) is
        g.setColor(Color.yellow);
        g.fillOval(160,160,160,160);
        g.setColor(Color.black);
        g.drawArc(190,200,100,100,-180,180);
        g.fillOval(200,200,10,20);
        g.fillOval(270,200,10,20);


        //  the upper-left corner of a box containing the face.
        g.drawRect(x+50, y+50, 180, 180);


        // draw circle for the head

        // draw eyes

        // draw mouth
    }

    public static void main(String[] args)
    {
        // You can change the title or size here if you want.
        JFrame win = new JFrame("Smiling Face Function");
        win.setSize(1024,768);
        win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        win.add( new SmilingFace() );
        win.setVisible(true);
    }

}