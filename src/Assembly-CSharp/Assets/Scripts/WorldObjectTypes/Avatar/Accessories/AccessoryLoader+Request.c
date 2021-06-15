
/* Void Callback(AvatarAccessory) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+Request::AccessoryLoader_Request_Callback
               (AccessoryLoader_Request *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields).accessoryCreatedCallback;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)avatarAccessory,
               MethodInfo__System__Action<AvatarAccessory>__Invoke_AvatarAccessory_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+Request::AccessoryLoader_Request_Destroy
               (AccessoryLoader_Request *this,MethodInfo *method)

{
  object = (this->fields).accessoryLoaderRequest;
  if (object != (AccessoryLoader_AccessoryLoaderRequest *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (object->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)0x0;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)object,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
               ,
               MethodInfo__System__Action<UnityEngine::Networking::UnityWebRequest>__Action_System__Object__void__
              );
    if ((((uint)(TypeInfo__AsyncWWWManager->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__AsyncWWWManager->_1).cctor_started == 0)) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String get_SubUrl() */

String * Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
         AccessoryLoader+Request::AccessoryLoader_Request_get_SubUrl
                   (AccessoryLoader_Request *this,MethodInfo *method)

{
  pAVar1 = (this->fields).accessoryLoaderRequest;
  if (pAVar1 != (AccessoryLoader_AccessoryLoaderRequest *)0x0) {
    return (pAVar1->fields).subUrl;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}

