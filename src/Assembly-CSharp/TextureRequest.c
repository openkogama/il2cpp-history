
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::TextureRequest::TextureRequest_Create(TextureRequest *this,MethodInfo *method)

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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_KoGaMaSettings((MethodInfo *)0x0);
  if (this_00 != (KoGaMaSettingsContainer *)0x0) {
    str1 = KoGaMaSettingsContainer::KoGaMaSettingsContainer_get_UrlCacheAssetVersionArgument
                     (this_00,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2(pSVar1,str1,(MethodInfo *)0x0);
    pUVar2 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             UnityWebRequestTexture::UnityWebRequestTexture_GetTexture
                       (pSVar1,(this->fields)._ReadableTextureData_k__BackingField == 0,
                        (MethodInfo *)0x0);
    return pUVar2;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pUVar2 = (UnityWebRequest *)(*pcVar3)();
  return pUVar2;
}

