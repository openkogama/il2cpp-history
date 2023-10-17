
/* UnityWebRequest Create() */

UnityWebRequest *
Assembly-CSharp.dll::CachedTextureRequest::CachedTextureRequest_Create
          (CachedTextureRequest *this,MethodInfo *method)

{
  pSVar1 = (this->fields)._._._.path;
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
    pUVar4 = UnityEngine.UnityWebRequestTextureModule.dll::UnityEngine::Networking::
             UnityWebRequestTexture::UnityWebRequestTexture_GetTexture_1
                       (pSVar1,(this->fields)._ReadableTextureData_k__BackingField == 0,
                        (MethodInfo *)0x0);
    return pUVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pUVar4 = (UnityWebRequest *)(*pcVar5)();
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

