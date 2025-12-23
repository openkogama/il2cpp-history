
/* Void Awake() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Awake
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopEditModeController__OnStackChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopEditModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).chatController;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pCVar1 = (ChatControllerUGUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pCVar1,parent,0,
                      ChatControllerUGUI_MethodInfo__UnityEngine__Object__Instantiate<ChatControllerUGUI>_ChatControllerUGUI__UnityEngine__Transform__bool_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).chatController = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).chatController >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pCVar1 = (this->fields).chatController;
  if (pCVar1 != (ChatControllerUGUI *)0x0) {
    ChatControllerUGUI::ChatControllerUGUI_SubscribeToMessages(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatController;
    if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar1,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      pUVar7 = (this->fields).uiStack;
      if (pUVar7 != (UIStack *)0x0) {
        value = (Action *)0x0;
        UIStack::UIStack_Push
                  (pUVar7,(this->fields).stackBottom,UIPushOption__Enum_None,(UnityAction *)0x0,
                   UIGroupFlags__Enum_StackBottom,(MethodInfo *)0x0);
        pUVar7 = (this->fields).uiStack;
        pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (pNVar8,(Object *)this,MethodInfo__DesktopEditModeController__OnStackChanged__,
                   (MethodInfo *)0x0);
        if (pUVar7 != (UIStack *)0x0) {
          UIStack::UIStack_SubscribeToStackChanges(pUVar7,(Action *)pNVar8,(MethodInfo *)0x0);
          pMVar9 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0)
          ;
          if (pMVar9 != (MVGameControllerDesktop *)0x0) {
            bVar2 = iRam_? != 0;
            (pMVar9->fields)._.modeController = (ModeControllerBase *)this;
            if (bVar2) {
              uVar3 = (uint)((ulonglong)&(pMVar9->fields)._.modeController >> 0xc);
              lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
              do {
                uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
                puVar6 = (ulonglong *)(lVar4 + 0xADDR);
                LOCK();
                bVar2 = uVar5 == *puVar6;
                if (bVar2) {
                  *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
                }
                UNLOCK();
              } while (!bVar2);
            }
            FUN_?(this);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar10 != (MVGameControllerBase *)0x0) &&
                 (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) &&
                (this_00 = (pMVar11->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
               && (pMVar12 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (this_00,(MethodInfo *)0x0), pMVar12 != (MVLocalPlayer *)0x0)
               ) {
              if ((pMVar12->fields)._.playerState == 1) {
                DesktopEditModeController_SetUIReady(this,(MethodInfo *)0x0);
              }
              else {
                pAVar13 = MVGameControllerBase::
                          MVGameControllerBase_get_OnFirstFrameUpdateActorReady((MethodInfo *)0x0);
                pNVar8 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
                UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                NavMesh_OnNavMeshPreUpdate__ctor
                          (pNVar8,(Object *)this,MethodInfo__DesktopEditModeController__SetUIReady__
                           ,(MethodInfo *)0x0);
                pAVar13 = (Action *)
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    ((Delegate *)pAVar13,(Delegate *)pNVar8,(MethodInfo *)0x0);
                if (pAVar13 != (Action *)0x0) {
                  if (pAVar13->klass == TypeInfo__System__Action) {
                    value = pAVar13;
                  }
                  if (value == (Action *)0x0) {
                    FUN_?(pAVar13);
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
                    return;
                  }
                }
                MVGameControllerBase::MVGameControllerBase_set_OnFirstFrameUpdateActorReady
                          (value,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Boolean CanEdit() */

bool Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_CanEdit
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
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
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pLVar3 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_01,(MethodInfo *)0x0);
      if (pLVar3 != (List_1_MV_Common_PlanetPermissionType_ *)0x0) {
        if ((pLVar3->fields)._size == 0) {
          return 0;
        }
        iVar4 = FUN_?(pLVar3,0x12,
                              MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                              ->klass->rgctx_data[0x17].rgctxDataDummy);
        return iVar4 != -1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Boolean CanEnterPlayMode() */

bool Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_CanEnterPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
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
     (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
    this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pLVar3 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_01,(MethodInfo *)0x0);
      if (pLVar3 != (List_1_MV_Common_PlanetPermissionType_ *)0x0) {
        if ((pLVar3->fields)._size == 0) {
          return 0;
        }
        iVar4 = FUN_?(pLVar3,0x11,
                              MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                              ->klass->rgctx_data[0x17].rgctxDataDummy);
        return iVar4 != -1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void DeleteWoid(Int32) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_DeleteWoid
               (DesktopEditModeController *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
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
                  MethodInfo__DesktopEditModeController____c___DeleteWoid_b__77_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DesktopEditModeController____c__DisplayClass77_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DesktopEditModeController____c__DisplayClass77_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DesktopEditModeController____c);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object_00 = (Object *)FUN_?(TypeInfo__DesktopEditModeController____c__DisplayClass77_0);
  if ((this->fields).canEdit != 0) {
    pEVar1 = (this->fields)._EditModeStateMachine_k__BackingField;
    if (((pEVar1 != (EditorStateMachine *)0x0) &&
        (this_00 = (pEVar1->fields).selectionController, this_00 != (SelectionController *)0x0)) &&
       (SelectionController::SelectionController_DeSelectAll(this_00,(MethodInfo *)0x0),
       object_00 != (Object *)0x0)) {
      bVar2 = iRam_? != 0;
      object_00[1].klass = (Object__Class *)::StringLiteral__;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)(object_00 + 1) >> 0xc);
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
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar7 != (MVWorldObjectClientManager *)0x0) {
        pMVar8 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar7,woid,(MethodInfo *)0x0);
        pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar8 != (MVWorldObjectClient *)0x0) {
          cVar9 = (*(pMVar8->klass->vtable).Delete.methodPtr)(pMVar8,pMVar7,object_00 + 1);
          if (cVar9 == '\0') {
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,object_00,
                       MethodInfo__DesktopEditModeController____c__DisplayClass77_0___DeleteWoid_b__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            method_00 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              ;
            }
          }
          else {
            root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__DesktopEditModeController____c->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__DesktopEditModeController____c);
            }
            this_01 = TypeInfo__DesktopEditModeController____c->static_fields->__9__77_1;
            if (this_01 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
              if (*(int *)&(TypeInfo__DesktopEditModeController____c->_1).field_0x1c == 0) {
                FUN_?(TypeInfo__DesktopEditModeController____c);
              }
              object = TypeInfo__DesktopEditModeController____c->static_fields->__9;
              this_01 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                        FUN_?(
                                     TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                     );
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
              Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                        ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
                         MethodInfo__DesktopEditModeController____c___DeleteWoid_b__77_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              TypeInfo__DesktopEditModeController____c->static_fields->__9__77_1 = this_01;
              func_?(&TypeInfo__DesktopEditModeController____c->static_fields->
                                   __9__77_1);
            }
            method_00 = 
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            ;
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
              method_00 = 
              UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              ;
            }
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,
                     (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,method_00);
          return;
        }
      }
    }
    FUN_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  return;
}


