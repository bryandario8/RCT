/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _RCT_H_RPCGEN
#define _RCT_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define RCT_SERVICIO 0x23451111
#define RCT_VERS 1

#if defined(__STDC__) || defined(__cplusplus)
#define OBTENER_ID 1
extern  int * obtener_id_1(char **, CLIENT *);
extern  int * obtener_id_1_svc(char **, struct svc_req *);
#define BINDATE 2
extern  long * bindate_1(void *, CLIENT *);
extern  long * bindate_1_svc(void *, struct svc_req *);
#define OBTENER_RESPUESTA 3
extern  char ** obtener_respuesta_1(char **, CLIENT *);
extern  char ** obtener_respuesta_1_svc(char **, struct svc_req *);
extern int rct_servicio_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define OBTENER_ID 1
extern  int * obtener_id_1();
extern  int * obtener_id_1_svc();
#define BINDATE 2
extern  long * bindate_1();
extern  long * bindate_1_svc();
#define OBTENER_RESPUESTA 3
extern  char ** obtener_respuesta_1();
extern  char ** obtener_respuesta_1_svc();
extern int rct_servicio_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_RCT_H_RPCGEN */
