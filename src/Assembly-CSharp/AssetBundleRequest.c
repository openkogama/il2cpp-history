
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::AssetBundleRequest::AssetBundleRequest_Create
          (AssetBundleRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._.path;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
    str1 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_UrlCacheAssetVersionArgument
                     (pKVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,str1,(MethodInfo *)0x0);
    pKVar2 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
    if (pKVar2 != (KoGaMaSettingsContainer *)0x0) {
      version = System.Core.dll::System::Linq::
                Enumerable+<CreateWhereIterator>c__Iterator1D`1[Newtonsoft::Json::Schema::
                JsonSchemaType]::
                Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType__System_Collections_Generic_IEnumerator_TSource__get_Current
                          ((Enumerable_CreateWhereIterator_c_Iterator1D_1_Newtonsoft_Json_Schema_JsonSchemaType_
                            *)pKVar2,(MethodInfo *)0x0);
      pUVar3 = UnityEngine.UnityWebRequestAssetBundleModule.dll::UnityEngine::Networking::
               UnityWebRequestAssetBundle::UnityWebRequestAssetBundle_GetAssetBundle
                         (pSVar1,version,0,(MethodInfo *)0x0);
      return pUVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pUVar3 = (UnityWebRequest *)(*pcVar4)();
  return pUVar3;
}


/* AssetBundleRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest], WWWRequestPriority)
    */

void Assembly-CSharp.dll::AssetBundleRequest::AssetBundleRequest__ctor
               (AssetBundleRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?(TypeInfo__AsyncWWWManager);
  }
  (this->fields)._._.retries = TypeInfo__AsyncWWWManager->static_fields->retries;
  uStack_1 = 0;
  func_?(&uStack_1,0,0,0);
  *(undefined4 *)&(this->fields)._._.currentTimeout._ticks = (undefined4)uStack_1;
  *(undefined4 *)((int)&(this->fields)._._.currentTimeout._ticks + 4) = uStack_1._4_4_;
  if ((((uint)(TypeInfo__System__DateTime->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__DateTime->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__DateTime);
  }
  pDVar2 = mscorlib.dll::System::DateTime::DateTime_get_Now(&DStack_3,(MethodInfo *)0x0);
  uVar4 = *(undefined4 *)((int)&(pDVar2->ticks)._ticks + 4);
  iVar5 = pDVar2->kind;
  uVar6 = *(undefined4 *)&pDVar2->field_0xc;
  *(int *)&(this->fields)._._.retryTime.ticks._ticks = (int)(pDVar2->ticks)._ticks;
  *(undefined4 *)((int)&(this->fields)._._.retryTime.ticks._ticks + 4) = uVar4;
  (this->fields)._._.retryTime.kind = iVar5;
  *(undefined4 *)&(this->fields)._._.retryTime.field_0xc = uVar6;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields)._._.requestPriority = requestPriority;
  (this->fields)._._.path = path;
  (this->fields)._._.callback = callback;
  return;
}

