
/* String GetClaimText() */

String * Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_GetClaimText
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_CLAIM);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_CLAIM;
  if (cRam_? == '\0') {
    FUN_?(&::StringLiteral__,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Text__RegularExpressions__Regex);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___sPtr___sPtr_____________Ptr_________);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 == (String *)0x0) {
    return (String *)0x0;
  }
  this_00 = (Regex *)FUN_?(TypeInfo__System__Text__RegularExpressions__Regex);
  System.dll::System::Text::RegularExpressions::Regex::Regex__ctor_1
            (this_00,StringLiteral___sPtr___sPtr_____________Ptr_________,(MethodInfo *)0x0);
  if (this_00 != (Regex *)0x0) {
    if (((this_00->fields).roptions & 0x40) == 0) {
      startat = 0;
    }
    else {
      startat = (pSVar1->fields)._stringLength;
    }
    pMVar2 = System.dll::System::Text::RegularExpressions::Regex::Regex_Run
                       (this_00,0,-1,pSVar1,0,(pSVar1->fields)._stringLength,startat,
                        (MethodInfo *)0x0);
    if (pMVar2 != (Match *)0x0) {
      if ((pMVar2->fields)._._capcount != 0) {
        this_01 = (GroupCollection *)
                  (*(pMVar2->klass->vtable).get_Groups.methodPtr)
                            (pMVar2,(pMVar2->klass->vtable).get_Groups.method);
        if (((this_01 == (GroupCollection *)0x0) ||
            (pGVar3 = System.dll::System::Text::RegularExpressions::GroupCollection::
                      GroupCollection_GetGroup(this_01,1,(MethodInfo *)0x0), pGVar3 == (Group *)0x0)
            ) || (pSVar1 = (String *)
                           (*(pGVar3->klass->vtable).ToString.methodPtr)
                                     (pGVar3,(pGVar3->klass->vtable).ToString.method),
                 pSVar1 == (String *)0x0)) goto code_?;
        pSVar1 = mscorlib.dll::System::String::String_Substring_1
                           (pSVar1,1,(pSVar1->fields)._stringLength + -2,(MethodInfo *)0x0);
        pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                           (pSVar1,(MethodInfo *)0x0);
      }
      if ((pSVar1 != (String *)0x0) && ((pSVar1->fields)._stringLength != 0)) {
        pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
        if (pTVar4 == (TM *)0x0) goto code_?;
        if ((pTVar4->fields).catalog != (Catalog *)0x0) {
          pTVar4 = TM::TM_get_Instance((MethodInfo *)0x0);
          if ((pTVar4 == (TM *)0x0) || (this = (pTVar4->fields).catalog, this == (Catalog *)0x0))
          goto code_?;
          this_02 = GNU::Gettext::Catalog::Catalog_FindItem
                              (this,pSVar1,::StringLiteral__,(MethodInfo *)0x0);
          if ((this_02 != (CatalogEntry *)0x0) &&
             ((text = GNU::Gettext::CatalogEntry::CatalogEntry_GetTranslation
                                (this_02,0,(MethodInfo *)0x0), text != (String *)0x0 &&
              ((text->fields)._stringLength != 0)))) {
            pSVar1 = GNU::Gettext::StringEscaping::StringEscaping_FromGettextFormat
                               (text,(MethodInfo *)0x0);
            return pSVar1;
          }
        }
      }
      return pSVar1;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar5)();
  return pSVar1;
}


/* Boolean IsGoldRewardCountdownActive() */

