
/* UnityWebRequest CreateRequest() */

UnityWebRequest *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Get::Get_CreateRequest(Get *this,MethodInfo *method)

{
  pUVar1 = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
           UnityWebRequest_Get((this->fields)._.url,(MethodInfo *)0x0);
  if ((this->fields).downloadHandler != (DownloadHandler *)0x0) {
    if (pUVar1 == (UnityWebRequest *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      pUVar1 = (UnityWebRequest *)(*pcVar2)();
      return pUVar1;
    }
    UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
    UnityWebRequest_set_downloadHandler(pUVar1,(this->fields).downloadHandler,(MethodInfo *)0x0);
  }
  return pUVar1;
}


/* Get(String, Action`1[UGUI.Portal.Scripts.WebResponse]) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Get::Get__ctor
               (Get *this,String *url,Action_1_UGUI_Portal_Scripts_WebResponse_ *callback,
               MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields)._.url = url;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields)._.callback = callback;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.callback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Get(String, DownloadHandler, Action`1[UGUI.Portal.Scripts.WebResponse]) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Get::Get__ctor_1
               (Get *this,String *url,DownloadHandler *downloadHandler,
               Action_1_UGUI_Portal_Scripts_WebResponse_ *callback,MethodInfo *method)

{
  mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
            ((Tuple_2_Object_Object_ *)this,(Object *)url,(Object *)callback,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).downloadHandler = downloadHandler;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).downloadHandler >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}


/* Get(String, String, Action`1[UGUI.Portal.Scripts.WebResponse]) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Get::Get__ctor_2
               (Get *this,String *urlPath,String *authToken,
               Action_1_UGUI_Portal_Scripts_WebResponse_ *callback,MethodInfo *method)

{
  mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
            ((Tuple_2_Object_Object_ *)this,(Object *)urlPath,(Object *)callback,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.authToken = authToken;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.authToken >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

