
/* Void KogamaRedirect() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_KogamaRedirect
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_Kogama_Redirect);
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
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 != (MVLocalPlayer *)0x0)) {
    if ((pMVar3->fields)._._ProfileID_k__BackingField != 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
         (GameSessionData *)0x0) &&
       (pEVar4 = (this->fields).embeddedPlayerConfig, pEVar4 != (EmbeddedPlayerConfig *)0x0)) {
      pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                          (&EStack_6,pEVar4,(MethodInfo *)0x0);
      uVar7 = pEVar5->allowsRedirectToWebpage;
      EStack_6.integratedSdk = pEVar5->integratedSdk;
      EStack_6.allowsFallbackAds = pEVar5->allowsFallbackAds;
      EStack_6.showPlayButtonAd = pEVar5->showPlayButtonAd;
      EStack_6.hideGoldShop = pEVar5->hideGoldShop;
      EStack_6.allowInHouseAds = pEVar5->allowInHouseAds;
      EStack_6.removeFullscreenButton = pEVar5->removeFullscreenButton;
      EStack_6.hideSignUp = pEVar5->hideSignUp;
      EStack_6.noPlayButtonVideoIcon = pEVar5->noPlayButtonVideoIcon;
      if (uVar7 == '\0') {
        pEVar4 = (this->fields).embeddedPlayerConfig;
        if (pEVar4 == (EmbeddedPlayerConfig *)0x0) goto code_?;
        pEVar5 = EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                            (&EStack_6,pEVar4,(MethodInfo *)0x0);
        uVar8 = pEVar5->allowsOpenInNewTab;
        EStack_6.integratedSdk = pEVar5->integratedSdk;
        EStack_6.allowsFallbackAds = pEVar5->allowsFallbackAds;
        EStack_6.showPlayButtonAd = pEVar5->showPlayButtonAd;
        EStack_6.hideGoldShop = pEVar5->hideGoldShop;
        EStack_6.allowInHouseAds = pEVar5->allowInHouseAds;
        EStack_6.removeFullscreenButton = pEVar5->removeFullscreenButton;
        EStack_6.hideSignUp = pEVar5->hideSignUp;
        EStack_6.noPlayButtonVideoIcon = pEVar5->noPlayButtonVideoIcon;
        if (uVar8 == '\0') {
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
                          MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          object = (Object *)FUN_?(TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0)
          ;
          pGVar9 = (this->fields).goToKogamaPopupPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar10 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)pGVar9,
                               UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                              );
          if (object != (Object *)0x0) {
            bVar11 = iRam_? != 0;
            object[1].klass = pOVar10;
            if (bVar11) {
              uVar12 = (uint)((ulonglong)(object + 1) >> 0xc);
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
            pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                ((Component *)this,(MethodInfo *)0x0);
            this_01 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_01,object,
                       MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (pGVar9,(BaseEventData *)0x0,this_01,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            return;
          }
          goto code_?;
        }
      }
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      StatHatWrapper::StatHatWrapper_Count
                (StringLiteral_TouristPromotion_Kogama_Redirect,1,(MethodInfo *)0x0);
      pEVar4 = (this->fields).embeddedPlayerConfig;
      if (pEVar4 != (EmbeddedPlayerConfig *)0x0) {
        EmbeddedPlayerConfig::EmbeddedPlayerConfig_GetCurrentSiteData
                  (&EStack_6,pEVar4,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__BrowserComm,0,0);
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
        if ((pMVar1 == (MVGameControllerBase *)0x0) ||
           (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
          FUN_?();
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pSVar17 = (pMVar2->fields)._KogamaMainpageURL_k__BackingField;
        if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Application);
          LOCK();
          UNLOCK();
          FUN_?(&TypeInfo__BrowserComm);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__BrowserComm);
        }
        if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest != 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Application,0);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
            LOCK();
            UNLOCK();
            FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          EStack_6.sites = (List_1_System_String_ *)0x0;
          EStack_6.siteEnum = 0;
          EStack_6.showTouristPromotion = 0;
          EStack_6.allowsOpenInNewTab = 0;
          EStack_6.allowsRedirectToWebpage = 0;
          EStack_6.allowsModals = 0;
          EStack_6.integratedSdk = 0;
          EStack_6.allowsFallbackAds = 0;
          EStack_6.showPlayButtonAd = 0;
          EStack_6.hideGoldShop = 0;
          EStack_6.allowInHouseAds = 0;
          EStack_6.removeFullscreenButton = 0;
          EStack_6.hideSignUp = 0;
          EStack_6.noPlayButtonVideoIcon = 0;
          puStack_18 = &stack0x00000008;
          if (pSVar17 != (String *)0x0) {
            if ((pSVar17->fields)._stringLength == 0) {
              EStack_6.sites = (List_1_System_String_ *)0x1;
              EStack_6.siteEnum = 0;
              EStack_6.showTouristPromotion = 0;
              EStack_6.allowsOpenInNewTab = 0;
              EStack_6.allowsRedirectToWebpage = 0;
              EStack_6.allowsModals = 0;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              iVar19 = (pSVar17->fields)._stringLength;
              EStack_6.sites = (List_1_System_String_ *)&(pSVar17->fields)._firstChar;
              if (iVar19 == 0) {
                EStack_6.sites = (List_1_System_String_ *)0x0;
              }
              EStack_6.siteEnum = iVar19;
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
            FUN_?();
          }
          pcVar16 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar16 = (code *)FUN_?(&UNK_?), pcVar16 == (code *)0x0)) {
            uVar20 = func_?(&UNK_?);
            FUN_?(uVar20,0);
            FUN_?();
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pcRam_? = pcVar16;
          (*pcRam_?)(&EStack_6);
          return;
        }
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_OnContinueClicked
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_Kogama_Continue);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Kogama_Continue,1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
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
                  MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristPromotion____c);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion___OnContinueCli);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.promotionShowsAd == 0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TouristPromotion____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TouristPromotion____c);
    }
    this_01 = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
              TypeInfo__TouristPromotion____c->static_fields->__9__12_1;
    if (this_01 == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
      if (*(int *)&(TypeInfo__TouristPromotion____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TouristPromotion____c);
      }
      pTVar2 = TypeInfo__TouristPromotion____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pTVar2,
                 MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TouristPromotion____c->static_fields->__9__12_1 =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__TouristPromotion____c->static_fields->__9__12_1 >> 0xc)
        ;
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
    }
    pMVar8 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
      ;
    }
  }
  else {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__TouristPromotion____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__TouristPromotion____c);
    }
    this_01 = TypeInfo__TouristPromotion____c->static_fields->__9__12_0;
    if (this_01 == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
      if (*(int *)&(TypeInfo__TouristPromotion____c->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__TouristPromotion____c);
      }
      pTVar2 = TypeInfo__TouristPromotion____c->static_fields->__9;
      this_01 = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)pTVar2,
                 MethodInfo__TouristPromotion____c___OnContinueClicked_b__12_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__TouristPromotion____c->static_fields->__9__12_0 = this_01;
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)&TypeInfo__TouristPromotion____c->static_fields->__9__12_0 >> 0xc)
        ;
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
    }
    pMVar8 = 
    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
    ;
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
      FUN_?();
      pMVar8 = 
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
      ;
    }
  }
  if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
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
    if ((pMVar8->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar8);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar1,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar9 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar4 = (longlong)(pLVar9->fields)._size;
    uVar3 = 0;
    if (0 < lVar4) {
      lVar10 = 0;
      lVar11 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar9 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar9 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar9->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar13 = (pLVar9->fields)._items;
        if (pTVar13 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar13->max_length <= uVar3) {
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar13->vector + lVar11 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar14 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar1,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar8->field7_0x38).rgctx_data[1].method);
        if (bVar14 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 < lVar4);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_OnDestroy
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_
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
  if ((pMVar1 == (MVGameControllerBase *)0x0) ||
     (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pAVar4 = (pMVar2->fields).OnWinningConditionFulfilled;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<IWinningCondition>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_,
             (MethodInfo *)0x0);
  pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar6 = TypeInfo__System__Action<IWinningCondition>;
  if (pDVar5 == (Delegate *)0x0) {
    (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
  }
  else {
    pAVar4 = (Action_1_IWinningCondition_ *)
             FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
    if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar2->fields).OnWinningConditionFulfilled = pAVar4;
    pAVar6 = TypeInfo__System__Action<IWinningCondition>;
    lVar7 = FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
    if (lVar7 == 0) {
      FUN_?(pDVar5,pAVar6);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  return;
}


/* Void ShowGoToKogamaPopup() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_ShowGoToKogamaPopup
               (TouristPromotionDesktop *this,MethodInfo *method)

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
                  MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)FUN_?(TypeInfo__TouristPromotionDesktop____c__DisplayClass11_0);
  pGVar1 = (this->fields).goToKogamaPopupPrefab;
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
             MethodInfo__TouristPromotionDesktop____c__DisplayClass11_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void SignupCallback() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_SignupCallback
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmbeddedSite);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_TouristPromotion_Kogama_Signup);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Signup_not_permitted_for_site_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count
            (StringLiteral_TouristPromotion_Kogama_Signup,1,(MethodInfo *)0x0);
  pEVar1 = (this->fields).embeddedPlayerConfig;
  if (pEVar1 == (EmbeddedPlayerConfig *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
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
    auVar3._0_8_ = (pEVar1->fields).kogamaDefaultData.sites;
    auVar3._8_4_ = (pEVar1->fields).kogamaDefaultData.siteEnum;
    auVar3[0xc] = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
    auVar3[0xd] = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
    auVar3[0xe] = (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
    auVar3[0xf] = (pEVar1->fields).kogamaDefaultData.allowsModals;
  }
  else {
    auVar3._0_8_ = (pEVar1->fields).currentSite.sites;
    auVar3._8_4_ = (pEVar1->fields).currentSite.siteEnum;
    auVar3[0xc] = (pEVar1->fields).currentSite.showTouristPromotion;
    auVar3[0xd] = (pEVar1->fields).currentSite.allowsOpenInNewTab;
    auVar3[0xe] = (pEVar1->fields).currentSite.allowsRedirectToWebpage;
    auVar3[0xf] = (pEVar1->fields).currentSite.allowsModals;
  }
  if (((auVar3[0xf] == '\0') && (auVar3[0xd] == '\0')) && (auVar3[0xe] == '\0')) {
    apuStackX_8[0] = (uint16_t *)CONCAT44(apuStackX_8[0]._4_4_,auVar3._8_4_);
    message = (Object *)FUN_?(TypeInfo__EmbeddedSite);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
    pSVar4 = StringLiteral_Signup_not_permitted_for_site_;
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
    pIVar5 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar5 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pSStack_6 = pSVar4;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0);
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__BrowserComm,auVar3._8_8_,0);
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
  pGVar7 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar7 == (GameSessionData *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pSVar4 = (pGVar7->fields).signupURL;
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BrowserComm);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__BrowserComm);
  }
  if (TypeInfo__BrowserComm->static_fields->enableBrowserRequest == 0) {
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__GetPinnableReference__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__get_Length__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apuStackX_8[0] = (uint16_t *)0x0;
  puStack_8 = (uint16_t *)0x0;
  uStack_9 = 0;
  pSStack_6 = (String *)0x0;
  ppuStack_10 = apuStackX_8;
  if (pSVar4 != (String *)0x0) {
    if ((pSVar4->fields)._stringLength == 0) {
      puStack_8 = (uint16_t *)0x1;
      uStack_9 = 0;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      iVar11 = (pSVar4->fields)._stringLength;
      apuStackX_8[0] = &(pSVar4->fields)._firstChar;
      if (iVar11 == 0) {
        apuStackX_8[0] = (uint16_t *)0x0;
      }
      uStack_9 = CONCAT44(uStack_9._4_4_,iVar11);
      puStack_8 = apuStackX_8[0];
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar12 = func_?(&UNK_?);
    FUN_?(uVar12,0);
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&puStack_8);
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::TouristPromotionDesktop::TouristPromotionDesktop_Start
               (TouristPromotionDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Uri);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Referrer__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_www_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
      iVar2 = (pEVar1->fields).kogamaDefaultData.siteEnum;
      uVar3._0_1_ = (pEVar1->fields).kogamaDefaultData.showTouristPromotion;
      uVar3._1_1_ = (pEVar1->fields).kogamaDefaultData.allowsOpenInNewTab;
      uVar3._2_1_ = (pEVar1->fields).kogamaDefaultData.allowsRedirectToWebpage;
      uVar3._3_1_ = (pEVar1->fields).kogamaDefaultData.allowsModals;
    }
    else {
      iVar2 = (pEVar1->fields).currentSite.siteEnum;
      uVar3._0_1_ = (pEVar1->fields).currentSite.showTouristPromotion;
      uVar3._1_1_ = (pEVar1->fields).currentSite.allowsOpenInNewTab;
      uVar3._2_1_ = (pEVar1->fields).currentSite.allowsRedirectToWebpage;
      uVar3._3_1_ = (pEVar1->fields).currentSite.allowsModals;
    }
    bVar4 = cRam_? == '\0';
    (this->fields)._.embedded = iVar2 != 0;
    if (bVar4) {
      FUN_?(&TypeInfo__StatHatWrapper);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_TouristPromotion_Kogama);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_TouristPromotion_Kogama,1,(MethodInfo *)0x0);
    pTVar5 = (this->fields)._.looksData;
    if (pTVar5 != (TouristPromotionLooksData *)0x0) {
      TouristPromotionLooksData::TouristPromotionLooksData_RandomizePromotion
                (pTVar5,(this->fields)._.embedded,(MethodInfo *)0x0);
      pTVar5 = (this->fields)._.looksData;
      pTVar6 = (this->fields)._.promotionHeader;
      if ((pTVar5 != (TouristPromotionLooksData *)0x0) &&
         (TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionText
                    (pTVar5,(MethodInfo *)0x0), pTVar6 != (Text *)0x0)) {
        (*(pTVar6->klass->vtable).set_text.methodPtr)(pTVar6);
        pTVar5 = (this->fields)._.looksData;
        if ((pTVar5 != (TouristPromotionLooksData *)0x0) &&
           ((this_00 = TouristPromotionLooksData::TouristPromotionLooksData_GetPromotionImage
                                 (pTVar5,(MethodInfo *)0x0), this_00 != (Image *)0x0 &&
            (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0),
            this_01 != (Transform *)0x0)))) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_01,(Transform *)(this->fields)._.promotionImageParent,0,(MethodInfo *)0x0)
          ;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar7 != (MVGameControllerBase *)0x0) &&
             (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
            pAVar9 = (pMVar8->fields).OnWinningConditionFulfilled;
            this_02 = (UnityAction_1_System_Object_ *)
                      FUN_?(TypeInfo__System__Action<IWinningCondition>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
            UnityAction_1_System_Object___ctor
                      (this_02,(Object *)this,
                       MethodInfo__TouristPromotionDesktop__OnWinningConditionFulfilled_IWinningCondition_
                       ,(MethodInfo *)0x0);
            pDVar10 = mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar9,(Delegate *)this_02,(MethodInfo *)0x0);
            pAVar11 = TypeInfo__System__Action<IWinningCondition>;
            if (pDVar10 == (Delegate *)0x0) {
              (pMVar8->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
            }
            else {
              pAVar9 = (Action_1_IWinningCondition_ *)
                        FUN_?(pDVar10,TypeInfo__System__Action<IWinningCondition>);
              if (pAVar9 == (Action_1_IWinningCondition_ *)0x0) {
                FUN_?(pDVar10,pAVar11);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              (pMVar8->fields).OnWinningConditionFulfilled = pAVar9;
              pAVar11 = TypeInfo__System__Action<IWinningCondition>;
              lVar13 = FUN_?(pDVar10,TypeInfo__System__Action<IWinningCondition>);
              if (lVar13 == 0) {
                FUN_?(pDVar10,pAVar11);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar14 = (uint)((ulonglong)&(pMVar8->fields).OnWinningConditionFulfilled >> 0xc);
              puVar15 = (ulonglong *)((ulonglong)((uVar14 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar16 = *puVar15;
                LOCK();
                uVar17 = *puVar15;
                if (uVar16 == uVar17) {
                  *puVar15 = uVar16 | 1L << (uVar14 & 0x3f);
                }
                UNLOCK();
              } while (uVar16 != uVar17);
            }
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar18 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar18 != (GameSessionData *)0x0) {
              pSVar19 = mscorlib.dll::System::String::String_Concat_4
                                  (StringLiteral_Referrer__,(pGVar18->fields).referrer,
                                   (MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                        ((Object *)pSVar19,(MethodInfo *)0x0);
              pGVar20 = (this->fields).redirectButton;
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pGVar18 = TypeInfo__MVGameControllerBase->static_fields->
                       _GameSessionData_k__BackingField;
              if ((pGVar18 != (GameSessionData *)0x0) && (pGVar20 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar20,(pGVar18->fields).embedded,(MethodInfo *)0x0);
                cStack_21 = (char)(uVar3 >> 8);
                cStack_22 = (char)(uVar3 >> 0x10);
                uVar3 = uVar3 >> 0x18;
                pGVar20 = (this->fields).signupButton;
                if ((cStack_22 != '\0') || (cStack_21 != '\0')) {
                  uVar3 = 1;
                }
                if (pGVar20 != (GameObject *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar20,uVar3 != 0,(MethodInfo *)0x0);
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MVGameControllerBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
                  if ((pMVar7 != (MVGameControllerBase *)0x0) &&
                     (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) {
                    pSVar19 = (pMVar8->fields)._KogamaMainpageURL_k__BackingField;
                    this_03 = (Uri *)FUN_?(TypeInfo__System__Uri);
                    System.dll::System::Uri::Uri__ctor(this_03,pSVar19,(MethodInfo *)0x0);
                    pTVar6 = (this->fields).redirectButtonURLText;
                    if ((this_03 != (Uri *)0x0) &&
                       (((pSVar19 = System.dll::System::Uri::Uri_get_Host(this_03,(MethodInfo *)0x0)
                         , pSVar19 != (String *)0x0 &&
                         (pSVar19 = mscorlib.dll::System::String::String_Replace_1
                                              (pSVar19,StringLiteral_www_,::StringLiteral__,
                                               (MethodInfo *)0x0), pSVar19 != (String *)0x0)) &&
                        (pSVar19 = mscorlib.dll::System::String::String_ToUpper
                                             (pSVar19,(MethodInfo *)0x0), pTVar6 != (Text *)0x0))))
                    {
                      UNRECOVERED_JUMPTABLE = (pTVar6->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                      (*UNRECOVERED_JUMPTABLE)
                                (pTVar6,pSVar19,(pTVar6->klass->vtable).set_text.method,
                                 UNRECOVERED_JUMPTABLE);
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
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