bool Assembly-CSharp.dll::GoldRewardCountdownMeter::
     GoldRewardCountdownMeter_IsGoldRewardCountdownActive(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
    bVar3 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
      if ((pGVar2->fields).isCountingDownGoldReward == 0) {
        return 0;
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar2 != (GoldRewardManager *)0x0) {
        return (pGVar2->fields).isGoldRewardDone == 0;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_OnEnable
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  pGVar1 = (this->fields).goldRewardCountdownUI;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pGVar1->fields)._.m_CachedPtr == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  bVar4 = (*pcRam_?)();
  bVar5 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
  if (bVar4 != bVar5) {
    pGVar1 = (this->fields).goldRewardCountdownUI;
    bVar4 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,bVar4,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_Start
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Claim_gold_when_countdown_comple);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  GoldRewardCountdownMeter_UpdateCountdownVisibility(this,(MethodInfo *)0x0);
  pGVar1 = (this->fields).tipBubble;
  pSVar2 = TM::TM__(StringLiteral_Claim_gold_when_countdown_comple,(MethodInfo *)0x0);
  if (pGVar1 != (GamePassesTextBubble *)0x0) {
    pNVar3 = (pGVar1->fields).fader;
    if (pNVar3 != (NotificationFade *)0x0) {
      this_00 = (pNVar3->fields).group;
      (pNVar3->fields).playing = 1;
      (pNVar3->fields).pauseAt = (pNVar3->fields).duration;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,0.0,(MethodInfo *)0x0);
        (pNVar3->fields).currentTime = 0.0;
        pTVar4 = (pGVar1->fields).text;
        if (pTVar4 != (Text *)0x0) {
          (*(pTVar4->klass->vtable).set_text.methodPtr)
                    (pTVar4,pSVar2,(pTVar4->klass->vtable).set_text.method);
          (pGVar1->fields).isActive = 1;
          return;
        }
      }
    }
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void TryShowClaimGoldRewardPopup() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::
     GoldRewardCountdownMeter_TryShowClaimGoldRewardPopup
               (GoldRewardCountdownMeter *this,MethodInfo *method)

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
                  MethodInfo__GoldRewardCountdownMeter____c__DisplayClass14_0___TryShowClaimGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GoldRewardCountdownMeter____c__DisplayClass14_0);
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
    bVar3 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 == (GoldRewardManager *)0x0))
      goto code_?;
      fVar4 = GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(pGVar2,(MethodInfo *)0x0);
      if (fVar4 <= 0.0) {
        object = (Object *)FUN_?(TypeInfo__GoldRewardCountdownMeter____c__DisplayClass14_0);
        pGVar5 = (this->fields).claimGoldRewardPopupPrefab;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pOVar6 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar5,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if (object == (Object *)0x0) goto code_?;
        bVar7 = iRam_? != 0;
        object[1].klass = pOVar6;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)(object + 1) >> 0xc);
          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
          do {
            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
            LOCK();
            bVar7 = uVar10 == *puVar11;
            if (bVar7) {
              *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (!bVar7);
        }
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_00,object,
                   MethodInfo__GoldRewardCountdownMeter____c__DisplayClass14_0___TryShowClaimGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar5,(BaseEventData *)0x0,this_00,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
    }
    return;
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_Update
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  bVar1 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Go_to_menu_to_claim);
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
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pGVar3 = (pMVar2->fields).goldRewardManager, pGVar3 != (GoldRewardManager *)0x0)) {
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar6 = (float)(*pcRam_?)();
      fVar7 = _UNK_?;
      pPVar8 = (this->fields).countdownProgressBar;
      if (pPVar8 != (ProgressBar *)0x0) {
        fVar6 = (fVar6 - (pGVar3->fields).startTime) / _UNK_?;
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (_UNK_? < fVar6) {
          fVar6 = _UNK_?;
        }
        this_00 = (pPVar8->fields).progressBar;
        (pPVar8->fields).progress = fVar6;
        if (this_00 != (Scrollbar *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                    (this_00,fVar6,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if ((pMVar2 != (MVGameControllerBase *)0x0) &&
             (pGVar3 = (pMVar2->fields).goldRewardManager, pGVar3 != (GoldRewardManager *)0x0)) {
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            fVar6 = (float)(*pcRam_?)();
            pTVar9 = (this->fields).countdownText;
            fVar7 = fVar7 - (fVar6 - (pGVar3->fields).startTime);
            fVar6 = 0.0;
            if (0.0 <= fVar7) {
              fVar6 = fVar7;
            }
            if (0.0 < fVar6) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__MVGameControllerBase);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
              if ((pMVar2 != (MVGameControllerBase *)0x0) &&
                 (pGVar3 = (pMVar2->fields).goldRewardManager, pGVar3 != (GoldRewardManager *)0x0))
              {
                GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(pGVar3,(MethodInfo *)0x0)
                ;
                iVar10 = FUN_?();
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__Number);
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass
                     ->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                  FUN_?();
                }
                auStack_11 = (undefined1  [8])0x0;
                puStack_12 = (undefined *)0x0;
                pSVar13 = mscorlib.dll::System::Number::Number_FormatInt32
                                    (iVar10 + 1,(ReadOnlySpan_1_Char_ *)auStack_11,
                                     (IFormatProvider *)0x0,(MethodInfo *)0x0);
                if (pTVar9 != (Text *)0x0) {
                  (*(pTVar9->klass->vtable).set_text.methodPtr)
                            (pTVar9,pSVar13,(pTVar9->klass->vtable).set_text.method);
                  return;
                }
              }
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&StringLiteral_CLAIM);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              TM::TM__(StringLiteral_CLAIM,(MethodInfo *)0x0);
              if (pTVar9 != (Text *)0x0) {
                (*(pTVar9->klass->vtable).set_text.methodPtr)(pTVar9);
                pGVar14 = (this->fields).goldRewardClaimableUI;
                if (pGVar14 != (GameObject *)0x0) {
                  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_activeSelf(pGVar14,(MethodInfo *)0x0);
                  if (bVar1 == 0) {
                    pGVar14 = (this->fields).goldRewardClaimableUI;
                    if (pGVar14 == (GameObject *)0x0) goto code_?;
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                              (pGVar14,1,(MethodInfo *)0x0);
                  }
                  if ((this->fields).isDone == 0) {
                    this_01 = (this->fields).tipBubble;
                    pSVar13 = TM::TM__(StringLiteral_Go_to_menu_to_claim,(MethodInfo *)0x0);
                    if (this_01 == (GamePassesTextBubble *)0x0) goto code_?;
                    GamePassesTextBubble::GamePassesTextBubble_Activate
                              (this_01,pSVar13,(MethodInfo *)0x0);
                  }
                  (this->fields).isDone = 1;
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
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pGVar14 = (this->fields).goldRewardCountdownUI;
  if (pGVar14 != (GameObject *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pGVar14->fields)._.m_CachedPtr == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar14,(MethodInfo *)0x0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcVar4 = pcRam_?;
    if (pcRam_? == (code *)0x0) {
      pcVar4 = (code *)FUN_?(&UNK_?);
      if (pcVar4 == (code *)0x0) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pcRam_? = pcVar4;
    bVar1 = (*pcRam_?)();
    bVar15 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
    if (bVar1 != bVar15) {
      pGVar14 = (this->fields).goldRewardCountdownUI;
      bVar1 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
      if (pGVar14 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar14,bVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateCountDownProgress() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_UpdateCountDownProgress
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Go_to_menu_to_claim);
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
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
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
    fVar5 = (float)(*pcRam_?)();
    fVar6 = _UNK_?;
    pPVar7 = (this->fields).countdownProgressBar;
    if (pPVar7 != (ProgressBar *)0x0) {
      fVar5 = (fVar5 - (pGVar2->fields).startTime) / _UNK_?;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (_UNK_? < fVar5) {
        fVar5 = _UNK_?;
      }
      this_00 = (pPVar7->fields).progressBar;
      (pPVar7->fields).progress = fVar5;
      if (this_00 != (Scrollbar *)0x0) {
        UnityEngine.UI.dll::UnityEngine::UI::Scrollbar::Scrollbar_set_size
                  (this_00,fVar5,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
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
          fVar5 = (float)(*pcRam_?)();
          pTVar8 = (this->fields).countdownText;
          fVar6 = fVar6 - (fVar5 - (pGVar2->fields).startTime);
          fVar5 = 0.0;
          if (0.0 <= fVar6) {
            fVar5 = fVar6;
          }
          if (0.0 < fVar5) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((pMVar1 != (MVGameControllerBase *)0x0) &&
               (pGVar2 = (pMVar1->fields).goldRewardManager, pGVar2 != (GoldRewardManager *)0x0)) {
              GoldRewardManager::GoldRewardManager_GetGoldRewardTimeLeft(pGVar2,(MethodInfo *)0x0);
              iVar9 = FUN_?();
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__System__Number);
                LOCK();
                UNLOCK();
                FUN_?(&
                              MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->
                   field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
                FUN_?();
              }
              aRStack_10[0]._pointer._value = (void *)0x0;
              aRStack_10[0]._length = 0;
              aRStack_10[0]._12_4_ = 0;
              pSVar11 = mscorlib.dll::System::Number::Number_FormatInt32
                                 (iVar9 + 1,aRStack_10,(IFormatProvider *)0x0,(MethodInfo *)0x0);
              if (pTVar8 != (Text *)0x0) {
                (*(pTVar8->klass->vtable).set_text.methodPtr)
                          (pTVar8,pSVar11,(pTVar8->klass->vtable).set_text.method);
                return;
              }
            }
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&StringLiteral_CLAIM);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            TM::TM__(StringLiteral_CLAIM,(MethodInfo *)0x0);
            if (pTVar8 != (Text *)0x0) {
              (*(pTVar8->klass->vtable).set_text.methodPtr)(pTVar8);
              pGVar12 = (this->fields).goldRewardClaimableUI;
              if (pGVar12 != (GameObject *)0x0) {
                bVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_activeSelf(pGVar12,(MethodInfo *)0x0);
                if (bVar13 == 0) {
                  pGVar12 = (this->fields).goldRewardClaimableUI;
                  if (pGVar12 == (GameObject *)0x0) goto code_?;
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            (pGVar12,1,(MethodInfo *)0x0);
                }
                if ((this->fields).isDone == 0) {
                  this_01 = (this->fields).tipBubble;
                  pSVar11 = TM::TM__(StringLiteral_Go_to_menu_to_claim,(MethodInfo *)0x0);
                  if (this_01 == (GamePassesTextBubble *)0x0) goto code_?;
                  GamePassesTextBubble::GamePassesTextBubble_Activate
                            (this_01,pSVar11,(MethodInfo *)0x0);
                }
                (this->fields).isDone = 1;
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
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCountdownVisibility() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::
     GoldRewardCountdownMeter_UpdateCountdownVisibility
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  pGVar1 = (this->fields).goldRewardCountdownUI;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((pGVar1->fields)._.m_CachedPtr == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  bVar4 = (*pcRam_?)();
  bVar5 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
  if (bVar4 != bVar5) {
    pGVar1 = (this->fields).goldRewardCountdownUI;
    bVar4 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,bVar4,(MethodInfo *)0x0);
  }
  return;
}

