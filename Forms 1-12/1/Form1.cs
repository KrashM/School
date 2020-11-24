using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Forms_1_12
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double input = double.Parse(textBox1.Text);
            label1.Text = "";
            if (input < 0) MessageBox.Show("Недопустима стойност");
            else label1.Text = Math.Sqrt(input).ToString();
        }

    }
}
