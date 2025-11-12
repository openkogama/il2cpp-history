
/* UnityWebRequest CreateRequest() */

UnityWebRequest *
Assembly-CSharp.dll::UGUI::Portal::Scripts::Post::Post_CreateRequest(Post *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_application_json__charset_UTF_8);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_accept);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Creating_post_request_with_paylo);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_content_type);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_5
                     (StringLiteral_Creating_post_request_with_paylo,(this->fields).payload,
                      ::StringLiteral__,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  postData = ::StringLiteral__;
  pSVar1 = (this->fields)._.url;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_POST);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar2 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest__ctor_2(pUVar2,pSVar1,StringLiteral_POST,(MethodInfo *)0x0);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest_SetupPostWwwForm(pUVar2,postData,(MethodInfo *)0x0);
  pSVar1 = (this->fields).payload;
  if (pSVar1 != (String *)0x0) {
    puVar3 = &(pSVar1->fields)._firstChar;
    for (uVar4 = 0; (int)uVar4 < (pSVar1->fields)._stringLength; uVar4 = uVar4 + 1) {
      if ((longlong)(pSVar1->fields)._stringLength <= (longlong)(ulonglong)uVar4) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowIndexOutOfRangeException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pUVar2 = (UnityWebRequest *)(*pcVar5)();
        return pUVar2;
      }
      c = *puVar3;
      if (*(int *)(lRam_? + 0xe4) == 0) {
        FUN_?();
      }
      bVar6 = mscorlib.dll::System::Char::Char_IsWhiteSpace(c,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        pEVar7 = mscorlib.dll::System::Text::Encoding::Encoding_get_UTF8((MethodInfo *)0x0);
        if (pEVar7 == (Encoding *)0x0) goto code_?;
        data = (Byte__Array *)
               (*(pEVar7->klass->vtable).GetBytes_1.methodPtr)(pEVar7,(this->fields).payload);
        this_00 = (UploadHandlerRaw *)
                  FUN_?(TypeInfo__UnityEngine__Networking__UploadHandlerRaw);
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UploadHandlerRaw::
        UploadHandlerRaw__ctor(this_00,data,(MethodInfo *)0x0);
        if (pUVar2 == (UnityWebRequest *)0x0) goto code_?;
        UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
        UnityWebRequest_set_uploadHandler(pUVar2,(UploadHandler *)this_00,(MethodInfo *)0x0);
        goto code_?;
      }
      puVar3 = puVar3 + 1;
    }
  }
  if (pUVar2 == (UnityWebRequest *)0x0) {
code_?:
    FUN_?();
    pcVar5 = (code *)swi(3);
    pUVar2 = (UnityWebRequest *)(*pcVar5)();
    return pUVar2;
  }
code_?:
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest_SetRequestHeader
            (pUVar2,StringLiteral_content_type,StringLiteral_application_json__charset_UTF_8,
             (MethodInfo *)0x0);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest_SetRequestHeader
            (pUVar2,StringLiteral_accept,StringLiteral_application_json__charset_UTF_8,
             (MethodInfo *)0x0);
  return pUVar2;
}


/* Post(String, String, String, Action`1[UGUI.Portal.Scripts.WebResponse]) */

void Assembly-CSharp.dll::UGUI::Portal::Scripts::Post::Post__ctor
               (Post *this,String *urlPath,String *authToken,String *payload,
               Action_1_UGUI_Portal_Scripts_WebResponse_ *callback,MethodInfo *method)

{
  WebRequest::WebRequest__ctor_1((WebRequest *)this,urlPath,authToken,callback,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).payload = payload;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).payload >> 0xc);
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

