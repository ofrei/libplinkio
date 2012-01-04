#ifndef __STATUS_H__
#define __STATUS_H__

enum pio_status_e
{
    /**
     * Function successful.
     */
    PIO_OK,

    /**
     * File reached EOF.
     */
    PIO_END,

    /**
     * Generic error.
     */
    PIO_ERROR
};

typedef enum pio_status_e pio_status_t;

#endif /* End of __STATUS_H__ */
