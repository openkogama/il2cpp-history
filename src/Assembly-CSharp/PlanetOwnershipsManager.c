
/* Void Awake() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_Awake
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
    func_?(&MethodInfo__PlanetOwnershipsManager___Awake_b__15_0__);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlanetOwnershipsManager);
    cRam_? = '\x01';
  }
  x = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField = this;
    func_?(TypeInfo__PlanetOwnershipsManager->static_fields,&stack0xfffffffc,&UNK_?,
                    TypeInfo__PlanetOwnershipsManager->static_fields,this);
    return;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  if (pcRam_? == (code *)0x0) {
    pcRam_? = (code *)func_?();
  }
  (*pcRam_?)();
  return;
}


/* Void JSON_Unstripper() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_JSON_Unstripper
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
    func_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry);
    cRam_? = '\x01';
  }
  this_00 = (PlanetOwnershipsData *)
            func_?(TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
  MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
  PlanetOwnershipsData__ctor(this_00,(MethodInfo *)0x0);
  this_01 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
            func_?(TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor(this_01,(MethodInfo *)0x0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_OnDestroy
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>)
    ;
    func_?(&
                    MethodInfo__PlanetOwnershipsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
                   );
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                 *)func_?(
                                  TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                                  );
      DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
      DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                (this_00,(Object *)this,
                 MethodInfo__PlanetOwnershipsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
                 ,(MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) {
        func_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      MVNetworkGame::MVNetworkGame_remove_ReceivedPlanetOwnershipData
                (pMVar2,(Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)this_00,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


/* Void RecievedPlanetOwnershipsDataCallback(PlanetOwnershipsData) */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_RecievedPlanetOwnershipsDataCallback
               (PlanetOwnershipsManager *this,PlanetOwnershipsData *data,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Add_int__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dictionary_int_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Count__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  (this->fields)._RecievedPlanetOwnershipData_k__BackingField = 1;
  if ((data != (PlanetOwnershipsData *)0x0) &&
     (pLVar6 = (data->fields).planetOwnerships,
     pLVar6 != (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0)) {
    capacity = (pLVar6->fields)._size;
    pDVar7 = (Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)
             func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                            );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object___ctor_3
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,capacity,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dictionary_int_
              );
    (this->fields)._PlanetOwnershipsEntries_k__BackingField = pDVar7;
    ppDVar8 = &(this->fields)._PlanetOwnershipsEntries_k__BackingField;
    func_?(ppDVar8,pDVar7);
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (data->fields).planetOwnerships;
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_10,this_00,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__GetEnumerator__
                         );
      LStack_11._list = (List_1_System_Object_ *)pLVar9->_list;
      LStack_11._index = pLVar9->_index;
      LStack_11._version = pLVar9->_version;
      LStack_11._current = *(Object **)&pLVar9->_current;
      LStack_10._version = 0;
      uStack_1 = 1;
      LStack_10._current = (RegexCharClass_SingleRange)&LStack_11;
      while( true ) {
        bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_11,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                          );
        if (bVar12 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_11,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dispose__
                     ,unaff_EDI);
          uStack_1 = 0xffffffff;
          pAVar13 = (this->fields).OnReceivedPlanetOwnershipData;
          if (pAVar13 != (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                         *)0x0) {
            (*(pAVar13->fields)._._.invoke_impl)((pAVar13->fields)._._.method_code);
          }
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pDVar7 = *ppDVar8;
        if (((RegexCharClass_SingleRange)LStack_11._current == (RegexCharClass_SingleRange)0x0) ||
           (pDVar7 == (Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                       *)0x0)) break;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar7,
                   *(int32_t *)((int)LStack_11._current + 8),LStack_11._current,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Add_int__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry_
                  );
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void <Awake>b__15_0() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager__Awake_b__15_0
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>)
    ;
    func_?(&
                    MethodInfo__PlanetOwnershipsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
                   );
    cRam_? = '\x01';
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_CharacterEditor) {
    return;
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
             *)func_?(
                              TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                              );
  DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
  DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (this_01,(Object *)this,
             MethodInfo__PlanetOwnershipsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
             ,(MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    MVNetworkGame::MVNetworkGame_add_ReceivedPlanetOwnershipData
              (this_00,(Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)this_01,
               (MethodInfo *)0x0);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
    if ((pMVar2 != (MVLocalPlayer *)0x0) && (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_GetActorsPlanetOwnerships
                (this_02,(pMVar2->fields)._._ProfileID_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void 
   add_OnReceivedPlanetOwnershipData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,MV.WorldObject.OwnershipData.PlanetOwnershipsEntry]])
    */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_add_OnReceivedPlanetOwnershipData
               (PlanetOwnershipsManager *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                   );
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReceivedPlanetOwnershipData;
  a = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
    ;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
              *)func_?(ppAVar1,iVar4,a);
    bVar7 = pAVar6 != a;
    a = pAVar6;
  } while (bVar7);
  return;
}


/* PlanetOwnershipsManager get_Instance() */

PlanetOwnershipsManager *
Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlanetOwnershipsManager);
    cRam_? = '\x01';
  }
  return TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
}


/* Void 
   remove_OnReceivedPlanetOwnershipData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,MV.WorldObject.OwnershipData.PlanetOwnershipsEntry]])
    */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_remove_OnReceivedPlanetOwnershipData
               (PlanetOwnershipsManager *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                   );
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReceivedPlanetOwnershipData;
  source = *ppAVar1;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
    ;
    iVar4 = 0;
    if (pDVar2 != (Delegate *)0x0) {
      iVar4 = func_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                             );
      if (iVar4 == 0) {
        func_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pAVar6 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
              *)func_?(ppAVar1,iVar4,source);
    bVar7 = pAVar6 != source;
    source = pAVar6;
  } while (bVar7);
  return;
}


/* Void set_Instance(PlanetOwnershipsManager) */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_set_Instance
               (PlanetOwnershipsManager *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PlanetOwnershipsManager);
    cRam_? = '\x01';
  }
  TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField = value;
  func_?(TypeInfo__PlanetOwnershipsManager->static_fields,value);
  return;
}

