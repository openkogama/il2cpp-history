
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::CachedTextureRequest::CachedTextureRequest_Create
          (CachedTextureRequest *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._._._.path;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__version_584637704);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral__version_584637704,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerTexture,
                  (this->fields)._ReadableTextureData_k__BackingField == 0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Networking__UnityWebRequest);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GET);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  downloadHandler =
       (DownloadHandler *)FUN_?(TypeInfo__UnityEngine__Networking__DownloadHandlerTexture);
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pUVar4 = (UnityWebRequest *)(*pcVar2)();
    return pUVar4;
  }
  pcRam_? = pcVar2;
  pvVar5 = (void *)(*pcRam_?)(downloadHandler,&stack0x00000008);
  (downloadHandler->fields).m_Ptr = pvVar5;
  pUVar4 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest__ctor_3
            (pUVar4,pSVar1,StringLiteral_GET,downloadHandler,(UploadHandler *)0x0,(MethodInfo *)0x0)
  ;
  return pUVar4;
}


/* CachedTextureRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest],
   WWWRequestPriority, Boolean) */

void Assembly-CSharp.dll::CachedTextureRequest::CachedTextureRequest__ctor
               (CachedTextureRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,bool readable,MethodInfo *method)

{
  AsyncWebRequest::AsyncWebRequest__ctor
            ((AsyncWebRequest *)this,path,callback,requestPriority,(MethodInfo *)0x0);
  (this->fields)._ReadableTextureData_k__BackingField = readable;
  return;
}

