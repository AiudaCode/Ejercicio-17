
import javax.swing.JOptionPane;

public class Main
{
    public static void main(String[] args)
    {
        //Se crea un objeto de la clase Circulo (Instanciaciación)
        Circulo obj = new Circulo();
        //Se pide y se guarda el radio en "r", se convirtira a double con el metodo parseDouble(), ya que el metodo showInputDialog lo
        //convertira a String.
        double r = Double.parseDouble(JOptionPane.showInputDialog(null, "Digite radio del circulo:"));
        
        obj.setRadio(r);//se encapsula la variable r

        //se muestra el area y  luego la longitud del circulo
        JOptionPane.showMessageDialog(null, "El area es: " + obj.area());
        JOptionPane.showMessageDialog(null, "La longitud es: " + obj.longitud());
    }
}
