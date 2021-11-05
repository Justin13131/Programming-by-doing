//Graphic Smiling Face Function 80pts Justin Hsu
import java.awt.*;
import javax.swing.JFrame;

public class SmilingFace extends Canvas
{
    public void paint( Graphics g )
    {
        g.drawRect(50, 50, 900, 650);
        drawSmilingFace(g,100,100);
        drawSmilingFace(g,500,100);

        drawSmilingFace(g,100,400);

        drawSmilingFace(g,500,400);

        // etc
    }

    public void drawSmilingFace( Graphics g, int x, int y )
    {
        // Draws a smiling face on the screen, where the point (x,y) is
        // draw circle for the head
        g.setColor(Color.yellow);
        g.fillOval(x+110,y+130,160,160);
        g.setColor(Color.black);
        g.drawArc(x+140,y+170,100,100,-180,180);
        // draw eyes

        g.fillOval(x+150,y+170,10,20);
        g.fillOval(x+220,y+170,10,20);


        //  the upper-left corner of a box containing the face.


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