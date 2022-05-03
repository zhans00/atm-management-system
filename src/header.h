enum transaction_type {
    WITHDRAW = 0,
    DEPOSIT = 1
};

int registration(char *name);
int update(char *new_country, char *new_phone);
int check_details(size_t user_id);
int transaction(int action, size_t account_id, unsigned int amount);
int remove_acc(size_t account_id);
int transfer_acc(int account_from, int account_to);