
/* Void ActionButtonCallback() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_ActionButtonCallback(GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__BrowserCommGotoRequests__GotoEliteUpgrade_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BrowserCommGotoRequests__GotoPurchaseGold_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BrowserCommGotoRequests__GotoSignup_bool__bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAd_Kogama_Elite);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAd_Kogama_Gold);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAd_Kogama_Signup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).promotionActionType;
  if (iVar1 == 0) {
    lVar2 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    FUN_?(lVar2,0,MethodInfo__BrowserCommGotoRequests__GotoPurchaseGold_bool__bool_);
    pSVar3 = StringLiteral_InHouseAd_Kogama_Gold;
  }
  else if (iVar1 == 1) {
    lVar2 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    FUN_?(lVar2,0,MethodInfo__BrowserCommGotoRequests__GotoEliteUpgrade_bool__bool_);
    pSVar3 = StringLiteral_InHouseAd_Kogama_Elite;
  }
  else {
    lVar2 = FUN_?(TypeInfo__UnityEngine__Events__UnityAction<bool,_bool>);
    FUN_?(lVar2,0,MethodInfo__BrowserCommGotoRequests__GotoSignup_bool__bool_);
    pSVar3 = StringLiteral_InHouseAd_Kogama_Signup;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,pSVar3,lVar2,0,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EmbeddedSite);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_action_not_permitted_for_site_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(pSVar3,1,(MethodInfo *)0x0);
  if ((this->fields).embeddedSiteConfigData.allowsModals == 0) {
    if ((this->fields).embeddedSiteConfigData.allowsOpenInNewTab != 0) {
      if (lVar2 == 0) goto code_?;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
      uVar4 = 0;
      uVar5 = *(undefined8 *)(lVar2 + 0x28);
      uVar6 = 1;
      goto code_?;
    }
    if ((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) {
      message = (Object *)FUN_?(TypeInfo__EmbeddedSite);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      pSVar3 = StringLiteral_action_not_permitted_for_site_;
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
      pIVar7 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar7 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar7,0,pSVar3);
        return;
      }
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (lVar2 == 0) {
code_?:
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
    uVar4 = 0;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
  }
  else {
    if (lVar2 == 0) goto code_?;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x18);
    uVar4 = 1;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
  }
  uVar6 = 0;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(lVar2 + 0x40),uVar6,uVar4,uVar5);
  return;
}


/* Void ActivateContinueButton() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_ActivateContinueButton(GeneralPromotionAd *this,MethodInfo *method)

{
  pTVar1 = (this->fields).continueText;
  (this->fields).finishedWaiting = 1;
  pSVar2 = GeneralPromotionAd_get_StartContinueText(this,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar2);
    this_00 = (this->fields).continueButton;
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
      cVar3 = FUN_?(&(this_00->fields)._.m_Interactable);
      if (cVar3 == '\0') {
        return;
      }
      if ((this_00->fields)._.m_Interactable == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
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
        if (pEVar4 != (EventSystem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pEVar4->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
              FUN_?();
            }
            pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar4 != (EventSystem *)0x0) {
              pGVar5 = (pEVar4->fields).m_CurrentSelected;
              pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
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
              if (pGVar6 != (GameObject *)0x0 || pGVar5 != (GameObject *)0x0) {
                if (pGVar6 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pGVar5 == (GameObject *)0x0) goto DAT_?;
                  bVar7 = (pGVar5->fields)._.m_CachedPtr == (void *)0x0;
                }
                else if (pGVar5 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar7 = (pGVar6->fields)._.m_CachedPtr == (void *)0x0;
                }
                else {
                  bVar7 = pGVar5 == pGVar6;
                }
                if (!bVar7) goto code_?;
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar4 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar4 != (EventSystem *)0x0) {
                UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                EventSystem_SetSelectedGameObject_1(pEVar4,(GameObject *)0x0,(MethodInfo *)0x0);
                goto code_?;
              }
            }
DAT_?:
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
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
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* IEnumerator FadeOutAndPop() */

IEnumerator *
Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_FadeOutAndPop
          (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37)
  ;
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


