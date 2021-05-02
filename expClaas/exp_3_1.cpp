 #include <iostream>
 
 using namespace std;
 
 class CPUinfo {
 	private:
 		int frequency;
 		float voltage;
 		int rankState;
 		enum CPU_Rank {
 			P1 = 1,
 			P2, P3, P4, P5, P6, P7
		 };
 	public:
 		CPUinfo() = default;
		CPUinfo(int frequencyI, float voltageI): 
		 	frequency(frequencyI), voltage(voltageI)  {
			printf("!!!constructing!!!\n");

		 }
		 ~CPUinfo() {
		 }
		 
 		
 		void run() {
 			printf("cpuInfo\t frequency:%dMHz\t voltage:%fV\t rankstate:%d\n",
			 	frequency, voltage, rankState);
		 }
 		void stop() {
 			printf("shut down, permision denied, use sudo and try again\n");
		 }
 }; 
 
 class RAM {
 	private:
 		int sizeInGigaByte;
 	public:
 		RAM() = default;
 		RAM(int size): sizeInGigaByte(size) {}
 		~RAM() {}
 		
 		void memsize() {
 			printf("memSize\t %d\n", sizeInGigaByte);
		 }
 };
 
 class CDROM {
 	public:
 		void cdput () {
 			printf("please put in your cd.\n");
		 }
 };
 
 class Computer {
 	private:
 		CPUinfo cpu;
		RAM ram;
		CDROM cdrom;
	public:
		Computer(int frequency, float voltage, int ramSize): 
			cpu(frequency, voltage), ram(ramSize) {
			
		}
		
		void run() {
			cpu.run();
			ram.memsize();
			cdrom.cdput();
			printf("----------------------------------");
			printf("\n\n");
		}
		
		void stop() {
			cpu.~CPUinfo();
			ram.~RAM();
			
			printf("sudo system shutdown -r now\n");
		}
		 	
 };
 
 int main () {
 	Computer lele(2400, 1.35, 16);
 	lele.run();
 	lele.stop();
 	
 	return 0;
 } 
