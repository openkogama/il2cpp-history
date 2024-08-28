
/* Void AccessoryCreatedInternalCallback(Int32, AvatarAccessory) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_AccessoryCreatedInternalCallback
               (AccessoryLoader *this,int32_t doneId,AvatarAccessory *avatarAccessory,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).requests;
  if (pDVar1 != (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                 *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,doneId,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Item_int_
                       );
    pDVar1 = (this->fields).requests;
    if (pDVar1 != (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                   *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,doneId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Remove_int_
                );
      if ((pOVar2 != (Object *)0x0) && (pOVar2[1].klass != (Object__Class *)0x0)) {
        (*(code *)((pOVar2[1].klass)->_0).namespaze)();
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddRequest(AccessoryLoader+AccessoryLoaderRequest, Action`1[AvatarAccessory]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_AddRequest
               (AccessoryLoader *this,AccessoryLoader_AccessoryLoaderRequest *accessoryLoaderRequest
               ,Action_1_AvatarAccessory_ *accessoryCreatedExternalCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                   );
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).requests;
  key = (this->fields).id;
  method_00 = 
  TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)accessoryCreatedExternalCallback;
  func_?(value + 1,accessoryCreatedExternalCallback);
  value[1].monitor = (MonitorData *)accessoryLoaderRequest;
  func_?(&value[1].monitor,accessoryLoaderRequest);
  if (this_00 !=
      (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
              );
    if (accessoryLoaderRequest != (AccessoryLoader_AccessoryLoaderRequest *)0x0) {
      AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
                (accessoryLoaderRequest,(MethodInfo *)0x0);
      (this->fields).id = (this->fields).id + 1;
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_Destroy(AccessoryLoader *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  method_00 = (MethodInfo *)(this->fields).requests;
  if (method_00 != (MethodInfo *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)method_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (pDVar6->_current).key;
    DStack_9._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                        );
      if (bVar11 == 0) break;
      if ((DStack_9._current.value == (Object *)0x0) ||
         (object = (Object *)DStack_9._current.value[1].monitor, object == (Object *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                       );
        func_?(&TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>);
        func_?(&TypeInfo__AsyncWWWManager);
        cRam_? = '\x01';
      }
      object[1].monitor = (MonitorData *)0x0;
      func_?(&object[1].monitor,0);
      method_00 = (MethodInfo *)&UNK_?;
      pDStack_12 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                    *)func_?(
                                     TypeInfo__System__Action<UnityEngine::Networking::UnityWebRequest>
                                     );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (pDStack_12,object,
                 MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest__Callback_UnityEngine__Networking__UnityWebRequest_
                 ,(MethodInfo *)0x0);
      if ((TypeInfo__AsyncWWWManager->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AsyncWWWManager);
      }
      AsyncWWWManager::AsyncWWWManager_UnsubscribeWWWRequest
                ((Action_1_UnityEngine_Networking_UnityWebRequest_ *)pDStack_12,(MethodInfo *)0x0);
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_9,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
               ,method_00);
    uStack_1 = 0xffffffff;
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(this->fields).requests;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets
      ::StyleSheetCache+SheetHandleKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Clear__
                );
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void LoadAccessory(String, Action`1[AvatarAccessory]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader_LoadAccessory
               (AccessoryLoader *this,String *url,
               Action_1_AvatarAccessory_ *accessoryCreatedExternalCallback,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryCreatedInternalCallback_int__AvatarAccessory_
                   );
    func_?(&TypeInfo__System__Action<int,_AvatarAccessory>);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__get_Value__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).requests;
  if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffffac,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__GetEnumerator__
                       );
    uStack_7 = 0;
    DStack_8._dictionary = pDVar6->_dictionary;
    DStack_8._version = pDVar6->_version;
    DStack_8._index = pDVar6->_index;
    DStack_8._current.key = (pDVar6->_current).key;
    DStack_8._16_8_ = *(undefined8 *)&(pDVar6->_current).value;
    uStack_1 = 1;
    pDStack_9 = &DStack_8;
    while( true ) {
      bVar10 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_8,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__MoveNext__
                        );
      if (bVar10 == 0) break;
      if ((DStack_8._current.value == (Object *)0x0) ||
         (DStack_8._current.value[1].monitor == (MonitorData *)0x0)) goto code_?;
      bVar10 = mscorlib.dll::System::String::String_op_Equality
                        (*(String **)(DStack_8._current.value[1].monitor + 0x10),url,
                         (MethodInfo *)0x0);
      if (bVar10 != 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
                   ,in_stack_11);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)&DStack_8,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dispose__
               ,unaff_EDI);
    uStack_1 = 0xffffffff;
    iVar12 = (this->fields).id;
    this_02 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_02,(Object *)this,
               MethodInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryCreatedInternalCallback_int__AvatarAccessory_
               ,(MethodInfo *)0x0);
    method_00 = 
    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__AccessoryLoaderRequest
    ;
    pDStack_13 = (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
                  *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pDStack_13,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
    this_01 = pDStack_13;
    ((AccessoryLoader_AccessoryLoaderRequest__Fields *)&pDStack_13->fields)->id = iVar12;
    ppAVar14 = &((AccessoryLoader_AccessoryLoaderRequest__Fields *)&pDStack_13->fields)->
               accessoryCreatedCallback;
    *ppAVar14 = (Action_2_Int32_AvatarAccessory_ *)this_02;
    func_?(ppAVar14,this_02);
    ppSVar15 = &((AccessoryLoader_AccessoryLoaderRequest__Fields *)&this_01->fields)->subUrl;
    *ppSVar15 = url;
    func_?(ppSVar15,url);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pDStack_13 = (this->fields).requests;
    pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                 (this->fields).id;
    method_01 = 
    TypeInfo__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request;
    value = (Object *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    value[1].klass = (Object__Class *)accessoryCreatedExternalCallback;
    func_?();
    value[1].monitor = (MonitorData *)this_01;
    func_?();
    if (pDStack_13 !=
        (Dictionary_2_System_Int32_Assets_Scripts_WorldObjectTypes_Avatar_Accessories_AccessoryLoader_Request_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)pDStack_13,(int32_t)pDStack_9,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Add_int__Assets__Scripts__WorldObjectTypes__Avatar__Accessories__AccessoryLoader__Request_
                );
      AccessoryLoader+AccessoryLoaderRequest::AccessoryLoader_AccessoryLoaderRequest_LoadAccessory
                ((AccessoryLoader_AccessoryLoaderRequest *)this_01,(MethodInfo *)0x0);
      (this->fields).id = (this->fields).id + 1;
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar16 = func_?();
  func_?(uVar16);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* AccessoryLoader() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::
     AccessoryLoader__ctor(AccessoryLoader *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_Assets::Scripts::WorldObjectTypes::Avatar::Accessories::AccessoryLoader::Request>__Dictionary__
            );
  method_00 = (MethodInfo *)&(this->fields).requests;
  *(Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ **)
   method_00 = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}

