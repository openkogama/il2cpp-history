
/* Boolean CanGoToNextMenu() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanGoToNextMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  bVar2 = false;
  bVar3 = 0;
  pLVar4 = (this->fields).menuOrder;
  while (pLVar4 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    if ((pLVar4->fields)._size <= iVar1) {
      return bVar3;
    }
    if (bVar2) {
      bVar3 = 1;
    }
    pLVar4 = (this->fields).menuOrder;
    if (pLVar4 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
    iVar5 = FUN_?(pLVar4,iVar1);
    iVar6 = (*(this->klass->vtable).__unknown.methodPtr)
                      (this,(this->klass->vtable).__unknown.method);
    if (iVar5 == iVar6) {
      bVar2 = true;
    }
    iVar1 = iVar1 + 1;
    pLVar4 = (this->fields).menuOrder;
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}


/* Boolean CanShowBreifing() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowBreifing
               (LobbyFlowMenu *this,MethodInfo *method)

{
  aWStackX_18[0] = WinningConditionType__Enum_Collectible;
  bVar1 = WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
                    (aWStackX_18,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean CanShowSpawnRoleSelect() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowSpawnRoleSelect
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
    pMVar3 = (pMVar2->fields).teamManager;
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
    if ((extraout_RAX != 0) && (pMVar3 != (MVTeamManager *)0x0)) {
      team = *(MVTeam__Enum *)(extraout_RAX + 0x84);
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                     );
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
        pLVar4 = MVTeamManager::MVTeamManager_GetSpawnPointsForTeam(pMVar3,team,(MethodInfo *)0x0);
        uVar5 = 0;
        if (pLVar4 != (List_1_MVWorldObjectClient_ *)0x0) {
          uVar6 = (pLVar4->fields)._size;
          lVar7 = 0x20;
          while( true ) {
            if ((int)uVar6 <= (int)uVar5) {
              return 0;
            }
            if (uVar6 <= uVar5) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            pMVar10 = (pLVar4->fields)._items;
            if (pMVar10 == (MVWorldObjectClient__Array *)0x0) break;
            if ((uint)pMVar10->max_length <= uVar5) {
              FUN_?();
              pcVar8 = (code *)swi(3);
              bVar9 = (*pcVar8)();
              return bVar9;
            }
            lVar11 = *(longlong *)((longlong)pMVar10->vector + lVar7 + -0x20);
            if (lVar11 == 0) break;
            if (*(int *)(lVar11 + 0x68) == 0x86) {
              return 1;
            }
            uVar5 = uVar5 + 1;
            lVar7 = lVar7 + 8;
          }
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      bVar9 = (*pcVar8)();
      return bVar9;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Boolean CanShowTeamSelect() */

bool Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_CanShowTeamSelect
               (LobbyFlowMenu *this,MethodInfo *method)