/* Void DestroyFirstTimeEditTutorials() */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_DestroyFirstTimeEditTutorials
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  FirstTimeActivatableMessagePopup_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeActivatableMessagePopup>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FirstTimeSetupTerrainEditTutorial_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeSetupTerrainEditTutorial>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  FirstTimeActivatablePopup__MethodInfo__UnityEngine__GameObject__GetComponents<FirstTimeActivatablePopup>______
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stackBottom;
  if (pGVar1 != (GameObject *)0x0) {
    p_Var2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponents_1
                       (pGVar1,
                        FirstTimeActivatablePopup__MethodInfo__UnityEngine__GameObject__GetComponents<FirstTimeActivatablePopup>______
                       );
    uVar2 = 0;
    if (p_Var2 != (_Il2CppFullySharedGenericType__Array *)0x0) {
      pp_Var9 = p_Var2->vector;
      for (; (int)uVar2 < (int)p_Var2->max_length; uVar2 = uVar2 + 1) {
        if ((uint)p_Var2->max_length <= uVar2) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pOVar4 = (Object_1 *)*pp_Var9;
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
                  (pOVar4,0.0,(MethodInfo *)0x0);
        pp_Var9 = pp_Var9 + 1;
      }
      pGVar1 = (this->fields).stackBottom;
      if (pGVar1 != (GameObject *)0x0) {
        pOVar4 = (Object_1 *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                           (pGVar1,
                            FirstTimeSetupTerrainEditTutorial_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeSetupTerrainEditTutorial>__
                           );
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
                  (pOVar4,0.0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).stackBottom;
        if (pGVar1 != (GameObject *)0x0) {
          pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                             (pGVar1,
                              FirstTimeActivatableMessagePopup_MethodInfo__UnityEngine__GameObject__GetComponent<FirstTimeActivatableMessagePopup>__
                             );
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
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                          ,0,0);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pOVar6 = (Object__Class *)0x0;
          if (pOVar5 != (Object *)0x0) {
            pOVar6 = pOVar5[1].klass;
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pOVar6,0);
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


/* Void DisableEditMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_DisableEditMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if ((this->fields).canEnterPlayMode == 0) {
    return;
  }
  (this->fields).isInPlayInEditMode = 1;
  this_00 = (this->fields).desktopPlayModeController;
  if ((this_00 != (DesktopPlayModeController *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,1,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      pAVar2 = (this->fields).editModeChange;
      if (pAVar2 != (Action_1_EditModeChangeArgs_ *)0x0) {
        (*(pAVar2->fields)._._.invoke_impl)
                  ((pAVar2->fields)._._.method_code,1,(pAVar2->fields)._._.method);
      }
      (this->fields).enterBuildModeOnceGuard = 0;
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnterBuildMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_EnterBuildMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isInPlayInEditMode = 0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MVGameControllerBase->static_fields->_LeavingEditPlayMode_k__BackingField = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__68);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  routine = (IEnumerator *)
            FUN_?(TypeInfo__DesktopEditModeController___HandleCursorVisible_d__68);
  *(undefined4 *)&routine[1].klass = 0;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
            ((MonoBehaviour *)this,routine,(MethodInfo *)0x0);
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_RenderLogic
              (this_00,(this->fields).storedRenderLogicState,(MethodInfo *)0x0);
    pAVar2 = (this->fields).editModeChange;
    if (pAVar2 != (Action_1_EditModeChangeArgs_ *)0x0) {
      (*(pAVar2->fields)._._.invoke_impl)
                ((pAVar2->fields)._._.method_code,0,(pAVar2->fields)._._.method);
    }
    (this->fields).enterPlayModeOnceGuard = 0;
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void EnterPlayMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_EnterPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).canEnterPlayMode == 0) || ((this->fields).enterPlayModeOnceGuard != 0)) {
    return;
  }
  this_00 = (this->fields).stateMachine;
  if (this_00 != (FSMEntity *)0x0) {
    FSMEntity::FSMEntity_ClearStateStack(this_00,(MethodInfo *)0x0);
    pCVar1 = (this->fields).contextMenuController;
    if (pCVar1 != (ContextMenuController *)0x0) {
      pCVar2 = (pCVar1->fields).currentContextMenu;
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
      if (pCVar2 != (ContextMenu *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pCVar2->fields)._._._._.m_CachedPtr != (void *)0x0) {
          pCVar1 = (this->fields).contextMenuController;
          if ((pCVar1 == (ContextMenuController *)0x0) ||
             (pCVar2 = (pCVar1->fields).currentContextMenu, pCVar2 == (ContextMenu *)0x0))
          goto DAT_?;
          ContextMenu::ContextMenu_Pop(pCVar2,(MethodInfo *)0x0);
        }
      }
      if ((this->fields).canEdit == 0) {
        DesktopEditModeController_SetState_1
                  (this,PlayModeOnlyEvent__Enum_PMOWaitForPlayModeAvatar,(MethodInfo *)0x0);
      }
      else {
        DesktopEditModeController_SetState
                  (this,EditorEvent__Enum_ESWaitForPlayModeAvatar,(MethodInfo *)0x0);
      }
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar3 != (MainCameraManager *)0x0) {
        (this->fields).storedRenderLogicState = (pMVar3->fields).isLogicRendered;
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar3 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_Logic);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_01 = (pMVar3->fields).mainCamera;
          if (this_01 != (Camera *)0x0) {
            uVar4 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                              (this_01,(MethodInfo *)0x0);
            uVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                              (StringLiteral_Logic,(MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (this_01,uVar4 & ~(1 << (uVar5 & 0x1f)),(MethodInfo *)0x0);
            (pMVar3->fields).isLogicRendered = 0;
            (this->fields).enterPlayModeOnceGuard = 1;
            return;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IEnumerator HandleCursorVisible() */

IEnumerator *
Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_HandleCursorVisible
          (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DesktopEditModeController___HandleCursorVisible_d__68);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__DesktopEditModeController___HandleCursorVisible_d__68);
  *(undefined4 *)&pIVar1[1].klass = 0;
  return pIVar1;
}


/* Void HandleFocusInputSuppress() */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_HandleFocusInputSuppress
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0x143);
    if (cVar3 == '\0') {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      cVar3 = (*pcRam_?)(0x144);
    }
    else {
      cVar3 = '\x01';
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar4 = (float)(*pcRam_?)();
    if (fVar4 - (this->fields).focusTime <= _UNK_? && cVar3 == '\0') {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVInputWrapper__InputSuppression);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = (MVInputWrapper_InputSuppression *)
               FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
      pIVar6 = (pMVar5->klass->vtable).set_IsSuppressed.methodPtr;
      (*pIVar6)(pMVar5,CONCAT71((int7)((ulonglong)method >> 8),1),
                (pMVar5->klass->vtable).set_IsSuppressed.method,pIVar6,unaff_RBX);
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVInputWrapper);
      }
      TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed = pMVar5;
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInputAllSuppressed >>
                      0xc);
        puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar9 = *puVar8;
          LOCK();
          uVar10 = *puVar8;
          if (uVar9 == uVar10) {
            *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (uVar9 != uVar10);
      }
      return;
    }
    (this->fields).focusSuppressInput = 0;
  }
  return;
}


