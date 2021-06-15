
/* Void OnDestroy() */

void Assembly-CSharp.dll::StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
     StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D__OnDestroy
               (StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *this,
               MethodInfo *method)

{
  if (this == (StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar2 = (this->fields)._.onAssetSetAction;
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,(Object *)this,(this->klass->vtable).OnDownloadFinished.methodPtr,
             (MethodInfo *)0x0);
  pUVar4 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pUVar2,(Delegate *)pUVar3,(MethodInfo *)0x0);
  pUVar2 = (UnityAction *)0x0;
  if (pUVar4 != (UnityAction *)0x0) {
    if (pUVar4->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar2 = pUVar4;
    }
    if (pUVar2 == (UnityAction *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->fields)._.onAssetSetAction = pUVar2;
  pUVar3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar3,(Object *)this,(this->klass->vtable).OnDestroy.methodPtr,
             MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
            );
  if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
    func_?();
  }
  AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
            ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pUVar3,(MethodInfo *)0x0);
  return;
}


/* Void OnDownloadFinished(UnityWebRequest) */

void Assembly-CSharp.dll::StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
     StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D__OnDownloadFinished
               (StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *this,
               UnityWebRequest *www,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (www != (UnityWebRequest *)0x0) {
    value = UnityEngine.UnityWebRequestModule.dll::UnityEngine::Networking::UnityWebRequest::
            UnityWebRequest_get_error(www,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      if ((this->fields).useCache != 0) {
        if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
          func_?(TypeInfo__StreamingAsset);
        }
        puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 0xc);
        uVar3 = (*(code *)*puVar2)(www,puVar2);
        puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
        (*(code *)*puVar2)(this,uVar3,puVar2);
        return;
      }
      if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
        func_?(TypeInfo__StreamingAsset);
      }
      puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 4);
      uVar3 = (*(code *)*puVar2)(www,this,puVar2);
      puVar2 = *(undefined4 **)(*(int *)(method->name + 0x60) + 8);
      (*(code *)*puVar2)(this,uVar3,puVar2);
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
     StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D__Start
               (StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields)._.url;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  bVar1 = mscorlib.dll::System::String::String_IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    (**(code **)**(undefined4 **)(method->name + 0x60))
              (this,(undefined4 *)**(undefined4 **)(method->name + 0x60));
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
            ((Object *)StringLiteral_StreamedAsset_is_missing_a_refer,(MethodInfo *)0x0);
  return;
}


/* StreamingAsset`2[UnityEngine.Texture2D,UnityEngine.Texture2D]() */

void Assembly-CSharp.dll::StreamingAsset`2[UnityEngine::Texture2D,UnityEngine::Texture2D]::
     StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D___ctor
               (StreamingAsset_2_UnityEngine_Texture2D_UnityEngine_Texture2D_ *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).useCache = 1;
  if ((((uint)(TypeInfo__StreamingAsset->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__StreamingAsset->_1).cctor_started == 0)) {
    func_?(TypeInfo__StreamingAsset);
  }
  StreamingAsset::StreamingAsset__ctor((StreamingAsset *)this,(MethodInfo *)0x0);
  return;
}

