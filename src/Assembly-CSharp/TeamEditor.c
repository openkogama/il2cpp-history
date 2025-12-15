
/* Void Destroy() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_Destroy(TeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar4 = *puVar3;
        LOCK();
        uVar5 = *puVar3;
        if (uVar4 == uVar5) {
          *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar4 != uVar5);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = (this->fields)._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar6 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar6->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar6 = (this->fields)._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar6,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar7 != (MVGameControllerBase *)0x0) &&
     (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
    pRVar9 = (pMVar8->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._.id;
    if (pRVar9 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar9->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar10 != 0) {
          pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar8 == (MVNetworkGame *)0x0) ||
             (pRVar9 = (pMVar8->fields).runtimeVariableNetworkManager,
             pRVar9 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar9,(this->fields)._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_Initialize(TeamEditor *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    dictionary = (pMVar3->fields).teamNames;
    this_02 = (MVTeam__Enum__Class *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object___ctor_4
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
               (IDictionary_2_System_Int32Enum_System_Object_ *)dictionary,
               (IEqualityComparer_1_System_Int32Enum_ *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
               ->klass->rgctx_data[8].method);
    if (this_02 != (MVTeam__Enum__Class *)0x0) {
      MStack_4 = MVTeam__Enum_Blue;
      uStack_5 = 0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&EStack_8 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      EStack_8.monitor = (MonitorData *)(ulonglong)*(uint *)&(this_02->_0).byval_arg.field_0xc;
      uStack_12 = 2;
      auStack_13._8_8_ = EStack_8.monitor;
      puStack_14 = (undefined *)0x0;
      pSStack_15 = (String *)0x0;
      uStack_16._0_4_ = 2;
      uStack_16._4_4_ = 0;
      uStack_17 = 0;
      puStack_18 = auStack_13;
      EStack_8.klass = (Enum__Class *)this_02;
      auStack_13._0_8_ = this_02;
      while( true ) {
        bVar19 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           auStack_13,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                          );
        pSVar20 = pSStack_15;
        if (bVar19 == 0) {
          return;
        }
        team = (MVTeam__Enum)puStack_14;
        puStack_21 = puStack_14;
        pSStack_22 = pSStack_15;
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(this->fields)._._._.data;
        EStack_8.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
        EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
        MStack_4 = team;
        pSVar23 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
        if (this_00 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        iVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this_00,(Object *)pSVar23,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar24) break;
        team = (MVTeam__Enum)puStack_21;
code_?:
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        pMVar3 = (pMVar2->fields).teamManager;
        if (pMVar3 == (MVTeamManager *)0x0) goto code_?;
        MVTeamManager::MVTeamManager_UpdateTeamName(pMVar3,team,pSVar20,(MethodInfo *)0x0);
      }
      this_01 = (this->fields)._._._.data;
      EStack_8.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
      EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
      MStack_4 = team;
      pSVar20 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pSVar23 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)pSVar20,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pSVar20 = (String *)0x0;
        if (pSVar23 != (String *)0x0) {
          if (pSVar23->klass == pSRam0000000182dbdde0) {
            pSVar20 = pSVar23;
          }
          if (pSVar20 == (String *)0x0) {
            FUN_?(pSVar23);
            goto code_?;
          }
        }
        goto code_?;
      }
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar25 = (code *)swi(3);
      (*pcVar25)();
      return;
    }
  }
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_InitializeInventory
               (TeamEditor *this,MethodInfo *method)

{
  cVar1 = (*(this->klass->vtable).get_HasInputConnector.methodPtr)();
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.inputConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasObjectConnector.methodPtr)(this);
  if (cVar1 != '\0') {
    pGVar2 = (this->fields)._._.objectConnectorObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  cVar1 = (*(this->klass->vtable).get_HasOutputConnector.methodPtr)(this);
  if (cVar1 == '\0') {
    return;
  }
  pGVar2 = (this->fields)._._.outputConnectorObject;
  if (pGVar2 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                    ,0,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pGVar2 == (GameObject *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pvVar4 = (pGVar2->fields)._.m_CachedPtr;
    if (pvVar4 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar5 = func_?(&UNK_?);
      FUN_?(uVar5,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)(pvVar4,0);
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_OnDataUpdate(TeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    dictionary = (pMVar3->fields).teamNames;
    this_02 = (MVTeam__Enum__Class *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object___ctor_4
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
               (IDictionary_2_System_Int32Enum_System_Object_ *)dictionary,
               (IEqualityComparer_1_System_Int32Enum_ *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
               ->klass->rgctx_data[8].method);
    if (this_02 != (MVTeam__Enum__Class *)0x0) {
      MStack_4 = MVTeam__Enum_Blue;
      uStack_5 = 0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&EStack_8 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      EStack_8.monitor = (MonitorData *)(ulonglong)*(uint *)&(this_02->_0).byval_arg.field_0xc;
      uStack_12 = 2;
      auStack_13._8_8_ = EStack_8.monitor;
      KStack_14.key = 0;
      KStack_14._4_4_ = 0;
      KStack_14.value = (Object *)0x0;
      uStack_15._0_4_ = 2;
      uStack_15._4_4_ = 0;
      uStack_16 = 0;
      puStack_17 = auStack_13;
      EStack_8.klass = (Enum__Class *)this_02;
      auStack_13._0_8_ = this_02;
      while( true ) {
        bVar18 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           auStack_13,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                          );
        pSVar19 = (String *)KStack_14.value;
        if (bVar18 == 0) {
          return;
        }
        team = KStack_14.key;
        aKStack_20[0].key = KStack_14.key;
        aKStack_20[0]._4_4_ = KStack_14._4_4_;
        aKStack_20[0].value = KStack_14.value;
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(this->fields)._._._.data;
        EStack_8.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
        EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
        MStack_4 = team;
        pSVar21 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
        if (this_00 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        iVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this_00,(Object *)pSVar21,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar22) break;
        team = aKStack_20[0].key;
code_?:
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        pMVar3 = (pMVar2->fields).teamManager;
        if (pMVar3 == (MVTeamManager *)0x0) goto code_?;
        MVTeamManager::MVTeamManager_UpdateTeamName(pMVar3,team,pSVar19,(MethodInfo *)0x0);
      }
      this_01 = (this->fields)._._._.data;
      EStack_8.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
      EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
      MStack_4 = team;
      pSVar19 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pSVar21 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)pSVar19,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pSVar19 = (String *)0x0;
        if (pSVar21 != (String *)0x0) {
          if (pSVar21->klass == pSRam0000000182dbdde0) {
            pSVar19 = pSVar21;
          }
          if (pSVar19 == (String *)0x0) {
            FUN_?(pSVar21);
            goto code_?;
          }
        }
        goto code_?;
      }
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void UpdateTeamNamesFromData() */

