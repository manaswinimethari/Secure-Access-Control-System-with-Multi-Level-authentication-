//EEPROM data storage testing.write data to EEPROM and read it back.
#include <lpc21xx.h>       // LPC21xx microcontroller header
#include "i2c.h"           // I2C driver functions
#include "i2c_eeprom.h"    // I2C EEPROM functions
#include "lcd.h"           // LCD driver functions
#include "delay.h"         // Delay functions
/* 
 * Array containing 4 user IDs.Each ID contains 4 characters.
 */
char usr_id[][5] = {"1111","2222","3333","4444"};
/*
 * Array containing 4 user passwords.Each password contains 4 characters.
 */
char usr_pass[][5] = {"5555","6666","7777","8888"};
/*
 * Buffer used to store the user ID/password
 * read from the EEPROM.
 */
char rd_usr_id[5];
int main()
{
    int i;
    /* Initialize the LCD */
    init_lcd();
    /* Initialize the I2C peripheral */
    init_i2c();
    /* Display heading on LCD */
    str_lcd("USER ID'S:");
    /*
     * Write all 4 user IDs into EEPROM.
     */
    for(i = 0; i < 4; i++)
    {
        i2c_eeprom_write_page(
            0x50,               // EEPROM device address
            0x0000 + (i * 5),   // EEPROM memory address
            usr_id[i],          // ID to be written
            4                   // Number of bytes to write
        );

        /* Wait for EEPROM write operation to complete */
        delay_ms(100);
    }
    /*
     * Read all 4 user IDs from EEPROM
     * and display them on the LCD.
     */
    for(i = 0; i < 4; i++)
    {
        /* Read 4 bytes from EEPROM */
        i2c_eeprom_seq_read(
            0x50,               // EEPROM device address
            0x0000 + (i * 5),   // EEPROM memory address
            rd_usr_id,          // Buffer to store received data
            4                   // Number of bytes to read
        );
        /*
         * Add NULL character at the end.
         * This is required because str_lcd() expects
         * a NULL-terminated string.
         */
        rd_usr_id[4] = '\0';

        /* Move LCD cursor to second line */
        cmd_lcd(0xC0);

        /* Display the ID read from EEPROM */
        str_lcd((u8 *)rd_usr_id);

        /* Keep the ID on the LCD for 1 second */
        delay_ms(1000);
    }
    /* Clear the LCD */
    cmd_lcd(0x01);
    /* Display password heading */
    str_lcd("USER PASS:");
	/*
     * Write all 4 user passwords into EEPROM.
     */
    for(i = 0; i < 4; i++)
    {
        i2c_eeprom_write_page(
            0x50,               // EEPROM device address
            0x0020 + (i * 5),  // EEPROM memory address
            usr_pass[i],       // Password to be written
            4                   // Number of bytes to write
        );

        /* Wait for EEPROM write operation */
        delay_ms(100);
    }
    /*
     * Read all 4 passwords from EEPROM
     * and display them on the LCD.
     */
    for(i = 0; i < 4; i++)
    {
        /* Read 4 bytes from EEPROM */
        i2c_eeprom_seq_read(
            0x50,               // EEPROM device address
            0x0020 + (i * 5),  // EEPROM memory address
            rd_usr_id,          // Reuse buffer for password
            4                   // Number of bytes to read
        );
        /*
         * Add NULL character so that the data
         * can be displayed as a string.
         */
        rd_usr_id[4] = '\0';
        /* Move LCD cursor to second line */
        cmd_lcd(0xC0);
        /* Display the password read from EEPROM */
        str_lcd((u8 *)rd_usr_id);

        /* Keep password on LCD for 1 second */
        delay_ms(1000);
    }
    /*
     * Infinite loop.
     * Program remains here after all operations are complete.
     */
    while(1);
}
