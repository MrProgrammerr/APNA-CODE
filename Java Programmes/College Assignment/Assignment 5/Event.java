// Event handling
import java.awt.*;
import java.awt.event.*;	
class Event extends Frame implements ActionListener{
		TextField t1;
		TextField t2;
		TextField t3;
		Frame fr;
		Label l1, l2;
		Button bt, b1;
		Event(){
			fr = new Frame("Event Example");
		fr.setSize(600, 600);
		fr.setLayout(null);
		fr.setVisible(true);
		
		l1 = new Label("First Number");
		l2 = new Label("Second Number");
		
		l1.setBounds(50, 100, 100, 20);
		l2.setBounds(50, 120, 100, 20);
		
		t1 = new TextField();
		t2 = new TextField();
		t3 = new TextField();
		
		t1.setBounds(100, 100, 100, 20);
		t2.setBounds(100, 120, 100, 20);
		t3.setBounds(100, 150, 100, 20);
		
		bt = new Button("Calculate");
		bt.setBounds(50, 200, 80, 30);
		bt.setActionListener(this);
		
		b1 = new Button("Clear");
		bt.setBounds(100, 200, 80, 30);
		bt.setActionListener(this);
		
		fr.add(bt);
		fr.add(l1);
		fr.add(l2);
		fr.add(t1);
		fr.add(t2);
		fr.add(t3);
		}
		
	}
	
	public void actionPerformed(ActionEvent ob){
		String s1 = t1.getText();
		String s2 = t2.getText();
		int n1 = Integer.parseInt(s1);
		int n2 = Integer.parseInt(s2);
		if(ob.getSource == bt){
			int result = n1+n2;
			t2.setText((String)result);
		}
		if(ob.getSource == b1){
			System.exit(0);
		}
	}
	public static void main(String args[]){
		Event ob = new Event();
	}
}