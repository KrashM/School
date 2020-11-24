using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _8
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
            if (a < 3) label1.Text = "Слаб";
            if (a >= 3 && a < 3.5) label1.Text = "Среден";
            if (a >= 3.5 && a < 4.5) label1.Text = "Добър";
            if (a >= 4.5 && a < 5.5) label1.Text = "Много добър";
            if (a >= 5.5) label1.Text = "Отличен";
        }
    }
}
