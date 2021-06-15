
/* Void DownloadWhenPossible() */

void Assembly-CSharp.dll::StreamingAsset`2[UnityEngine::Sprite,UnityEngine::Texture2D]::
     StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D__DownloadWhenPossible
               (StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  bVar1 = MVCommon.dll::MV::Common::Urls::Urls_StreamingAssetUrlReady((MethodInfo *)0x0);
  if (bVar1 == 0) {
    if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__Common__Urls);
    }
    pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
    pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar3,(Object *)this,(void *)**(undefined4 **)(method->name + 0x60),
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable =
           (Urls_OnStreamingAssetsUrlAvailable *)0x0;
      return;
    }
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)func_?();
    if (pUVar2 != (Urls_OnStreamingAssetsUrlAvailable *)0x0) {
      TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar2;
      return;
    }
code_?:
    func_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((uint)(TypeInfo__MV__Common__Urls->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__Common__Urls->_1).cctor_started == 0)) {
    func_?(TypeInfo__MV__Common__Urls);
  }
  pUVar2 = TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable;
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__MV__Common__Urls__OnStreamingAssetsUrlAvailable);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,(Object *)this,(void *)**(undefined4 **)(method->name + 0x60),(MethodInfo *)0x0)
  ;
  pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
  pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)0x0;
  if (pDVar4 != (Delegate *)0x0) {
    pUVar2 = (Urls_OnStreamingAssetsUrlAvailable *)func_?();
    if (pUVar2 == (Urls_OnStreamingAssetsUrlAvailable *)0x0) goto code_?;
  }
  TypeInfo__MV__Common__Urls->static_fields->onStreamingAssetsUrlAvailable = pUVar2;
  onAssetSetAction = (this->fields)._.onAssetSetAction;
  url = (this->fields)._.url;
  if ((this->fields).useCache == 0) {
    StreamingAsset::StreamingAsset_Download_NonCached
              ((StreamingAsset *)this,url,onAssetSetAction,(MethodInfo *)0x0);
    return;
  }
  StreamingAsset::StreamingAsset_Download_Cached
            ((StreamingAsset *)this,url,onAssetSetAction,(MethodInfo *)0x0);
  return;
}


/* Void set_Asset(Sprite) */

void Assembly-CSharp.dll::StreamingAsset`2[UnityEngine::Sprite,UnityEngine::Texture2D]::
     StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D__set_Asset
               (StreamingAsset_2_UnityEngine_Sprite_UnityEngine_Texture2D_ *this,Sprite *value,
               MethodInfo *method)

{
  (this->fields).asset = value;
  this_00 = (AvatarMotor_OnActiveBounceDelegate *)(this->fields)._.onAssetSetAction;
  if (this_00 != (AvatarMotor_OnActiveBounceDelegate *)0x0) {
    AvatarMotor+OnActiveBounceDelegate::AvatarMotor_OnActiveBounceDelegate_Invoke
              (this_00,(MethodInfo *)0x0);
  }
  return;
}