void Assembly-CSharp.dll::TeamEditor::TeamEditor_UpdateTeamNamesFromData
               (TeamEditor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<MV::WorldObject::MVTeam,_System::String>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    dictionary = (pMVar3->fields).teamNames;
    this_02 = (MVTeam__Enum__Class *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object___ctor_4
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,
               (IDictionary_2_System_Int32Enum_System_Object_ *)dictionary,
               (IEqualityComparer_1_System_Int32Enum_ *)0x0,
               MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::String>__Dictionary_System__Collections__Generic__IDictionary<MV::WorldObject::MVTeam,_System::String>_
               ->klass->rgctx_data[8].method);
    if (this_02 != (MVTeam__Enum__Class *)0x0) {
      MStack_4 = MVTeam__Enum_Blue;
      uStack_5 = 0;
      uStack_6 = 0;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&EStack_8 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      EStack_8.monitor = (MonitorData *)(ulonglong)*(uint *)&(this_02->_0).byval_arg.field_0xc;
      uStack_12 = 2;
      auStack_13._8_8_ = EStack_8.monitor;
      KStack_14.key = 0;
      KStack_14._4_4_ = 0;
      KStack_14.value = (Object *)0x0;
      uStack_15._0_4_ = 2;
      uStack_15._4_4_ = 0;
      uStack_16 = 0;
      puStack_17 = auStack_13;
      EStack_8.klass = (Enum__Class *)this_02;
      auStack_13._0_8_ = this_02;
      while( true ) {
        bVar18 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                           auStack_13,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<MV::WorldObject::MVTeam,_System::String>__MoveNext__
                          );
        pSVar19 = (String *)KStack_14.value;
        if (bVar18 == 0) {
          return;
        }
        team = KStack_14.key;
        aKStack_20[0].key = KStack_14.key;
        aKStack_20[0]._4_4_ = KStack_14._4_4_;
        aKStack_20[0].value = KStack_14.value;
        this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)(this->fields)._._._.data;
        EStack_8.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
        EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
        MStack_4 = team;
        pSVar21 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
        if (this_00 ==
            (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)0x0) goto code_?;
        iVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine
                ::UIElements::StyleComplexSelector+PseudoStateData]::
                Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                          (this_00,(Object *)pSVar21,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                           ->klass->rgctx_data[0x21].method);
        if (-1 < iVar22) break;
        team = aKStack_20[0].key;
code_?:
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
        pMVar3 = (pMVar2->fields).teamManager;
        if (pMVar3 == (MVTeamManager *)0x0) goto code_?;
        MVTeamManager::MVTeamManager_UpdateTeamName(pMVar3,team,pSVar19,(MethodInfo *)0x0);
      }
      this_01 = (this->fields)._._._.data;
      EStack_8.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
      EStack_8.monitor = (MonitorData *)0xffffffffffffffff;
      MStack_4 = team;
      pSVar19 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_8,(MethodInfo *)0x0);
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pSVar21 = (String *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (this_01,(Object *)pSVar19,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pSVar19 = (String *)0x0;
        if (pSVar21 != (String *)0x0) {
          if (pSVar21->klass == pSRam0000000182dbdde0) {
            pSVar19 = pSVar21;
          }
          if (pSVar19 == (String *)0x0) {
            FUN_?(pSVar21);
            goto code_?;
          }
        }
        goto code_?;
      }
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
      pcVar23 = (code *)swi(3);
      (*pcVar23)();
      return;
    }
  }
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* TeamEditor(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::TeamEditor::TeamEditor__ctor
               (TeamEditor *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar1->fields).teamEditorPrefab,worldObjects,
               (MethodInfo *)0x0);
    (this->fields)._._.interactionFlags =
         (this->fields)._._.interactionFlags & 0xffffffffffffdfffU | 0x8000;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::TeamEditor::TeamEditor_get_DocumentationType
          (TeamEditor *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_TeamEditor;
}

