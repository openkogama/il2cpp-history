
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::GetRequest::GetRequest_Create(GetRequest *this,MethodInfo *method)

{
  url = (this->fields)._.path;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer,0);
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
       (DownloadHandler *)FUN_?(TypeInfo__UnityEngine__Networking__DownloadHandlerBuffer);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    pUVar3 = (UnityWebRequest *)(*pcVar1)();
    return pUVar3;
  }
  pcRam_? = pcVar1;
  pvVar4 = (void *)(*pcRam_?)(downloadHandler);
  (downloadHandler->fields).m_Ptr = pvVar4;
  pUVar3 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest__ctor_3
            (pUVar3,url,StringLiteral_GET,downloadHandler,(UploadHandler *)0x0,(MethodInfo *)0x0);
  return pUVar3;
}