{
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
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      return 1 < (pDVar4->fields)._count - (pDVar4->fields)._freeCount;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* LobbyFlowMenu+LobbyFlowMenuType GetNextMenuType() */

LobbyFlowMenu_LobbyFlowMenuType__Enum
Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GetNextMenuType
          (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  bVar2 = false;
  pLVar3 = (this->fields).menuOrder;
  while (pLVar3 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    if ((pLVar3->fields)._size <= iVar1) {
      return LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
    }
    pLVar3 = (this->fields).menuOrder;
    if (pLVar3 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
    LVar4 = FUN_?(pLVar3,iVar1);
    if (bVar2) {
      return LVar4;
    }
    LVar5 = (*(this->klass->vtable).__unknown.methodPtr)
                      (this,(this->klass->vtable).__unknown.method);
    bVar2 = LVar4 == LVar5;
    iVar1 = iVar1 + 1;
    pLVar3 = (this->fields).menuOrder;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  LVar4 = (*pcVar6)();
  return LVar4;
}


/* LobbyFlowMenu+LobbyFlowMenuType GetPreviousMenuType() */

LobbyFlowMenu_LobbyFlowMenuType__Enum
Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GetPreviousMenuType
          (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).menuOrder;
  bVar2 = false;
  if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    iVar3 = (pLVar1->fields)._size;
    while( true ) {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
      }
      pLVar1 = (this->fields).menuOrder;
      if (bVar2) break;
      if (pLVar1 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
      iVar4 = FUN_?(pLVar1,iVar3);
      iVar5 = (*(this->klass->vtable).__unknown.methodPtr)
                        (this,(this->klass->vtable).__unknown.method);
      bVar2 = iVar4 == iVar5;
    }
    if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
      LVar6 = FUN_?(pLVar1,iVar3);
      return LVar6;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  LVar6 = (*pcVar7)();
  return LVar6;
}


/* Void GoToMenu(LobbyFlowMenu+LobbyFlowMenuType) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToMenu
               (LobbyFlowMenu *this,LobbyFlowMenu_LobbyFlowMenuType__Enum newMenuType,
               MethodInfo *method)

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
                  ProfileSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ProfileSettingsMenu>_ProfileSettingsMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c___GoToMenu_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_2);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_3___GoToMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_3);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_10 = (ulonglong)uStackX_10._4_4_ << 0x20;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LobbyFlowMenu____c);
  }
  this_00 = TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyFlowMenu____c);
    }
    object = TypeInfo__LobbyFlowMenu____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__LobbyFlowMenu____c___GoToMenu_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 = this_00;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 >> 0xc);
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
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (newMenuType == LobbyFlowMenu_LobbyFlowMenuType__Enum_LobbyState) {
    return;
  }
  if (newMenuType == LobbyFlowMenu_LobbyFlowMenuType__Enum_Briefing) {
    pOVar6 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_2);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              ((WinningConditionType__Enum *)&uStackX_10,(MethodInfo *)0x0);
    original_02 = (this->fields).winningConditionBriefingMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_02,
                         WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                        );
    if (pOVar6 != (Object *)0x0) {
      pOVar6[1].klass = pOVar7;
      func_?(pOVar6 + 1);
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar8,pOVar6,
                 MethodInfo__LobbyFlowMenu____c__DisplayClass24_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar1,(BaseEventData *)0x0,pEVar8,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar7 = pOVar6[1].klass;
      if (pOVar7 != (Object__Class *)0x0) {
        pAVar9 = (Action *)(pOVar7->_1).genericContainerHandle;
        *(WinningConditionType__Enum *)&(pOVar7->_1).cctor_thread =
             (WinningConditionType__Enum)uStackX_10;
        *(bool *)((longlong)&(pOVar7->_1).cctor_thread + 4) = 1;
        if (pAVar9 != (Action *)0x0) {
          pAVar9 = (Action *)(pOVar7->_1).genericContainerHandle;
          (*(pAVar9->fields)._._.invoke_impl)((pAVar9->fields)._._.method_code);
        }
        WinningConditionBriefing::WinningConditionBriefing_CreatePlayButton
                  ((WinningConditionBriefing *)pOVar7,(MethodInfo *)0x0);
        pOVar7 = pOVar6[1].klass;
        if (pOVar7 != (Object__Class *)0x0) {
          *(int32_t *)((longlong)&(pOVar7->_0).castClass + 4) = (this->fields).selectedTeam;
          *(undefined1 *)&(pOVar7->_0).castClass = 1;
          return;
        }
      }
    }
    goto code_?;
  }
  if (newMenuType == LobbyFlowMenu_LobbyFlowMenuType__Enum_Settings) {
    pOVar6 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_0);
    original_01 = (this->fields).profileSettingsMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_01,
                         ProfileSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ProfileSettingsMenu>_ProfileSettingsMenu_
                        );
    if (pOVar6 == (Object *)0x0) goto code_?;
    pOVar6[1].klass = pOVar7;
    func_?(pOVar6 + 1);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar8,pOVar6,
               MethodInfo__LobbyFlowMenu____c__DisplayClass24_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar1,(BaseEventData *)0x0,pEVar8,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((pOVar6[1].klass == (Object__Class *)0x0) ||
       (obj = ((pOVar6[1].klass)->_0).generic_class, obj == (Il2CppGenericClass *)0x0))
    goto code_?;
    bVar10 = true;
    goto UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive;
  }
  if (newMenuType != LobbyFlowMenu_LobbyFlowMenuType__Enum_TeamSelect) {
    if (newMenuType != LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect) {
      return;
    }
    pOVar6 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_3);
    original = (this->fields).spawnRoleMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar7 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                        );
    if (pOVar6 != (Object *)0x0) {
      pOVar6[1].klass = pOVar7;
      func_?(pOVar6 + 1);
      if (pOVar6[1].klass != (Object__Class *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  ((SpawnRoleMenu *)pOVar6[1].klass,(this->fields).selectedTeam,(MethodInfo *)0x0);
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar8,pOVar6,
                   MethodInfo__LobbyFlowMenu____c__DisplayClass24_3___GoToMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar1,(BaseEventData *)0x0,pEVar8,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
code_?:
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pOVar6 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_1);
  original_00 = (this->fields).teamMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar7 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original_00,
                       TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (pOVar6 == (Object *)0x0) goto code_?;
  pOVar6[1].klass = pOVar7;
  func_?(pOVar6 + 1);
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pEVar8 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar8,pOVar6,
             MethodInfo__LobbyFlowMenu____c__DisplayClass24_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar8,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (pOVar6[1].klass == (Object__Class *)0x0) goto code_?;
  player = (MVPlayer *)0x0;
  obj = (Il2CppGenericClass *)((pOVar6[1].klass)->_0).typeMetadataHandle;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
    bVar10 = true;
  }
  else {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)pEVar8);
    if ((((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
        (lVar12 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar12 == 0)) ||
       (lVar12 = *(longlong *)(lVar12 + 0x10), lVar12 == 0)) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar13 = *(byte *)(lVar12 + 0x10);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar14 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar14 == (PlayerPlanetData *)0x0) goto code_?;
    bVar15 = (pPVar14->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar14 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar14 == (PlayerPlanetData *)0x0) goto code_?;
    if (bVar13 <= bVar15) goto code_?;
    bVar10 = bVar13 <= (pPVar14->fields).previewGamePassTier;
  }
  if (obj == (Il2CppGenericClass *)0x0) {
code_?:
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive:
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,bVar10,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Il2CppGenericClass *)0x0) {
    FUN_?();
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pIVar16 = (obj->context).method_inst;
  if (pIVar16 == (Il2CppGenericInst *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pcVar11 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pcRam_? = pcVar11;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pIVar16,bVar10);
  return;
}


/* Void GoToNextMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToNextMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = 0;
  bVar2 = false;
  bVar3 = false;
  iVar4 = 0;
  pLVar5 = (this->fields).menuOrder;
  while (pLVar5 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    if ((pLVar5->fields)._size <= iVar4) {
      if (!bVar3) {
        (*(this->klass->vtable).StartPlaying.methodPtr)
                  (this,(this->klass->vtable).StartPlaying.method);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar5 = (this->fields).menuOrder;
      bVar2 = false;
      if (pLVar5 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
      break;
    }
    if (bVar2) {
      bVar3 = true;
    }
    pLVar5 = (this->fields).menuOrder;
    if (pLVar5 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
    iVar6 = FUN_?(pLVar5,iVar4);
    iVar7 = (*(this->klass->vtable).__unknown.methodPtr)
                      (this,(this->klass->vtable).__unknown.method);
    if (iVar6 == iVar7) {
      bVar2 = true;
    }
    iVar4 = iVar4 + 1;
    pLVar5 = (this->fields).menuOrder;
  }
  goto code_?;
  while( true ) {
    newMenuType = FUN_?(pLVar5,iVar1);
    if (bVar2) goto code_?;
    LVar8 = (*(this->klass->vtable).__unknown.methodPtr)
                      (this,(this->klass->vtable).__unknown.method);
    if (newMenuType == LVar8) {
      bVar2 = true;
    }
    pLVar5 = (this->fields).menuOrder;
    iVar1 = iVar1 + 1;
    if (pLVar5 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
code_?:
    if ((pLVar5->fields)._size <= iVar1) {
      newMenuType = LobbyFlowMenu_LobbyFlowMenuType__Enum_None;
code_?:
      LobbyFlowMenu_GoToMenu(this,newMenuType,(MethodInfo *)0x0);
      return;
    }
    pLVar5 = (this->fields).menuOrder;
    if (pLVar5 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) break;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void GoToPreviousMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_GoToPreviousMenu
               (LobbyFlowMenu *this,MethodInfo *method)

{
  LVar1 = LobbyFlowMenu_GetPreviousMenuType(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,LVar1,0);
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
                  ProfileSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ProfileSettingsMenu>_ProfileSettingsMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c___GoToMenu_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_1);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_2);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c__DisplayClass24_3___GoToMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c__DisplayClass24_3);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStackX_10 = (ulonglong)uStackX_10._4_4_ << 0x20;
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LobbyFlowMenu____c);
  }
  this_00 = TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyFlowMenu____c);
    }
    object = TypeInfo__LobbyFlowMenu____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__LobbyFlowMenu____c___GoToMenu_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 = this_00;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (LVar1 == LobbyFlowMenu_LobbyFlowMenuType__Enum_LobbyState) {
    return;
  }
  if (LVar1 == LobbyFlowMenu_LobbyFlowMenuType__Enum_Briefing) {
    pOVar7 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_2);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              ((WinningConditionType__Enum *)&uStackX_10,(MethodInfo *)0x0);
    original_02 = (this->fields).winningConditionBriefingMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar8 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_02,
                         WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                        );
    if (pOVar7 != (Object *)0x0) {
      pOVar7[1].klass = pOVar8;
      func_?(pOVar7 + 1);
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar9,pOVar7,
                 MethodInfo__LobbyFlowMenu____c__DisplayClass24_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar2,(BaseEventData *)0x0,pEVar9,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar8 = pOVar7[1].klass;
      if (pOVar8 != (Object__Class *)0x0) {
        pAVar10 = (Action *)(pOVar8->_1).genericContainerHandle;
        *(WinningConditionType__Enum *)&(pOVar8->_1).cctor_thread =
             (WinningConditionType__Enum)uStackX_10;
        *(bool *)((longlong)&(pOVar8->_1).cctor_thread + 4) = 1;
        if (pAVar10 != (Action *)0x0) {
          pAVar10 = (Action *)(pOVar8->_1).genericContainerHandle;
          (*(pAVar10->fields)._._.invoke_impl)((pAVar10->fields)._._.method_code);
        }
        WinningConditionBriefing::WinningConditionBriefing_CreatePlayButton
                  ((WinningConditionBriefing *)pOVar8,(MethodInfo *)0x0);
        pOVar8 = pOVar7[1].klass;
        if (pOVar8 != (Object__Class *)0x0) {
          *(int32_t *)((longlong)&(pOVar8->_0).castClass + 4) = (this->fields).selectedTeam;
          *(undefined1 *)&(pOVar8->_0).castClass = 1;
          return;
        }
      }
    }
    goto code_?;
  }
  if (LVar1 == LobbyFlowMenu_LobbyFlowMenuType__Enum_Settings) {
    pOVar7 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_0);
    original_01 = (this->fields).profileSettingsMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar8 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_01,
                         ProfileSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ProfileSettingsMenu>_ProfileSettingsMenu_
                        );
    if (pOVar7 == (Object *)0x0) goto code_?;
    pOVar7[1].klass = pOVar8;
    func_?(pOVar7 + 1);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar9,pOVar7,
               MethodInfo__LobbyFlowMenu____c__DisplayClass24_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar2,(BaseEventData *)0x0,pEVar9,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((pOVar7[1].klass == (Object__Class *)0x0) ||
       (obj = ((pOVar7[1].klass)->_0).generic_class, obj == (Il2CppGenericClass *)0x0))
    goto code_?;
    bVar11 = true;
    goto UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive;
  }
  if (LVar1 != LobbyFlowMenu_LobbyFlowMenuType__Enum_TeamSelect) {
    if (LVar1 != LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect) {
      return;
    }
    pOVar7 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_3);
    original = (this->fields).spawnRoleMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar8 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                        );
    if (pOVar7 != (Object *)0x0) {
      pOVar7[1].klass = pOVar8;
      func_?(pOVar7 + 1);
      if (pOVar7[1].klass != (Object__Class *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  ((SpawnRoleMenu *)pOVar7[1].klass,(this->fields).selectedTeam,(MethodInfo *)0x0);
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar9,pOVar7,
                   MethodInfo__LobbyFlowMenu____c__DisplayClass24_3___GoToMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar2,(BaseEventData *)0x0,pEVar9,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pOVar7 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_1);
  original_00 = (this->fields).teamMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar8 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original_00,
                       TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (pOVar7 == (Object *)0x0) goto code_?;
  pOVar7[1].klass = pOVar8;
  func_?(pOVar7 + 1);
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pEVar9 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar9,pOVar7,
             MethodInfo__LobbyFlowMenu____c__DisplayClass24_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar2,(BaseEventData *)0x0,pEVar9,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (pOVar7[1].klass == (Object__Class *)0x0) goto code_?;
  player = (MVPlayer *)0x0;
  obj = (Il2CppGenericClass *)((pOVar7[1].klass)->_0).typeMetadataHandle;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__GamePassesManager->static_fields->playerPlanetData == (PlayerPlanetData *)0x0) {
code_?:
    bVar11 = true;
  }
  else {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)pEVar9);
    if ((((extraout_RAX == 0) || (*(longlong *)(extraout_RAX + 200) == 0)) ||
        (lVar13 = *(longlong *)(*(longlong *)(extraout_RAX + 200) + 0xb0), lVar13 == 0)) ||
       (lVar13 = *(longlong *)(lVar13 + 0x10), lVar13 == 0)) goto code_?;
    if ((MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::GamePassTier>_
         ->klass->field_0x135 & 1) == 0) {
      FUN_?();
    }
    bVar14 = *(byte *)(lVar13 + 0x10);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar15 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar15 == (PlayerPlanetData *)0x0) goto code_?;
    bVar16 = (pPVar15->fields).gamePassTier;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar15 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar15 == (PlayerPlanetData *)0x0) goto code_?;
    if (bVar14 <= bVar16) goto code_?;
    bVar11 = bVar14 <= (pPVar15->fields).previewGamePassTier;
  }
  if (obj == (Il2CppGenericClass *)0x0) {
code_?:
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive:
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,bVar11,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Il2CppGenericClass *)0x0) {
    FUN_?();
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pIVar17 = (obj->context).method_inst;
  if (pIVar17 == (Il2CppGenericInst *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcVar12 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pcRam_? = pcVar12;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pIVar17,bVar11);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_OnDestroy
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
          (IPlayModeUI *)0x0) {
        cVar2 = FUN_?(7,TypeInfo__IPlayModeUI);
        if (cVar2 != '\0') {
          return;
        }
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar3 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar3->fields).maskMode = 0;
          pCVar4 = (pMVar3->fields).mainCamera;
          if (pCVar4 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (pCVar4,(pMVar3->fields).cullingMask,(MethodInfo *)0x0);
            bVar1 = (pMVar3->fields).isLogicRendered;
            (pMVar3->fields).blueModeEnabled = 0;
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_Logic);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pCVar4 = (pMVar3->fields).mainCamera;
            if (bVar1 == 0) {
              if (pCVar4 == (Camera *)0x0) {
code_?:
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              uVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                                (pCVar4,(MethodInfo *)0x0);
              uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_Logic,(MethodInfo *)0x0);
              uVar6 = uVar6 & ~(1 << (uVar7 & 0x1f));
            }
            else {
              if (pCVar4 == (Camera *)0x0) goto code_?;
              uVar6 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                                (pCVar4,(MethodInfo *)0x0);
              uVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                (StringLiteral_Logic,(MethodInfo *)0x0);
              uVar6 = uVar6 | 1 << (uVar7 & 0x1f);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (pCVar4,uVar6,(MethodInfo *)0x0);
            (pMVar3->fields).isLogicRendered = bVar1;
            return;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_Start(LobbyFlowMenu *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 == (MainCameraManager *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  value = (this->fields).cameraMaskMode;
  player = (MVPlayer *)(ulonglong)value;
  pMVar2 = (MethodInfo *)0x0;
  MainCameraManager::MainCameraManager_set_CamMaskMode(this_00,value,(MethodInfo *)0x0);
  if ((this->fields).haveSetSelectedTeam == 0) {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar2);
    if (extraout_RAX == 0) goto code_?;
    (this->fields).selectedTeam = *(int32_t *)(extraout_RAX + 0x84);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = (this->fields).menuOrder;
  if (pLVar3 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
  piVar4 = &(pLVar3->fields)._version;
  *piVar4 = *piVar4 + 1;
  (pLVar3->fields)._size = 0;
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  pLVar5 = (List_1_System_UInt32Enum_ *)(this->fields).menuOrder;
  if (pLVar5 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
  piVar4 = &(pLVar5->fields)._version;
  *piVar4 = *piVar4 + 1;
  pUVar6 = (pLVar5->fields)._items;
  if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
  uVar7 = (pLVar5->fields)._size;
  if (uVar7 < (uint)pUVar6->max_length) {
    (pLVar5->fields)._size = uVar7 + 1;
    if ((uint)pUVar6->max_length <= uVar7) goto code_?;
    pUVar6->vector[(int)uVar7] = 0;
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
    List_1_System_UInt32Enum__AddWithResize(pLVar5,0,pMVar2->klass->rgctx_data[0xe].method);
  }
  cVar8 = (*(this->klass->vtable).CanShowTeamSelect.methodPtr)
                    (this,(this->klass->vtable).CanShowTeamSelect.method);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  if (cVar8 != '\0') {
    pLVar5 = (List_1_System_UInt32Enum_ *)(this->fields).menuOrder;
    if (pLVar5 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar4 = &(pLVar5->fields)._version;
    *piVar4 = *piVar4 + 1;
    pUVar6 = (pLVar5->fields)._items;
    if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar7 = (pLVar5->fields)._size;
    if (uVar7 < (uint)pUVar6->max_length) {
      (pLVar5->fields)._size = uVar7 + 1;
      if ((uint)pUVar6->max_length <= uVar7) goto code_?;
      pUVar6->vector[(int)uVar7] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar5,3,pMVar2->klass->rgctx_data[0xe].method);
    }
  }
  cVar8 = (*(this->klass->vtable).CanShowBreifing.methodPtr)
                    (this,(this->klass->vtable).CanShowBreifing.method);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  if (cVar8 != '\0') {
    pLVar5 = (List_1_System_UInt32Enum_ *)(this->fields).menuOrder;
    if (pLVar5 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar4 = &(pLVar5->fields)._version;
    *piVar4 = *piVar4 + 1;
    pUVar6 = (pLVar5->fields)._items;
    if (pUVar6 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar7 = (pLVar5->fields)._size;
    if (uVar7 < (uint)pUVar6->max_length) {
      (pLVar5->fields)._size = uVar7 + 1;
      if ((uint)pUVar6->max_length <= uVar7) goto code_?;
      pUVar6->vector[(int)uVar7] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar5,1,pMVar2->klass->rgctx_data[0xe].method);
    }
  }
  cVar8 = (*(this->klass->vtable).CanShowSpawnRoleSelect.methodPtr)
                    (this,(this->klass->vtable).CanShowSpawnRoleSelect.method);
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  if (cVar8 == '\0') {
    return;
  }
  pLVar3 = (this->fields).menuOrder;
  if (pLVar3 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    piVar4 = &(pLVar3->fields)._version;
    *piVar4 = *piVar4 + 1;
    pLVar9 = (pLVar3->fields)._items;
    if (pLVar9 != (LobbyFlowMenu_LobbyFlowMenuType__Enum__Array *)0x0) {
      uVar7 = (pLVar3->fields)._size;
      if ((uint)pLVar9->max_length <= uVar7) {
        uVar7 = (pLVar3->fields)._size;
        FUN_?(pLVar3,uVar7 + 1,
                      (pMVar2->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                     );
        pLVar9 = (pLVar3->fields)._items;
        (pLVar3->fields)._size = uVar7 + 1;
        if (pLVar9 == (LobbyFlowMenu_LobbyFlowMenuType__Enum__Array *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (uVar7 < (uint)pLVar9->max_length) {
          pLVar9->vector[(int)uVar7] = LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect;
          return;
        }
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (pLVar3->fields)._size = uVar7 + 1;
      if (uVar7 < (uint)pLVar9->max_length) {
        pLVar9->vector[(int)uVar7] = LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect;
        return;
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_StartPlaying
               (LobbyFlowMenu *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__IPlayModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LobbyFlowMenu____c___StartPlaying_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LobbyFlowMenu____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LobbyFlowMenu____c);
  }
  this_00 = TypeInfo__LobbyFlowMenu____c->static_fields->__9__25_0;
  if (this_00 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyFlowMenu____c);
    }
    object = TypeInfo__LobbyFlowMenu____c->static_fields->__9;
    this_00 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_00,(Object *)object,
               MethodInfo__LobbyFlowMenu____c___StartPlaying_b__25_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__25_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__LobbyFlowMenu____c->static_fields->__9__25_0 >> 0xc);
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FirstTimePressPlayController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__FirstTimePressPlayController->static_fields->haveBeenPressed == 0) {
    FirstTimePressPlayController::FirstTimePressPlayController_OnFirstTimePlayIsPressed
              ((MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField == 0) {
    bVar5 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
    if (bVar5 == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__ILockCursorManager);
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
      if (TypeInfo__MVGameControllerBase->static_fields->_WebPlayAsTouch_k__BackingField != 0) {
        return;
      }
      pMVar6 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
      if ((pMVar6 != (MVGameControllerDesktop *)0x0) &&
         (pIVar7 = (IPlayModeUI *)(pMVar6->fields).lockCursorManager,
         pIVar7 != (IPlayModeUI *)0x0)) {
        uVar8 = 1;
        uVar9 = 1;
        pIVar10 = (IPlayModeUI__Class *)TypeInfo__ILockCursorManager;
        goto code_?;
      }
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
      if (pIVar7 != (IPlayModeUI *)0x0) {
        uVar8 = 8;
        uVar9 = 0;
        pIVar10 = TypeInfo__IPlayModeUI;
code_?:
        FUN_?(uVar8,pIVar10,pIVar7,uVar9);
        return;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar7 != (IPlayModeUI *)0x0) {
      FUN_?(8,TypeInfo__IPlayModeUI,pIVar7,0);
      pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar11 != (SpawnRoleDataMediator *)0x0) &&
         (pSVar12 = (pSVar11->fields).SpawnRoleModeTypeWrapper,
         pSVar12 != (SpawnRoleModeTypeWrapper *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?();
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pSVar13 = (pSVar12->fields).spawnRoleType;
        if ((pSVar13 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
           (pSVar14 = (pSVar13->fields).subscribableVariable,
           pSVar14 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
          if (((pSVar14->fields)._.value & 4) != 0) {
            pGVar15 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if ((pGVar15 == (GameEventManager *)0x0) ||
               (pGVar16 = (pGVar15->fields).AvatarCommandsPlayMode,
               pGVar16 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
            goto code_?;
            if ((pGVar16->fields).OnEnterPlaymode != (Action *)0x0) {
              pAVar17 = (pGVar16->fields).OnEnterPlaymode;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(pAVar17->fields)._._.invoke_impl)
                        ((pAVar17->fields)._._.method_code,(pAVar17->fields)._._.method);
              return;
            }
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateAvailableMenues() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues
               (LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Clear__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).menuOrder;
  if (pLVar1 == (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) goto code_?;
  piVar2 = &(pLVar1->fields)._version;
  *piVar2 = *piVar2 + 1;
  (pLVar1->fields)._size = 0;
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  pLVar4 = (List_1_System_UInt32Enum_ *)(this->fields).menuOrder;
  if (pLVar4 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
  piVar2 = &(pLVar4->fields)._version;
  *piVar2 = *piVar2 + 1;
  pUVar5 = (pLVar4->fields)._items;
  if (pUVar5 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
  uVar6 = (pLVar4->fields)._size;
  if (uVar6 < (uint)pUVar5->max_length) {
    (pLVar4->fields)._size = uVar6 + 1;
    if ((uint)pUVar5->max_length <= uVar6) goto code_?;
    pUVar5->vector[(int)uVar6] = 0;
  }
  else {
    mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
    List_1_System_UInt32Enum__AddWithResize(pLVar4,0,pMVar3->klass->rgctx_data[0xe].method);
  }
  cVar7 = (*(this->klass->vtable).CanShowTeamSelect.methodPtr)
                    (this,(this->klass->vtable).CanShowTeamSelect.method);
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  if (cVar7 != '\0') {
    pLVar4 = (List_1_System_UInt32Enum_ *)(this->fields).menuOrder;
    if (pLVar4 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar2 = &(pLVar4->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar5 = (pLVar4->fields)._items;
    if (pUVar5 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar6 = (pLVar4->fields)._size;
    if (uVar6 < (uint)pUVar5->max_length) {
      (pLVar4->fields)._size = uVar6 + 1;
      if ((uint)pUVar5->max_length <= uVar6) goto code_?;
      pUVar5->vector[(int)uVar6] = 3;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar4,3,pMVar3->klass->rgctx_data[0xe].method);
    }
  }
  cVar7 = (*(this->klass->vtable).CanShowBreifing.methodPtr)
                    (this,(this->klass->vtable).CanShowBreifing.method);
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  if (cVar7 != '\0') {
    pLVar4 = (List_1_System_UInt32Enum_ *)(this->fields).menuOrder;
    if (pLVar4 == (List_1_System_UInt32Enum_ *)0x0) goto code_?;
    piVar2 = &(pLVar4->fields)._version;
    *piVar2 = *piVar2 + 1;
    pUVar5 = (pLVar4->fields)._items;
    if (pUVar5 == (UInt32Enum__Enum__Array *)0x0) goto code_?;
    uVar6 = (pLVar4->fields)._size;
    if (uVar6 < (uint)pUVar5->max_length) {
      (pLVar4->fields)._size = uVar6 + 1;
      if ((uint)pUVar5->max_length <= uVar6) goto code_?;
      pUVar5->vector[(int)uVar6] = 1;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::UInt32Enum]::
      List_1_System_UInt32Enum__AddWithResize(pLVar4,1,pMVar3->klass->rgctx_data[0xe].method);
    }
  }
  cVar7 = (*(this->klass->vtable).CanShowSpawnRoleSelect.methodPtr)
                    (this,(this->klass->vtable).CanShowSpawnRoleSelect.method);
  pMVar3 = 
  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__Add_LobbyFlowMenu__LobbyFlowMenuType_
  ;
  if (cVar7 == '\0') {
    return;
  }
  pLVar1 = (this->fields).menuOrder;
  if (pLVar1 != (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    pLVar8 = (pLVar1->fields)._items;
    if (pLVar8 != (LobbyFlowMenu_LobbyFlowMenuType__Enum__Array *)0x0) {
      uVar6 = (pLVar1->fields)._size;
      if ((uint)pLVar8->max_length <= uVar6) {
        uVar6 = (pLVar1->fields)._size;
        FUN_?(pLVar1,uVar6 + 1,
                      (pMVar3->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy
                     );
        pLVar8 = (pLVar1->fields)._items;
        (pLVar1->fields)._size = uVar6 + 1;
        if (pLVar8 == (LobbyFlowMenu_LobbyFlowMenuType__Enum__Array *)0x0) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar6 < (uint)pLVar8->max_length) {
          pLVar8->vector[(int)uVar6] = LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect;
          return;
        }
        FUN_?();
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (pLVar1->fields)._size = uVar6 + 1;
      if (uVar6 < (uint)pLVar8->max_length) {
        pLVar8->vector[(int)uVar6] = LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect;
        return;
      }
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* LobbyFlowMenu() */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu__ctor(LobbyFlowMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).cameraMaskMode = 2;
  this_00 = (List_1_LobbyFlowMenu_LobbyFlowMenuType_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<LobbyFlowMenu::LobbyFlowMenuType>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).menuOrder = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).menuOrder >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}


/* Void set_SelectedTeam(MVTeam) */

void Assembly-CSharp.dll::LobbyFlowMenu::LobbyFlowMenu_set_SelectedTeam
               (LobbyFlowMenu *this,MVTeam__Enum value,MethodInfo *method)

{
  (this->fields).selectedTeam = value;
  (this->fields).haveSetSelectedTeam = 1;
  return;
}

