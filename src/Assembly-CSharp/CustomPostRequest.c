
/* CustomPostRequest(UnityWebRequest, Action`1[UnityEngine.Networking.UnityWebRequest],
   WWWRequestPriority) */

void Assembly-CSharp.dll::CustomPostRequest::CustomPostRequest__ctor
               (CustomPostRequest *this,UnityWebRequest *request,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AsyncWebRequest::AsyncWebRequest__ctor
            ((AsyncWebRequest *)this,::StringLiteral__,callback,requestPriority,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.request = request;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.request >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

