
/* Void Initialize(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_Initialize
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  PlayerElementState_SetupButtons(this,player,friend_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                  ,player,friend_1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).pendingFriendship;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).cancel;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).acceptFriendRequest;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).requestFriendship;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).manageUserButton;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar3 == (MVGameControllerBase *)0x0) ||
       (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     ((this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      player == (MVPlayer *)0x0 || (this_02 == (MVLocalPlayer *)0x0)))) goto code_?;
  iVar5 = (this_02->fields)._._ActorNr_k__BackingField;
  iVar6 = (player->fields)._ActorNr_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar7->fields).gameMode == 0) {
code_?:
    pLVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_02,(MethodInfo *)0x0);
    if (pLVar8 == (List_1_MV_Common_PlanetPermissionType_ *)0x0) goto code_?;
    if ((pLVar8->fields)._size == 0) {
      bVar9 = false;
    }
    else {
      iVar10 = FUN_?(pLVar8);
      bVar9 = iVar10 != -1;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar7->fields).gameMode == 4) goto code_?;
    bVar9 = false;
  }
  value = false;
  pBVar1 = (this->fields).manageUserButton;
  if (pBVar1 != (Button *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pBVar1,(MethodInfo *)0x0);
    iVar10 = (this_02->fields)._._ProfileID_k__BackingField;
    if (iVar10 != 0) {
      if (iVar10 < 1) {
        bVar11 = 0;
      }
      else {
        pUVar12 = (this_02->fields)._._UserProfileData_k__BackingField;
        if (pUVar12 == (UserProfileData *)0x0) goto code_?;
        bVar11 = (pUVar12->fields).IsAdmin;
      }
      if (bVar9 || bVar11 != 0) {
        value = iVar6 != iVar5;
      }
    }
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,value,(MethodInfo *)0x0);
      if ((((player->fields)._ProfileID_k__BackingField == 0) ||
          ((this_02->fields)._._ProfileID_k__BackingField == 0)) || (iVar6 == iVar5)) {
        return;
      }
      pBVar1 = (this->fields).requestFriendship;
      if ((pBVar1 != (Button *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,friend_1 == (Friend *)0x0,(MethodInfo *)0x0);
        if (friend_1 == (Friend *)0x0) {
          return;
        }
        if ((friend_1->fields).status != 1) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar4 != (MVNetworkGame *)0x0) &&
            (pFVar13 = (pMVar4->fields)._Friends_k__BackingField, pFVar13 != (FriendList *)0x0)) &&
           (this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)(pFVar13->fields).friends,
           this_01 !=
           (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                            (this_01,(Object *)friend_1,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                            );
          pBVar1 = (this->fields).pendingFriendship;
          if ((pBVar1 != (Button *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar1,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,bVar11,(MethodInfo *)0x0);
            pBVar1 = (this->fields).cancel;
            if ((pBVar1 != (Button *)0x0) &&
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,bVar11 ^ 1,(MethodInfo *)0x0);
              pBVar1 = (this->fields).acceptFriendRequest;
              if ((pBVar1 != (Button *)0x0) &&
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0),
                 pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,bVar11 ^ 1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void OpenUserManagement() */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_OpenUserManagement
               (PlayerElementState *this,MethodInfo *method)

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
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerElementState____c__DisplayClass9_0___OpenUserManagement_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerElementState____c__DisplayClass9_0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlayerElementState____c__DisplayClass9_1___OpenUserManagement_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerElementState____c__DisplayClass9_1);
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
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar2->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     (this_01 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 == (MVLocalPlayer *)0x0)) goto code_?;
  if (0 < (this_01->fields)._._ProfileID_k__BackingField) {
    pUVar3 = (this_01->fields)._._UserProfileData_k__BackingField;
    if (pUVar3 == (UserProfileData *)0x0) goto code_?;
    if ((pUVar3->fields).IsAdmin != 0) {
      object = (Object *)FUN_?(TypeInfo__PlayerElementState____c__DisplayClass9_0);
      original = (this->fields).adminToolsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           AdminToolController_MethodInfo__UnityEngine__Object__Instantiate<AdminToolController>_AdminToolController_
                          );
      if (object == (Object *)0x0) goto code_?;
      bVar5 = iRam_? != 0;
      object[1].klass = pOVar4;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
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
      pTVar10 = (this->fields).playerName;
      pOVar4 = object[1].klass;
      if ((pTVar10 == (Text *)0x0) ||
         (pSVar11 = (String *)
                    (*(pTVar10->klass->vtable).get_text.methodPtr)
                              (pTVar10,(pTVar10->klass->vtable).get_text.method),
         pOVar4 == (Object__Class *)0x0)) goto code_?;
      AdminToolController::AdminToolController_Initialize
                ((AdminToolController *)pOVar4,pSVar11,(MethodInfo *)0x0);
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      method_1 = 
      MethodInfo__PlayerElementState____c__DisplayClass9_0___OpenUserManagement_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
      ;
      goto code_?;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar12 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar12 != (GameSessionData *)0x0) {
    if ((pGVar12->fields).gameMode != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar12 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar12 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar12->fields).gameMode != 4) {
        return;
      }
    }
    pLVar13 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_01,(MethodInfo *)0x0);
    if (pLVar13 != (List_1_MV_Common_PlanetPermissionType_ *)0x0) {
      if ((pLVar13->fields)._size == 0) {
        return;
      }
      iVar14 = FUN_?(pLVar13,CONCAT71((int7)((ulonglong)
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                                                  ->klass >> 8),0x16));
      if (iVar14 == -1) {
        return;
      }
      object = (Object *)FUN_?(TypeInfo__PlayerElementState____c__DisplayClass9_1);
      original_00 = (this->fields).ownerToolsPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar4 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_00,
                           OwnerToolController_MethodInfo__UnityEngine__Object__Instantiate<OwnerToolController>_OwnerToolController_
                          );
      if (object != (Object *)0x0) {
        bVar5 = iRam_? != 0;
        object[1].klass = pOVar4;
        if (bVar5) {
          uVar6 = (uint)((ulonglong)(object + 1) >> 0xc);
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
        pTVar10 = (this->fields).playerName;
        pOVar4 = object[1].klass;
        if ((pTVar10 != (Text *)0x0) &&
           (pSVar11 = (String *)
                      (*(pTVar10->klass->vtable).get_text.methodPtr)
                                (pTVar10,(pTVar10->klass->vtable).get_text.method),
           pOVar4 != (Object__Class *)0x0)) {
          OwnerToolController::OwnerToolController_Initialize
                    ((OwnerToolController *)pOVar4,pSVar11,(MethodInfo *)0x0);
          root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
          this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                 );
          method_1 = 
          MethodInfo__PlayerElementState____c__DisplayClass9_1___OpenUserManagement_b__1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
          ;
code_?:
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
          Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                    (this_02,object,method_1,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
          ExecuteEvents_ExecuteHierarchy
                    (root,(BaseEventData *)0x0,this_02,
                     UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                    );
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void SetButtonVisibility(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_SetButtonVisibility
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::Common::PlanetPermissionType>__Contains_MV__Common__PlanetPermissionType_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).pendingFriendship;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).cancel;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).acceptFriendRequest;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).requestFriendship;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  pBVar1 = (this->fields).manageUserButton;
  if ((pBVar1 == (Button *)0x0) ||
     (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 == (GameObject *)0x0))
  goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar2,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar3 == (MVGameControllerBase *)0x0) ||
       (pMVar4 = (pMVar3->fields).game, pMVar4 == (MVNetworkGame *)0x0)) ||
      (this_00 = (pMVar4->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
     ((this_02 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      player == (MVPlayer *)0x0 || (this_02 == (MVLocalPlayer *)0x0)))) goto code_?;
  iVar5 = (this_02->fields)._._ActorNr_k__BackingField;
  iVar6 = (player->fields)._ActorNr_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar7->fields).gameMode == 0) {
code_?:
    pLVar8 = MVLocalPlayer::MVLocalPlayer_get_PlanetPermissions(this_02,(MethodInfo *)0x0);
    if (pLVar8 == (List_1_MV_Common_PlanetPermissionType_ *)0x0) goto code_?;
    if ((pLVar8->fields)._size == 0) {
      bVar9 = false;
    }
    else {
      iVar10 = FUN_?(pLVar8);
      bVar9 = iVar10 != -1;
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar7 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar7->fields).gameMode == 4) goto code_?;
    bVar9 = false;
  }
  value = false;
  pBVar1 = (this->fields).manageUserButton;
  if (pBVar1 != (Button *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)pBVar1,(MethodInfo *)0x0);
    iVar10 = (this_02->fields)._._ProfileID_k__BackingField;
    if (iVar10 != 0) {
      if (iVar10 < 1) {
        bVar11 = 0;
      }
      else {
        pUVar12 = (this_02->fields)._._UserProfileData_k__BackingField;
        if (pUVar12 == (UserProfileData *)0x0) goto code_?;
        bVar11 = (pUVar12->fields).IsAdmin;
      }
      if (bVar9 || bVar11 != 0) {
        value = iVar6 != iVar5;
      }
    }
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,value,(MethodInfo *)0x0);
      if ((((player->fields)._ProfileID_k__BackingField == 0) ||
          ((this_02->fields)._._ProfileID_k__BackingField == 0)) || (iVar6 == iVar5)) {
        return;
      }
      pBVar1 = (this->fields).requestFriendship;
      if ((pBVar1 != (Button *)0x0) &&
         (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)pBVar1,(MethodInfo *)0x0), pGVar2 != (GameObject *)0x0)
         ) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,friend_1 == (Friend *)0x0,(MethodInfo *)0x0);
        if (friend_1 == (Friend *)0x0) {
          return;
        }
        if ((friend_1->fields).status != 1) {
          return;
        }
        pMVar4 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar4 != (MVNetworkGame *)0x0) &&
            (pFVar13 = (pMVar4->fields)._Friends_k__BackingField, pFVar13 != (FriendList *)0x0)) &&
           (this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)(pFVar13->fields).friends,
           this_01 !=
           (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__ContainsValue
                            (this_01,(Object *)friend_1,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__ContainsValue_Friend_
                            );
          pBVar1 = (this->fields).pendingFriendship;
          if ((pBVar1 != (Button *)0x0) &&
             (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pBVar1,(MethodInfo *)0x0),
             pGVar2 != (GameObject *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar2,bVar11,(MethodInfo *)0x0);
            pBVar1 = (this->fields).cancel;
            if ((pBVar1 != (Button *)0x0) &&
               (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0),
               pGVar2 != (GameObject *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar2,bVar11 ^ 1,(MethodInfo *)0x0);
              pBVar1 = (this->fields).acceptFriendRequest;
              if ((pBVar1 != (Button *)0x0) &&
                 (pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_gameObject((Component *)pBVar1,(MethodInfo *)0x0),
                 pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,bVar11 ^ 1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SetupButtons(MVPlayer, Friend) */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_SetupButtons
               (PlayerElementState *this,MVPlayer *player,Friend *friend_1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__0__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__1__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__2__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__3__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__PlayerElementState____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__PlayerElementState____c__DisplayClass11_0);
  iVar1 = iRam_?;
  if (object != (Object *)0x0) {
    object[1].klass = (Object__Class *)this;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)(object + 1) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar1 = iRam_?;
      } while (!bVar6);
    }
    object[1].monitor = (MonitorData *)player;
    iVar7 = 0;
    if (iVar1 != 0) {
      uVar2 = (uint)((ulonglong)&object[1].monitor >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
        iVar7 = iRam_?;
      } while (!bVar6);
    }
    object[2].klass = (Object__Class *)friend_1;
    if (iVar7 != 0) {
      uVar2 = (uint)((ulonglong)(object + 2) >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
    pBVar8 = (this->fields).requestFriendship;
    if (pBVar8 != (Button *)0x0) {
      pUVar9 = (UnityEvent *)(pBVar8->fields).m_OnClick;
      pNVar10 = (NavMesh_OnNavMeshPreUpdate *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar10,object,
                 MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__0__,
                 (MethodInfo *)0x0);
      if (pUVar9 != (UnityEvent *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                  (pUVar9,(UnityAction *)pNVar10,(MethodInfo *)0x0);
        pBVar8 = (this->fields).acceptFriendRequest;
        if (pBVar8 != (Button *)0x0) {
          pUVar9 = (UnityEvent *)(pBVar8->fields).m_OnClick;
          pNVar10 = (NavMesh_OnNavMeshPreUpdate *)
                    FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
          UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
          NavMesh_OnNavMeshPreUpdate__ctor
                    (pNVar10,object,
                     MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__1__,
                     (MethodInfo *)0x0);
          if (pUVar9 != (UnityEvent *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                      (pUVar9,(UnityAction *)pNVar10,(MethodInfo *)0x0);
            pBVar8 = (this->fields).cancel;
            if (pBVar8 != (Button *)0x0) {
              pUVar9 = (UnityEvent *)(pBVar8->fields).m_OnClick;
              pNVar10 = (NavMesh_OnNavMeshPreUpdate *)
                        FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar10,object,
                         MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__2__
                         ,(MethodInfo *)0x0);
              if (pUVar9 != (UnityEvent *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityEvent::UnityEvent_AddListener
                          (pUVar9,(UnityAction *)pNVar10,(MethodInfo *)0x0);
                pBVar8 = (this->fields).pendingFriendship;
                if (pBVar8 != (Button *)0x0) {
                  pBVar11 = (pBVar8->fields).m_OnClick;
                  pNVar10 = (NavMesh_OnNavMeshPreUpdate *)
                            FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
                  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
                  NavMesh_OnNavMeshPreUpdate__ctor
                            (pNVar10,object,
                             MethodInfo__PlayerElementState____c__DisplayClass11_0___SetupButtons_b__3__
                             ,(MethodInfo *)0x0);
                  if (pBVar11 != (Button_ButtonClickedEvent *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Events__InvokableCall);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    this_00 = (InvokableCall *)
                              FUN_?(TypeInfo__UnityEngine__Events__InvokableCall);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::InvokableCall::
                    InvokableCall_add_Delegate(this_00,(UnityAction *)pNVar10,(MethodInfo *)0x0);
                    pIVar12 = (pBVar11->fields)._._.m_Calls;
                    if (pIVar12 != (InvokableCallList *)0x0) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Events::BaseInvokableCall>__Add_UnityEngine__Events__BaseInvokableCall_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pLVar13 = (pIVar12->fields).m_RuntimeCalls;
                      if (pLVar13 != (List_1_UnityEngine_Events_BaseInvokableCall_ *)0x0) {
                        FUN_?(pLVar13,this_00);
                        (pIVar12->fields).m_NeedsUpdate = 1;
                        return;
                      }
                    }
                    FUN_?();
                    pcVar14 = (code *)swi(3);
                    (*pcVar14)();
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
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void ValidateFriendRequest() */

void Assembly-CSharp.dll::PlayerElementState::PlayerElementState_ValidateFriendRequest
               (PlayerElementState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BadgeManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_Friend>__get_Count__);
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
    if (pMVar3 != (MVLocalPlayer *)0x0) {
      level = (pMVar3->fields)._.level;
      if (*(int *)&(TypeInfo__BadgeManager->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar4 = BadgeManager::BadgeManager_GetFriendsLimit(level,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((pFVar5 = (pMVar2->fields)._Friends_k__BackingField, pFVar5 != (FriendList *)0x0 &&
          (pDVar6 = (pFVar5->fields).friends, pDVar6 != (Dictionary_2_System_Int32_Friend_ *)0x0))))
      {
        if ((pDVar6->fields)._count - (pDVar6->fields)._freeCount < iVar4) {
          return;
        }
        level_00 = func_?(level);
        uVar7 = func_?(&TypeInfo__BadgeManager);
        func_?(uVar7);
        iVar8 = BadgeManager::BadgeManager_GetFriendsLimit(level_00,(MethodInfo *)0x0);
        pSVar9 = (String *)func_?(&StringLiteral_You_can_only_have__0__friends_at);
        pSVar9 = TM::TM__(pSVar9,(MethodInfo *)0x0);
        uVar7 = func_?(&TypeInfo__System__Object);
        args = (Object__Array *)func_?(uVar7,4);
        aiStackX_18[0] = iVar4;
        uVar7 = func_?(uRam_?,aiStackX_18);
        FUN_?(args);
        FUN_?(args,uVar7);
        FUN_?(args,0,uVar7);
        aiStackX_18[0] = level;
        uVar7 = func_?(uRam_?,aiStackX_18);
        FUN_?(args);
        FUN_?(args,uVar7);
        FUN_?(args,1,uVar7);
        aiStackX_18[0] = level_00;
        uVar7 = func_?(uRam_?,aiStackX_18);
        FUN_?(args);
        FUN_?(args,uVar7);
        FUN_?(args,2,uVar7);
        aiStackX_18[0] = iVar8;
        uVar7 = func_?(uRam_?,aiStackX_18);
        FUN_?(args);
        FUN_?(args,uVar7);
        FUN_?(args,3);
        pSVar9 = Mono.Security.dll::Locale::Locale_1_GetText_1(pSVar9,args,(MethodInfo *)0x0);
        pSVar10 = (String *)func_?(&StringLiteral_Your_friendlist_is_full);
        pSVar10 = TM::TM__(pSVar10,(MethodInfo *)0x0);
        MVGameControllerBase::MVGameControllerBase_PostGameMsg_1
                  (MVGameMsgType__Enum_AdminMsg,pSVar10,(MethodInfo *)0x0);
        uVar7 = func_?(&TypeInfo__System__Exception);
        this_01 = (Exception *)func_?(uVar7);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar9,(MethodInfo *)0x0);
        uVar7 = func_?(&MethodInfo__PlayerElementState__ValidateFriendRequest__);
        FUN_?(this_01,uVar7);
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

