class student:
    name = ''
    excused_absences = 0
    unexcused_asences = 0
    success = 0

    def input(self):
        self.name = input()
        self.excused_absences = int(input())
        self.unexcused_asences = float(input())
        self.success = float(input())

    def output(self):
        print('\n%s\n%s\n%s\n%s' % (self.name, self.excused_absences, self.unexcused_asences, self.success))

st = student()
st.input()
st.output()