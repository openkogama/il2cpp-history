
/* Void PartialDataUpdate(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialDataUpdate
               (MVGameOptionDataObject *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 == (MVNetworkGame_OperationRequests *)0x0)
     ) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar5 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,arg1,arg2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Byte_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                         );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
  Dictionary_2_System_Byte_System_Object___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
            );
  aiStackX_10[0] = arg1;
  value = (Object *)FUN_?(uRam_?,aiStackX_10);
  if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
    uVar6 = CONCAT71((int7)((ulonglong)uVar5 >> 8),2);
    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                ->klass->rgctx_data[0x22].method;
    uVar7 = (undefined7)((ulonglong)method_00 >> 8);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x16,value,(InsertionBehavior__Enum)uVar6,method_00);
    uVar5 = CONCAT71(uVar7,0x12);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object__TryInsert
              (this_00,0x12,(Object *)arg2,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method);
    pPVar8 = (pMVar3->fields).peer;
    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
    }
    if (pPVar8 != (PhotonPeer *)0x0) {
      (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                (pPVar8,CONCAT71((int7)((ulonglong)uVar5 >> 8),4),this_00,
                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                 (pPVar8->klass->vtable).SendOperation.method);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PartialRemoveFromWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialRemoveFromWOData
               (MVGameOptionDataObject *this,
               Dictionary_2_System_Object_System_Object_ *entriesToRemove,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_entriesToRemoveu000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_data_beforeu000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_data_afteru000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                     (entriesToRemove,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_entriesToRemoveu000A,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pDVar2 = (this->fields)._._.data;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                     (pDVar2,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_data_beforeu000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            ((this->fields)._._.data,entriesToRemove,1,(MethodInfo *)0x0);
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this);
  pDVar2 = (this->fields)._._.data;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                     (pDVar2,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_data_afteru000A,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialUpdateWOData
               (MVGameOptionDataObject *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_woDatau000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_data_beforeu000A);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_data_afteru000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                     (woData,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_woDatau000A,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pDVar2 = (this->fields)._._.data;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                     (pDVar2,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_data_beforeu000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields)._._.data,woData,(MethodInfo *)0x0);
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this);
  pDVar2 = (this->fields)._._.data;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                     (pDVar2,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_data_afteru000A,pSVar1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,3,pSVar1);
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void RemoveSetting(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_RemoveSetting
               (MVGameOptionDataObject *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  source = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pSVar3->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      bVar4 = iRam_? != 0;
      (pSVar3->fields).DeltaRemovalData = (Dictionary_2_System_Object_System_Object_ *)this_00;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pSVar3->fields).DeltaRemovalData >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar3->fields).DeltaRemovalData,source,(MethodInfo *)0x0);
    pMVar9 = (pSVar3->fields).worldObject;
    if (pMVar9 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
                ((pMVar9->fields).data,(pSVar3->fields).DeltaRemovalData,0,(MethodInfo *)0x0);
      if ((pSVar3->fields).OnValueRemovedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar10 = (pSVar3->fields).OnValueRemovedLocal;
        (*(pAVar10->fields)._._.invoke_impl)
                  ((pAVar10->fields)._._.method_code,(pSVar3->fields).DeltaRemovalData,
                   (pAVar10->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Submit() */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_Submit
               (MVGameOptionDataObject *this,MethodInfo *method)

