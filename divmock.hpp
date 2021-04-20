

class Base {
    public:
        /* Constructors */
        Base() { }
        virtual ~Base() {}
        
        /* Pure Virtual Functions */
        virtual double evaluate() { 2; }
        virtual string stringify() { "2"; }
};

class RandMock {

	public:
		DivMock() { }
		virtual ~DivMock() { }

		virtual double evaluate() { -4; }
		virtual string stringify() { "-4" ;}

}


class RandMock {

        public:
                DivMock() { }
                virtual ~DivMock() { }

                virtual double evaluate() { -4; }
                virtual string stringify() { "-4" ;}

}


class RandMock {

        public:
                DivMock() { }
                virtual ~DivMock() { }

                virtual double evaluate() { 0; }
                virtual string stringify() { "0" ;}

}


