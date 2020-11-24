using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _6
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double a = double.Parse(textBox1.Text);
            double b = double.Parse(textBox2.Text);
            double c = double.Parse(textBox3.Text);
            double D = b * b - 4 * a * c;

            if (D >= 0) { 

                double x1 = (-b + Math.Sqrt(D)) / (2 * a); 
                double x2 = (-b - Math.Sqrt(D)) / (2 * a); 
                label5.Text = x1.ToString(); 
                label7.Text = x2.ToString(); 
            
            } 
            else { 
                
                label5.Text = "Няма реални корени"; 
                label7.Text = "Няма реални корени"; 
            
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox1.Text = "";
            textBox2.Text = "";
            textBox3.Text = "";
            label5.Text = "";
            label7.Text = "";
        }
    }
}
