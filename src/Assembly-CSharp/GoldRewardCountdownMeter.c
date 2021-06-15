
/* String GetClaimText() */

String * Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_GetClaimText
                   (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_CLAIM,(MethodInfo *)0x0);
  return pSVar1;
}


/* Boolean IsGoldRewardCountdownActive() */

bool Assembly-CSharp.dll::GoldRewardCountdownMeter::
     GoldRewardCountdownMeter_IsGoldRewardCountdownActive
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar1 != (GoldRewardManager *)0x0) {
    bVar2 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar1 != (GoldRewardManager *)0x0) {
      if ((pGVar1->fields).isCountingDownGoldReward == 0) {
        return 0;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar1 != (GoldRewardManager *)0x0) {
        return (pGVar1->fields).isGoldRewardDone == 0;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_Start
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).goldRewardCountdownUI;
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                      (pGVar1,(MethodInfo *)0x0);
    bVar3 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive(this,(MethodInfo *)0x0);
    if (bVar2 != bVar3) {
      pGVar1 = (this->fields).goldRewardCountdownUI;
      bVar2 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive(this,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar1 == (GoldRewardManager *)0x0) {
code_?:
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  method_00 = (MethodInfo *)&UNK_?;
  bVar3 = GoldRewardManager::GoldRewardManager_CanGetGoldReward(pGVar1,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
    if (pGVar1 == (GoldRewardManager *)0x0) goto code_?;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar5 = _UNK_? - (fVar4 - (pGVar1->fields).startTime);
    fVar4 = 0.0;
    if (0.0 <= fVar5) {
      fVar4 = fVar5;
    }
    if (fVar4 <= 0.0) {
      this_00 = (ScaleAnimationBase *)
                func_?(
                               TypeInfo__GoldRewardCountdownMeter___TryShowClaimGoldRewardPopup_c__AnonStorey0
                               );
      ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
      pXVar6 = unaff_EBX[2].fields._.m_CachedPtr;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      pXVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar6,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
      if (this_00 == (ScaleAnimationBase *)0x0) goto code_?;
      (this_00->fields)._._._._.m_CachedPtr = pXVar6;
      root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                       (unaff_EBX,(MethodInfo *)0x0);
      this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_01,(Object *)this_00,
                 MethodInfo__GoldRewardCountdownMeter___TryShowClaimGoldRewardPopup_c__AnonStorey0____m__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,
                 MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>__EventFunction_System__Object__void__
                );
      if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
      ExecuteEvents_ExecuteHierarchy_63
                (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_01,
                 UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                );
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_Update
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  bVar1 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    GoldRewardCountdownMeter_UpdateCountdownVisibility(this,(MethodInfo *)0x0);
    return;
  }
  GoldRewardCountdownMeter_UpdateCountDownProgress(this,(MethodInfo *)0x0);
  return;
}


/* Void UpdateCountDownProgress() */

void Assembly-CSharp.dll::GoldRewardCountdownMeter::GoldRewardCountdownMeter_UpdateCountDownProgress
               (GoldRewardCountdownMeter *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
  if (pGVar2 != (GoldRewardManager *)0x0) {
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    this_00 = (this->fields).countdownProgressBar;
    if (this_00 != (ProgressBar *)0x0) {
      ProgressBar::ProgressBar_set_Progress
                (this_00,(fVar3 - (pGVar2->fields).startTime) / _UNK_?,(MethodInfo *)0x0);
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager((MethodInfo *)0x0);
      if (pGVar2 != (GoldRewardManager *)0x0) {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pTVar4 = (this->fields).countdownText;
        fVar5 = _UNK_? - (fVar3 - (pGVar2->fields).startTime);
        fVar3 = 0.0;
        if (0.0 <= fVar5) {
          fVar3 = fVar5;
        }
        if (0.0 < fVar3) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GoldRewardManager
                             ((MethodInfo *)0x0);
          if (pGVar2 != (GoldRewardManager *)0x0) {
            fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0);
            pMVar6 = (Mathf__Class *)(_UNK_? - (fVar3 - (pGVar2->fields).startTime));
            f = (Mathf__Class *)0x0;
            if (0.0 <= (float)pMVar6) {
              f = pMVar6;
            }
            if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
              f = TypeInfo__UnityEngine__Mathf;
              func_?();
            }
            iVar7 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_FloorToInt
                              ((float)f,(MethodInfo *)0x0);
            puStack_1 = (undefined *)(iVar7 + 1);
            uVar8 = func_?(&puStack_1,0);
            if (pTVar4 != (Text *)0x0) {
              (*(code *)(pTVar4->klass->vtable).set_text.method)
                        (pTVar4,uVar8,
                         (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
              return;
            }
          }
        }
        else {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pSVar9 = TM::TM__(StringLiteral_CLAIM,(MethodInfo *)0x0);
          if (pTVar4 != (Text *)0x0) {
            (*(code *)(pTVar4->klass->vtable).set_text.method)
                      (pTVar4,pSVar9,
                       (pTVar4->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
            pGVar10 = (this->fields).goldRewardClaimableUI;
            if (pGVar10 != (GameObject *)0x0) {
              bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                                (pGVar10,(MethodInfo *)0x0);
              if (bVar11 == 0) {
                pGVar10 = (this->fields).goldRewardClaimableUI;
                if (pGVar10 == (GameObject *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar10,1,(MethodInfo *)0x0);
              }
              if ((this->fields).isDone == 0) {
                this_01 = (this->fields).tipBubble;
                pSVar9 = TM::TM__(StringLiteral_Go_to_menu_to_claim,(MethodInfo *)0x0);
                if (this_01 == (GamePassesTextBubble *)0x0) goto code_?;
                GamePassesTextBubble::GamePassesTextBubble_Activate
                          (this_01,pSVar9,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
    bVar3 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive(this,(MethodInfo *)0x0);
    if (bVar2 != bVar3) {
      pGVar1 = (this->fields).goldRewardCountdownUI;
      bVar2 = GoldRewardCountdownMeter_IsGoldRewardCountdownActive(this,(MethodInfo *)0x0);
      if (pGVar1 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,bVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

