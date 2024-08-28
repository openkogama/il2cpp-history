
/* Void PartialDataUpdate(Int32, Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialDataUpdate
               (MVGameOptionDataObject *this,int32_t arg1,
               Dictionary_2_System_Object_System_Object_ *arg2,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
      func_?(&TypeInfo__System__Int32);
      func_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                             );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    value = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffffc);
    if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x16,value,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__Add
                (this_00,0x12,(Object *)0x0,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                );
      piVar2 = *(int **)(arg1 + 0x10);
      if ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x110))(piVar2,4);
        return;
      }
    }
  }
  uVar3 = func_?(&stack0xfffffff4);
  func_?(uVar3);
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
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_entriesToRemoveu000A);
    func_?(&StringLiteral_data_beforeu000A);
    func_?(&StringLiteral_data_afteru000A);
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (entriesToRemove,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_entriesToRemoveu000A,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  pSVar2 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     ((Dictionary_2_System_Object_System_Object_ *)pSVar1[5].fields._stringLength,
                      (MethodInfo *)0x0);
  pSVar2 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_data_beforeu000A,pSVar2,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar2,(MethodInfo *)0x0);
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable_1
            ((Dictionary_2_System_Object_System_Object_ *)pSVar1[5].fields._stringLength,
             (Dictionary_2_System_Object_System_Object_ *)0x0,1,(MethodInfo *)0x0);
  (*pSVar1->klass[1].vtable.System_Collections_IEnumerable_GetEnumerator.methodPtr)();
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     ((Dictionary_2_System_Object_System_Object_ *)pSVar1[5].fields._stringLength,
                      (MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_data_afteru000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_PartialUpdateWOData
               (MVGameOptionDataObject *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_woDatau000A);
    func_?(&StringLiteral_data_beforeu000A);
    func_?(&StringLiteral_data_afteru000A);
    cRam_? = '\x01';
  }
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     (woData,(MethodInfo *)0x0);
  this_00 = (MVWorldObjectClient *)
            mscorlib.dll::System::String::String_Concat_3
                      (StringLiteral_woDatau000A,pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)this_00,(MethodInfo *)0x0);
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     ((this_00->fields)._.data,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_data_beforeu000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
            (this_00,(Dictionary_2_System_Object_System_Object_ *)0x0,(MethodInfo *)0x0);
  pSVar1 = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                     ((this_00->fields)._.data,(MethodInfo *)0x0);
  pSVar1 = mscorlib.dll::System::String::String_Concat_3
                     (StringLiteral_data_afteru000A,pSVar1,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  return;
}


/* Void RemoveSetting(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_RemoveSetting
               (MVGameOptionDataObject *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 != (SettingsManager *)0x0) {
    source = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
    pSVar2 = (pSVar1->fields).settingsReporter;
    if (pSVar2 != (SettingsReporter *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      ppDVar3 = &(pSVar2->fields).DeltaRemovalData;
      if ((pSVar2->fields).DeltaRemovalData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        *ppDVar3 = (Dictionary_2_System_Object_System_Object_ *)this_00;
        func_?();
      }
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (*ppDVar3,source,(MethodInfo *)0x0);
      pMVar4 = (pSVar2->fields).worldObject;
      if (pMVar4 != (MVWorldObject *)0x0) {
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialRemoveFromHashtable
                  ((pMVar4->fields).data,*ppDVar3,(MethodInfo *)0x0);
        pAVar5 = (pSVar2->fields).OnValueRemovedLocal;
        if (pAVar5 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) {
          (*(pAVar5->fields)._._.invoke_impl)();
        }
        return;
      }
    }
  }
  uVar6 = func_?(&stack0xffffffec);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Submit() */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_Submit
               (MVGameOptionDataObject *this,MethodInfo *method)

