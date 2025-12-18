
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::AssetBundleRequest::AssetBundleRequest_Create
          (AssetBundleRequest *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._._.path;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__version_589463061);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (pSVar1,StringLiteral__version_589463061,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Networking__DownloadHandlerAssetBundle,0x23227e15,0,0);
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
  obj = (DownloadHandlerAssetBundle *)
        FUN_?(TypeInfo__UnityEngine__Networking__DownloadHandlerAssetBundle);
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  HStack_2.u64_0 = 0;
  HStack_2.u64_1 = 0x23227e1500000000;
  pvVar3 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
           DownloadHandlerAssetBundle::DownloadHandlerAssetBundle_CreateCached
                     (obj,pSVar1,::StringLiteral__,&HStack_2,0,(MethodInfo *)0x0);
  (obj->fields)._.m_Ptr = pvVar3;
  this_00 = (UnityWebRequest *)FUN_?(TypeInfo__UnityEngine__Networking__UnityWebRequest);
  UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
  UnityWebRequest__ctor_3
            (this_00,pSVar1,StringLiteral_GET,(DownloadHandler *)obj,(UploadHandler *)0x0,
             (MethodInfo *)0x0);
  return this_00;
}


/* AssetBundleRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest], WWWRequestPriority)
    */

void Assembly-CSharp.dll::AssetBundleRequest::AssetBundleRequest__ctor
               (AssetBundleRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__DateTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AsyncWWWManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__AsyncWWWManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  (this->fields)._._.retries = TypeInfo__AsyncWWWManager->static_fields->retries;
  (this->fields)._._.currentTimeout._ticks = 0;
  if (*(int *)&(TypeInfo__System__DateTime->_1).field_0x1c == 0) {
    FUN_?();
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields)._._.retryTime._dateData = DVar1._dateData;
  iVar2 = iRam_?;
  (this->fields)._._.requestPriority = requestPriority;
  (this->fields)._._.path = path;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields)._._.path >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields)._._.callback = callback;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  return;
}

