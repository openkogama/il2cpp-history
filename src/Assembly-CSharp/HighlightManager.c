
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
  if (cRam_? == '\0') {
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
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = 0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  pvVar7 = ((method->field7_0x1c).rgctx_data)->rgctxDataDummy;
  if ((*(byte *)((int)pvVar7 + 0xba) & 1) == 0) {
    pvVar7 = (void *)func_?(pvVar7);
  }
  pLVar8 = (List_1_Highlight_1_System_Object_ *)func_?(pvVar7);
  pLStack_9 = pLVar8;
  if (pLVar8 != (List_1_Highlight_1_System_Object_ *)0x0) {
    (*((method->field7_0x1c).rgctx_data[1].method)->virtualMethodPointer)
              (pLVar8,(method->field7_0x1c).rgctx_data[1].rgctxDataDummy);
    pLStack_10 = pLVar8;
    if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__HighlightManager);
    }
    this = (Dictionary_2_System_Object_System_Object_ *)
           TypeInfo__HighlightManager->static_fields->highlightDatas;
    if (this != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_12,this,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__GetEnumerator__
                         );
      uStack_13 = 0;
      DStack_6._dictionary = (Dictionary_2_System_Int32Enum_System_Object_ *)pDVar11->_dictionary;
      DStack_6._version = pDVar11->_version;
      DStack_6._index = pDVar11->_index;
      DStack_6._current.key = (int32_t)(pDVar11->_current).key;
      DStack_6._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
      uStack_1 = 1;
      pLVar8 = pLStack_9;
      pDStack_14 = &DStack_6;
      while( true ) {
        do {
          bVar15 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                  Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                            (&DStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__MoveNext__
                            );
          if (bVar15 == 0) {
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&DStack_6,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dispose__
                       ,unaff_EDI);
            *unaff_FS_OFFSET = uStack_3;
            return pLVar8;
          }
          pOVar16 = DStack_6._current.value;
          if (DStack_6._current.value == (Object *)0x0) goto code_?;
          pLVar8 = pLStack_9;
        } while (*(undefined1 *)&DStack_6._current.value[2].klass != (undefined1)highlightType);
        pMStack_17 = DStack_6._current.value[2].monitor;
        if ((TypeInfo__Newtonsoft__Json__JsonConvert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Newtonsoft__Json__JsonConvert);
        }
        pMStack_17 = (MonitorData *)
                     (*((method->field7_0x1c).rgctx_data[2].method)->virtualMethodPointer)
                               (pMStack_17,(method->field7_0x1c).rgctx_data[2].rgctxDataDummy);
        if (pOVar16 == (Object *)0x0) break;
        pOStack_18 = pOVar16[1].klass;
        uVar19 = func_?((method->field7_0x1c).rgctx_data,3);
        iStack_20 = func_?(uVar19);
        if (iStack_20 == 0) break;
        (*((method->field7_0x1c).rgctx_data[4].method)->virtualMethodPointer)
                  (iStack_20,pOStack_18,pMStack_17,
                   (method->field7_0x1c).rgctx_data[4].rgctxDataDummy);
        pLVar8 = pLStack_9;
        (*((method->field7_0x1c).rgctx_data[5].method)->virtualMethodPointer)
                  (pLStack_9,iStack_20,(method->field7_0x1c).rgctx_data[5].rgctxDataDummy);
      }
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar21 = (code *)swi(3);
  pLVar8 = (List_1_Highlight_1_System_Object_ *)(*pcVar21)();
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
           Newtonsoft::Json::JsonConvert::JsonConvert_DeserializeObject_6
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
  this = (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        );
  if (this != (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
              0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
              );
    if ((TypeInfo__HighlightManager->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__HighlightManager->static_fields->highlightDatas = this;
    func_?(TypeInfo__HighlightManager->static_fields);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  this = (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>
                        );
  if (this != (Dictionary_2_System_Int32_MV_WorldObject_HighlightSystem_AvailableHighlightData_ *)
              0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::HighlightSystem::AvailableHighlightData>__Dictionary__
              );
    TypeInfo__HighlightManager->static_fields->highlightDatas = this;
    func_?(TypeInfo__HighlightManager->static_fields,this);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

