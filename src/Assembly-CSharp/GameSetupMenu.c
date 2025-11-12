
/* Void OnDestroy() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnDestroy
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
             FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (pAVar1 == (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
                  0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    lVar5 = FUN_?(pDVar2,
                          TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnInactiveTierButtonPressed() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnInactiveTierButtonPressed
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu____c__DisplayClass15_0___OnInactiveTierButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupMenu____c__DisplayClass15_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GameSetupMenu____c__DisplayClass15_0);
  pGVar1 = (this->fields).crystalPopupPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar2 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = iRam_? != 0;
  object[1].klass = pOVar2;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GameSetupMenu____c__DisplayClass15_0___OnInactiveTierButtonPressed_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar5 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar5) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar5) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar5 = uVar5 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnRecieveEarningsReport(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_OnRecieveEarningsReport
               (GameSetupMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_03 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                      ((Delegate *)pAVar1,(Delegate *)this_03,(MethodInfo *)0x0);
  pAVar3 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
              FUN_?(pDVar2,
                            TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
    if (pAVar1 ==
        (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar1;
    pAVar3 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    lVar5 = FUN_?(pDVar2,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                  ,projectEarningsReport,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
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
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((((pMVar10 != (MVGameControllerBase *)0x0) &&
        (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar12 != (MVLocalPlayer *)0x0 && (projectEarningsReport != (ProjectEarningsReport *)0x0))))
     && (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                   (projectEarningsReport->fields).projectMemberEarningsReports,
        this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    iVar13 = (pMVar12->fields)._._ProfileID_k__BackingField;
    iVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
             Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                       (this_01,iVar13,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                        ->klass->rgctx_data[0x21].method);
    pTVar15 = (this->fields).earningsAmountText;
    if (iVar14 < 0) {
      if (pTVar15 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pTVar15->klass->vtable).set_text.methodPtr)
                  (pTVar15,StringLiteral__0,(pTVar15->klass->vtable).set_text.method);
        return;
      }
    }
    else {
      this_02 = (projectEarningsReport->fields).projectMemberEarningsReports;
      if (((this_02 !=
            (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)0x0) &&
          (pOVar16 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar13,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                               ), pOVar16 != (Object *)0x0)) &&
         (pOVar16[1].klass != (Object__Class *)0x0)) {
        iVar13 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                 EarningsReport::EarningsReport_GetTotalEarningsGold
                           ((EarningsReport *)pOVar16[1].klass,(MethodInfo *)0x0);
        pSVar17 = StringLiteral_N0;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Number);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pSVar17 == (String *)0x0) {
          puVar18 = (uint16_t *)0x0;
          iVar14 = 0;
        }
        else {
          aRStack_19[0]._pointer._value = &(pSVar17->fields)._firstChar;
          aRStack_19[0]._12_4_ = 0;
          iVar14 = (pSVar17->fields)._stringLength;
          aRStack_19[0]._length = iVar14;
          puVar18 = aRStack_19[0]._pointer._value;
        }
        if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
          FUN_?();
        }
        aRStack_19[0]._12_4_ = 0;
        aRStack_19[0]._pointer._value = puVar18;
        aRStack_19[0]._length = iVar14;
        pSVar17 = mscorlib.dll::System::Number::Number_FormatInt32
                            (iVar13,aRStack_19,(IFormatProvider *)0x0,(MethodInfo *)0x0);
        if ((pSVar17 != (String *)0x0) &&
           (pSVar17 = mscorlib.dll::System::String::String_Replace_1
                                (pSVar17,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
           pTVar15 != (Text *)0x0)) {
          UNRECOVERED_JUMPTABLE = (pTVar15->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)
                    (pTVar15,pSVar17,(pTVar15->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ShowBoostEditMenu() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowBoostEditMenu
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  BoostEditMenu_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenu>_BoostEditMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu____c__DisplayClass14_0___ShowBoostEditMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupMenu____c__DisplayClass14_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GameSetupMenu____c__DisplayClass14_0);
  original = (this->fields).boosterEditMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      BoostEditMenu_MethodInfo__UnityEngine__Object__Instantiate<BoostEditMenu>_BoostEditMenu_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GameSetupMenu____c__DisplayClass14_0___ShowBoostEditMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowGameEarnings() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowGameEarnings
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameEarningsMenu_MethodInfo__UnityEngine__Object__Instantiate<GameEarningsMenu>_GameEarningsMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu____c__DisplayClass16_0___ShowGameEarnings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupMenu____c__DisplayClass16_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GameSetupMenu____c__DisplayClass16_0);
  original = (this->fields).earningsMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GameEarningsMenu_MethodInfo__UnityEngine__Object__Instantiate<GameEarningsMenu>_GameEarningsMenu_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GameSetupMenu____c__DisplayClass16_0___ShowGameEarnings_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowGamePassesShopDetails() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowGamePassesShopDetails
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePassesShopDetails_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShopDetails>_GamePassesShopDetails_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu____c__DisplayClass13_0___ShowGamePassesShopDetails_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupMenu____c__DisplayClass13_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GameSetupMenu____c__DisplayClass13_0);
  original = (this->fields).gamePassesShopDetailsPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GamePassesShopDetails_MethodInfo__UnityEngine__Object__Instantiate<GamePassesShopDetails>_GamePassesShopDetails_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GameSetupMenu____c__DisplayClass13_0___ShowGamePassesShopDetails_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowMiscOptions() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_ShowMiscOptions
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  GameSetupOptions_MethodInfo__UnityEngine__Object__Instantiate<GameSetupOptions>_GameSetupOptions_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu____c__DisplayClass17_0___ShowMiscOptions_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameSetupMenu____c__DisplayClass17_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__GameSetupMenu____c__DisplayClass17_0);
  original = (this->fields).optionsMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      GameSetupOptions_MethodInfo__UnityEngine__Object__Instantiate<GameSetupOptions>_GameSetupOptions_
                     );
  if (object == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = iRam_? != 0;
  object[1].klass = pOVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)(object + 1) >> 0xc);
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
  pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (this_01,object,
             MethodInfo__GameSetupMenu____c__DisplayClass17_0___ShowMiscOptions_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar9 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    if ((pMVar9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar9);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar8,(IList_1_UnityEngine_Transform_ *)
                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList,(MethodInfo *)0x0);
  pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar10 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar11 = (longlong)(pLVar10->fields)._size;
    uVar4 = 0;
    if (0 < lVar11) {
      lVar12 = 0;
      lVar13 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar10 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar10 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar10->fields)._size <= uVar4) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar14 = (pLVar10->fields)._items;
        if (pTVar14 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar14->max_length <= uVar4) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar14->vector + lVar13 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            (this_00,(MethodInfo *)0x0);
        bVar15 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar8,(BaseEventData *)0x0,this_01,
                           (pMVar9->field7_0x38).rgctx_data[1].method);
        if (bVar15 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar4 = uVar4 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 8;
      } while (lVar12 < lVar11);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_Start(GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x100U) == 0) {
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                       ((MethodInfo *)0x0);
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar2,(MethodInfo *)0x0);
    if (bVar4 != bVar1) {
      pGVar2 = (this->fields).activeGameTierButton;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar1,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields).inActiveGameTierButton;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar2,(MethodInfo *)0x0);
    if (bVar4 != bVar1) goto code_?;
    pGVar2 = (this->fields).inActiveGameTierButton;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    bVar1 = bVar1 ^ 1;
  }
  else {
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar2,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pGVar2 = (this->fields).activeGameTierButton;
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,0,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields).inActiveGameTierButton;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar2,(MethodInfo *)0x0);
    if (bVar1 == 0) goto code_?;
    pGVar2 = (this->fields).inActiveGameTierButton;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    bVar1 = 0;
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,bVar1,(MethodInfo *)0x0);
code_?:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesProjectEarningsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar5 = TypeInfo__GamePassesProjectEarningsManager->static_fields->projectEarningReport;
  if (pPVar5 != (ProjectEarningsReport *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                    ,pPVar5,0);
      LOCK();
      UNLOCK();
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_N0);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      FUN_?(&::StringLiteral__);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral__0);
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
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar7->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
        ((pMVar8 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
         pMVar8 != (MVLocalPlayer *)0x0 && (pPVar5 != (ProjectEarningsReport *)0x0)))) &&
       (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                  (pPVar5->fields).projectMemberEarningsReports,
       this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      iVar9 = (pMVar8->fields)._._ProfileID_k__BackingField;
      iVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
               Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                         (this_01,iVar9,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                          ->klass->rgctx_data[0x21].method);
      pTVar11 = (this->fields).earningsAmountText;
      if (iVar10 < 0) {
        if (pTVar11 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pTVar11->klass->vtable).set_text.methodPtr)
                    (pTVar11,StringLiteral__0,(pTVar11->klass->vtable).set_text.method);
          return;
        }
      }
      else {
        this_02 = (pPVar5->fields).projectMemberEarningsReports;
        if (((this_02 !=
              (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
               *)0x0) &&
            (pOVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar9,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                                 ), pOVar12 != (Object *)0x0)) &&
           (pOVar12[1].klass != (Object__Class *)0x0)) {
          iVar9 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                   EarningsReport::EarningsReport_GetTotalEarningsGold
                             ((EarningsReport *)pOVar12[1].klass,(MethodInfo *)0x0);
          pSVar13 = StringLiteral_N0;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Number);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pSVar13 == (String *)0x0) {
            puVar14 = (uint16_t *)0x0;
            iVar10 = 0;
          }
          else {
            aRStack_15[0]._pointer._value = &(pSVar13->fields)._firstChar;
            aRStack_15[0]._12_4_ = 0;
            iVar10 = (pSVar13->fields)._stringLength;
            aRStack_15[0]._length = iVar10;
            puVar14 = aRStack_15[0]._pointer._value;
          }
          if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
            FUN_?();
          }
          aRStack_15[0]._12_4_ = 0;
          aRStack_15[0]._pointer._value = puVar14;
          aRStack_15[0]._length = iVar10;
          pSVar13 = mscorlib.dll::System::Number::Number_FormatInt32
                              (iVar9,aRStack_15,(IFormatProvider *)0x0,(MethodInfo *)0x0);
          if ((pSVar13 != (String *)0x0) &&
             (pSVar13 = mscorlib.dll::System::String::String_Replace_1
                                  (pSVar13,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0),
             pTVar11 != (Text *)0x0)) {
            UNRECOVERED_JUMPTABLE = (pTVar11->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)
                      (pTVar11,pSVar13,(pTVar11->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE)
            ;
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar16 = TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated;
  this_03 = (UnityAction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_03,(Object *)this,
             MethodInfo__GameSetupMenu__OnRecieveEarningsReport_MV__WorldObject__GamePassSystem__GamePassEarnings__ProjectEarningsReport_
             ,(MethodInfo *)0x0);
  pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar16,(Delegate *)this_03,(MethodInfo *)0x0);
  pAVar18 = 
  TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
  ;
  if (pDVar17 == (Delegate *)0x0) {
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated =
         (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0;
  }
  else {
    pAVar16 = (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)
              FUN_?(pDVar17,
                            TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                           );
    if (pAVar16 ==
        (Action_1_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectEarningsReport_ *)0x0) {
      FUN_?(pDVar17,pAVar18);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesProjectEarningsManager->static_fields->OnEarningsDataUpdated = pAVar16;
    pAVar18 = 
    TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
    ;
    lVar19 = FUN_?(pDVar17,
                           TypeInfo__System__Action<MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectEarningsReport>
                          );
    if (lVar19 == 0) {
      FUN_?(pDVar17,pAVar18);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar20 = (uint)((ulonglong)TypeInfo__GamePassesProjectEarningsManager->static_fields >> 0xc);
    puVar21 = (ulonglong *)((ulonglong)((uVar20 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar22 = *puVar21;
      LOCK();
      uVar23 = *puVar21;
      if (uVar22 == uVar23) {
        *puVar21 = uVar22 | 1L << (uVar20 & 0x3f);
      }
      UNLOCK();
    } while (uVar22 != uVar23);
  }
  return;
}


/* Void UpdateEarningText(ProjectEarningsReport) */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_UpdateEarningText
               (GameSetupMenu *this,ProjectEarningsReport *projectEarningsReport,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_N0);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0);
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
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (((pMVar3 != (MVLocalPlayer *)0x0) && (projectEarningsReport != (ProjectEarningsReport *)0x0)
        ) && (this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                        (projectEarningsReport->fields).projectMemberEarningsReports,
             this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      iVar4 = (pMVar3->fields)._._ProfileID_k__BackingField;
      iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (this_01,iVar4,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__ContainsKey_int_
                         ->klass->rgctx_data[0x21].method);
      pTVar6 = (this->fields).earningsAmountText;
      if (iVar5 < 0) {
        if (pTVar6 != (Text *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pTVar6->klass->vtable).set_text.methodPtr)
                    (pTVar6,StringLiteral__0,(pTVar6->klass->vtable).set_text.method);
          return;
        }
      }
      else {
        this_02 = (projectEarningsReport->fields).projectMemberEarningsReports;
        if (this_02 !=
            (Dictionary_2_System_Int32_MV_WorldObject_GamePassSystem_GamePassEarnings_ProjectMemberEarningsReport_
             *)0x0) {
          pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_02,iVar4,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::GamePassSystem::GamePassEarnings::ProjectMemberEarningsReport>__get_Item_int_
                             );
          if ((pOVar7 != (Object *)0x0) && (pOVar7[1].klass != (Object__Class *)0x0)) {
            iVar4 = MVWorldObject.dll::MV::WorldObject::GamePassSystem::GamePassEarnings::
                    EarningsReport::EarningsReport_GetTotalEarningsGold
                              ((EarningsReport *)pOVar7[1].klass,(MethodInfo *)0x0);
            pSVar8 = StringLiteral_N0;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__System__Number);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pSVar8 == (String *)0x0) {
              puVar9 = (uint16_t *)0x0;
              iVar5 = 0;
            }
            else {
              aRStack_10[0]._pointer._value = &(pSVar8->fields)._firstChar;
              aRStack_10[0]._12_4_ = 0;
              iVar5 = (pSVar8->fields)._stringLength;
              aRStack_10[0]._length = iVar5;
              puVar9 = aRStack_10[0]._pointer._value;
            }
            if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
              FUN_?();
            }
            aRStack_10[0]._12_4_ = 0;
            aRStack_10[0]._pointer._value = puVar9;
            aRStack_10[0]._length = iVar5;
            pSVar8 = mscorlib.dll::System::Number::Number_FormatInt32
                                (iVar4,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
            if (pSVar8 != (String *)0x0) {
              pSVar8 = mscorlib.dll::System::String::String_Replace_1
                                  (pSVar8,::StringLiteral__,::StringLiteral__,(MethodInfo *)0x0);
              if (pTVar6 != (Text *)0x0) {
                UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*UNRECOVERED_JUMPTABLE)
                          (pTVar6,pSVar8,(pTVar6->klass->vtable).set_text.method,
                           UNRECOVERED_JUMPTABLE);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateTierButtonVisibility() */

void Assembly-CSharp.dll::GameSetupMenu::GameSetupMenu_UpdateTierButtonVisibility
               (GameSetupMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVClientSettings->static_fields->flags & 0x100U) == 0) {
    bVar1 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                      ((MethodInfo *)0x0);
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 != bVar1) {
        pGVar2 = (this->fields).activeGameTierButton;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,bVar1,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields).inActiveGameTierButton;
      if (pGVar2 != (GameObject *)0x0) {
        bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar3 == bVar1) {
          pGVar2 = (this->fields).inActiveGameTierButton;
          if (pGVar2 == (GameObject *)0x0) goto code_?;
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar2,bVar1 ^ 1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  else {
    pGVar2 = (this->fields).activeGameTierButton;
    if (pGVar2 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        pGVar2 = (this->fields).activeGameTierButton;
        if (pGVar2 == (GameObject *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
      }
      pGVar2 = (this->fields).inActiveGameTierButton;
      if (pGVar2 != (GameObject *)0x0) {
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (pGVar2,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        pGVar2 = (this->fields).inActiveGameTierButton;
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
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pvVar5 = (pGVar2->fields)._.m_CachedPtr;
          if (pvVar5 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar5,0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

