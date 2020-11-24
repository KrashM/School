using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _7
{
    public partial class Form1 : Form
    {
        public int n, br = 0;
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Random r = new Random();
            n = r.Next(1, 1001);
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int k = Convert.ToInt32(textBox1.Text);
            br++;
            if (k < n){

                label1.Text += k.ToString() + " - нагоре" + "\n";
                MessageBox.Show("Не! Моето число е нагоре! Опитай пак!");

            }
            else if (k > n){

                label1.Text += k.ToString() + " - надолу" + "\n";
                MessageBox.Show("Не! Моето число е надолу! Опитай пак!");

            }
            else{

                label1.Text += k.ToString() + " - Позна от " + br + " опит";

            }
        }
    }
}
