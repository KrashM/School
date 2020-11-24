using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double x = double.Parse(textBox1.Text);
            if (checkBox1.Checked) {

                if (x < 0) label4.Text = Math.Pow(x, 2).ToString();
                if (x == 0) label4.Text = "0";
                if (x > 0) label4.Text = Math.Sqrt(x).ToString();

            }
            else {

                if (x <= 0) label4.Text = (x * x).ToString();
                else label4.Text = (1 / x).ToString();

            }
        }
    }
}
