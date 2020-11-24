using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _12
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if(textBox1.Text != "") {

                double cel = double.Parse(textBox1.Text);
                textBox2.Text = (cel * 33.8).ToString();

            }
            else {

                double far = double.Parse(textBox2.Text);
                textBox1.Text = (far / 33.8).ToString();

            }
        }
    }
}
