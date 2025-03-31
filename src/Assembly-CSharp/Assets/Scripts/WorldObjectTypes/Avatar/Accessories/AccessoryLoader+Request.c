
/* Void Callback(AvatarAccessory) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::
     AccessoryLoader+Request::AccessoryLoader_Request_Callback
               (AccessoryLoader_Request *this,AvatarAccessory *avatarAccessory,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).accessoryCreatedCallback;
  if (pAVar2 != (Action_1_AvatarAccessory_ *)0x0) {
    puStack_1 = (pAVar2->fields)._._.method;
    pAStack_3 = avatarAccessory;
    pvStack_4 = (pAVar2->fields)._._.method_code;
    (*(pAVar2->fields)._._.invoke_impl)();
    return;
  }
  uVar5 = func_?(&pvStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
      func_?(&
                      MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                     );
      func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
      func_?(&TypeInfo__AsyncWWWManager);
      cRam_? = '\x01';
    }
    (object->fields).accessoryCreatedCallback = (Action_2_Int32_AvatarAccessory_ *)0x0;
    func_?(&(object->fields).accessoryCreatedCallback,0);
    this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>)
    ;
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_00,(Object *)object,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
              ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

