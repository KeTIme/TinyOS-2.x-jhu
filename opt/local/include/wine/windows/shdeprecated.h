/*** Autogenerated by WIDL 1.2.3 from shdeprecated.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifndef __WIDL_SHDEPRECATED_H
#define __WIDL_SHDEPRECATED_H

#ifdef __cplusplus
extern "C" {
#endif

/* Headers for imported files */

#include <objidl.h>

/* Forward declarations */

#ifndef __IShellService_FWD_DEFINED__
#define __IShellService_FWD_DEFINED__
typedef interface IShellService IShellService;
#endif


/*****************************************************************************
 * IShellService interface
 */
#ifndef __IShellService_INTERFACE_DEFINED__
#define __IShellService_INTERFACE_DEFINED__

DEFINE_GUID(IID_IShellService, 0x5836fb00, 0x8187, 0x11cf, 0xa1,0x2b, 0x00,0xaa,0x00,0x4a,0xe8,0x37);
#if defined(__cplusplus) && !defined(CINTERFACE)
interface IShellService : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetOwner(
        IUnknown *pUnk) = 0;

};
#else
typedef struct IShellServiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IShellService* This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IShellService* This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IShellService* This);

    /*** IShellService methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOwner)(
        IShellService* This,
        IUnknown *pUnk);

    END_INTERFACE
} IShellServiceVtbl;
interface IShellService {
    CONST_VTBL IShellServiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IShellService_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IShellService_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IShellService_Release(This) (This)->lpVtbl->Release(This)
/*** IShellService methods ***/
#define IShellService_SetOwner(This,pUnk) (This)->lpVtbl->SetOwner(This,pUnk)
#endif

#endif

HRESULT STDMETHODCALLTYPE IShellService_SetOwner_Proxy(
    IShellService* This,
    IUnknown *pUnk);
void __RPC_STUB IShellService_SetOwner_Stub(
    IRpcStubBuffer* This,
    IRpcChannelBuffer* pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD* pdwStubPhase);

#endif  /* __IShellService_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __WIDL_SHDEPRECATED_H */