/* Void HandleInput() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_HandleInput
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DesktopEditModeController___HandleInput_b__50_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PauseMenu,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    pUVar2 = (this->fields).uiStack;
    if (pUVar2 == (UIStack *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar3 = (pUVar2->fields).stackableUiElements;
    if (pLVar3 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    if ((pLVar3->fields)._size < 3) {
      pIVar4 = (this->fields).inEditMenuPrefab;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar4 = (InEditMenu *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                         ((Object *)pIVar4,parent,0,
                          InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                         );
      bVar5 = iRam_? != 0;
      (this->fields).inEditMenu = pIVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).inEditMenu >> 0xc);
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
      pIVar4 = (this->fields).inEditMenu;
      if (pIVar4 == (InEditMenu *)0x0) goto code_?;
      InEditMenu::InEditMenu_Initialize(pIVar4,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__DesktopEditModeController___HandleInput_b__50_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_Deprecated_ToggleHD,KeyState__Enum_Down,(MethodInfo *)0x0)
  ;
  if (bVar1 == 0) {
    return;
  }
  pUVar2 = (this->fields).uiStack;
  if (pUVar2 != (UIStack *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar3 = (pUVar2->fields).stackableUiElements;
    if (pLVar3 != (List_1_UIStack_StackElement_ *)0x0) {
      if (2 < (pLVar3->fields)._size) {
        return;
      }
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Initialize
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ChatCommandManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopEditModeController__HideUI__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DesktopPlayMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&
                  ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_Init(pMVar1,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_Logic);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (pMVar1->fields).mainCamera;
      if (this_00 != (Camera *)0x0) {
        uVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                          (this_00,(MethodInfo *)0x0);
        uVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (this_00,uVar2 | 1 << (uVar3 & 0x1f),(MethodInfo *)0x0);
        (pMVar1->fields).isLogicRendered = 1;
        pCVar4 = (this->fields).chatBubbleController;
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pCVar4 = (ChatBubbleController *)
                  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                            ((Object *)pCVar4,parent,0,
                             ChatBubbleController_MethodInfo__UnityEngine__Object__Instantiate<ChatBubbleController>_ChatBubbleController__UnityEngine__Transform__bool_
                            );
        bVar5 = iRam_? != 0;
        (this->fields).chatBubbleController = pCVar4;
        if (bVar5) {
          uVar2 = (uint)((ulonglong)&(this->fields).chatBubbleController >> 0xc);
          puVar6 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar7 = *puVar6;
            LOCK();
            uVar8 = *puVar6;
            if (uVar7 == uVar8) {
              *puVar6 = uVar7 | 1L << (uVar2 & 0x3f);
            }
            UNLOCK();
          } while (uVar7 != uVar8);
        }
        this_01 = (this->fields).chatController;
        if (this_01 != (ChatControllerUGUI *)0x0) {
          ChatControllerUGUI::ChatControllerUGUI_Initialize(this_01,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__ChatCommandManager->_1).field_0x1c == 0) {
            FUN_?();
          }
          pAVar9 = ChatCommandManager::ChatCommandManager_GetChatCommandCallback
                              (ChatCommand__Enum_HideAllUI,(MethodInfo *)0x0);
          this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__DesktopEditModeController__HideUI__,
                     (MethodInfo *)0x0);
          pAVar10 = (Action *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar9,(Delegate *)this_02,(MethodInfo *)0x0);
          pAVar9 = (Action *)0x0;
          if (pAVar10 != (Action *)0x0) {
            if (pAVar10->klass == TypeInfo__System__Action) {
              pAVar9 = pAVar10;
            }
            if (pAVar9 == (Action *)0x0) {
              FUN_?(pAVar10,TypeInfo__System__Action);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          ChatCommandManager::ChatCommandManager_UpdateChatCommandCallback
                    (ChatCommand__Enum_HideAllUI,pAVar9,(MethodInfo *)0x0);
          this_03 = (DesktopPlayMode *)FUN_?(TypeInfo__DesktopPlayMode);
          DesktopPlayMode::DesktopPlayMode__ctor(this_03,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
            FUN_?();
          }
          FUN_?(this_03);
          ModeControllerBase::ModeControllerBase_TogglePlayerIndicators
                    ((ModeControllerBase *)this,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
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
          pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((((pMVar12 != (MVGameControllerBase *)0x0) &&
               (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
              (pMVar14 = (pMVar13->fields).playerContainer, pMVar14 != (MVPlayerContainer *)0x0)) &&
             ((pMVar15 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar14,(MethodInfo *)0x0), pMVar15 != (MVLocalPlayer *)0x0 &&
              (pLVar16 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions
                                   (pMVar15,(MethodInfo *)0x0),
              pLVar16 != (List_1_MV_Common_PlanetPermissionType_ *)0x0)))) {
            if ((pLVar16->fields)._size == 0) {
              bVar5 = false;
            }
            else {
              iVar17 = FUN_?(pLVar16,CONCAT71((int7)((ulonglong)
                                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                                                  ->klass >> 8),0x12),
                                     MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                                     ->klass->rgctx_data[0x17].rgctxDataDummy);
              bVar5 = iVar17 != -1;
            }
            bVar18 = cRam_? == '\0';
            (this->fields).canEdit = bVar5;
            if (bVar18) {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
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
            pMVar12 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if (((pMVar12 != (MVGameControllerBase *)0x0) &&
                (pMVar13 = (pMVar12->fields).game, pMVar13 != (MVNetworkGame *)0x0)) &&
               ((pMVar14 = (pMVar13->fields).playerContainer, pMVar14 != (MVPlayerContainer *)0x0 &&
                ((pMVar15 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                      (pMVar14,(MethodInfo *)0x0), pMVar15 != (MVLocalPlayer *)0x0 &&
                 (pLVar16 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions
                                      (pMVar15,(MethodInfo *)0x0),
                 pLVar16 != (List_1_MV_Common_PlanetPermissionType_ *)0x0)))))) {
              if ((pLVar16->fields)._size == 0) {
                bVar5 = false;
              }
              else {
                iVar17 = FUN_?(pLVar16,0x11,
                                       MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                                       ->klass->rgctx_data[0x17].rgctxDataDummy);
                bVar5 = iVar17 != -1;
              }
              (this->fields).canEnterPlayMode = bVar5;
              if ((this->fields).canEdit == 0) {
                DesktopEditModeController_DestroyFirstTimeEditTutorials(this,(MethodInfo *)0x0);
              }
              else {
                DesktopEditModeController_InitializeEditSystems(this,(MethodInfo *)0x0);
              }
              if ((this->fields).canEnterPlayMode != 0) {
                DesktopEditModeController_InitializePlayModeSystems(this,(MethodInfo *)0x0);
              }
              return;
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


/* Void InitializeEditSystems() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_InitializeEditSystems
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditorStateMachine);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pCVar2 = (this->fields).contextMenuController;
  pGVar3 = (this->fields).gizmoController;
  pEVar4 = (EditorStateMachine *)FUN_?(TypeInfo__EditorStateMachine);
  EditorStateMachine::EditorStateMachine__ctor_2(pEVar4,pGVar1,pCVar2,pGVar3,(MethodInfo *)0x0);
  bVar5 = iRam_? != 0;
  (this->fields)._EditModeStateMachine_k__BackingField = pEVar4;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(this->fields)._EditModeStateMachine_k__BackingField >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  pEVar4 = (this->fields)._EditModeStateMachine_k__BackingField;
  if ((pEVar4 != (EditorStateMachine *)0x0) &&
     (this_00 = (pEVar4->fields).cubeModelingStateMachine,
     this_00 != (CubeModelingStateMachine *)0x0)) {
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (this_00,0x15,(MethodInfo *)0x0);
    pEVar4 = (this->fields)._EditModeStateMachine_k__BackingField;
    auStackX_8[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__EditorEvent,auStackX_8);
    if (pEVar4 != (EditorStateMachine *)0x0) {
      FSMEntity::FSMEntity_set_Event((FSMEntity *)pEVar4,value,(MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).stateMachine =
           (FSMEntity *)(this->fields)._EditModeStateMachine_k__BackingField;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).stateMachine >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      this_01 = (this->fields).drawPlaneController;
      if (this_01 != (DrawPlaneControllerUUI *)0x0) {
        DrawPlaneControllerUUI::DrawPlaneControllerUUI_Initialize(this_01,(MethodInfo *)0x0);
        FUN_?((this->fields).drawPlaneController);
        this_02 = (this->fields).editorWorldObjectCreation;
        if (this_02 != (EditorWorldObjectCreation *)0x0) {
          EditorWorldObjectCreation::EditorWorldObjectCreation_Initialize
                    (this_02,(this->fields)._EditModeStateMachine_k__BackingField,(MethodInfo *)0x0)
          ;
          pEVar4 = (this->fields)._EditModeStateMachine_k__BackingField;
          if ((pEVar4 != (EditorStateMachine *)0x0) &&
             (pMVar10 = (this->fields).materialsController,
             pMVar10 != (MaterialsControllerEditMode *)0x0)) {
            bVar5 = iRam_? != 0;
            (pMVar10->fields)._.cubeModelingStateMachine = (pEVar4->fields).cubeModelingStateMachine
            ;
            if (bVar5) {
              uVar6 = (uint)((ulonglong)&(pMVar10->fields)._.cubeModelingStateMachine >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar5 = uVar8 == *puVar9;
                if (bVar5) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar5);
            }
            MaterialsController::MaterialsController_InitializeMaterialInventoryData
                      ((MaterialsController *)pMVar10,(MethodInfo *)0x0);
            pMVar10 = (this->fields).materialsController;
            this_03 = (this->fields).uiStack;
            if (((pMVar10 != (MaterialsControllerEditMode *)0x0) &&
                (this_08 = (Component *)(*(pMVar10->klass->vtable).SetActive.methodPtr)(),
                this_08 != (Component *)0x0)) &&
               (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject(this_08,(MethodInfo *)0x0),
               this_03 != (UIStack *)0x0)) {
              UIStack::UIStack_Push
                        (this_03,pGVar1,UIPushOption__Enum_None,(UnityAction *)0x0,
                         UIGroupFlags__Enum_MainUI,(MethodInfo *)0x0);
              pCVar2 = (this->fields).contextMenuController;
              if (pCVar2 != (ContextMenuController *)0x0) {
                ContextMenuController::ContextMenuController_Initialize
                          (pCVar2,(this->fields)._EditModeStateMachine_k__BackingField,
                           (MethodInfo *)0x0);
                pGVar3 = (this->fields).gizmoController;
                if (pGVar3 != (GizmoController *)0x0) {
                  GizmoController::GizmoController_Initialize
                            (pGVar3,(this->fields)._EditModeStateMachine_k__BackingField,
                             (MethodInfo *)0x0);
                  this_04 = (this->fields).clientShopController;
                  if (this_04 != (EditModeClientShopController *)0x0) {
                    EditModeClientShopController::EditModeClientShopController_Initialize
                              (this_04,(this->fields).repositoryController,(MethodInfo *)0x0);
                    this_05 = (this->fields).playerInventoryController;
                    if (this_05 != (PlayerInventoryController *)0x0) {
                      PlayerInventoryController::PlayerInventoryController_Initialize
                                (this_05,(MethodInfo *)0x0);
                      this_06 = (this->fields).goldPurchasedTracker;
                      if (this_06 != (GoldPurchasedTracker *)0x0) {
                        GoldPurchasedTracker::GoldPurchasedTracker_Initialize
                                  (this_06,(MethodInfo *)0x0);
                        pGVar1 = (this->fields).stackBottom;
                        pRVar11 = (this->fields).notificationsManager;
                        if (pGVar1 != (GameObject *)0x0) {
                          parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                   GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          pRVar11 = (RectTransform *)
                                    UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_Instantiate_6
                                              ((Object *)pRVar11,parent,0,
                                               UnityEngine__RectTransform_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::RectTransform>_UnityEngine__RectTransform__UnityEngine__Transform__bool_
                                              );
                          bVar5 = iRam_? != 0;
                          (this->fields).notificationsManager = pRVar11;
                          if (bVar5) {
                            uVar6 = (uint)((ulonglong)&(this->fields).notificationsManager >> 0xc);
                            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                            do {
                              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                              LOCK();
                              bVar5 = uVar8 == *puVar9;
                              if (bVar5) {
                                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                              }
                              UNLOCK();
                            } while (!bVar5);
                          }
                          pEVar4 = (this->fields)._EditModeStateMachine_k__BackingField;
                          if ((pEVar4 != (EditorStateMachine *)0x0) &&
                             (this_07 = (this->fields).firstTimeSetupTerrainEditTutorial,
                             this_07 != (FirstTimeSetupTerrainEditTutorial *)0x0)) {
                            FirstTimeSetupTerrainEditTutorial::
                            FirstTimeSetupTerrainEditTutorial_Initialize
                                      (this_07,(pEVar4->fields).cubeModelingStateMachine,
                                       (MaterialsController *)(this->fields).materialsController,
                                       (MethodInfo *)0x0);
                            pEVar4 = (this->fields)._EditModeStateMachine_k__BackingField;
                            if ((pEVar4 != (EditorStateMachine *)0x0) &&
                               (pSVar12 = (this->fields).setupCubeModelTutorialUI,
                               pSVar12 != (SetupCubeModelTutorialUI *)0x0)) {
                              bVar5 = iRam_? != 0;
                              (pSVar12->fields).cubeModelingStateMachine =
                                   (pEVar4->fields).cubeModelingStateMachine;
                              if (bVar5) {
                                uVar6 = (uint)((ulonglong)
                                                &(pSVar12->fields).cubeModelingStateMachine >> 0xc);
                                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                                do {
                                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                                  LOCK();
                                  bVar5 = uVar8 == *puVar9;
                                  if (bVar5) {
                                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                                  }
                                  UNLOCK();
                                } while (!bVar5);
                              }
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
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void InitializePlayModeSystems() */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_InitializePlayModeSystems
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayModeOnlyStateMachine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).canEdit == 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    pPVar2 = (PlayModeOnlyStateMachine *)FUN_?(TypeInfo__PlayModeOnlyStateMachine);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PlayModeOnlyStateTransitionTable);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    FSMEntity::FSMEntity__ctor((FSMEntity *)pPVar2,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (pPVar2->fields).gameObject = pGVar1;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pPVar2->fields).gameObject >> 0xc);
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
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (pPVar2->fields).weCamera = pMVar8;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(pPVar2->fields).weCamera >> 0xc);
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
    this_01 = (PlayModeOnlyStateTransitionTable *)
              FUN_?(TypeInfo__PlayModeOnlyStateTransitionTable);
    PlayModeOnlyStateTransitionTable::PlayModeOnlyStateTransitionTable__ctor
              (this_01,(MethodInfo *)0x0);
    iVar9 = iRam_?;
    (pPVar2->fields)._.transitionTable = (StateTransitionTable *)this_01;
    if (iVar9 != 0) {
      uVar4 = (uint)((ulonglong)&(pPVar2->fields)._.transitionTable >> 0xc);
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
    (this->fields).playModeOnlyStateMachine = pPVar2;
    if (iVar9 != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields).playModeOnlyStateMachine >> 0xc);
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
    pPVar2 = (this->fields).playModeOnlyStateMachine;
    auStackX_8[0] = 0x2f;
    value = (Object *)FUN_?(TypeInfo__PlayModeOnlyEvent,auStackX_8);
    if (pPVar2 == (PlayModeOnlyStateMachine *)0x0) goto code_?;
    FSMEntity::FSMEntity_set_Event((FSMEntity *)pPVar2,value,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).stateMachine = (FSMEntity *)(this->fields).playModeOnlyStateMachine;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).stateMachine >> 0xc);
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
  }
  pDVar10 = (this->fields).desktopPlayModeController;
  if (pDVar10 != (DesktopPlayModeController *)0x0) {
    (*(pDVar10->klass->vtable).Initialize.methodPtr)();
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 != (MVWorldObjectClientManager *)0x0) &&
       (pMVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_get_RootGroup
                            (this_02,(MethodInfo *)0x0), pMVar11 != (MVGroup *)0x0)) {
      (*(pMVar11->klass->vtable).PlayModeInitialize.methodPtr)(pMVar11);
      if ((this->fields).canEdit == 0) {
        pGVar1 = (this->fields).stackBottom;
        if (pGVar1 != (GameObject *)0x0) {
          parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (pGVar1,(MethodInfo *)0x0);
          goto code_?;
        }
      }
      else {
        pMVar12 = (this->fields).materialsController;
        if ((pMVar12 != (MaterialsControllerEditMode *)0x0) &&
           (this_00 = (pMVar12->fields)._.desktopCubeModelingController,
           this_00 != (DesktopCubeModelingController *)0x0)) {
          parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_00,(MethodInfo *)0x0);
code_?:
          pGVar1 = (this->fields).playModeButton;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar13 = 
          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform_
          ;
          if ((
              UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject__UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar13);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pMVar13 = (pMVar13->field7_0x38).rgctx_data[1].method;
          if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
              FUN_?(pMVar13);
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_3
                              ((Object_1 *)pGVar1,parent,0,(MethodInfo *)0x0);
          pvVar15 = ((pMVar13->field7_0x38).rgctx_data)->rgctxDataDummy;
          if ((*(byte *)((longlong)pvVar15 + 0x135) & 1) == 0) {
            pvVar15 = (void *)FUN_?(pvVar15);
          }
          if ((pOVar14 != (Object_1 *)0x0) && (lVar5 = FUN_?(pOVar14,pvVar15), lVar5 == 0)
             ) {
            FUN_?(pOVar14,pvVar15);
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          return;
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


/* Boolean IsGridSnap() */

bool Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_IsGridSnap
               (DesktopEditModeController *this,MethodInfo *method)

{
  return (this->fields).gridSnap;
}


/* Void LeaveEditPlayMode() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_LeaveEditPlayMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  if ((this->fields).enterBuildModeOnceGuard != 0) {
    return;
  }
  this_00 = (this->fields).desktopPlayModeController;
  if ((this_00 != (DesktopPlayModeController *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,1,(MethodInfo *)0x0);
      if ((this->fields).canEdit != 0) {
        DesktopEditModeController_SetState
                  (this,EditorEvent__Enum_ESWaitForBuildModeAvatar,(MethodInfo *)0x0);
        (this->fields).enterBuildModeOnceGuard = 1;
        return;
      }
      DesktopEditModeController_SetState_1
                (this,PlayModeOnlyEvent__Enum_PMOWaitForBuildModeAvatar,(MethodInfo *)0x0);
      (this->fields).enterBuildModeOnceGuard = 1;
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MoveToSelectedObject() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_MoveToSelectedObject
               (DesktopEditModeController *this,MethodInfo *method)

{
  if ((this->fields).canEdit == 0) {
    return;
  }
  this_00 = (this->fields)._EditModeStateMachine_k__BackingField;
  if (this_00 != (EditorStateMachine *)0x0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(this_00,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (((pMVar2 != (MainCameraManager *)0x0) &&
        (pMVar3 = (pMVar2->fields).cameraController, pMVar3 != (MVCameraController *)0x0)) &&
       (this_01 = (pMVar3->fields).cameraStack, this_01 != (MVCameraController_CameraStack *)0x0)) {
      pMVar4 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera
                         (this_01,(MethodInfo *)0x0);
      uStack_5 = 0;
      if (pMVar4 != (MVCameraBase *)0x0) {
        uStack_6 = 0;
        uStack_7 = 0;
        uStack_8 = 0;
        uStack_5 = 0;
        (*(pMVar4->klass->vtable).FocusOnObject.methodPtr)
                  (pMVar4,pMVar1,TypeRef__System__Activator__T._0_4_,&uStack_5,&uStack_8,
                   (pMVar4->klass->vtable).FocusOnObject.method);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnApplicationFocus(Boolean) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_OnApplicationFocus
               (DesktopEditModeController *this,bool focus,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if (focus != 0) {
    (this->fields).focusSuppressInput = 1;
    pcVar2 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcVar1)();
    (this->fields).focusTime = fVar4;
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_OnDestroy
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopEditModeController__OnStackChanged__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).uiStack;
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pUVar1 != (UIStack *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pUVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pUVar1 = (this->fields).uiStack;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__DesktopEditModeController__OnStackChanged__,
                 (MethodInfo *)0x0);
      if (pUVar1 == (UIStack *)0x0) goto code_?;
      UIStack::UIStack_UnSubscribeToStackChanges(pUVar1,(Action *)this_00,(MethodInfo *)0x0);
    }
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar3 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
    if (pMVar3 == (MVGameControllerDesktop *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = iRam_? != 0;
    (pMVar3->fields)._.modeController = (ModeControllerBase *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pMVar3->fields)._.modeController >> 0xc);
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
    FUN_?(0);
  }
  return;
}


/* Void OnStackChanged() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_OnStackChanged
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).chatController;
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
  if (pCVar1 != (ChatControllerUGUI *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pCVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pCVar1 = (this->fields).chatController;
      if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pCVar1,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)
         ) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                          (this_01,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          return;
        }
        this_00 = (this->fields).uiStack;
        if (this_00 != (UIStack *)0x0) {
          bVar2 = UIStack::UIStack_PeakAllowsChatOverlay(this_00,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            return;
          }
          pCVar1 = (this->fields).chatController;
          if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
             (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar1,(MethodInfo *)0x0),
             this_02 != (Transform *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetAsLastSibling
                      (this_02,(MethodInfo *)0x0);
            return;
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void RegisterPlayModeController(DesktopPlayModeController) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_RegisterPlayModeController
               (DesktopEditModeController *this,DesktopPlayModeController *desktopPlayModeController
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DesktopEditModeController__LeaveEditPlayMode__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).desktopPlayModeController = desktopPlayModeController;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).desktopPlayModeController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if ((desktopPlayModeController != (DesktopPlayModeController *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)desktopPlayModeController,(MethodInfo *)0x0),
     this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pUVar6 = (desktopPlayModeController->fields).OnLeaveEditPlayMode;
    this_01 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_01,(Object *)this,MethodInfo__DesktopEditModeController__LeaveEditPlayMode__,
               (MethodInfo *)0x0);
    pUVar6 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar6,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pUVar6 == (UnityAction *)0x0) {
      (desktopPlayModeController->fields).OnLeaveEditPlayMode = (UnityAction *)0x0;
    }
    else {
      pUVar7 = (UnityAction *)0x0;
      if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar6;
      }
      if (pUVar7 == (UnityAction *)0x0) {
        FUN_?(pUVar6,TypeInfo__UnityEngine__Events__UnityAction);
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (desktopPlayModeController->fields).OnLeaveEditPlayMode = pUVar7;
      pUVar7 = (UnityAction *)0x0;
      if (pUVar6->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar7 = pUVar6;
      }
      if (pUVar7 == (UnityAction *)0x0) {
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(desktopPlayModeController->fields).OnLeaveEditPlayMode >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void RegisterShortcuts() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_RegisterShortcuts
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DesktopEditModeController___RegisterShortcuts_b__74_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DesktopEditModeController___RegisterShortcuts_b__74_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__74_0_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (pGVar1,(BaseEventData *)0x0,pEVar2,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
            );
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  pEVar2 = (ExecuteEvents_EventFunction_1_System_Object_ *)
           FUN_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>
                        );
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
  ExecuteEvents_EventFunction_1_System_Object___ctor
            (pEVar2,(Object *)this,
             MethodInfo__DesktopEditModeController___RegisterShortcuts_b__74_1_UnityEngine__EventSystems__IShortcutKeyRegister__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  pMVar3 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IShortcutKeyRegister>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IShortcutKeyRegister>_
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
    if ((pMVar3->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar3);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar4 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar5 = (longlong)(pLVar4->fields)._size;
    uVar6 = 0;
    if (0 < lVar5) {
      lVar7 = 0;
      lVar8 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar4 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar4 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar4->fields)._size <= uVar6) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar10 = (pLVar4->fields)._items;
        if (pTVar10 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar10->max_length <= uVar6) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar10->vector + lVar8 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar11 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,pEVar2,
                           (pMVar3->field7_0x38).rgctx_data[1].method);
        if (bVar11 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 8;
      } while (lVar7 < lVar5);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Set(Boolean) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Set
               (DesktopEditModeController *this,bool snap,MethodInfo *method)

{
  (this->fields).gridSnap = snap;
  return;
}


/* Void SetState(EditorEvent) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetState
               (DesktopEditModeController *this,EditorEvent__Enum editorEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).stateMachine;
  evt = (Object *)FUN_?(TypeInfo__EditorEvent,&stack0x00000010);
  if (pFVar1 == (FSMEntity *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pFVar1->fields).lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
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
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pFVar1->fields).nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pFVar1->fields).nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pFVar1->fields).currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pFVar1->fields).currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pFVar1->fields).currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (pFVar1->fields).transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pFVar1->fields).currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pFVar1->fields).stateName = pSVar3;
      func_?(&(pFVar1->fields).stateName);
      (pFVar1->fields).currentState = pIVar10;
      func_?(&(pFVar1->fields).currentState);
      (pFVar1->fields).nextEvent = (Object *)0x0;
      func_?(&(pFVar1->fields).nextEvent);
      (pFVar1->fields).prevEvent = (pFVar1->fields).curEvent;
      func_?(&pFVar1->fields);
      (pFVar1->fields).curEvent = evt;
      func_?(&(pFVar1->fields).curEvent);
      if ((pFVar1->fields).currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pFVar1->fields).data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pFVar1->fields).clearStack == 0) {
      (pFVar1->fields).clearStack = 1;
    }
    else {
      pSVar11 = (pFVar1->fields).stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void SetState(PlayModeOnlyEvent) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetState_1
               (DesktopEditModeController *this,PlayModeOnlyEvent__Enum playModeOnlyEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlayModeOnlyEvent);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).stateMachine;
  evt = (Object *)FUN_?(TypeInfo__PlayModeOnlyEvent,&stack0x00000010);
  if (pFVar1 == (FSMEntity *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar3 = StringLiteral_State_is_locked__could_not_set_s;
  if ((pFVar1->fields).lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_4(pSVar3,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
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
    pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar4 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,2,pSVar3);
    return;
  }
  bVar5 = iRam_? != 0;
  (pFVar1->fields).nextEvent = evt;
  if (bVar5) {
    uVar6 = (uint)((ulonglong)&(pFVar1->fields).nextEvent >> 0xc);
    lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
      puVar9 = (ulonglong *)(lVar7 + 0xADDR);
      LOCK();
      bVar5 = uVar8 == *puVar9;
      if (bVar5) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar5);
  }
  if (evt == (Object *)0x0) {
    if ((pFVar1->fields).currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar5 = iRam_? != 0;
    (pFVar1->fields).currentState = (IState *)0x0;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(pFVar1->fields).currentState >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
  }
  else {
    this_00 = (pFVar1->fields).transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((pFVar1->fields).currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar3 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (pFVar1->fields).stateName = pSVar3;
      func_?(&(pFVar1->fields).stateName);
      (pFVar1->fields).currentState = pIVar10;
      func_?(&(pFVar1->fields).currentState);
      (pFVar1->fields).nextEvent = (Object *)0x0;
      func_?(&(pFVar1->fields).nextEvent);
      (pFVar1->fields).prevEvent = (pFVar1->fields).curEvent;
      func_?(&pFVar1->fields);
      (pFVar1->fields).curEvent = evt;
      func_?(&(pFVar1->fields).curEvent);
      if ((pFVar1->fields).currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(pFVar1->fields).data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((pFVar1->fields).clearStack == 0) {
      (pFVar1->fields).clearStack = 1;
    }
    else {
      pSVar11 = (pFVar1->fields).stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void SetUIReady() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_SetUIReady
               (DesktopEditModeController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DesktopEditModeController__SetUIReady__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).uiStack;
  if (this_00 != (UIStack *)0x0) {
    (this_00->fields).stackReady = 1;
    UIStack::UIStack_UpdateStack(this_00,(MethodInfo *)0x0);
    pCVar1 = (this->fields).chatController;
    if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pCVar1,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      pCVar1 = (this->fields).chatController;
      if ((pCVar1 != (ChatControllerUGUI *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pCVar1,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar2 = (obj->fields)._._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar2);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar5 != (MVGameControllerBase *)0x0) &&
           (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
           pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
          pAVar7 = (pFVar6->fields).callbacks;
          this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (this_02,(Object *)this,MethodInfo__DesktopEditModeController__SetUIReady__,
                     (MethodInfo *)0x0);
          pAVar8 = (Action *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pAVar7,(Delegate *)this_02,(MethodInfo *)0x0);
          pAVar7 = (Action *)0x0;
          if (pAVar8 != (Action *)0x0) {
            if (pAVar8->klass == TypeInfo__System__Action) {
              pAVar7 = pAVar8;
            }
            if (pAVar7 == (Action *)0x0) {
              FUN_?(pAVar8);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase,0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar5 != (MVGameControllerBase *)0x0) &&
             (pFVar6 = (pMVar5->fields).firstFrameUpdateActorReady,
             pFVar6 != (FirstFrameUpdateActorReady *)0x0)) {
            bVar9 = iRam_? != 0;
            (pFVar6->fields).callbacks = pAVar7;
            if (bVar9) {
              uVar10 = (uint)((ulonglong)&(pFVar6->fields).callbacks >> 0xc);
              puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar12 = *puVar11;
                LOCK();
                uVar13 = *puVar11;
                if (uVar12 == uVar13) {
                  *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (uVar12 != uVar13);
            }
            return;
          }
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
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


/* Void Update() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController_Update
               (DesktopEditModeController *this,MethodInfo *method)

{
  ModeControllerBase::ModeControllerBase_HandleFpsShortcut
            ((ModeControllerBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).focusSuppressInput != 0) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    cVar3 = (*pcRam_?)(0x143);
    if (cVar3 == '\0') {
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      cVar3 = (*pcRam_?)(0x144);
    }
    else {
      cVar3 = '\x01';
    }
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar4 = (float)(*pcRam_?)();
    if (_UNK_? < fVar4 - (this->fields).focusTime || cVar3 != '\0') {
      (this->fields).focusSuppressInput = 0;
    }
    else {
      if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      MVInputWrapper::MVInputWrapper_SuppressAllInput((MethodInfo *)0x0);
    }
  }
  pFVar5 = (this->fields).stateMachine;
  if (pFVar5 != (FSMEntity *)0x0) {
    (*(pFVar5->klass->vtable).Update.methodPtr)(pFVar5,(pFVar5->klass->vtable).Update.method);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__DesktopEditModeController___HandleInput_b__50_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                  ,0);
    LOCK();
    UNLOCK();
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
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&
                  InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_PauseMenu,KeyState__Enum_Down,(MethodInfo *)0x0);
  if (bVar6 != 0) {
    pUVar7 = (this->fields).uiStack;
    if (pUVar7 == (UIStack *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar8 = (pUVar7->fields).stackableUiElements;
    if (pLVar8 == (List_1_UIStack_StackElement_ *)0x0) goto code_?;
    if ((pLVar8->fields)._size < 3) {
      pIVar9 = (this->fields).inEditMenuPrefab;
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pIVar9 = (InEditMenu *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                          ((Object *)pIVar9,parent,0,
                           InEditMenu_MethodInfo__UnityEngine__Object__Instantiate<InEditMenu>_InEditMenu__UnityEngine__Transform__bool_
                          );
      bVar10 = iRam_? != 0;
      (this->fields).inEditMenu = pIVar9;
      if (bVar10) {
        uVar11 = (uint)((ulonglong)&(this->fields).inEditMenu >> 0xc);
        puVar12 = (ulonglong *)((ulonglong)((uVar11 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar13 = *puVar12;
          LOCK();
          uVar14 = *puVar12;
          if (uVar13 == uVar14) {
            *puVar12 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (uVar13 != uVar14);
      }
      pIVar9 = (this->fields).inEditMenu;
      if (pIVar9 == (InEditMenu *)0x0) goto code_?;
      InEditMenu::InEditMenu_Initialize(pIVar9,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__DesktopEditModeController___HandleInput_b__50_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (root,(BaseEventData *)0x0,this_00,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                    (KogamaControls__Enum_Deprecated_ToggleHD,KeyState__Enum_Down,(MethodInfo *)0x0)
  ;
  if (bVar6 == 0) {
    return;
  }
  pUVar7 = (this->fields).uiStack;
  if (pUVar7 != (UIStack *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<UIStack::StackElement>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar8 = (pUVar7->fields).stackableUiElements;
    if (pLVar8 != (List_1_UIStack_StackElement_ *)0x0) {
      if (2 < (pLVar8->fields)._size) {
        return;
      }
      if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
        FUN_?();
      }
      NotificationController::NotificationController_ToggleHDIsDeprecated((MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <HandleInput>b__50_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController__HandleInput_b__50_0
               (DesktopEditModeController *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).inEditMenu;
  if (this_00 != (InEditMenu *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
              ((Component *)this_00,(MethodInfo *)0x0);
    if (x != (IUIStack *)0x0) {
      FUN_?();
      return;
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterShortcuts>b__74_0(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__74_0
               (DesktopEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DesktopEditModeController__Respawn__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__DesktopEditModeController__Respawn__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <RegisterShortcuts>b__74_1(IShortcutKeyRegister, BaseEventData) */

void Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController__RegisterShortcuts_b__74_1
               (DesktopEditModeController *this,IShortcutKeyRegister *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__DesktopEditModeController__MoveToSelectedObject__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IShortcutKeyRegister);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__DesktopEditModeController__MoveToSelectedObject__,
             (MethodInfo *)0x0);
  if (x != (IShortcutKeyRegister *)0x0) {
    FUN_?();
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* DesktopEditModeController() */

void Assembly-CSharp.dll::DesktopEditModeController::DesktopEditModeController__ctor
               (DesktopEditModeController *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).enterBuildModeOnceGuard = 1;
  (this->fields).storedRenderLogicState = 1;
  (this->fields).focusSuppressInput = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af36,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Boolean get_IsInPlayInEditMode() */

bool Assembly-CSharp.dll::DesktopEditModeController::
     DesktopEditModeController_get_IsInPlayInEditMode
               (DesktopEditModeController *this,MethodInfo *method)

{
  return (this->fields).isInPlayInEditMode;
}

