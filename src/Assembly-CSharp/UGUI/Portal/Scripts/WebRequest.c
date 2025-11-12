
/* IEnumerator DoRequest() */

IEnumerator *
Assembly-CSharp.dll::UGUI::Portal::Scripts::WebRequest::WebRequest_DoRequest
          (WebRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UGUI__Portal__Scripts__WebRequest___DoRequest_d__6);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__UGUI__Portal__Scripts__WebRequest___DoRequest_d__6);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return pIVar1;
}


/* WebRequest(String, String, Action`1[UGUI.Portal.Scripts.WebResponse]) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::WebRequest::WebRequest__ctor_1
               (WebRequest *this,String *urlPath,String *authToken,
               Action_1_UGUI_Portal_Scripts_WebResponse_ *callback,MethodInfo *method)

{
  mscorlib.dll::System::Tuple`2[Object,Object]::Tuple_2_Object_Object___ctor
            ((Tuple_2_Object_Object_ *)this,(Object *)urlPath,(Object *)callback,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).authToken = authToken;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).authToken >> 0xc);
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

