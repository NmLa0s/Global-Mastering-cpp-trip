class NDTEvent {
public:
	NDTEvent(){
		_trueEvent = 1;
		_EventTaple = TABLE_NUM;
	}

	void InputDigits( int digit ){ digit = _digit; };
	void CalcSincs( int since_base, int sI, int sII ){ 
	    since_base = _since_base;
		_since_base = NEW;

		sI  = _sinceI;
		sII = _sinceII;
		if(_since_base =! NEW){
			_trueEvent = 0;
			_b         = 0;
		}

		if( sI && sII > 100 ){
			sI += 50;
			sII+= 50;
			std::cout << "sI & SII have been completed from the system" << std::endl;
		}
		else{
			since_base = sI / sII;
			_digit     = since_base - ( sI * sII );
			_EventTaple = COMATAPLE;

			std::cout << " Our system is ready to generate an key for this ID:" << _digit + since_base << std::endl;
		}
	};

private:
	int _since_base;
	int _sinceI;
	int _sinceII;

	int _digit;
	int _szFwD; // not used

	bool _b; // not used
	float _f; // not used

protected:
	bool _trueEvent;
	int  _EventTaple;
};

int main(){
	NDTEvent Event;
	NDTEvent Event_handle();
	int digits_i;
	int sI_i;
	int sII_i;
	int sbase_i;

	std::cout <<"[Service] - Please put the owner digits: ";
	std::cin >> digits_i;
	Event.InputDigits(digits_i);
	
	std::cout <<"[Service check] - done"<<std::endl;
	std::cout <<"[Service] - Please Input the 3 dim digits into the system in way [ num1 , num2, num3 ]: ";

	std::cin >> sbase_i >> sI_i >> sII_i;
	Event.CalcSincs(sbase_i, sI_i, sII_i);

	std::cout <<"[Service check] - done"<<std::endl;
	
	system("puase");
}
