
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::PostRequest::PostRequest_Create(PostRequest *this,MethodInfo *method)

{
  url = (this->fields)._.path;
  formData = (this->fields).form;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POST);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest__ctor_2(this_00,url,StringLiteral_POST,(MethodInfo *)0x0);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest_SetupPost(this_00,formData,(MethodInfo *)0x0);
  return this_00;
}


/* PostRequest(String, WWWForm, Action`1[UnityEngine.Networking.UnityWebRequest],
   WWWRequestPriority) */

void Assembly-CSharp.dll::PostRequest::PostRequest__ctor
               (PostRequest *this,String *path,WWWForm *form,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_binary);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  AsyncWebRequest::AsyncWebRequest__ctor
            ((AsyncWebRequest *)this,path,callback,requestPriority,(MethodInfo *)0x0);
  contents = (Byte__Array *)FUN_?(TypeInfo__System__Byte,1);
  if (form == (WWWForm *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::WWWForm::WWWForm_AddBinaryData_1
            (form,StringLiteral_binary,contents,(String *)0x0,(String *)0x0,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).form = form;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).form >> 0xc);
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
  return;
}