/* Void Initialize(PromotionLooksData, GeneralPromotionType, Boolean) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Initialize
               (GeneralPromotionAd *this,PromotionLooksData *promotionLooksData,
               GeneralPromotionType__Enum type,bool showWhyText,MethodInfo *method)

{
  (this->fields).generalPromotionType = type;
  if (promotionLooksData != (PromotionLooksData *)0x0) {
    PromotionLooksData::PromotionLooksData_RandomizePromotion
              (promotionLooksData,(this->fields).embeddedSiteConfigData.siteEnum != 0,
               (MethodInfo *)0x0);
    pTVar1 = (this->fields).promotionHeader;
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar2 = (promotionLooksData->fields).promotionData;
    if (pLVar2 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
      uVar3 = (promotionLooksData->fields).promotionIndex;
      if ((uint)(pLVar2->fields)._size <= uVar3) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pPVar5 = (pLVar2->fields)._items;
      if (pPVar5 != (PromotionLooksData_LooksData__Array *)0x0) {
        if ((uint)pPVar5->max_length <= uVar3) {
code_?:
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pSVar6 = TM::TM__(pPVar5->vector[(int)uVar3].promotionText,(MethodInfo *)0x0);
        if (pTVar1 != (Text *)0x0) {
          (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar6);
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pLVar2 = (promotionLooksData->fields).promotionData;
          if (pLVar2 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
            uVar3 = (promotionLooksData->fields).promotionIndex;
            if ((uint)(pLVar2->fields)._size <= uVar3) goto code_?;
            pPVar5 = (pLVar2->fields)._items;
            if (pPVar5 != (PromotionLooksData_LooksData__Array *)0x0) {
              if ((uint)pPVar5->max_length <= uVar3) goto code_?;
              original = pPVar5->vector[(int)uVar3].promotionImage;
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              this_00 = (Component *)
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                  ((Object *)original,
                                   UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                  );
              if ((this_00 != (Component *)0x0) &&
                 (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform(this_00,(MethodInfo *)0x0),
                 this_01 != (Transform *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                          (this_01,(Transform *)(this->fields).promotionImageParent,0,
                           (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<AdIntegration::InHouse::PromotionLooksData::LooksData>__get_Item_int_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pLVar2 = (promotionLooksData->fields).promotionData;
                if (pLVar2 != (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)0x0) {
                  uVar3 = (promotionLooksData->fields).promotionIndex;
                  if ((uint)(pLVar2->fields)._size <= uVar3) goto code_?;
                  pPVar5 = (pLVar2->fields)._items;
                  if (pPVar5 != (PromotionLooksData_LooksData__Array *)0x0) {
                    if ((uint)pPVar5->max_length <= uVar3) goto code_?;
                    pTVar1 = (this->fields).actionText;
                    uVar7 = pPVar5->vector[(int)uVar3].promotionActionType;
                    bVar8 = cRam_? == '\0';
                    (this->fields).promotionActionType = uVar7;
                    if (bVar8) {
                      FUN_?(&StringLiteral_JOIN_THE_ELITE);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_SIGN_UP);
                      LOCK();
                      UNLOCK();
                      FUN_?(&StringLiteral_BUY_GOLD);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pSVar6 = StringLiteral_BUY_GOLD;
                    if ((uVar7 != 0) && (pSVar6 = StringLiteral_JOIN_THE_ELITE, uVar7 != 1)) {
                      pSVar6 = StringLiteral_SIGN_UP;
                    }
                    pSVar6 = TM::TM__(pSVar6,(MethodInfo *)0x0);
                    if (pTVar1 != (Text *)0x0) {
                      (*(pTVar1->klass->vtable).set_text.methodPtr)
                                (pTVar1,pSVar6,(pTVar1->klass->vtable).set_text.method);
                      pTVar1 = (this->fields).whySeeingThisText;
                      if ((pTVar1 != (Text *)0x0) &&
                         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_gameObject((Component *)pTVar1,(MethodInfo *)0x0),
                         obj != (GameObject *)0x0)) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                                        ,showWhyText,0);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        if (obj == (GameObject *)0x0) {
                          FUN_?();
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pvVar9 = (obj->fields)._.m_CachedPtr;
                        if (pvVar9 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0)
                          ;
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcVar4 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0))
                        {
                          uVar10 = func_?(&UNK_?);
                          FUN_?(uVar10,0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        (*pcRam_?)(pvVar9,showWhyText);
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeWithAd(GeneralPromotionInitWithAd) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_InitializeWithAd
               (GeneralPromotionAd *this,GeneralPromotionInitWithAd *initWithAd,MethodInfo *method)

{
  GeneralPromotionAd_Initialize
            (this,initWithAd->looksData,GeneralPromotionType__Enum_WithAd,initWithAd->showWhyText,
             (MethodInfo *)0x0);
  pTVar1 = (this->fields).continueText;
  (this->fields).promotionShowsAd = initWithAd->hasAd;
  (this->fields).finishedWaiting = 1;
  pSVar2 = GeneralPromotionAd_get_StartContinueText(this,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)(pTVar1,pSVar2);
    this_00 = (this->fields).continueButton;
    if (this_00 != (Button *)0x0) {
      UnityEngine.UI.dll::UnityEngine::UI::Selectable::Selectable_set_interactable
                ((Selectable *)this_00,1,(MethodInfo *)0x0);
      this_01 = (this->fields).continueAdIcon;
      if ((this_01 != (Image *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_01,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
        bVar3 = (this->fields).promotionShowsAd;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar3,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj == (GameObject *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (obj->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar5,bVar3);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeWithTimer(GeneralPromotionInitTimer) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_InitializeWithTimer
               (GeneralPromotionAd *this,GeneralPromotionInitTimer *initTimer,MethodInfo *method)

{
  GeneralPromotionAd_Initialize
            (this,initTimer->looksData,GeneralPromotionType__Enum_BlockedWithTimer,
             initTimer->showWhyText,(MethodInfo *)0x0);
  (this->fields).secondsToWait = (float)initTimer->timeoutSuccessDelay;
  return;
}


/* Void KogamaRedirect() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_KogamaRedirect(GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAd_Kogama_Elite);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAd_Kogama_Redirect);
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
     (pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar3 == (MVLocalPlayer *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pMVar3->fields)._._ProfileID_k__BackingField == 0) {
    if ((this->fields).redirectAllowed == 0) goto code_?;
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count
              (StringLiteral_InHouseAd_Kogama_Redirect,1,(MethodInfo *)0x0);
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
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = (pMVar2->fields)._KogamaMainpageURL_k__BackingField;
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
  }
  else {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_InHouseAd_Kogama_Elite,1,(MethodInfo *)0x0);
    if ((this->fields).redirectAllowed == 0) {
code_?:
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                      ,0);
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
                      MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      object = (Object *)
               FUN_?(
                            TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0
                            );
      pGVar6 = (this->fields).goToKogamaPopupPrefab;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pOVar7 = (Object__Class *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)pGVar6,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                          );
      if (object == (Object *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar8 = iRam_? != 0;
      object[1].klass = pOVar7;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)(object + 1) >> 0xc);
        puVar10 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar11 = *puVar10;
          LOCK();
          uVar12 = *puVar10;
          if (uVar11 == uVar12) {
            *puVar10 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (uVar11 != uVar12);
      }
      pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                             );
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
      ExecuteEvents_EventFunction_1_System_Object___ctor
                (this_02,object,
                 MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar13 = 
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
        if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(pMVar13);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                (pGVar6,(IList_1_UnityEngine_Transform_ *)
                         TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                         s_InternalTransformList,(MethodInfo *)0x0);
      pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
               s_InternalTransformList;
      if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
        lVar15 = (longlong)(pLVar14->fields)._size;
        uVar9 = 0;
        if (0 < lVar15) {
          lVar16 = 0;
          lVar17 = 0x20;
          do {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                     s_InternalTransformList;
            if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
            if ((uint)(pLVar14->fields)._size <= uVar9) {
              mscorlib.dll::System::ThrowHelper::
              ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar18 = (pLVar14->fields)._items;
            if (pTVar18 == (Transform__Array *)0x0) goto code_?;
            if ((uint)pTVar18->max_length <= uVar9) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_01 = *(Component **)((longlong)pTVar18->vector + lVar17 + -0x20);
            if (this_01 == (Component *)0x0) goto code_?;
            pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_01,(MethodInfo *)0x0);
            bVar19 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                     ExecuteEvents_Execute_18
                               (pGVar6,(BaseEventData *)0x0,this_02,
                                (pMVar13->field7_0x38).rgctx_data[1].method);
            if (bVar19 != 0) {
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        (this_01,(MethodInfo *)0x0);
              return;
            }
            uVar9 = uVar9 + 1;
            lVar16 = lVar16 + 1;
            lVar17 = lVar17 + 8;
          } while (lVar16 < lVar15);
        }
        return;
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
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
    pGVar20 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar20 == (GameSessionData *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pSVar5 = (pGVar20->fields).eliteUpgradeURL;
    if (*(int *)&(TypeInfo__BrowserComm->_1).field_0x1c == 0) {
      FUN_?();
    }
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
  if (((pSVar5 != (String *)0x0) && ((pSVar5->fields)._stringLength != 0)) &&
     (cRam_? == '\0')) {
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__ReadOnlySpan_System__Char___int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar21 = func_?(&UNK_?);
    FUN_?(uVar21,0);
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(&stack0xffffffffffffffd8);
  return;
}


/* Void OnContinueClicked() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_OnContinueClicked(GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
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
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___OnContinueClicked_b__35_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields).generalPromotionType != 0) || ((this->fields).promotionShowsAd == 0)) {
    if ((this->fields).popped != 0) {
      return;
    }
    bVar1 = cRam_? == '\0';
    (this->fields).popped = 1;
    if (bVar1) {
      FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    lVar2 = FUN_?(
                          TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37
                          );
    bVar1 = iRam_? != 0;
    *(undefined4 *)(lVar2 + 0x10) = 0;
    *(GeneralPromotionAd **)(lVar2 + 0x20) = this;
    if (bVar1) {
      uVar3 = (uint)(lVar2 + 0x20U >> 0xc);
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
    if (lVar2 == 0) {
      uVar7 = func_?(&TypeInfo__System__NullReferenceException);
      this_02 = (NullReferenceException *)func_?(uVar7);
      pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
      mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
                (this_02,pSVar8,(MethodInfo *)0x0);
      uVar7 = func_?(&
                                   MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                  );
      FUN_?(this_02,uVar7);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      uVar7 = func_?(&TypeInfo__System__ArgumentException);
      this_03 = (InvalidEnumArgumentException *)func_?(uVar7);
      pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
      System.dll::System::ComponentModel::InvalidEnumArgumentException::
      InvalidEnumArgumentException__ctor_1(this_03,pSVar8,(MethodInfo *)0x0);
      uVar7 = func_?(&
                                   MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                                  );
      FUN_?(this_03,uVar7);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
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
    if (this != (GeneralPromotionAd *)0x0) {
      pvVar11 = (this->fields)._._._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar11,lVar2);
      return;
    }
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
  }
  this_01 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__35_0;
  if (this_01 == (ExecuteEvents_EventFunction_1_ITouristAdController_ *)0x0) {
    if (*(int *)&(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    }
    object = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9;
    this_01 = (ExecuteEvents_EventFunction_1_ITouristAdController_ *)
              FUN_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>
                           );
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]::
    ExecuteEvents_EventFunction_1_System_Object___ctor
              ((ExecuteEvents_EventFunction_1_System_Object_ *)this_01,(Object *)object,
               MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___OnContinueClicked_b__35_0_ITouristAdController__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__35_0 = this_01;
    func_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->
                         __9__35_0);
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?();
  }
  pMVar13 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<ITouristAdController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<ITouristAdController>_
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
    if ((pMVar13->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(pMVar13);
    }
  }
  if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
            (pGVar12,(IList_1_UnityEngine_Transform_ *)
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                    s_InternalTransformList,(MethodInfo *)0x0);
  pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
           s_InternalTransformList;
  if (pLVar14 != (List_1_UnityEngine_Transform_ *)0x0) {
    lVar2 = (longlong)(pLVar14->fields)._size;
    uVar3 = 0;
    if (0 < lVar2) {
      lVar15 = 0;
      lVar16 = 0x20;
      do {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pLVar14 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar14 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
        if ((uint)(pLVar14->fields)._size <= uVar3) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar17 = (pLVar14->fields)._items;
        if (pTVar17 == (Transform__Array *)0x0) goto code_?;
        if ((uint)pTVar17->max_length <= uVar3) {
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        this_00 = *(Component **)((longlong)pTVar17->vector + lVar16 + -0x20);
        if (this_00 == (Component *)0x0) goto code_?;
        pGVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           (this_00,(MethodInfo *)0x0);
        bVar10 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_Execute_18
                          (pGVar12,(BaseEventData *)0x0,
                           (ExecuteEvents_EventFunction_1_System_Object_ *)this_01,
                           (pMVar13->field7_0x38).rgctx_data[1].method);
        if (bVar10 != 0) {
          UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    (this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = uVar3 + 1;
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 8;
      } while (lVar15 < lVar2);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_OnDestroy
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
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
            (this_00,(Object *)0x0,
             MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
             ,(MethodInfo *)0x0);
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


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_OnWinningConditionFulfilled
               (IWinningCondition *winningCondition,MethodInfo *method)

{
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
  pMVar1 = MVGameControllerDesktop::MVGameControllerDesktop_get_Instance((MethodInfo *)0x0);
  if ((pMVar1 == (MVGameControllerDesktop *)0x0) ||
     (pIVar2 = (pMVar1->fields).lockCursorManager, pIVar2 == (ILockCursorManager *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)0x0;
  uVar5 = 0;
  pIVar6 = pIVar2->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    pIVar4 = pIVar6->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType == (Il2CppClass *)TypeInfo__ILockCursorManager) {
        pVVar8 = &(pIVar6->vtable).get_CursorLock + (pIVar4[uVar5].offset + 1);
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pVVar8 = (VirtualInvokeData *)FUN_?(pIVar2,TypeInfo__ILockCursorManager,1,pIVar4);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar8->methodPtr)(pIVar2,0,pVVar8->method,pVVar8->methodPtr);
  return;
}


/* Void PerformAction(String, UnityAction`2[System.Boolean,System.Boolean]) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_PerformAction
               (GeneralPromotionAd *this,String *statKey,
               UnityAction_2_System_Boolean_System_Boolean_ *action,MethodInfo *method)

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
    FUN_?(&StringLiteral_action_not_permitted_for_site_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  StatHatWrapper::StatHatWrapper_Count(statKey,1,(MethodInfo *)0x0);
  if ((this->fields).embeddedSiteConfigData.allowsModals == 0) {
    if ((this->fields).embeddedSiteConfigData.allowsOpenInNewTab != 0) {
      if (action == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) goto code_?;
      UNRECOVERED_JUMPTABLE = (action->fields)._._.invoke_impl;
      uVar1 = 0;
      pvVar2 = (action->fields)._._.method;
      uVar3 = 1;
      goto code_?;
    }
    if ((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) {
      message = (Object *)FUN_?(TypeInfo__EmbeddedSite);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(message,(MethodInfo *)0x0);
      pSVar4 = StringLiteral_action_not_permitted_for_site_;
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
      if (pIVar5 != (ILogger_1 *)0x0) {
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar5,0,pSVar4);
        return;
      }
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if (action == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) {
code_?:
      FUN_?();
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    UNRECOVERED_JUMPTABLE = (action->fields)._._.invoke_impl;
    uVar1 = 0;
    pvVar2 = (action->fields)._._.method;
  }
  else {
    if (action == (UnityAction_2_System_Boolean_System_Boolean_ *)0x0) goto code_?;
    UNRECOVERED_JUMPTABLE = (action->fields)._._.invoke_impl;
    uVar1 = 1;
    pvVar2 = (action->fields)._._.method;
  }
  uVar3 = 0;
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)((action->fields)._._.method_code,uVar3,uVar1,pvVar2);
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Pop
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if ((this->fields).popped != 0) {
    return;
  }
  bVar1 = cRam_? == '\0';
  (this->fields).popped = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lVar2 = FUN_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd___FadeOutAndPop_d__37);
  bVar1 = iRam_? != 0;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(GeneralPromotionAd **)(lVar2 + 0x20) = this;
  if (bVar1) {
    uVar3 = (uint)(lVar2 + 0x20U >> 0xc);
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
  if (lVar2 == 0) {
    uVar7 = func_?(&TypeInfo__System__NullReferenceException);
    this_00 = (NullReferenceException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_routine_is_null);
    mscorlib.dll::System::NullReferenceException::NullReferenceException__ctor_1
              (this_00,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_00,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar10 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
          MonoBehaviour_IsObjectMonoBehaviour((Object_1 *)this,(MethodInfo *)0x0);
  if (bVar10 == 0) {
    uVar7 = func_?(&TypeInfo__System__ArgumentException);
    this_01 = (InvalidEnumArgumentException *)func_?(uVar7);
    pSVar8 = (String *)func_?(&StringLiteral_Coroutines_can_only_be_stopped_o);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_01,pSVar8,(MethodInfo *)0x0);
    uVar7 = func_?(&
                                MethodInfo__UnityEngine__MonoBehaviour__StartCoroutine_System__Collections__IEnumerator_
                               );
    FUN_?(this_01,uVar7);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
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
  if (this == (GeneralPromotionAd *)0x0) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pvVar11 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar11 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pcRam_? = pcVar9;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar11,lVar2);
  return;
}


/* Void ShowGoToKogamaPopup() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd_ShowGoToKogamaPopup(GeneralPromotionAd *this,MethodInfo *method)

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
                  MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  object = (Object *)
           FUN_?(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0
                        );
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
             MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c__DisplayClass32_0___ShowGoToKogamaPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
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


/* Void Start() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Start
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Uri);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InHouseAd_Kogama);
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
  if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = 1;
  bVar2 = 1;
  StatHatWrapper::StatHatWrapper_Count(StringLiteral_InHouseAd_Kogama,1,(MethodInfo *)0x0);
  pEVar3 = (this->fields).embeddedPlayerConfig;
  if (pEVar3 != (EmbeddedPlayerConfig *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_Embedded_site_data_not_initializ);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pEVar3->fields).initialized == 0) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Embedded_site_data_not_initializ,(MethodInfo *)0x0);
      uVar4 = *(undefined4 *)&(pEVar3->fields).kogamaDefaultData.sites;
      uVar5 = *(undefined4 *)((longlong)&(pEVar3->fields).kogamaDefaultData.sites + 4);
      iVar6 = (pEVar3->fields).kogamaDefaultData.siteEnum;
      uVar7._0_1_ = (pEVar3->fields).kogamaDefaultData.showTouristPromotion;
      uVar7._1_1_ = (pEVar3->fields).kogamaDefaultData.allowsOpenInNewTab;
      uVar7._2_1_ = (pEVar3->fields).kogamaDefaultData.allowsRedirectToWebpage;
      uVar7._3_1_ = (pEVar3->fields).kogamaDefaultData.allowsModals;
      uVar8._0_1_ = (pEVar3->fields).kogamaDefaultData.integratedSdk;
      uVar8._1_1_ = (pEVar3->fields).kogamaDefaultData.allowsFallbackAds;
      uVar8._2_1_ = (pEVar3->fields).kogamaDefaultData.showPlayButtonAd;
      uVar8._3_1_ = (pEVar3->fields).kogamaDefaultData.hideGoldShop;
      uVar8._4_1_ = (pEVar3->fields).kogamaDefaultData.allowInHouseAds;
      uVar8._5_1_ = (pEVar3->fields).kogamaDefaultData.removeFullscreenButton;
      uVar8._6_1_ = (pEVar3->fields).kogamaDefaultData.hideSignUp;
      uVar8._7_1_ = (pEVar3->fields).kogamaDefaultData.noPlayButtonVideoIcon;
    }
    else {
      uVar4 = *(undefined4 *)&(pEVar3->fields).currentSite.sites;
      uVar5 = *(undefined4 *)((longlong)&(pEVar3->fields).currentSite.sites + 4);
      iVar6 = (pEVar3->fields).currentSite.siteEnum;
      uVar7._0_1_ = (pEVar3->fields).currentSite.showTouristPromotion;
      uVar7._1_1_ = (pEVar3->fields).currentSite.allowsOpenInNewTab;
      uVar7._2_1_ = (pEVar3->fields).currentSite.allowsRedirectToWebpage;
      uVar7._3_1_ = (pEVar3->fields).currentSite.allowsModals;
      uVar8._0_1_ = (pEVar3->fields).currentSite.integratedSdk;
      uVar8._1_1_ = (pEVar3->fields).currentSite.allowsFallbackAds;
      uVar8._2_1_ = (pEVar3->fields).currentSite.showPlayButtonAd;
      uVar8._3_1_ = (pEVar3->fields).currentSite.hideGoldShop;
      uVar8._4_1_ = (pEVar3->fields).currentSite.allowInHouseAds;
      uVar8._5_1_ = (pEVar3->fields).currentSite.removeFullscreenButton;
      uVar8._6_1_ = (pEVar3->fields).currentSite.hideSignUp;
      uVar8._7_1_ = (pEVar3->fields).currentSite.noPlayButtonVideoIcon;
    }
    bVar9 = iRam_? != 0;
    *(undefined4 *)&(this->fields).embeddedSiteConfigData.sites = uVar4;
    *(undefined4 *)((longlong)&(this->fields).embeddedSiteConfigData.sites + 4) = uVar5;
    (this->fields).embeddedSiteConfigData.siteEnum = iVar6;
    (this->fields).embeddedSiteConfigData.showTouristPromotion = (char)uVar7;
    (this->fields).embeddedSiteConfigData.allowsOpenInNewTab = (char)((uint)uVar7 >> 8);
    (this->fields).embeddedSiteConfigData.allowsRedirectToWebpage = (char)((uint)uVar7 >> 0x10);
    (this->fields).embeddedSiteConfigData.allowsModals = (char)((uint)uVar7 >> 0x18);
    (this->fields).embeddedSiteConfigData.integratedSdk = (char)uVar8;
    (this->fields).embeddedSiteConfigData.allowsFallbackAds = (char)((ulonglong)uVar8 >> 8);
    (this->fields).embeddedSiteConfigData.showPlayButtonAd = (char)((ulonglong)uVar8 >> 0x10);
    (this->fields).embeddedSiteConfigData.hideGoldShop = (char)((ulonglong)uVar8 >> 0x18);
    (this->fields).embeddedSiteConfigData.allowInHouseAds = (char)((ulonglong)uVar8 >> 0x20);
    (this->fields).embeddedSiteConfigData.removeFullscreenButton = (char)((ulonglong)uVar8 >> 0x28)
    ;
    (this->fields).embeddedSiteConfigData.hideSignUp = (char)((ulonglong)uVar8 >> 0x30);
    (this->fields).embeddedSiteConfigData.noPlayButtonVideoIcon = (char)((ulonglong)uVar8 >> 0x38);
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(this->fields).embeddedSiteConfigData >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField !=
        (GameSessionData *)0x0) {
      if ((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) {
        bVar2 = (this->fields).embeddedSiteConfigData.allowsOpenInNewTab;
      }
      bVar9 = cRam_? == '\0';
      (this->fields).redirectAllowed = bVar2 != 0;
      if (bVar9) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar14 != (MVGameControllerBase *)0x0) &&
         (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) {
        pAVar16 = (pMVar15->fields).OnWinningConditionFulfilled;
        this_00 = (UnityAction_1_System_Object_ *)
                  FUN_?(TypeInfo__System__Action<IWinningCondition>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
        UnityAction_1_System_Object___ctor
                  (this_00,(Object *)0x0,
                   MethodInfo__AdIntegration__InHouse__GeneralPromotionAd__OnWinningConditionFulfilled_IWinningCondition_
                   ,(MethodInfo *)0x0);
        pDVar17 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar16,(Delegate *)this_00,(MethodInfo *)0x0);
        pAVar18 = TypeInfo__System__Action<IWinningCondition>;
        if (pDVar17 == (Delegate *)0x0) {
          (pMVar15->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
        }
        else {
          pAVar16 = (Action_1_IWinningCondition_ *)
                    FUN_?(pDVar17,TypeInfo__System__Action<IWinningCondition>);
          if (pAVar16 == (Action_1_IWinningCondition_ *)0x0) {
            FUN_?(pDVar17,pAVar18);
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          (pMVar15->fields).OnWinningConditionFulfilled = pAVar16;
          pAVar18 = TypeInfo__System__Action<IWinningCondition>;
          lVar20 = FUN_?(pDVar17,TypeInfo__System__Action<IWinningCondition>);
          if (lVar20 == 0) {
            FUN_?(pDVar17,pAVar18);
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar10 = (uint)((ulonglong)&(pMVar15->fields).OnWinningConditionFulfilled >> 0xc);
          uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
          do {
            uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
            puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
            LOCK();
            bVar9 = uVar12 == *puVar13;
            if (bVar9) {
              *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (!bVar9);
        }
        pGVar21 = (this->fields).redirectButton;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar22 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if ((pGVar22 != (GameSessionData *)0x0) && (pGVar21 != (GameObject *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar21,(pGVar22->fields).embedded,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar14 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar14 != (MVGameControllerBase *)0x0) &&
             (pMVar15 = (pMVar14->fields).game, pMVar15 != (MVNetworkGame *)0x0)) {
            pSVar23 = (pMVar15->fields)._KogamaMainpageURL_k__BackingField;
            this_01 = (Uri *)FUN_?(TypeInfo__System__Uri);
            System.dll::System::Uri::Uri__ctor(this_01,pSVar23,(MethodInfo *)0x0);
            pTVar24 = (this->fields).redirectButtonURLText;
            if ((this_01 != (Uri *)0x0) &&
               (((pSVar23 = System.dll::System::Uri::Uri_get_Host(this_01,(MethodInfo *)0x0),
                 pSVar23 != (String *)0x0 &&
                 (pSVar23 = mscorlib.dll::System::String::String_Replace_1
                                      (pSVar23,StringLiteral_www_,::StringLiteral__,
                                       (MethodInfo *)0x0), pSVar23 != (String *)0x0)) &&
                (pSVar23 = mscorlib.dll::System::String::String_ToUpper(pSVar23,(MethodInfo *)0x0),
                pTVar24 != (Text *)0x0)))) {
              (*(pTVar24->klass->vtable).set_text.methodPtr)(pTVar24,pSVar23);
              pGVar21 = (this->fields).actionButton;
              if (((this->fields).embeddedSiteConfigData.allowsRedirectToWebpage == 0) &&
                 ((this->fields).embeddedSiteConfigData.allowsOpenInNewTab == 0)) {
                bVar1 = (this->fields).embeddedSiteConfigData.allowsModals;
              }
              if (pGVar21 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar21,bVar1 != 0,(MethodInfo *)0x0);
                pcVar19 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                pcRam_? = pcVar19;
                fVar25 = (float)(*pcRam_?)();
                (this->fields).startTime = fVar25;
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd_Update
               (GeneralPromotionAd *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral___);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).finishedWaiting != 0) {
    return;
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
  fVar3 = (float)(*pcRam_?)();
  fVar3 = fVar3 - (this->fields).startTime;
  if (fVar3 < (this->fields).secondsToWait) {
    aIStackX_8[0].m_value = FUN_?((this->fields).secondsToWait - fVar3);
    pTVar4 = (this->fields).continueText;
    pSVar5 = GeneralPromotionAd_get_StartContinueText(this,(MethodInfo *)0x0);
    str2 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
    pSVar5 = mscorlib.dll::System::String::String_Concat_6
                       (pSVar5,::StringLiteral___,str2,::StringLiteral__,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar5,(pTVar4->klass->vtable).set_text.method);
      return;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pTVar4 = (this->fields).continueText;
  (this->fields).finishedWaiting = 1;
  pSVar5 = GeneralPromotionAd_get_StartContinueText(this,(MethodInfo *)0x0);
  if (pTVar4 != (Text *)0x0) {
    (*(pTVar4->klass->vtable).set_text.methodPtr)(pTVar4,pSVar5);
    this_00 = (this->fields).continueButton;
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
      cVar6 = FUN_?(&(this_00->fields)._.m_Interactable);
      if (cVar6 == '\0') {
        return;
      }
      if ((this_00->fields)._.m_Interactable == 0) {
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
          FUN_?();
        }
        pEVar7 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                           ((MethodInfo *)0x0);
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
        if (pEVar7 != (EventSystem *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pEVar7->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
              FUN_?();
            }
            pEVar7 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                     EventSystem_get_current((MethodInfo *)0x0);
            if (pEVar7 != (EventSystem *)0x0) {
              pGVar8 = (pEVar7->fields).m_CurrentSelected;
              pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this_00,(MethodInfo *)0x0);
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
              if (pGVar9 != (GameObject *)0x0 || pGVar8 != (GameObject *)0x0) {
                if (pGVar9 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pGVar8 == (GameObject *)0x0) goto DAT_?;
                  bVar10 = (pGVar8->fields)._.m_CachedPtr == (void *)0x0;
                }
                else if (pGVar8 == (GameObject *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  bVar10 = (pGVar9->fields)._.m_CachedPtr == (void *)0x0;
                }
                else {
                  bVar10 = pGVar8 == pGVar9;
                }
                if (!bVar10) goto code_?;
              }
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
                FUN_?();
              }
              pEVar7 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                       EventSystem_get_current((MethodInfo *)0x0);
              if (pEVar7 != (EventSystem *)0x0) {
                UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
                EventSystem_SetSelectedGameObject_1(pEVar7,(GameObject *)0x0,(MethodInfo *)0x0);
                goto code_?;
              }
            }
DAT_?:
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
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
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <FadeOutAndPop>b__37_0(Single) */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
     GeneralPromotionAd__FadeOutAndPop_b__37_0(GeneralPromotionAd *this,float t,MethodInfo *method)

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
                  MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___FadeOutAndPop_b__37_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).canvasGroup;
  if (this_00 != (CanvasGroup *)0x0) {
    UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
              (this_00,t,(MethodInfo *)0x0);
    if (t == 0.0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_01 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).field_0x1c == 0)
      {
        FUN_?();
      }
      this_02 = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__37_1;
      if (this_02 == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
        if (*(int *)&(TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->_1).field_0x1c == 0
           ) {
          FUN_?();
        }
        object = TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9;
        this_02 = (ExecuteEvents_EventFunction_1_IUIStack_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  ((ExecuteEvents_EventFunction_1_System_Object_ *)this_02,(Object *)object,
                   MethodInfo__AdIntegration__InHouse__GeneralPromotionAd____c___FadeOutAndPop_b__37_1_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->__9__37_1 =
             this_02;
        if (iRam_? != 0) {
          uVar1 = (uint)((ulonglong)
                         &TypeInfo__AdIntegration__InHouse__GeneralPromotionAd____c->static_fields->
                          __9__37_1 >> 0xc);
          uVar2 = (ulonglong)((uVar1 & 0x1fffff) >> 6);
          do {
            uVar3 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
            puVar4 = (ulonglong *)(uVar2 * 8 + 0xADDR);
            LOCK();
            bVar5 = uVar3 == *puVar4;
            if (bVar5) {
              *puVar4 = uVar3 | 1L << (uVar1 & 0x3f);
            }
            UNLOCK();
          } while (!bVar5);
        }
      }
      if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                (this_01,(BaseEventData *)0x0,
                 (ExecuteEvents_EventFunction_1_System_Object_ *)this_02,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* GeneralPromotionAd() */

void Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::GeneralPromotionAd__ctor
               (GeneralPromotionAd *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).generalPromotionType = 1;
  (this->fields).secondsToWait = 20.0;
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
                while (ppMVar16 = ppMVar15 + 0x30528cee,
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


/* String get_StartContinueText() */

String * Assembly-CSharp.dll::AdIntegration::InHouse::GeneralPromotionAd::
         GeneralPromotionAd_get_StartContinueText(GeneralPromotionAd *this,MethodInfo *method)

{
  pSVar1 = (this->fields).startContinueText;
  if (pSVar1 == (String *)0x0) {
    pTVar2 = (this->fields).continueText;
    if (pTVar2 == (Text *)0x0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pSVar1 = (String *)(*pcVar3)();
      return pSVar1;
    }
    pSVar1 = (String *)
             (*(pTVar2->klass->vtable).get_text.methodPtr)
                       (pTVar2,(pTVar2->klass->vtable).get_text.method);
    bVar4 = iRam_? != 0;
    (this->fields).startContinueText = pSVar1;
    if (bVar4) {
      uVar5 = (uint)((ulonglong)&(this->fields).startContinueText >> 0xc);
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
  }
  return pSVar1;
}

