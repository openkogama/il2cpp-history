
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::CachedTextureRequest::CachedTextureRequest_Create
          (CachedTextureRequest *this,MethodInfo *method)

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


/* CachedTextureRequest(String, Action`1[UnityEngine.Networking.UnityWebRequest],
   WWWRequestPriority, Boolean) */

void Assembly-CSharp.dll::CachedTextureRequest::CachedTextureRequest__ctor
               (CachedTextureRequest *this,String *path,
               Action_1_UnityEngine_Networking_UnityWebRequest_ *callback,
               WWWRequestPriority__Enum requestPriority,bool readable,MethodInfo *method)

{
  GetRequest::GetRequest__ctor((GetRequest *)this,path,callback,requestPriority,(MethodInfo *)0x0);
  (this->fields)._ReadableTextureData_k__BackingField = readable;
  return;
}


/* Boolean get_ReadableTextureData() */

bool Assembly-CSharp.dll::CachedTextureRequest::CachedTextureRequest_get_ReadableTextureData
               (CachedTextureRequest *this,MethodInfo *method)

{
  return (this->fields)._ReadableTextureData_k__BackingField;
}


/* Void set_ReadableTextureData(Boolean) */

void Assembly-CSharp.dll::CachedTextureRequest::CachedTextureRequest_set_ReadableTextureData
               (CachedTextureRequest *this,bool value,MethodInfo *method)

{
  (this->fields)._ReadableTextureData_k__BackingField = value;
  return;
}

