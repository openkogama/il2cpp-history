
/* Void GoToPreviousMenu() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_GoToPreviousMenu
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 == (MainCameraManager *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_CamRotateTarget);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_01->fields).maskMode = 0;
  this_00 = (this_01->fields).mainCamera;
  if (this_00 == (Camera *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
            (this_00,(this_01->fields).cullingMask,(MethodInfo *)0x0);
  (this_01->fields).blueModeEnabled = 0;
  MainCameraManager::MainCameraManager_RenderLogic
            (this_01,(this_01->fields).isLogicRendered,(MethodInfo *)0x0);
  LVar2 = LobbyFlowMenu::LobbyFlowMenu_GetPreviousMenuType((LobbyFlowMenu *)this,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                  ,LVar2,0);
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
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LobbyFlowMenu____c);
  }
  this_02 = TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0;
  if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if (*(int *)&(TypeInfo__LobbyFlowMenu____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__LobbyFlowMenu____c);
    }
    object = TypeInfo__LobbyFlowMenu____c->static_fields->__9;
    this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
               MethodInfo__LobbyFlowMenu____c___GoToMenu_b__24_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 = this_02;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&TypeInfo__LobbyFlowMenu____c->static_fields->__9__24_0 >> 0xc);
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
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar3,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (LVar2 == LobbyFlowMenu_LobbyFlowMenuType__Enum_LobbyState) {
    return;
  }
  if (LVar2 == LobbyFlowMenu_LobbyFlowMenuType__Enum_Briefing) {
    pOVar8 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_2);
    WinningConditionControl::WinningConditionControl_TryGetPrioritizedWinCondition
              ((WinningConditionType__Enum *)&uStackX_10,(MethodInfo *)0x0);
    original_02 = (this->fields)._.winningConditionBriefingMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar9 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_02,
                         WinningConditionBriefing_MethodInfo__UnityEngine__Object__Instantiate<WinningConditionBriefing>_WinningConditionBriefing_
                        );
    if (pOVar8 != (Object *)0x0) {
      pOVar8[1].klass = pOVar9;
      func_?(pOVar8 + 1);
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (pEVar10,pOVar8,
                 MethodInfo__LobbyFlowMenu____c__DisplayClass24_2___GoToMenu_b__3_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar3,(BaseEventData *)0x0,pEVar10,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pOVar9 = pOVar8[1].klass;
      if (pOVar9 != (Object__Class *)0x0) {
        pAVar11 = (Action *)(pOVar9->_1).genericContainerHandle;
        *(WinningConditionType__Enum *)&(pOVar9->_1).cctor_thread =
             (WinningConditionType__Enum)uStackX_10;
        *(bool *)((longlong)&(pOVar9->_1).cctor_thread + 4) = 1;
        if (pAVar11 != (Action *)0x0) {
          pAVar11 = (Action *)(pOVar9->_1).genericContainerHandle;
          (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code);
        }
        WinningConditionBriefing::WinningConditionBriefing_CreatePlayButton
                  ((WinningConditionBriefing *)pOVar9,(MethodInfo *)0x0);
        pOVar9 = pOVar8[1].klass;
        if (pOVar9 != (Object__Class *)0x0) {
          *(int32_t *)((longlong)&(pOVar9->_0).castClass + 4) = (this->fields)._.selectedTeam;
          *(undefined1 *)&(pOVar9->_0).castClass = 1;
          return;
        }
      }
    }
    goto code_?;
  }
  if (LVar2 == LobbyFlowMenu_LobbyFlowMenuType__Enum_Settings) {
    pOVar8 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_0);
    original_01 = (this->fields)._.profileSettingsMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar9 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_01,
                         ProfileSettingsMenu_MethodInfo__UnityEngine__Object__Instantiate<ProfileSettingsMenu>_ProfileSettingsMenu_
                        );
    if (pOVar8 == (Object *)0x0) goto code_?;
    pOVar8[1].klass = pOVar9;
    func_?(pOVar8 + 1);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              (pEVar10,pOVar8,
               MethodInfo__LobbyFlowMenu____c__DisplayClass24_0___GoToMenu_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (pGVar3,(BaseEventData *)0x0,pEVar10,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    if ((pOVar8[1].klass == (Object__Class *)0x0) ||
       (obj = ((pOVar8[1].klass)->_0).generic_class, obj == (Il2CppGenericClass *)0x0))
    goto code_?;
    bVar12 = true;
    goto UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive;
  }
  if (LVar2 != LobbyFlowMenu_LobbyFlowMenuType__Enum_TeamSelect) {
    if (LVar2 != LobbyFlowMenu_LobbyFlowMenuType__Enum_SpawnRoleSelect) {
      return;
    }
    pOVar8 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_3);
    original = (this->fields)._.spawnRoleMenuPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pOVar9 = (Object__Class *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original,
                         SpawnRoleMenu_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleMenu>_SpawnRoleMenu_
                        );
    if (pOVar8 != (Object *)0x0) {
      pOVar8[1].klass = pOVar9;
      func_?(pOVar8 + 1);
      if (pOVar8[1].klass != (Object__Class *)0x0) {
        SpawnRoleMenu::SpawnRoleMenu_Initialize
                  ((SpawnRoleMenu *)pOVar8[1].klass,(this->fields)._.selectedTeam,(MethodInfo *)0x0
                  );
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (pEVar10,pOVar8,
                   MethodInfo__LobbyFlowMenu____c__DisplayClass24_3___GoToMenu_b__4_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar3,(BaseEventData *)0x0,pEVar10,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
        return;
      }
    }
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar8 = (Object *)FUN_?(TypeInfo__LobbyFlowMenu____c__DisplayClass24_1);
  original_00 = (this->fields)._.teamMenuPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar9 = (Object__Class *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)original_00,
                       TeamMenu_MethodInfo__UnityEngine__Object__Instantiate<TeamMenu>_TeamMenu_);
  if (pOVar8 == (Object *)0x0) goto code_?;
  pOVar8[1].klass = pOVar9;
  func_?(pOVar8 + 1);
  pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  pEVar10 = (ExecuteEvents_EventFunction_1_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                         );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar10,pOVar8,
             MethodInfo__LobbyFlowMenu____c__DisplayClass24_1___GoToMenu_b__2_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar3,(BaseEventData *)0x0,pEVar10,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  if (pOVar8[1].klass == (Object__Class *)0x0) goto code_?;
  player = (MVPlayer *)0x0;
  obj = (Il2CppGenericClass *)((pOVar8[1].klass)->_0).typeMetadataHandle;
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
    bVar12 = true;
  }
  else {
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,(MethodInfo *)pEVar10);
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
    bVar12 = bVar14 <= (pPVar15->fields).previewGamePassTier;
  }
  if (obj == (Il2CppGenericClass *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
UnityEngine_CoreModule_dll_UnityEngine_GameObject_GameObject_SetActive:
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,bVar12,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Il2CppGenericClass *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar17 = (obj->context).method_inst;
  if (pIVar17 == (Il2CppGenericInst *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pIVar17,bVar12);
  return;
}


/* Void MouseSensitivityChanged() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_MouseSensitivityChanged
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if ((this->fields).mouseSenseSetRoutine != (IEnumerator *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12);
  iVar2 = iRam_?;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
      iVar2 = iRam_?;
    } while (!bVar7);
  }
  (this->fields).mouseSenseSetRoutine = pIVar1;
  if (iVar2 != 0) {
    uVar3 = (uint)((ulonglong)&(this->fields).mouseSenseSetRoutine >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pIVar1 = (this->fields).mouseSenseSetRoutine;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Coroutines);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = TypeInfo__Coroutines->static_fields->instance;
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (pIVar1 == (IEnumerator *)0x0) {
    uVar9 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar9);
    pSVar10 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar9);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar11 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)obj,(MethodInfo *)0x0);
  if (bVar11 == 0) {
    uVar9 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar9);
    pSVar10 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar10,(MethodInfo *)0x0);
    uVar9 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar9);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::MonoBehaviour>_UnityEngine__MonoBehaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Coroutines *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pvVar12 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar12 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar12,pIVar1);
  return;
}


/* IEnumerator MouseSetRoutine() */

