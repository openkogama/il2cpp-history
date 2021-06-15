
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::CachedAssetBundleRequest::CachedAssetBundleRequest_Create
          (CachedAssetBundleRequest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._._.path;
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