{
  this_00 = (this->fields).settingsManager;
  if (this_00 != (SettingsManager *)0x0) {
    MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsManager
    ::SettingsManager_Submit(this_00,(MethodInfo *)0x0);
    MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PruneEmptyDictionaries
              ((this->fields)._._.data,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateSetting(KogamaSettingWrapperBase) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_UpdateSetting
               (MVGameOptionDataObject *this,KogamaSettingWrapperBase *obj,MethodInfo *method)

{
  pSVar1 = (this->fields).settingsManager;
  if (pSVar1 != (SettingsManager *)0x0) {
    source = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTools::KogamaSettingTools_GetSubTree(obj,(MethodInfo *)0x0);
    pSVar2 = (pSVar1->fields).settingsReporter;
    if (pSVar2 != (SettingsReporter *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        func_?();
        cRam_? = '\x01';
      }
      ppDVar3 = &(pSVar2->fields).DeltaData;
      if ((pSVar2->fields).DeltaData == (Dictionary_2_System_Object_System_Object_ *)0x0) {
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)func_?();
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
        UIElements::StyleComplexSelector+PseudoStateData]::
        Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                  (this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        *ppDVar3 = (Dictionary_2_System_Object_System_Object_ *)this_00;
        func_?();
      }
      MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                (*ppDVar3,source,(MethodInfo *)0x0);
      pMVar4 = (pSVar2->fields).worldObject;
      if (pMVar4 != (MVWorldObject *)0x0) {
        MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
                  ((pMVar4->fields).data,source,(MethodInfo *)0x0);
        pAVar5 = (pSVar2->fields).OnValueChangedLocal;
        if (pAVar5 != (Action_1_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                       *)0x0) {
          (*(pAVar5->fields)._._.invoke_impl)();
        }
        return;
      }
    }
  }
  uVar6 = func_?(&stack0xffffffec);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* MVGameOptionDataObject(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject__ctor
               (MVGameOptionDataObject *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
                   );
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__MVGameOptionDataObject__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&
                    MethodInfo__MVGameOptionDataObject__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager
                   );
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                   );
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVWorldObjectClient);
  }
  MVWorldObjectClient::MVWorldObjectClient__ctor_2
            ((MVWorldObjectClient *)this,data,worldObjects,(MethodInfo *)0x0);
  message = MVWorldObject.dll::MV::WorldObject::HashtableFunctions::HashtableFunctions_PrettyString
                      ((this->fields)._._.data,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)message,(MethodInfo *)0x0);
  worldObject = 
  TypeInfo__System__Action<int,_System::Collections::Generic::Dictionary<System::Object,_System::Object>_>
  ;
  this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_00,(Object *)this,
             MethodInfo__MVGameOptionDataObject__PartialDataUpdate_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  this_01 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
  UnityAction_2_System_Int32_System_Int32___ctor
            (this_01,(Object *)this,
             MethodInfo__MVGameOptionDataObject__PartialDataRemove_int__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
             ,(MethodInfo *)0x0);
  pMVar1 = (MethodInfo *)
           func_?(
                          TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsReporter
                          );
  MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::Client::SettingsReporter::
  SettingsReporter__ctor
            ((SettingsReporter *)pMVar1,(MVWorldObject *)worldObject,
             (Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_ *)
             this_00,(Action_2_Int32_System_Collections_Generic_Dictionary_2_System_Object_System_Object_
                      *)this_01,(MethodInfo *)0x0);
  (worldObject->vtable).ToString.method = pMVar1;
  ppMVar2 = &(worldObject->vtable).ToString.method;
  ppMStack3 = ppMVar2;
  pMStack4 = pMVar1;
  func_?();
  pSStack5 =
       TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__Client__SettingsManager;
  pMVar1 = *ppMVar2;
  this_02 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?();
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_02,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)pMVar1,(MethodInfo *)0x0);
  (worldObject->vtable).Clone.methodPtr = (Il2CppMethodPointer)this_02;
  func_?();
  return;
}


/* GameBoosterSettingsManager get_GameBoosterSettingsManager() */

GameBoosterSettingsManager *
Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_get_GameBoosterSettingsManager
          (MVGameOptionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingsManager
                   );
    cRam_? = '\x01';
  }
  dictionary = (this->fields)._._.data;
  this_00 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameBoosterSettings__GameBoosterSettingsManager
                              );
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)dictionary,(MethodInfo *)0x0);
  return (GameBoosterSettingsManager *)this_00;
}


/* GameOptionSettingsManager get_GameOptionSettingsManager() */

GameOptionSettingsManager *
Assembly-CSharp.dll::MVGameOptionDataObject::MVGameOptionDataObject_get_GameOptionSettingsManager
          (MVGameOptionDataObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager
                   );
    cRam_? = '\x01';
  }
  dictionary = (this->fields)._._.data;
  this_00 = (SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__MV__WorldObject__KogamaSettings__SpecializedSettingsTypes__GameOptions__GameOptionSettingsManager
                              );
  System.dll::System::Collections::Generic::SortedList`2[TKey,TValue]+ValueList[Unity::IL2CPP::
  Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]
  ::
  SortedList_2_TKey_TValue_ValueList_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_00,(SortedList_2_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                      *)dictionary,(MethodInfo *)0x0);
  return (GameOptionSettingsManager *)this_00;
}