IEnumerator *
Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_MouseSetRoutine
          (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)FUN_?(TypeInfo__ProfileSettingsMenu___MouseSetRoutine_d__12);
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_OnDestroy
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ProfileSettingsMenu__SetMouseSensitivitySlider_System__Object_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LobbyFlowMenu::LobbyFlowMenu_OnDestroy((LobbyFlowMenu *)this,(MethodInfo *)0x0);
  if ((this->fields).mouseSenseSetRoutine != (IEnumerator *)0x0) {
    routine = (this->fields).mouseSenseSetRoutine;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__Coroutines);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
    if (this_00 == (MonoBehaviour *)0x0) goto DAT_?;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
              (this_00,routine,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
  }
  this_01 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
            ProfileSettingsChanged;
  if (this_01 !=
      (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)0x0) {
    pDVar1 = (Delegate *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
             Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                       ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                       );
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<System::Object>);
    uVar2 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__ProfileSettingsMenu__SetMouseSensitivitySlider_System__Object_,
               (MethodInfo *)0x0);
    pDVar1 = mscorlib.dll::System::Delegate::Delegate_Remove
                       (pDVar1,(Delegate *)this_02,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<System::Object>;
    pMVar4 = 
    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
    ;
    if (pDVar1 == (Delegate *)0x0) {
      value = (Object *)0x0;
    }
    else {
      value = (Object *)FUN_?(pDVar1,TypeInfo__System__Action<System::Object>);
      if (value == (Object *)0x0) {
        FUN_?(pDVar1,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::
    Dictionary_2_System_Int32Enum_System_Object__TryInsert
              ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,value,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),1),
               pMVar4->klass->rgctx_data[0x22].method);
    return;
  }
