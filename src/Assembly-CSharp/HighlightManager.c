
/* List`1[Highlight`1[System.Object]] GetHighLights[Object](HighlightType) */

List_1_Highlight_1_System_Object_ *
Assembly-CSharp.dll::HighlightManager::HighlightManager_GetHighLights
          (HighlightType__Enum highlightType,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__get_Current__
                   );
    func_?(&TypeInfo__HighlightManager);
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__get_Value__
                   );
    puVar5 = puStack_4;
    if ((method->field7_0x1c).rgctx_data == (Il2CppRGCTXData *)0x0) {
      func_?(method);
      puVar5 = puStack_4;
    }
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  pIVar7 = ((method->field7_0x1c).rgctx_data)->klass;
  if (((uint)pIVar7->vtable[0].methodPtr & 0x100) == 0) {
    pIVar7 = (Il2CppClass *)func_?(pIVar7);
  }
  pLVar8 = (List_1_Highlight_1_System_Object_ *)func_?(pIVar7);
  pLStack_9 = pLVar8;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
             (method->field7_0x1c).rgctx_data[1].method);
  pLStack_10 = pLVar8;
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = (Dictionary_2_System_UInt32_System_Object_ *)
         TypeInfo__HighlightManager->static_fields->highlightDatas;
  if (this != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                        &stack0xffffff98,this,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__GetEnumerator__
                       );
    uStack_12 = 0;
    DStack_6._dictionary = pDVar11->_dictionary;
    DStack_6._version = pDVar11->_version;
    DStack_6._index = pDVar11->_index;
    DStack_6._current.key = (pDVar11->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
    uStack_1 = 1;
    pDStack_13 = &DStack_6;
    while( true ) {
      do {
        bVar14 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__MoveNext__
                          );
        if (bVar14 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&DStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dispose__
                     ,in_stack_15);
          *unaff_FS_OFFSET = uStack_3;
          return pLStack_9;
        }
        pOVar16 = DStack_6._current.value;
        if (DStack_6._current.value == (Object *)0x0) goto code_?;
      } while (*(undefined1 *)&DStack_6._current.value[2].klass != (undefined1)highlightType);
      pEStack_17 = (ExceptionDispatchInfo *)DStack_6._current.value[2].monitor;
      if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pEStack_17 = (ExceptionDispatchInfo *)func_?();
      if (pOVar16 == (Object *)0x0) break;
      WStack_18.value__ = (int32_t)pOVar16[1].klass;
      func_?();
      pWStack_19 = (WebCompletionSource_1_T_Result_System_Object_ *)func_?();
      System.dll::System::Net::WebCompletionSource`1[T]+Result[System::Object]::
      WebCompletionSource_1_T_Result_System_Object___ctor_1
                (pWStack_19,WStack_18,pEStack_17,(method->field7_0x1c).rgctx_data[5].method);
      if (pLStack_9 == (List_1_Highlight_1_System_Object_ *)0x0) break;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLStack_9,(Object *)pWStack_19,
                 (method->field7_0x1c).rgctx_data[6].method);
    }
  }
code_?:
  func_?();
  func_?();
  pcVar20 = (code *)swi(3);
  pLVar8 = (List_1_Highlight_1_System_Object_ *)(*pcVar20)();
  return pLVar8;
}


/* Void Init(String) */

void Assembly-CSharp.dll::HighlightManager::HighlightManager_Init
               (String *availableHighlightDatasString,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HighlightManager);
    func_?(&
                    System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>_>_System__String_
                   );
    func_?(&TypeInfo__Newtonsoft__Json__JsonConvert);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
  }
  pDVar1 = (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
           Newtonsoft.Json.dll::Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_2
                     (availableHighlightDatasString,
                      System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>_MethodInfo__Newtonsoft__Json__JsonConvert__DeserializeObject<System::Collections::Generic::Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>_>_System__String_
                     );
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__HighlightManager);
  }
  TypeInfo__HighlightManager->static_fields->highlightDatas = pDVar1;
  func_?(TypeInfo__HighlightManager->static_fields,pDVar1);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::HighlightManager::HighlightManager_Reset(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                   );
    func_?(&TypeInfo__HighlightManager);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
            );
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__HighlightManager->static_fields->highlightDatas =
       (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)this;
  func_?(TypeInfo__HighlightManager->static_fields);
  return;
}


/* Void SetHighlightToSeen(Int32) */

void Assembly-CSharp.dll::HighlightManager::HighlightManager_SetHighlightToSeen
               (int32_t highlightId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this = TypeInfo__HighlightManager->static_fields->highlightDatas;
  if (this != (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
              0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this,highlightId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Remove_int_
              );
    if (cRam_? == '\0') {
      highlightId = (int32_t)&TypeInfo__MVGameControllerBase;
      func_?();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).operationRequests,
       this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetHighlightToSeen
                (this_00,highlightId,(MethodInfo *)0x0);
      return;
    }
  }
  uVar3 = func_?(&stack0xfffffff0);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* HighlightManager() */

void Assembly-CSharp.dll::HighlightManager::HighlightManager__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                   );
    func_?(&TypeInfo__HighlightManager);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
            );
  TypeInfo__HighlightManager->static_fields->highlightDatas =
       (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)this;
  func_?(TypeInfo__HighlightManager->static_fields,this);
  return;
}

