using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _9
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            pictureBox1.Visible = false;
            Random r = new Random();
            label1.Text = r.Next(1, 10).ToString();
            label2.Text = r.Next(1, 10).ToString();
            label3.Text = r.Next(1, 10).ToString();
            if (label1.Text == "7" || label2.Text == "7" || label3.Text == "7")
                pictureBox1.Visible = true;
            if (label1.Text == "7" && label2.Text == "7" && label3.Text == "7")
                MessageBox.Show("Джакпот");
        }
    }
}
