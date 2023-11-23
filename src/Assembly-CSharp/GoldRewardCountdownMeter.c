
/* String GetClaimText() */

String * Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_GetClaimText
                   (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_CLAIM);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_CLAIM,(MethodInfo *)0x0);
  return pSVar1;
}


/* Boolean IsGoldRewardCountdownActive() */

bool Assembly-CSharp.dll::GoldRewardCountdownMeter::
     GoldRewardCountdownMeter_IsGoldRewardCountdownActive(MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar1 != (GoldRewardManager *)0x0) {
    bVar2 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if ((((bVar2 == 0) || ((pGVar1->fields).isGoldRewardGame == 0)) ||
        (MVar3 != MVGameMode__Enum_Play || (pGVar1->fields).isGoldRewardDone != 0)) || (bVar4 != 0))
    {
      return 0;
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar1 != (GoldRewardManager *)0x0) {
      if ((pGVar1->fields).isCountingDownGoldReward == 0) {
        return 0;
      }
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar1 != (GoldRewardManager *)0x0) {
        return (pGVar1->fields).isGoldRewardDone == 0;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_Start
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Claim_gold_when_countdown_comple);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).goldRewardCountdownUI;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    bVar3 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
    if (bVar2 != bVar3) {
      pGVar1 = (this->fields).goldRewardCountdownUI;
      bVar2 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
    }
    this_00 = (this->fields).tipBubble;
    textBubbleText = TM::TM__(StringLiteral_Claim_gold_when_countdown_comple,(MethodInfo *)0x0);
    if (this_00 != (GamePassesTextBubble *)0x0) {
      GamePassesTextBubble::GamePassesTextBubble_Activate(this_00,textBubbleText,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TryShowClaimGoldRewardPopup() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::
     GoldRewardCountdownMeter_TryShowClaimGoldRewardPopup
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__GoldRewardCountdownMeter____c__DisplayClass14_0___TryShowClaimGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GoldRewardCountdownMeter____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar1 != (GoldRewardManager *)0x0) {
    bVar2 = MVClientSettings::MVClientSettings_get_RewardedAdsEnabled((MethodInfo *)0x0);
    MVar3 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    bVar4 = MVGameControllerBase::MVGameControllerBase_get_IsTouristSession((MethodInfo *)0x0);
    if ((((bVar2 != 0) && ((pGVar1->fields).isGoldRewardGame != 0)) &&
        (MVar3 == MVGameMode__Enum_Play && (pGVar1->fields).isGoldRewardDone == 0)) && (bVar4 == 0))
    {
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar1 == (GoldRewardManager *)0x0) goto code_?;
      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      fVar6 = _UNK_? - (fVar5 - (pGVar1->fields).startTime);
      fVar5 = 0.0;
      if (0.0 <= fVar6) {
        fVar5 = fVar6;
      }
      if (fVar5 <= 0.0) {
        value = (Object *)func_?();
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  (value,ExceptionArgument__Enum_obj,method_00);
        pGVar7 = (this->fields).claimGoldRewardPopupPrefab;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        pOVar8 = (Object__Class *)
                 UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                           ((Object *)pGVar7,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                           );
        if (value == (Object *)0x0) goto code_?;
        value[1].klass = pOVar8;
        func_?(value + 1,pOVar8);
        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        callbackFunction =
             (ExecuteEvents_EventFunction_1_System_Object_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                            );
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value,
                   MethodInfo__GoldRewardCountdownMeter____c__DisplayClass14_0___TryShowClaimGoldRewardPopup_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0
           ) {
          func_?();
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
                  (pGVar7,(BaseEventData *)0x0,callbackFunction,
                   UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                  );
      }
    }
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_Update
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  bVar1 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_Go_to_menu_to_claim);
      cRam_? = '\x01';
    }
    pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if ((pGVar2 != (GoldRewardManager *)0x0) &&
       (fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       pPRam00000014 != (ProgressBarAndroid *)0x0)) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (pPRam00000014,(fVar3 - (pGVar2->fields).startTime) / _UNK_?,
                 (MethodInfo *)0x0);
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar2 != (GoldRewardManager *)0x0) {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        piVar4 = piRam_?;
        fVar5 = _UNK_? - (fVar3 - (pGVar2->fields).startTime);
        fVar3 = 0.0;
        if (0.0 <= fVar5) {
          fVar3 = fVar5;
        }
        if (0.0 < fVar3) {
          pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                             ((MethodInfo *)0x0);
          if (pGVar2 != (GoldRewardManager *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            fVar6 = (float10)func_?();
            uVar7 = CONCAT44((int)fVar6 + 1,SUB84((double)fVar6,0));
            pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
            if (piVar4 != (int *)0x0) {
              (**(code **)(*piVar4 + 0x318))(piVar4,pSVar8,*(undefined4 *)(*piVar4 + 0x31c),uVar7);
              return;
            }
          }
        }
        else {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar8 = TM::TM__(StringLiteral_CLAIM,(MethodInfo *)0x0);
          if ((piVar4 != (int *)0x0) &&
             ((**(code **)(*piVar4 + 0x318))(piVar4,pSVar8,*(undefined4 *)(*piVar4 + 0x31c)),
             pGRam0000001c != (GameObject *)0x0)) {
            bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGRam0000001c,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              if (pGRam0000001c == (GameObject *)0x0) goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGRam0000001c,1,(MethodInfo *)0x0);
            }
            this_01 = pGRam00000020;
            if (cRam_? == '\0') {
              pSVar8 = TM::TM__(StringLiteral_Go_to_menu_to_claim,(MethodInfo *)0x0);
              if (this_01 == (GamePassesTextBubble *)0x0) goto code_?;
              GamePassesTextBubble::GamePassesTextBubble_Activate(this_01,pSVar8,(MethodInfo *)0x0);
            }
            cRam_? = 1;
            return;
          }
        }
      }
    }
