// Link --> https://algo.monster/liteproblems/359



class Logger {
public:
    unordered_map<string, int> lastTime;
    bool shouldPrintMessage(int timestamp, string message) {
        // lastTime.find(message)!=lastTime.end() --> previously occured 
        if (lastTime.count(message) && timestamp - lastTime[message] < 10)return false;
           
        lastTime[message] = timestamp;
      
        return true;
    }
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */




/*   JAVA CODE

class Logger {
    HashMap<String, Integer> lastTime;
    public Logger() {
        lastTime = new HashMap<>();
    }
    public boolean shouldPrintMessage(int timestamp, String message) {
        if (timestamp - lastTime.getOrDefault(message, -100) < 10)
            return false;
        lastTime.put(message, timestamp);
        return true;
    }
}

/**
 * Your Logger object will be instantiated and called as such:
 * Logger obj = new Logger();
 * boolean param_1 = obj.shouldPrintMessage(timestamp,message);
 */

*/
