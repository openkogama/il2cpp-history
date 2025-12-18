
/* Void OnConfirmPlay() */

void Assembly-CSharp.dll::BriefingPlayButtonTouch::BriefingPlayButtonTouch_OnConfirmPlay
               (BriefingPlayButtonTouch *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  player = (MVPlayer *)TypeInfo__MVGameControllerBase->static_fields;
  pMVar1 = (MVGameControllerBase *)(player->fields).OnLevelChanged;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
     pMVar3 != (MVNetworkGameStateListener *)0x0)) {
    iVar4 = (pMVar3->fields).currentGameState;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(), pcVar5 == (code *)0x0)) {
      uVar6 = func_?(&UNK_?);
      FUN_?(uVar6,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar7 = (float)(*pcRam_?)();
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,in_R8);
    if (extraout_RAX != 0) {
      if ((iVar4 != 2) && (*(float *)(extraout_RAX + 0xfc) <= fVar7)) {
        pAVar8 = (this->fields)._.OnPlayButtonPressed;
        if (pAVar8 != (Action *)0x0) {
          (*(pAVar8->fields)._._.invoke_impl)
                    ((pAVar8->fields)._._.method_code,(pAVar8->fields)._._.method);
        }
        return;
      }
      this_00 = (this->fields)._.button;
      if (this_00 != (Button *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          FUN_?(&
                        bool_MethodInfo__UnityEngine__UI__SetPropertyUtility__SetStruct<bool>_System__Boolean___bool_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar9 = FUN_?(&(this_00->fields)._.m_Interactable);
        if (cVar9 == '\0') {
          return;
        }
        if ((this_00->fields)._.m_Interactable == 0) {
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
            FUN_?();
          }
          pEVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                    EventSystem_get_current((MethodInfo *)0x0);
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
          if (pEVar10 != (EventSystem *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pEVar10->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                        EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar10 != (EventSystem *)0x0) {
                pGVar11 = (pEVar10->fields).m_CurrentSelected;
                pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
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
                if (pGVar12 != (GameObject *)0x0 || pGVar11 != (GameObject *)0x0) {
                  if (pGVar12 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (pGVar11 == (GameObject *)0x0) goto DAT_?;
                    bVar13 = (pGVar11->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else if (pGVar11 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    bVar13 = (pGVar12->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else {
                    bVar13 = pGVar11 == pGVar12;
                  }
                  if (!bVar13) goto code_?;
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0)
                {
                  FUN_?();
                }
                pEVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                          EventSystem_get_current((MethodInfo *)0x0);
                if (pEVar10 != (EventSystem *)0x0) {
                  UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                  EventSystem_SetSelectedGameObject_1(pEVar10,(GameObject *)0x0,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
DAT_?:
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
        }
code_?:
        UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_OnSetProperty
                  ((Selectable *)this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StartPlaying() */

void Assembly-CSharp.dll::BriefingPlayButtonTouch::BriefingPlayButtonTouch_StartPlaying
               (BriefingPlayButtonTouch *this,MethodInfo *method)

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
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Inequality_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__BriefingPlayButtonTouch____c___StartPlaying_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BriefingPlayButtonTouch____c);
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
  pMVar1 = (MethodInfo *)TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField
  ;
  if (pMVar1 != (MethodInfo *)0x0) {
    player = TypeInfo__IPlayModeUI;
    FUN_?();
    MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,pMVar1);
    if (((extraout_RAX != 0) && (*(longlong *)(extraout_RAX + 200) != 0)) &&
       (MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,pMVar1),
       extraout_RAX_00 != 0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((*(longlong *)(extraout_RAX_00 + 0x90) != 0) &&
         (pDVar2 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                    (*(longlong *)(extraout_RAX_00 + 0x90) + 0x10),
         pDVar2 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) {
        pMVar1 = 
        MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
        ;
        IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Int32Enum]::Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                           (pDVar2,0,
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                           );
        player_00 = (MVPlayer *)(ulonglong)IVar3;
        cVar4 = FUN_?();
        if (cVar4 == '\0') {
          pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
             (pSVar6 = (pSVar5->fields).SpawnRoleModeTypeWrapper,
             pSVar6 != (SpawnRoleModeTypeWrapper *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?();
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pSVar7 = (pSVar6->fields).spawnRoleType;
            if ((pSVar7 != (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) &&
               (pSVar8 = (pSVar7->fields).subscribableVariable,
               pSVar8 != (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0)) {
              if (((pSVar8->fields)._.value & 4) != 0) {
                pGVar9 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                    ((MethodInfo *)0x0);
                if ((pGVar9 == (GameEventManager *)0x0) ||
                   (pGVar10 = (pGVar9->fields).AvatarCommandsPlayMode,
                   pGVar10 == (GameEventManager_AvatarCommandsPlayModeManager *)0x0))
                goto code_?;
                if ((pGVar10->fields).OnEnterPlaymode != (Action *)0x0) {
                  pAVar11 = (pGVar10->fields).OnEnterPlaymode;
                  (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code);
                }
              }
code_?:
              if ((this->fields)._.shouldPop != 0) {
                root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
                if (*(int *)&(TypeInfo__BriefingPlayButtonTouch____c->_1).field_0x1c == 0) {
                  FUN_?(TypeInfo__BriefingPlayButtonTouch____c);
                }
                this_01 = TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9__2_0;
                if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
                  if (*(int *)&(TypeInfo__BriefingPlayButtonTouch____c->_1).field_0x1c == 0) {
                    FUN_?(TypeInfo__BriefingPlayButtonTouch____c);
                  }
                  object = TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9;
                  this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                            FUN_?(
                                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                         );
                  UnityEngine.UI.dll::UnityEngine::EventSystems::
                  ExecuteEvents+EventFunction`1[System::Object]::
                  ExecuteEvents_EventFunction_1_System_Object___ctor
                            ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                             (Object *)object,
                             MethodInfo__BriefingPlayButtonTouch____c___StartPlaying_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9__2_0 = this_01;
                  if (iRam_? != 0) {
                    uVar12 = (uint)((ulonglong)
                                    &TypeInfo__BriefingPlayButtonTouch____c->static_fields->__9__2_0
                                   >> 0xc);
                    puVar13 = (ulonglong *)((ulonglong)((uVar12 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar14 = *puVar13;
                      LOCK();
                      uVar15 = *puVar13;
                      if (uVar14 == uVar15) {
                        *puVar13 = uVar14 | 1L << (uVar12 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar14 != uVar15);
                  }
                }
                if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c ==
                    0) {
                  FUN_?();
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (root,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                          );
              }
              return;
            }
          }
        }
        else {
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player_00,pMVar1);
          MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player_00,pMVar1);
          if (extraout_RAX_01 != 0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (((*(longlong *)(extraout_RAX_01 + 0x90) != 0) &&
                (pDVar2 = *(Dictionary_2_System_Int32Enum_System_Int32Enum_ **)
                           (*(longlong *)(extraout_RAX_01 + 0x90) + 0x10),
                pDVar2 != (Dictionary_2_System_Int32Enum_System_Int32Enum_ *)0x0)) &&
               (IVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32Enum,System::Int32Enum]::
                         Dictionary_2_System_Int32Enum_System_Int32Enum__get_Item
                                   (pDVar2,0,
                                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::SpawnRoles::DefaultSpawnRoleType,_int>__get_Item_MV__WorldObject__SpawnRoles__DefaultSpawnRoleType_
                                   ), this_00 != (MVLocalPlayer *)0x0)) {
              MVLocalPlayer::MVLocalPlayer_SetActiveSpawnRole(this_00,IVar3,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}

