using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double number1 = double.Parse(textBox1.Text);
            double number2 = double.Parse(textBox2.Text);
            double number3 = double.Parse(textBox3.Text);

            label1.Text = Math.Max(Math.Max(number1, number2), number3).ToString();
            label2.Text = Math.Max(Math.Min(number1, number2), number3).ToString();
            label3.Text = Math.Min(Math.Min(number1, number2), number3).ToString();
        }
    }
}
