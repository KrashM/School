using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _10
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

            if (!(a + b > c && a + c > b && b + c > a)) MessageBox.Show("Не е триъгълник");

            label1.Text = ((Math.Sqrt(-a * a + 2 * b * b + 2 * c * c)) / 2).ToString();
            label2.Text = ((Math.Sqrt(2 * a * a - b * b + 2 * c * c)) / 2).ToString();
            label3.Text = ((Math.Sqrt(2 * a * a + 2 * b * b - c * c)) / 2).ToString();
        }
    }
}
