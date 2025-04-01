
/* Single AddDamageToCube(Single, IntVector) */

float Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
      RuntimeEventManager_AccumulatedCubeDamages_AddDamageToCube
                (RuntimeEventManager_AccumulatedCubeDamages *this,float damage,IntVector position,
                MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage);
    func_?(0xd094);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                   );
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).accumulatedCubeDamages;
  if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                 *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
            IntVector,System::Object]::
            Dictionary_2_MV_WorldObject_IntVector_System_Object__ContainsKey
                      ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,position,
                       MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__ContainsKey_MV__WorldObject__IntVector_
                      );
    if (bVar2 == 0) {
      pDVar1 = (this->fields).accumulatedCubeDamages;
      pOVar3 = (Object *)
               func_?(
                              TypeInfo__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage
                              );
      pOVar4 = (Object__Class *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      pOVar3[1].klass = pOVar4;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (pOVar3,ExceptionArgument__Enum_obj,in_stack_5);
      if (pDVar1 == (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                     *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
      Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Add
                ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,position,pOVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Add_MV__WorldObject__IntVector__RuntimeEventManager_AccumulatedCubeDamages__AccumulatedCubeDamage_
                );
    }
    pDVar1 = (this->fields).accumulatedCubeDamages;
    if (pDVar1 != (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
                   *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
               IntVector,System::Object]::
               Dictionary_2_MV_WorldObject_IntVector_System_Object__get_Item
                         ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)pDVar1,position,
                          MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Item_MV__WorldObject__IntVector_
                         );
      if (pOVar3 != (Object *)0x0) {
        pOVar4 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pOVar3[1].klass = pOVar4;
        pMVar6 = (MonitorData *)((float)pOVar3[1].monitor + damage);
        pOVar3[1].monitor = pMVar6;
        return (float)pMVar6;
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* Void Clear() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages_Clear
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).accumulatedCubeDamages;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Clear__
              );
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages_UpdateControllerUpdate
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff78;
  puVar5 = &stack0xffffff78;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Remove_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  this_02 = (List_1_MV_WorldObject_IntVector_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>
                           );
  pLStack_6 = this_02;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_02,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).accumulatedCubeDamages;
  pLStack_7 = this_02;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    pDVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                         *)auStack_9,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__GetEnumerator__
                       );
    uStack_10 = 0;
    iVar11 = (pDVar8->_current).key.sheetInstanceID;
    iVar12 = (int16_t)iVar11;
    iVar13 = (int16_t)((uint)iVar11 >> 0x10);
    uVar14 = *(undefined8 *)&(pDVar8->_current).key.index;
    pMVar15 = (MethodInfo *)uVar14;
    uStack_1 = 1;
    pOVar16 = (Object *)((ulonglong)uVar14 >> 0x20);
    pOStack_17 = (Object *)&stack0xffffff84;
    while( true ) {
      bVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[MV::
              WorldObject::IntVector,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_MV_WorldObject_IntVector_System_Object_
                          *)&stack0xffffff84,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__MoveNext__
                        );
      if (bVar18 == 0) break;
      auStack_9._18_2_ = iVar13;
      auStack_9._16_2_ = iVar12;
      unique0x100002fe = (Object *)pMVar15;
      pOStack_19 = pOVar16;
      if (pOVar16 == (Object *)0x0) goto code_?;
      iVar12 = 0;
      iVar13 = 0;
      pOVar20 = pOVar16;
      fStack_21 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      this_02 = pLStack_6;
      pOVar22 = pOVar16 + 1;
      pOVar16 = pOVar20;
      if (_UNK_? < fStack_21 - (float)pOVar22->klass) {
        if (pLStack_6 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
        iVar12 = iStack_23;
        pMVar15 = 
        MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
        ;
        func_?();
        pOVar16 = pOVar20;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff84,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dispose__
               ,pMVar15);
    uStack_1 = 0xffffffff;
    if (this_02 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
      pLVar24 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
               List_1_MV_WorldObject_IntVector__GetEnumerator
                         ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)(auStack_9 + 8),this_02,
                          MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                         );
      uStack_10 = 0;
      pMVar15 = *(MethodInfo **)&(pLVar24->_current).z;
      uStack_1 = 4;
      pOStack_17 = (Object *)&stack0xffffffa0;
      while( true ) {
        bVar18 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[MV::WorldObject::
                IntVector]::List_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                          ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa0,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                          );
        if (bVar18 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&stack0xffffffa0,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                     ,pMVar15);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_01 = (this->fields).accumulatedCubeDamages;
        if (this_01 ==
            (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
             *)0x0) break;
        key.z = (int16_t)pMVar15;
        key._0_4_ = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Remove_MV__WorldObject__IntVector_
        ;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::IntVector,System::
        Object]::Dictionary_2_MV_WorldObject_IntVector_System_Object__Remove
                  ((Dictionary_2_MV_WorldObject_IntVector_System_Object_ *)this_01,key,
                   MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Remove_MV__WorldObject__IntVector_
                  );
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* RuntimeEventManager+AccumulatedCubeDamages() */

void Assembly-CSharp.dll::RuntimeEventManager+AccumulatedCubeDamages::
     RuntimeEventManager_AccumulatedCubeDamages__ctor
               (RuntimeEventManager_AccumulatedCubeDamages *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                   );
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>
                           );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[MV::WorldObject::
  IntVector,ChunkInstances+ChunkInstanceVariables]::
  Dictionary_2_MV_WorldObject_IntVector_ChunkInstances_ChunkInstanceVariables___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::IntVector,_RuntimeEventManager_AccumulatedCubeDamages::AccumulatedCubeDamage>__Dictionary__
            );
  method_00 = (MethodInfo *)&this->fields;
  (this->fields).accumulatedCubeDamages =
       (Dictionary_2_MV_WorldObject_IntVector_RuntimeEventManager_AccumulatedCubeDamages_AccumulatedCubeDamage_
        *)this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}

