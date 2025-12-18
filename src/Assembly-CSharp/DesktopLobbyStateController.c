
/* Void CreateStartGoldRewardPopup() */

void Assembly-CSharp.dll::DesktopLobbyStateController::
     DesktopLobbyStateController_CreateStartGoldRewardPopup
               (DesktopLobbyStateController *this,MethodInfo *method)

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
                  MethodInfo__DesktopLobbyStateController____c__DisplayClass24_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DesktopLobbyStateController____c__DisplayClass24_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DesktopLobbyStateController____c__DisplayClass24_0);
  pGVar1 = (this->fields).startGoldRewardPopupPrefab;
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
             MethodInfo__DesktopLobbyStateController____c__DisplayClass24_0___CreateStartGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void InitializeGamePassesUI() */

void Assembly-CSharp.dll::DesktopLobbyStateController::
     DesktopLobbyStateController_InitializeGamePassesUI
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  pGVar1 = (this->fields).gamePassesUIPrefab;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GamePassesUI *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                     ((Object *)pGVar1,parent,0,
                      GamePassesUI_MethodInfo__UnityEngine__Object__Instantiate<GamePassesUI>_GamePassesUI__UnityEngine__Transform__bool_
                     );
  bVar2 = iRam_? != 0;
  (this->fields).gamePassesUI = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gamePassesUI >> 0xc);
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
  pGVar1 = (this->fields).gamePassesUI;
  if (pGVar1 != (GamePassesUI *)0x0) {
    GamePassesUI::GamePassesUI_Initialize(pGVar1,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gamePassesUI;
    if (pGVar1 != (GamePassesUI *)0x0) {
      GamePassesUI::GamePassesUI_TryShowWelcomeReward(pGVar1,(MethodInfo *)0x0);
      bVar7 = GamePassProgressionController::GamePassProgressionController_get_IsProgressionEnabled
                        ((MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar8 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar8 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar8->fields).gameMode != 0) {
          lVar9 = FUN_?();
          if (lVar9 == 0) goto code_?;
          if (*(int *)(lVar9 + 0x20) != 4) {
            return;
          }
        }
      }
      pGVar1 = (this->fields).gamePassesUI;
      if ((pGVar1 != (GamePassesUI *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pGVar1,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,0,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (GameObject *)0x0) {
          FUN_?();
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pvVar11 = (obj->fields)._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcVar10 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pcRam_? = pcVar10;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar11,0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeLobbyMenuButtons(Boolean) */

void Assembly-CSharp.dll::DesktopLobbyStateController::
     DesktopLobbyStateController_InitializeLobbyMenuButtons
               (DesktopLobbyStateController *this,bool isTourist,MethodInfo *method)

{
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 != (EmbeddedPlayerConfig *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pEVar1->fields).initialized == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
      uStackY_30._0_4_ = (pEVar1->fields).kogamaDefaultData.siteEnum;
      uStackY_30._4_1_ = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
      uStackY_30._5_1_ = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
      uStackY_30._6_1_ = (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
      uStackY_30._7_1_ = (pEVar1->fields).kogamaDefaultData.allowsModals;
      uVar2 = (pEVar1->fields).kogamaDefaultData.hideGoldShop;
      cVar3 = uVar2;
    }
    else {
      uStackY_30._0_4_ = (pEVar1->fields).currentSite.siteEnum;
      uStackY_30._4_1_ = (pEVar1->fields).currentSite.showTouristPromotion;
      uStackY_30._5_1_ = (pEVar1->fields).currentSite.allowsOpenInNewTab;
      uStackY_30._6_1_ = (pEVar1->fields).currentSite.allowsRedirectToWebpage;
      uStackY_30._7_1_ = (pEVar1->fields).currentSite.allowsModals;
      cVar3 = (pEVar1->fields).currentSite.hideGoldShop;
    }
    if (isTourist == 0) {
      bVar4 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVClientSettings);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      bVar4 = (byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 2);
    }
    if (((char)((ulonglong)uStackY_30 >> 0x38) == '\0') &&
       ((char)((ulonglong)uStackY_30 >> 0x28) == '\0')) {
      uVar5 = (ushort)((ulonglong)uStackY_30 >> 0x30) & 0xff;
    }
    else {
      uVar5 = 1;
    }
    pGVar6 = (this->fields).touristRegisterButton;
    if (pGVar6 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar6,bVar4 & uVar5 != 0,(MethodInfo *)0x0);
      if (cVar3 == '\0') {
        if (isTourist == 0) {
          value = 1;
        }
        else {
          value = uVar5 != 0 & isTourist;
        }
      }
      else {
        value = 0;
      }
      pGVar6 = (this->fields).avatarAccessoriesButton;
      if (pGVar6 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar6,value,(MethodInfo *)0x0);
        pGVar6 = (this->fields).adminObserveButton;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar7 != (MVGameControllerBase *)0x0) &&
            (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
           (this_00 = (pMVar8->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
          uVar9 = 0;
          pMVar10 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
          if (pMVar10 != (MVLocalPlayer *)0x0) {
            if ((pMVar10->fields)._._ProfileID_k__BackingField < 1) {
              uVar9 = uVar9 & 0xffffffffffffff00;
            }
            else {
              pUVar11 = (pMVar10->fields)._._UserProfileData_k__BackingField;
              if (pUVar11 == (UserProfileData *)0x0) goto code_?;
              uVar9 = (ulonglong)(pUVar11->fields).IsAdmin;
            }
            if (pGVar6 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,uVar9,0,in_R9,unaff_RSI);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar6 == (GameObject *)0x0) {
                FUN_?();
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pvVar13 = (pGVar6->fields)._.m_CachedPtr;
              if (pvVar13 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar6,(MethodInfo *)0x0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcVar12 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              pcRam_? = pcVar12;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar13,uVar9 & 0xff);
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_OnDisable
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (pMVar1 != (MainCameraManager *)0x0) {
    if ((pMVar1->fields).maskMode != 1) {
      return;
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar1 != (MainCameraManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&StringLiteral_CamRotateTarget);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (pMVar1->fields).maskMode = 0;
      pCVar2 = (pMVar1->fields).mainCamera;
      if (pCVar2 != (Camera *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar2,(pMVar1->fields).cullingMask,(MethodInfo *)0x0);
        bVar3 = (pMVar1->fields).isLogicRendered;
        (pMVar1->fields).blueModeEnabled = 0;
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_Logic);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pCVar2 = (pMVar1->fields).mainCamera;
        if (bVar3 == 0) {
          if (pCVar2 == (Camera *)0x0) {
code_?:
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                            (pCVar2,(MethodInfo *)0x0);
          uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Logic,(MethodInfo *)0x0);
          uVar5 = uVar5 & ~(1 << (uVar6 & 0x1f));
        }
        else {
          if (pCVar2 == (Camera *)0x0) goto code_?;
          uVar5 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask
                            (pCVar2,(MethodInfo *)0x0);
          uVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                            (StringLiteral_Logic,(MethodInfo *)0x0);
          uVar5 = uVar5 | 1 << (uVar6 & 0x1f);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                  (pCVar2,uVar5,(MethodInfo *)0x0);
        (pMVar1->fields).isLogicRendered = bVar3;
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_OnEnable
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePassesUI;
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
  if (pGVar1 != (GamePassesUI *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pGVar1 = (this->fields).gamePassesUI;
      if (pGVar1 != (GamePassesUI *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)pGVar1,(MethodInfo *)0x0);
        bVar2 = GamePassProgressionController::
                GamePassProgressionController_get_IsProgressionEnabled((MethodInfo *)0x0);
        if (bVar2 == 0) {
          bVar2 = 0;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__GamePassesManager);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          bVar2 = TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
        }
        if (this_00 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_00,bVar2 != 0,(MethodInfo *)0x0);
          goto 
          Assembly_CSharp_dll_DesktopLobbyStateController_DesktopLobbyStateController_SetCamMaskMode
          ;
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
Assembly_CSharp_dll_DesktopLobbyStateController_DesktopLobbyStateController_SetCamMaskMode:
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar4 != (GameSessionData *)0x0) {
    if ((pGVar4->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar4 != (GameSessionData *)0x0) {
        if ((pGVar4->fields).gameMode != 0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar5 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar5->fields).maskMode = 0;
          pCVar6 = (pMVar5->fields).mainCamera;
          if (pCVar6 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (pCVar6,(pMVar5->fields).cullingMask,(MethodInfo *)0x0);
            (pMVar5->fields).blueModeEnabled = 0;
            MainCameraManager::MainCameraManager_RenderLogic
                      (pMVar5,(pMVar5->fields).isLogicRendered,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar5 != (MainCameraManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_CamRotateTarget);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (pMVar5->fields).maskMode = 1;
        pCVar6 = (pMVar5->fields).mainCamera;
        iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
        if (pCVar6 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar6,1 << ((byte)iVar7 & 0x1f),(MethodInfo *)0x0);
          (pMVar5->fields).blueModeEnabled = 1;
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


/* Void SetCamMaskMode() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_SetCamMaskMode
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 != (GameSessionData *)0x0) {
        if ((pGVar1->fields).gameMode != 0) {
          return;
        }
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0)
        ;
        if (pMVar2 != (MainCameraManager *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&StringLiteral_CamRotateTarget);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          (pMVar2->fields).maskMode = 0;
          pCVar3 = (pMVar2->fields).mainCamera;
          if (pCVar3 != (Camera *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                      (pCVar3,(pMVar2->fields).cullingMask,(MethodInfo *)0x0);
            (pMVar2->fields).blueModeEnabled = 0;
            MainCameraManager::MainCameraManager_RenderLogic
                      (pMVar2,(pMVar2->fields).isLogicRendered,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else {
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (pMVar2 != (MainCameraManager *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&StringLiteral_CamRotateTarget);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        (pMVar2->fields).maskMode = 1;
        pCVar3 = (pMVar2->fields).mainCamera;
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_CamRotateTarget,(MethodInfo *)0x0);
        if (pCVar3 != (Camera *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask
                    (pCVar3,1 << ((byte)iVar4 & 0x1f),(MethodInfo *)0x0);
          (pMVar2->fields).blueModeEnabled = 1;
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetShouldPopOnExit(Boolean) */

void Assembly-CSharp.dll::DesktopLobbyStateController::
     DesktopLobbyStateController_SetShouldPopOnExit
               (DesktopLobbyStateController *this,bool shouldPop,MethodInfo *method)

{
  pLVar1 = (this->fields).lobbyStatePlayButton;
  if (pLVar1 != (LobbyStateButton *)0x0) {
    (pLVar1->fields).shouldPop = shouldPop;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowBoostMenu() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_ShowBoostMenu
               (DesktopLobbyStateController *this,MethodInfo *method)

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
                  BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__DesktopLobbyStateController____c__DisplayClass23_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DesktopLobbyStateController____c__DisplayClass23_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__DesktopLobbyStateController____c__DisplayClass23_0);
  original = (this->fields).boosterMenu;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      BoostMenuController_MethodInfo__UnityEngine__Object__Instantiate<BoostMenuController>_BoostMenuController_
                     );
  if (object != (Object *)0x0) {
    bVar2 = iRam_? != 0;
    object[1].klass = pOVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)(object + 1) >> 0xc);
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
    if (object[1].klass != (Object__Class *)0x0) {
      BoostMenuController::BoostMenuController_Initialize
                ((BoostMenuController *)object[1].klass,(MethodInfo *)0x0);
      pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_01,object,
                 MethodInfo__DesktopLobbyStateController____c__DisplayClass23_0___ShowBoostMenu_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (pGVar7,(BaseEventData *)0x0,this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
      pLVar8 = (this->fields).playButton;
      if ((pLVar8 != (LobbyStateButton *)0x0) &&
         (this_00 = (pLVar8->fields).lobbyStateButton, this_00 != (Button *)0x0)) {
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
                pGVar7 = (pEVar10->fields).m_CurrentSelected;
                pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
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
                if (pGVar11 != (GameObject *)0x0 || pGVar7 != (GameObject *)0x0) {
                  if (pGVar11 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if (pGVar7 == (GameObject *)0x0) goto DAT_?;
                    bVar2 = (pGVar7->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else if (pGVar7 == (GameObject *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    bVar2 = (pGVar11->fields)._.m_CachedPtr == (void *)0x0;
                  }
                  else {
                    bVar2 = pGVar7 == pGVar11;
                  }
                  if (!bVar2) goto code_?;
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
              pcVar12 = (code *)swi(3);
              (*pcVar12)();
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_Start
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    value = (this->fields)._.cameraMaskMode;
    player = (MVPlayer *)(ulonglong)value;
    method_00 = (MethodInfo *)0x0;
    MainCameraManager::MainCameraManager_set_CamMaskMode(this_00,value,(MethodInfo *)0x0);
    if ((this->fields)._.haveSetSelectedTeam == 0) {
      MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player,method_00);
      if (extraout_RAX == 0) goto code_?;
      (this->fields)._.selectedTeam = *(int32_t *)(extraout_RAX + 0x84);
    }
    LobbyFlowMenu::LobbyFlowMenu_UpdateAvailableMenues((LobbyFlowMenu *)this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar1 != (GameSessionData *)0x0) {
      iVar2 = (pGVar1->fields).profileID;
      DesktopLobbyStateController_InitializeLobbyMenuButtons(this,iVar2 < 1,(MethodInfo *)0x0);
      DesktopLobbyStateController_SetCamMaskMode(this,(MethodInfo *)0x0);
      DesktopLobbyStateController_InitializeGamePassesUI(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar3 != (MVGameControllerBase *)0x0) &&
         (pGVar4 = (pMVar3->fields).goldRewardManager, pGVar4 != (GoldRewardManager *)0x0)) {
        bVar5 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar4,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar3 != (MVGameControllerBase *)0x0) &&
           (pGVar4 = (pMVar3->fields).goldRewardManager, pGVar4 != (GoldRewardManager *)0x0)) {
          bVar6 = 0;
          if (0 < iVar2) {
            bVar6 = bVar5;
          }
          if (((pGVar4->fields).isCountingDownGoldReward == 0 & bVar6) == 0) {
            obj = (this->fields).goldIconOnPlayButton;
            if (obj != (GameObject *)0x0) {
              uVar7 = 0;
code_?:
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,uVar7,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (obj == (GameObject *)0x0) {
                FUN_?();
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pvVar9 = (obj->fields)._.m_CachedPtr;
              if (pvVar9 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcVar8 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pcRam_? = pcVar8;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar9,uVar7);
              return;
            }
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar3 != (MVGameControllerBase *)0x0) &&
               (pGVar4 = (pMVar3->fields).goldRewardManager, pGVar4 != (GoldRewardManager *)0x0)) {
              GoldRewardManager::GoldRewardManager_StartGoldRewardCountdownWhenReady
                        (pGVar4,(MethodInfo *)0x0);
              obj = (this->fields).goldIconOnPlayButton;
              if (obj != (GameObject *)0x0) {
                uVar7 = 1;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DesktopLobbyStateController::DesktopLobbyStateController_Update
               (DesktopLobbyStateController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields).lobbyStateBlockingOverlay;
  bVar2 = MVGameControllerDesktop::MVGameControllerDesktop_get_IsCursorLock((MethodInfo *)0x0);
  if (pIVar1 == (Image *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(pIVar1->klass->vtable).set_raycastTarget.methodPtr)(pIVar1,(ulonglong)bVar2);
  pSVar4 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                      ((MethodInfo *)0x0);
  if ((pSVar4 == (SpawnRoleDataMediator *)0x0) ||
     (pSVar5 = (pSVar4->fields).SpawnRoleModeTypeWrapper, pSVar5 == (SpawnRoleModeTypeWrapper *)0x0
     )) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__get_Value__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar6 = (pSVar5->fields).spawnRoleType;
  if ((pSVar6 == (SpawnRoleVariable_1_MV_Common_SpawnRoleModeType_ *)0x0) ||
     (pSVar7 = (pSVar6->fields).subscribableVariable,
     pSVar7 == (SubscribableVariable_1_MV_Common_SpawnRoleModeType_ *)0x0))
  goto code_?;
  pGVar8 = (this->fields).respawnButton;
  if (((pSVar7->fields)._.value & 1) == 0) {
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar9 = 0;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar8,(MethodInfo *)0x0);
    if (bVar2 == 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar9 = 0;
  }
  else {
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar9 = 0;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                       (pGVar8,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    pGVar8 = (this->fields).respawnButton;
    if (pGVar8 == (GameObject *)0x0) goto code_?;
    uVar9 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar8,(bool)uVar9,(MethodInfo *)0x0);
code_?:
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
  pMVar10 = (MVInputWrapper_InputSuppression *)
            FUN_?(TypeInfo__MVInputWrapper__InputSuppression);
  pIVar11 = (pMVar10->klass->vtable).set_IsSuppressed.methodPtr;
  (*pIVar11)(pMVar10,CONCAT71((int7)((ulonglong)uVar9 >> 8),1),
            (pMVar10->klass->vtable).set_IsSuppressed.method,pIVar11,unaff_RBX);
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MVInputWrapper);
  }
  TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed = pMVar10;
  if (iRam_? != 0) {
    uVar12 = (uint)((ulonglong)&TypeInfo__MVInputWrapper->static_fields->isInGameInputSuppressed >>
                   0xc);
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
  return;
}