{
  this_00 = (this->fields).settingsManager;
  if (this_00 == (SettingsManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager::
  SettingsManager_Submit(this_00,(MethodInfo *)0x0);
  this_01 = (this->fields)._._.data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_2._list = (List_1_System_Object_ *)0x0;
  LStack_2._index = 0;
  LStack_2._version = 0;
  LStack_2._current = (Object *)0x0;
  this_02 = (List_1_System_Object_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
      lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      in_R8 = (MethodInfo *)(ulonglong)(uVar3 & 0x3f);
      do {
        uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
        puVar7 = (ulonglong *)(lVar5 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (longlong)in_R8;
        }
        UNLOCK();
      } while (!bVar8);
    }
    pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                 (ulonglong)(uint)(this_01->fields)._version;
    uStack_10 = 2;
    uStack_11 = 0;
    uStack_12 = 0;
    DStack_13._8_8_ = pDStack_9;
    DStack_13._current.key = (Object *)0x0;
    DStack_13._current.value = (Object *)0x0;
    DStack_13._getEnumeratorRetType = 2;
    DStack_13._36_4_ = 0;
    uStack_4 = 0;
    pDStack_9 = &DStack_13;
    DStack_13._dictionary = this_01;
    while (bVar14 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
                   Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                             (&DStack_13,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             ), pOVar15 = DStack_13._current.key, bVar14 != 0) {
      in_R8 = (MethodInfo *)DStack_13._current.value;
      if ((MethodInfo *)DStack_13._current.value != (MethodInfo *)0x0) {
        pIVar16 = (Il2CppMethodPointer)(DStack_13._current.value)->klass;
        cVar17 = (code)(
                      TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      ->_1).naturalAligment;
        if ((((byte)cVar17 <= (byte)pIVar16[0x130]) &&
            (*(Dictionary_2_System_Object_System_Object___Class **)
              (*(longlong *)(pIVar16 + 200) + -8 + (ulonglong)(byte)cVar17 * 8) ==
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) &&
           ((MethodInfo *)DStack_13._current.value != (MethodInfo *)0x0)) {
          cVar17 = (code)(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        ->_1).naturalAligment;
          if (((byte)pIVar16[0x130] < (byte)cVar17) ||
             (*(Dictionary_2_System_Object_System_Object___Class **)
               (*(longlong *)(pIVar16 + 200) + -8 + (ulonglong)(byte)cVar17 * 8) !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
          goto code_?;
          bVar14 = MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
                            ((Dictionary_2_System_Object_System_Object_ *)DStack_13._current.value,
                             (MethodInfo *)0x0);
          if (bVar14 != 0) {
            if (this_02 == (List_1_System_Object_ *)0x0) goto code_?;
            if (pOVar15 != (Object *)0x0) {
              pOVar18 = (Object *)0x0;
              if (pOVar15->klass == pORam0000000182dbdde0) {
                pOVar18 = pOVar15;
              }
              if (pOVar18 == (Object *)0x0) goto code_?;
            }
            in_R8 = 
            MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_;
            FUN_?(this_02);
          }
        }
      }
    }
    if (this_02 != (List_1_System_Object_ *)0x0) {
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
        lVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
          puVar7 = (ulonglong *)(lVar5 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                   ((ulonglong)(uint)(this_02->fields)._version << 0x20);
      uStack_11 = 0;
      LStack_2._8_8_ = pDStack_9;
      LStack_2._current = (Object *)0x0;
      uStack_4 = 0;
      pDStack_9 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)&LStack_2;
      LStack_2._list = this_02;
      while (bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_2,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<System::String>__MoveNext__
                               ), bVar14 != 0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Remove
                  (this_01,LStack_2._current,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Remove_System__Object_
                  );
      }
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(in_R8);
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateSetting(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
               (MVGameOptionDataObject *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 == (SettingsManager *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  source = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
           KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
  pSVar3 = (pSVar1->fields).settingsReporter;
  if (pSVar3 != (SettingsReporter *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
      LOCK();
      UNLOCK();
      FUN_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pSVar3->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                 *)FUN_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
      Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                (this_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      bVar4 = iRam_? != 0;
      (pSVar3->fields).DeltaData = (Dictionary_2_System_Object_System_Object_ *)this_00;
      if (bVar4) {
        uVar5 = (uint)((ulonglong)&(pSVar3->fields).DeltaData >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
    }
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
              ((pSVar3->fields).DeltaData,source,(MethodInfo *)0x0);
    pMVar9 = (pSVar3->fields).worldObject;
    if (pMVar9 != (MVWorldObject *)0x0) {
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                ((pMVar9->fields).data,source,(MethodInfo *)0x0);
      if ((pSVar3->fields).OnValueChangedLocal !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)0x0) {
        pAVar10 = (pSVar3->fields).OnValueChangedLocal;
        (*(pAVar10->fields)._._.invoke_impl)
                  ((pAVar10->fields)._._.method_code,source,(pAVar10->fields)._._.method);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVGameOptionDataObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject__ctor
               (MVGameOptionDataObject *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameOptionDataObject__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGameOptionDataObject__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
    FUN_?();
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  dictionary = (this->fields)._._.data;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_u000A);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString_1
                     (dictionary,0,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_u000A,pSVar1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  this_00 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVGameOptionDataObject__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  this_01 = (Action_2_Int32Enum_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                         );
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MVGameOptionDataObject__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pSVar2 = (SettingsReporter *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                        );
  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter::
  SettingsReporter__ctor
            (pSVar2,(MVWorldObject *)this,
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             this_00,(Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                      *)this_01,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).setttingsReporter = pSVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).setttingsReporter >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pSVar2 = (this->fields).setttingsReporter;
  pSVar8 = (SettingsManager *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                        );
  iVar9 = iRam_?;
  (pSVar8->fields).settingsReporter = pSVar2;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&pSVar8->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
      iVar9 = iRam_?;
    } while (!bVar3);
  }
  (this->fields).settingsManager = pSVar8;
  if (iVar9 != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).settingsManager >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}


/* GameBoosterSettingsManager get_GameBoosterSettingsManager() */

GameBoosterSettingsManager *
Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
          (MVGameOptionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingsManager
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._.data;
  pGVar2 = (GameBoosterSettingsManager *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingsManager
                        );
  bVar3 = iRam_? != 0;
  (pGVar2->fields).woData = pDVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pGVar2->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pGVar2;
}


/* GameOptionSettingsManager get_GameOptionSettingsManager() */

GameOptionSettingsManager *
Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
          (MVGameOptionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields)._._.data;
  pGVar2 = (GameOptionSettingsManager *)
           FUN_?(
                        TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager
                        );
  bVar3 = iRam_? != 0;
  (pGVar2->fields).woData = pDVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&pGVar2->fields >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  return pGVar2;
}

