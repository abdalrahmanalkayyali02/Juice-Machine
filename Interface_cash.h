#include <string>

class cashRegister {

    public: void accept_money(double);
    /*--------------------------------------------------------------------- 
     * This function we use it to accept monny form customer 
     * the value should give it to the prarmaeter list  
     * the money should equal the total of price or hight 
    ----------------------------------------------------------------------*/

    public: void set_quantity_for_cash(double);
    /*----------------------------------------------------------------------
     * This function we use it to set the number of te product 
     * that coustmer want to bring it from machin
     * e  the value of the quantity should send by the parameter list 
     ----------------------------------------------------------------------*/

    public: void set_price_of_product(double);
    /*----------------------------------------------------------------------
     * This function we use it to set the product price 
     * the product value should  send to  it by the parameter list
     * it maybe be float or int number 
     ----------------------------------------------------------------------*/
    
    public: void set_product_name(std::string); 
    /*----------------------------------------------------------------------
     * This function we use it to set the name of the product that custome 
     * wil bring it in the juice machine setting 
     * The value should given by the parameter list
     * every product hava to take product name to make sale correctly
     ----------------------------------------------------------------------*/
    
    public: double get_total_cost() const;
    /*----------------------------------------------------------------------
     * This function we use it to calculate the total cost for customer 
     * the total price have to do by equation which work as follw :
     * total = quantity of product * price of product 
     * this fuction has no parameter 
     ----------------------------------------------------------------------*/

    public: double get_rest_of_money() const;
    /*----------------------------------------------------------------------
     * This function we use it to return the rest of the money 
     * This function work if you send money to machine more than total cost
     * the equation for this function is :
     * cusomer money = customer money - total cost
     * this function has no parameter 
     ----------------------------------------------------------------------*/

    public: bool is_customer_money_suitable() const;
    /*----------------------------------------------------------------------
     * This function we use it to to cheack if the money than custome give 
     * to machine is correct is equal or more than total price : 
     * the equation is make compartive between custome money and the total
     * price if its == or hight it return true if else it will return false
     ----------------------------------------------------------------------*/
    
    public: void show_recipt();
    /*----------------------------------------------------------------------
     * This function we use it ti show the recipt for each product that 
     * customer bring , quantity and the cost for each also the total cost
     * it have no parameter 
     * it show the price for eack product and number of product that you 
     * bring and show total cost for them 
     ----------------------------------------------------------------------*/

    private: double money_on_hand;
    private: double price;
    private: double product_quantity;
    private: std::string product_name;
};
