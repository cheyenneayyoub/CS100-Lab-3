

class MultMock {

	public:
		MultMock() { }
		virtual ~MultMock() { }

		virtual double evaluate() { 5; }
		virtual string stringify() { "5";  }
}

class MultMock {

        public:
                MultMock() { }
                virtual ~MultMock() { }

                virtual double evaluate() { -5; }
                virtual string stringify() { "-5";  }
}


class MultMock {

        public:
                MultMock() { }
                virtual ~MultMock() { }

                virtual double evaluate() { 0; }
                virtual string stringify() { "0";  }
}