DAT_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ResetProfileSettings() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_ResetProfileSettings
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
      == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
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
  lVar1 = lRam_?;
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar2 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    this_00 = (pMVar3->fields).operationRequests;
    pOVar4 = (Object *)0x0;
    value_00 = 0;
    uStackX_10 = 0;
    if (*(int *)(lRam_? + 0x28) < 0) {
      if ((*(longlong *)(lRam_? + 0x60) == 0) ||
         ((*(byte *)(lRam_? + 0x135) & 8) == 0)) {
        pOVar4 = (Object *)FUN_?(lRam_?);
        FUN_?(pOVar4 + 1,&uStackX_10,(longlong)*(int *)(lVar1 + 0xf8) + -0x10);
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)(pOVar4 + 1) >> 0xc);
          uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
          do {
            uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
            puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar7 == *puVar8;
            if (bVar9) {
              *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
      }
    }
    else {
      pOVar4 = (Object *)((ulonglong)uStackX_14 << 0x20);
    }
    if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_SetProfileSettings
                (this_00,ProfileSettingKey__Enum_ResetToDefaultValues,pOVar4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      this_01 = MVWorldObject.dll::MV::WorldObject::MetaData::ProfileSettingsState::
                ProfileSettingsState_GetDefaultProfileSettingsValues
                          (SettingsPlatform__Enum_Standalone,(MethodInfo *)0x0);
      if (this_01 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Object_ *)0x0) {
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
          FUN_?();
        }
        fVar10 = mscorlib.dll::System::Convert::Convert_ToSingle(pOVar4,(MethodInfo *)0x0);
        TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
        mouseSensitivity = fVar10;
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,1,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,2,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,3,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,4,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,5,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,6,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                           );
        iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32(pOVar4,(MethodInfo *)0x0);
        FUN_?(iVar11);
        fVar10 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->static_fields->
                 mouseSensitivity;
        if (fVar10 < _UNK_?) {
          fVar12 = _UNK_? /
                   ((_UNK_? - fVar10 / _UNK_?) * _UNK_? + _UNK_?);
        }
        else {
          fVar12 = _UNK_?;
          if (_UNK_? < fVar10) {
            fVar12 = ((fVar10 - _UNK_?) / _UNK_?) * _UNK_? + _UNK_?;
          }
        }
        if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        FUN_?(fVar12);
        pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                     field_0x1c == 0) {
          FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
        }
        if (pMVar13 != (MaterialLoader *)0x0) {
          MaterialLoader::MaterialLoader_SetTextureQuality
                    (pMVar13,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                             static_fields->_TextureQualityLevel_k__BackingField,(MethodInfo *)0x0);
          pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0)
          ;
          if ((pMVar13 != (MaterialLoader *)0x0) &&
             (pMVar14 = (pMVar13->fields)._CubeModelMaterial_k__BackingField,
             pMVar14 != (Material *)0x0)) {
            pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_get_mainTexture
                                (pMVar14,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                         field_0x1c == 0) {
              FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
            }
            if (pTVar15 != (Texture *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_filterMode
                        (pTVar15,TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 ->static_fields->_TextureFilter_k__BackingField,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).
                           field_0x1c == 0) {
                FUN_?();
              }
              pcVar16 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
                uVar17 = func_?(&UNK_?);
                FUN_?(uVar17,0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pcRam_? = pcVar16;
              (*pcRam_?)();
              pMVar13 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader
                                  ((MethodInfo *)0x0);
              if ((pMVar13 != (MaterialLoader *)0x0) &&
                 (pMVar14 = (pMVar13->fields)._CubeModelMaterial_k__BackingField,
                 pMVar14 != (Material *)0x0)) {
                pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Material::
                          Material_get_mainTexture(pMVar14,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager)
                  ;
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1
                             ).field_0x1c == 0) {
                  FUN_?(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
                }
                switch(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                       static_fields->_AnistropicFilteringLevel_k__BackingField) {
                case 1:
                  value_00 = 1;
                  break;
                case 2:
                  value_00 = 2;
                  break;
                case 3:
                  value_00 = 4;
                  break;
                case 4:
                  value_00 = 8;
                  break;
                case 5:
                  value_00 = 0x10;
                }
                if (pTVar15 != (Texture *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Texture::Texture_set_anisoLevel
                            (pTVar15,value_00,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  value = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                          static_fields->_TargetFrameRate_k__BackingField;
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if ((*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                ->_1).field_0x1c == 0) &&
                     (FUN_?(),
                     *(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                              _1).field_0x1c == 0)) {
                    FUN_?();
                  }
                  Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                  ProfileSettingsManager_SetFrameRateDesktop(value,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               _1).field_0x1c == 0) {
                    FUN_?();
                  }
                  Assets::Scripts::ProfileSettings::ProfileSettingsManager::
                  ProfileSettingsManager_SetLightQualitySetting
                            (TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                             static_fields->_LightQualityLevel_k__BackingField,(MethodInfo *)0x0);
                  pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                           static_fields->ProfileSettingsChanged;
                  if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                 *)0x0) {
                    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar18,0,
                                        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                       );
                    pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Int32Enum,System::Object]::
                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,0,
                                         MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                        );
                    if (pOVar4 != (Object *)0x0) {
                      (*(code *)pOVar4[1].monitor)(pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                      pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                               static_fields->ProfileSettingsChanged;
                      if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                     *)0x0) {
                        pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32Enum,System::Object]::
                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar18,1
                                            ,
                                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                           );
                        pOVar19 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                  Int32Enum,System::Object]::
                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                            ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01
                                             ,1,
                                             MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                            );
                        if (pOVar4 != (Object *)0x0) {
                          (*(code *)pOVar4[1].monitor)(pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                          pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                   ->static_fields->ProfileSettingsChanged;
                          if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                         *)0x0) {
                            pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System
                                     ::Int32Enum,System::Object]::
                                     Dictionary_2_System_Int32Enum_System_Object__get_Item
                                               ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                pDVar18,2,
                                                MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                               );
                            pOVar19 = mscorlib.dll::System::Collections::Generic::
                                      Dictionary`2[System::Int32Enum,System::Object]::
                                      Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                 this_01,2,
                                                 MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                );
                            if (pOVar4 != (Object *)0x0) {
                              (*(code *)pOVar4[1].monitor)
                                        (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                              pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                       ->static_fields->ProfileSettingsChanged;
                              if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                             *)0x0) {
                                pOVar4 = mscorlib.dll::System::Collections::Generic::
                                         Dictionary`2[System::Int32Enum,System::Object]::
                                         Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                   ((Dictionary_2_System_Int32Enum_System_Object_ *)
                                                    pDVar18,3,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                pOVar19 = mscorlib.dll::System::Collections::Generic::
                                          Dictionary`2[System::Int32Enum,System::Object]::
                                          Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                    ((Dictionary_2_System_Int32Enum_System_Object_ *
                                                     )this_01,3,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                if (pOVar4 != (Object *)0x0) {
                                  (*(code *)pOVar4[1].monitor)
                                            (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                                  pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                           ->static_fields->ProfileSettingsChanged;
                                  if (pDVar18 != (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                 *)0x0) {
                                    pOVar4 = mscorlib.dll::System::Collections::Generic::
                                             Dictionary`2[System::Int32Enum,System::Object]::
                                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                       ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar18,4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                    pOVar19 = mscorlib.dll::System::Collections::Generic::
                                              Dictionary`2[System::Int32Enum,System::Object]::
                                              Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                        ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_01,4,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                    if (pOVar4 != (Object *)0x0) {
                                      (*(code *)pOVar4[1].monitor)
                                                (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                                      pDVar18 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                               ->static_fields->ProfileSettingsChanged;
                                      if (pDVar18 != (
                                                  Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                  *)0x0) {
                                        pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                 Dictionary`2[System::Int32Enum,System::Object]::
                                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                           ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar18,5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                        pOVar19 = mscorlib.dll::System::Collections::Generic::
                                                  Dictionary`2[System::Int32Enum,System::Object]::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_01,5,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                        if (pOVar4 != (Object *)0x0) {
                                          (*(code *)pOVar4[1].monitor)
                                                    (pOVar4[4].klass,pOVar19,pOVar4[2].monitor);
                                          pDVar18 = 
                                                  TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager
                                                  ->static_fields->ProfileSettingsChanged;
                                          if (pDVar18 != (
                                                  Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_
                                                  *)0x0) {
                                            pOVar4 = mscorlib.dll::System::Collections::Generic::
                                                     Dictionary`2[System::Int32Enum,System::Object]
                                                     ::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  pDVar18,6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                            pOVar19 = mscorlib.dll::System::Collections::Generic::
                                                      Dictionary`2[System::Int32Enum,System::Object]
                                                      ::
                                                  Dictionary_2_System_Int32Enum_System_Object__get_Item
                                                            ((
                                                  Dictionary_2_System_Int32Enum_System_Object_ *)
                                                  this_01,6,
                                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Object>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                                  );
                                            if (pOVar4 != (Object *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                              (*(code *)pOVar4[1].monitor)
                                                        (pOVar4[4].klass,pOVar19,pOVar4[2].monitor,
                                                         pOVar4[1].monitor);
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void SetMouseSensitivitySlider(Object) */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_SetMouseSensitivitySlider
               (ProfileSettingsMenu *this,Object *value,MethodInfo *method)

{
  if (value != (Object *)0x0) {
    method = (MethodInfo *)value->klass;
    if ((((Object__Class *)method)->_0).element_class !=
        *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(value);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pSVar2 = (this->fields).mouseSensitivitySlider;
    if ((pSVar2 != (SettingsSlider *)0x0) &&
       (pSVar3 = (pSVar2->fields).slider, this = (ProfileSettingsMenu *)0x0, pSVar3 != (Slider *)0x0
       )) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pSVar3->klass->vtable).set_value.methodPtr)
                (pSVar3,*(undefined4 *)&value[1].klass,(pSVar3->klass->vtable).set_value.method);
      return;
    }
  }
  FUN_?(this,lRam_?,method);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_Start
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<System::Object>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    value = (this->fields)._.cameraMaskMode;
    player = (MVPlayer *)(ulonglong)value;
    pMVar1 = (MethodInfo *)0x0;
    MainCameraManager::MainCameraManager_set_CamMaskMode(this_01,value,(MethodInfo *)0x0);
    if ((this->fields)._.haveSetSelectedTeam == 0) {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,pMVar1);
      if (extraout_RAX == 0) goto DAT_?;
      (this->fields)._.selectedTeam = *(int32_t *)(extraout_RAX + 0x84);
    }
    LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->_1).field_0x1c
        == 0) {
      FUN_?();
    }
    pOVar2 = Assets::Scripts::ProfileSettings::ProfileSettingsManager::
             ProfileSettingsManager_GetSettingValue
                       (ProfileSettingKey__Enum_MouseSensitivity,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      if ((pOVar2->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar4 = (this->fields).mouseSensitivitySlider;
      if ((pSVar4 != (SettingsSlider *)0x0) &&
         (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
        (*(pSVar5->klass->vtable).set_value.methodPtr)(pSVar5,*(undefined4 *)&pOVar2[1].klass);
        pSVar4 = (this->fields).mouseSensitivitySlider;
        if ((pSVar4 != (SettingsSlider *)0x0) &&
           (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
          UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_minValue
                    (pSVar5,_UNK_?,(MethodInfo *)0x0);
          pSVar4 = (this->fields).mouseSensitivitySlider;
          if ((pSVar4 != (SettingsSlider *)0x0) &&
             (pSVar5 = (pSVar4->fields).slider, pSVar5 != (Slider *)0x0)) {
            UnityEngine.UI.dll::UnityEngine::UI::Slider::Slider_set_maxValue
                      (pSVar5,_UNK_?,(MethodInfo *)0x0);
            this_00 = TypeInfo__Assets__Scripts__ProfileSettings__ProfileSettingsManager->
                      static_fields->ProfileSettingsChanged;
            if (this_00 !=
                (Dictionary_2_MV_WorldObject_MetaData_ProfileSettingKey_System_Action_1_Object_ *)
                0x0) {
              pDVar6 = (Delegate *)
                       mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Int32Enum,System::Object]::
                       Dictionary_2_System_Int32Enum_System_Object__get_Item
                                 ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                                  MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__get_Item_MV__WorldObject__MetaData__ProfileSettingKey_
                                 );
              this_02 = (UnityAction_1_System_Object_ *)
                        FUN_?(TypeInfo__System__Action<System::Object>);
              uVar7 = 0;
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
              UnityAction_1_System_Object___ctor
                        (this_02,(Object *)this,
                         MethodInfo__ProfileSettingsMenu__SetMouseSensitivitySlider_System__Object_,
                         (MethodInfo *)0x0);
              pDVar6 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 (pDVar6,(Delegate *)this_02,(MethodInfo *)0x0);
              pAVar8 = TypeInfo__System__Action<System::Object>;
              pMVar1 = 
              MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MetaData::ProfileSettingKey,_System::Action<System::Object>_>__set_Item_MV__WorldObject__MetaData__ProfileSettingKey__System__Action<System::Object>_
              ;
              if (pDVar6 == (Delegate *)0x0) {
                pOVar2 = (Object *)0x0;
              }
              else {
                pOVar2 = (Object *)FUN_?(pDVar6,TypeInfo__System__Action<System::Object>);
                if (pOVar2 == (Object *)0x0) {
                  FUN_?(pDVar6,pAVar8);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
              Object]::Dictionary_2_System_Int32Enum_System_Object__TryInsert
                        ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,pOVar2,
                         (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),1),
                         pMVar1->klass->rgctx_data[0x22].method);
              return;
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_Update
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IPlayModeUI);
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField ==
          (IPlayModeUI *)0x0) goto code_?;
      bVar2 = FUN_?(9,TypeInfo__IPlayModeUI);
      bVar2 = bVar2 ^ 1;
    }
    else {
      bVar2 = 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      if ((pGVar1->fields).gameMode != 0 && bVar2 == 0) {
        return;
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
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
          bVar5 = (pMVar3->fields).isLogicRendered;
          (pMVar3->fields).blueModeEnabled = 0;
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_Logic);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pCVar4 = (pMVar3->fields).mainCamera;
          if (bVar5 == 0) {
            if (pCVar4 == (Camera *)0x0) {
code_?:
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                              (pCVar4,(MethodInfo *)0x0);
            uVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Logic,(MethodInfo *)0x0);
            uVar7 = uVar7 & ~(1 << (uVar8 & 0x1f));
          }
          else {
            if (pCVar4 == (Camera *)0x0) goto code_?;
            uVar7 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                              (pCVar4,(MethodInfo *)0x0);
            uVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Logic,(MethodInfo *)0x0);
            uVar7 = uVar7 | 1 << (uVar8 & 0x1f);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar4,uVar7,(MethodInfo *)0x0);
          (pMVar3->fields).isLogicRendered = bVar5;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateBackButtonVisibility() */

void Assembly-CSharp.dll::ProfileSettingsMenu::ProfileSettingsMenu_UpdateBackButtonVisibility
               (ProfileSettingsMenu *this,MethodInfo *method)

{
  obj = (this->fields).backButton;
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,1);
  return;
}

