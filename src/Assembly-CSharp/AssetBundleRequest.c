
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::AssetBundleRequest::AssetBundleRequest_Create
          (AssetBundleRequest *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._._.path;
  pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__version_);
      cRam_? = '\x01';
    }
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pKVar2->fields).streamingAssetVersion,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral__version_,pSVar3,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_3(pSVar1,pSVar3,(MethodInfo *)0x0);
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      pUVar4 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
               UnityWebRequestAssetBundle::UnityWebRequestAssetBundle_GetAssetBundle
                         (pSVar1,(pKVar2->fields).streamingAssetVersion,0,(MethodInfo *)0x0);
      return pUVar4;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pUVar4 = (UnityWebRequest *)(*pcVar5)();
  return pUVar4;
}


/* AssetBundleRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest], WWWRequestPriority)
    */

void Assembly-CSharp.dll::AssetBundleRequest::AssetBundleRequest__ctor
               (AssetBundleRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    func_?(&TypeInfo__System__DateTime);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AsyncWWWManager);
    cRam_? = '\x01';
  }
  if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  (this->fields)._._.retries = TypeInfo__AsyncWWWManager->static_fields->retries;
  *(undefined4 *)&(this->fields)._._.currentTimeout._ticks = 0;
  *(undefined4 *)((int)&(this->fields)._._.currentTimeout._ticks + 4) = 0;
  if ((TypeInfo__System__DateTime->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__DateTime);
  }
  DVar1 = mscorlib.dll::System::DateTime::DateTime_get_Now((MethodInfo *)0x0);
  (this->fields)._._.retryTime._dateData = DVar1._dateData;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  ppSVar2 = &(this->fields)._._.path;
  (this->fields)._._.requestPriority = requestPriority;
  *ppSVar2 = path;
  func_?(ppSVar2,path);
  (this->fields)._._.callback = callback;
  func_?(&this->fields,callback);
  return;
}

