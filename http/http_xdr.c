/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "http.h"

bool_t
xdr_data1 (XDR *xdrs, data1 *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->request, BUFFER_SIZE,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_data2 (XDR *xdrs, data2 *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->fd))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_response (XDR *xdrs, response *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_int (xdrs, &objp->fd))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->char_read, BUFFER_SIZE,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->byte_read_nbr))
		 return FALSE;
	return TRUE;
}