code_?:
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (pGRam00000010 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGRam00000010,(MethodInfo *)0x0);
    bVar10 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
    this_00 = pGRam00000010;
    if (bVar1 != bVar10) {
      GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
      if (this_00 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateCountDownProgress() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_UpdateCountDownProgress
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Go_to_menu_to_claim);
    cRam_? = '\x01';
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar1 != (GoldRewardManager *)0x0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_00 = (ProgressBarAndroid *)(this->fields).countdownProgressBar;
    if (this_00 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_00,(fVar2 - (pGVar1->fields).startTime) / _UNK_?,(MethodInfo *)0x0);
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar1 != (GoldRewardManager *)0x0) {
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pTVar3 = (this->fields).countdownText;
        fVar4 = _UNK_? - (fVar2 - (pGVar1->fields).startTime);
        fVar2 = 0.0;
        if (0.0 <= fVar4) {
          fVar2 = fVar4;
        }
        if (0.0 < fVar2) {
          pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                             ((MethodInfo *)0x0);
          if (pGVar1 != (GoldRewardManager *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            fVar5 = (float10)func_?();
            uVar6 = CONCAT44((int)fVar5 + 1,SUB84((double)fVar5,0));
            pSVar7 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&stack0xfffffff4,(MethodInfo *)0x0);
            if (pTVar3 != (Text *)0x0) {
              (*(code *)(pTVar3->klass->vtable).set_text.method)
                        (pTVar3,pSVar7,
                         (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr,uVar6);
              return;
            }
          }
        }
        else {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar7 = TM::TM__(StringLiteral_CLAIM,(MethodInfo *)0x0);
          if (pTVar3 != (Text *)0x0) {
            (*(code *)(pTVar3->klass->vtable).set_text.method)
                      (pTVar3,pSVar7,
                       (pTVar3->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pGVar8 = (this->fields).goldRewardClaimableUI;
            if (pGVar8 != (GameObject *)0x0) {
              bVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar8,(MethodInfo *)0x0);
              if (bVar9 == 0) {
                pGVar8 = (this->fields).goldRewardClaimableUI;
                if (pGVar8 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar8,1,(MethodInfo *)0x0);
              }
              if ((this->fields).isDone == 0) {
                this_01 = (this->fields).tipBubble;
                pSVar7 = TM::TM__(StringLiteral_Go_to_menu_to_claim,(MethodInfo *)0x0);
                if (this_01 == (GamePassesTextBubble *)0x0) goto code_?;
                GamePassesTextBubble::GamePassesTextBubble_Activate
                          (this_01,pSVar7,(MethodInfo *)0x0);
              }
              (this->fields).isDone = 1;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void UpdateCountdownVisibility() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::
     GoldRewardCountdownMeter_UpdateCountdownVisibility
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  pGVar1 = (this->fields).goldRewardCountdownUI;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    bVar3 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
    if (bVar2 != bVar3) {
      pGVar1 = (this->fields).goldRewardCountdownUI;
      GoldRewardCountdownMeter_IsGoldRewardCountdownActive((MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

