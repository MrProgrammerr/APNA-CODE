// AWT example
import java.awt.*;
class AWT{
	public static void main(String args[]){
		Frame fr = new Frame("Button Example");
		Button bt = new Button("Click here");
		bt.setBounds(50, 100, 80, 30);
		fr.add(bt);
		fr.setSize(400, 400);
		fr.setLayout(null);
		fr.setVisible(true);
	}
}
	