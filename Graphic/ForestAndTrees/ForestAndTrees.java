//Graphic ForestAndTrees 150pts Justin Hsu
import java.awt.*;
import javax.swing.JFrame;
import java.util.*;
@SuppressWarnings("Serial")
public class ForestAndTrees extends Canvas
{
	public void paint( Graphics g )
	{
		// draws a few single trees for testing
		drawTree(g,30,550);
		drawTree(g,100,580);
		drawTree(g,640,300);
		drawTree(g,730,370);

		// draws the first forest
        g.setColor(new Color (0,0,0));
		g.drawRect(10,10,500,500);
		drawForest(g,10,10,500,500);

		// draws the second forest
        g.setColor(new Color (0,0,0));
		g.drawRect(550,20,400,250);
		drawForest(g,550,20,400,250);

		// draws the third forest
        g.setColor(new Color (0,0,0));
		g.drawRect(200,530,710,160);
        drawForest(g,200,530,710,160);

		// * write code here to call drawForest() with the same dimensions as the rectangle above
	}
	
	public void drawTree(Graphics g, int x, int y)
	{
		g.setColor( new Color(134,83,0) );	// defines a brownish color
		// * write code here to draw the trunk using fillRect
        g.fillRect(x+17, y+50, 16, 50);
		// * write code here to create and draw a polygon for branches
        g.setColor(new Color(0,255,51));
        Polygon trunk = new Polygon();
        trunk.addPoint(x, y+75);
        trunk.addPoint(x+50, y+75);
        trunk.addPoint(x+25, y);
        g.fillPolygon(trunk);
	}

	public void drawForest( Graphics g, int x, int y, int w, int h )
	{
		// creates a box to demonstrate the forest's boundary

		// * write code here to make a loop that repeats 100 times or so
        for (int n = 1; n <= 100; n++) {
            int a=0, b=0;
            Random r = new Random();
            a = 1 + r.nextInt(w-50);
            b = 1 + r.nextInt(h-100);
			// * write code here to give 'a' a random value from [0 , w-50],  (assuming your tree is 50px wide)
			// * write code here to give 'b' a random value from [0 , h-100], (assuming your tree is 100px tall)
			drawTree(g,x+a,y+b);
            n++;
        }
		
			
		
	}

	public static void main(String[] args)
	{
		JFrame win = new JFrame("ForestAndTrees");
		win.setSize(1024,768);
		win.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		win.add( new ForestAndTrees() );
		win.setVisible(true);
	}

}