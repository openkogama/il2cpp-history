
/* Void GoldPendingUpdate() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_GoldPendingUpdate
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Invoke__Requesting_gold_update_r,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = (MVJetPack *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVJetPack *)0x0) {
    this_01 = MVJetPack::MVJetPack_get_Shield(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestUpdateGoldResponse
                ((MVNetworkGame_OperationRequests *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void GoldUpdatedCallback() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_GoldUpdatedCallback
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).goldGainedTotal;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar2 == (MVNetworkGame *)0x0) ||
      (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
      pMVar3 == (MVLocalPlayer *)0x0)) ||
     (iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID
                        ((GamePointGainEffect *)pMVar3,(MethodInfo *)0x0), iVar4 == 0)) {
code_?:
    func_?();
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
code_?:
    uVar5 = func_?();
    func_?(uVar5);
  }
  else {
    iVar6 = *(int *)(iVar4 + 0x10);
    iVar7 = (this->fields).currentGold;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2
                      (0,iVar6 - iVar7,(MethodInfo *)0x0);
    (this->fields).goldGainedTotal = iVar4 + iVar1;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
        pMVar3 == (MVLocalPlayer *)0x0)) ||
       (iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID
                          ((GamePointGainEffect *)pMVar3,(MethodInfo *)0x0), iVar4 == 0))
    goto code_?;
    (this->fields).currentGold = *(int32_t *)(iVar4 + 0x10);
    pOVar8 = (Object__Array *)func_?();
    if (pOVar8 == (Object__Array *)0x0) goto code_?;
    if ((StringLiteral_currentGold__ != (String *)0x0) && (iVar1 = func_?(), iVar1 == 0))
    goto code_?;
    if (pOVar8->max_length == 0) goto code_?;
    pOVar8->vector[0] = (Object *)StringLiteral_currentGold__;
    pOVar9 = (Object *)func_?();
    if ((pOVar9 != (Object *)0x0) && (iVar1 = func_?(), iVar1 == 0)) goto code_?;
    if (pOVar8->max_length < 2) goto code_?;
    pOVar8->vector[1] = pOVar9;
    if ((StringLiteral__and_delta_is_ != (String *)0x0) && (iVar1 = func_?(), iVar1 == 0))
    goto code_?;
    if (pOVar8->max_length < 3) goto code_?;
    pOVar8->vector[2] = (Object *)StringLiteral__and_delta_is_;
    pOVar9 = (Object *)func_?();
    if ((pOVar9 != (Object *)0x0) && (iVar1 = func_?(), iVar1 == 0)) goto code_?;
    if (pOVar8->max_length < 4) goto code_?;
    pOVar8->vector[3] = pOVar9;
    if ((StringLiteral___Expecting_a_total_of__ != (String *)0x0) &&
       (iVar1 = func_?(), iVar1 == 0)) goto code_?;
    if (pOVar8->max_length < 5) goto code_?;
    pOVar8->vector[4] = (Object *)StringLiteral___Expecting_a_total_of__;
    pOVar9 = (Object *)func_?();
    if ((pOVar9 != (Object *)0x0) && (iVar1 = func_?(), iVar1 == 0)) goto code_?;
    if (5 < pOVar8->max_length) {
      pOVar8->vector[5] = pOVar9;
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar10 = mscorlib.dll::System::String::String_Concat_5(pOVar8,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)pSVar10,(MethodInfo *)0x0);
      if ((this->fields).goldGainedTotal < (this->fields).goldDeltaExpected) {
        return;
      }
      (this->fields).goldGainedTotal = 0;
      (this->fields).goldDeltaExpected = 0;
      pOVar8 = (Object__Array *)func_?();
      if ((((uint)(TypeInfo__BrowserComm__ToJavaScript->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_started == 0)) {
        func_?(TypeInfo__BrowserComm__ToJavaScript);
      }
      BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
                (StringLiteral_refreshCredentials,pOVar8,(MethodInfo *)0x0);
      pSVar10 = TM::TM__(StringLiteral_Thank_you_for_waiting__Your_purc,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
        func_?(TypeInfo__NotificationController);
      }
      NotificationController::NotificationController_PushNotification
                (pSVar10,(Sprite *)0x0,5,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
         pMVar3 != (MVLocalPlayer *)0x0)) {
        pAVar11 = (pMVar3->fields)._.OnGoldAmountChange;
        this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_00,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
                   (MethodInfo *)0x0);
        pAVar12 = (Action *)
                  mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)pAVar11,(Delegate *)this_00,(MethodInfo *)0x0);
        pAVar11 = (Action *)0x0;
        if (pAVar12 != (Action *)0x0) {
          if (pAVar12->klass == TypeInfo__System__Action) {
            pAVar11 = pAVar12;
          }
          pAVar13 = TypeInfo__System__Action;
          if (pAVar11 == (Action *)0x0) goto code_?;
        }
        (pMVar3->fields)._.OnGoldAmountChange = pAVar11;
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_CancelInvoke_2
                  ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar2 != (MVNetworkGame *)0x0) &&
            (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
            pMVar3 != (MVLocalPlayer *)0x0)) &&
           (iVar4 = GamePointGainEffect::GamePointGainEffect_get_ID
                              ((GamePointGainEffect *)pMVar3,(MethodInfo *)0x0), iVar4 != 0)) {
          pOVar9 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?();
          }
          pSVar10 = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_Finished_calling_Gold_Update__Di,pOVar9,
                               (MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)pSVar10,(MethodInfo *)0x0);
          return;
        }
      }
      goto code_?;
    }
  }
  uVar5 = func_?();
  func_?(uVar5);
  pAVar12 = extraout_ECX;
  pAVar13 = extraout_EDX;
code_?:
  func_?(pAVar12,pAVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_Initialize
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pBVar1 = MVGameControllerBase::MVGameControllerBase_get_BrowserComm((MethodInfo *)0x0);
  if (pBVar1 != (BrowserComm *)0x0) {
    pAVar2 = (pBVar1->fields).OnGoldPurchasedFromWeb;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action<int,_int>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_,
               MethodInfo__System__Action<int,_int>__Action_System__Object__void__);
    pAStack3 =
         (Action_2_Int32_Int32_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar2 = (Action_2_Int32_Int32_ *)0x0;
    if (pAStack3 != (Action_2_Int32_Int32_ *)0x0) {
      if (pAStack3->klass == TypeInfo__System__Action<int,_int>) {
        pAVar2 = pAStack3;
      }
      pAStack4 = TypeInfo__System__Action<int,_int>;
      if (pAVar2 == (Action_2_Int32_Int32_ *)0x0) goto code_?;
    }
    (pBVar1->fields).OnGoldPurchasedFromWeb = pAVar2;
    return;
  }
  func_?(0);
  pAStack3 = extraout_ECX;
  pAStack4 = extraout_EDX;
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_OnDestroy
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsInvoking_2
                    ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_CancelInvoke_2
              ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pBVar2 = MVGameControllerBase::MVGameControllerBase_get_BrowserComm((MethodInfo *)0x0);
  if (pBVar2 != (BrowserComm *)0x0) {
    pAVar3 = (pBVar2->fields).OnGoldPurchasedFromWeb;
    pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar4,(Object *)this,
               MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_,
               MethodInfo__System__Action<int,_int>__Action_System__Object__void__);
    pAVar5 = (Action_2_Int32_Int32_ *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
    pAVar3 = (Action_2_Int32_Int32_ *)0x0;
    if (pAVar5 != (Action_2_Int32_Int32_ *)0x0) {
      if (pAVar5->klass == TypeInfo__System__Action<int,_int>) {
        pAVar3 = pAVar5;
      }
      if (pAVar3 == (Action_2_Int32_Int32_ *)0x0) goto code_?;
    }
    (pBVar2->fields).OnGoldPurchasedFromWeb = pAVar3;
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar6 != (MVLocalPlayer *)0x0)) {
      pAVar7 = (pMVar6->fields)._.OnGoldAmountChange;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
                 (MethodInfo *)0x0);
      pAVar8 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar7,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pAVar7 = (Action *)0x0;
      if (pAVar8 == (Action *)0x0) {
code_?:
        (pMVar6->fields)._.OnGoldAmountChange = pAVar7;
        return;
      }
      if (pAVar8->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar8;
      }
      if (pAVar7 != (Action *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StartGoldPurchasePendingUpdate(Int32, Int32) */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_StartGoldPurchasePendingUpdate
               (GoldPurchasedTracker *this,int32_t currentGold,int32_t goldDelta,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).currentGold = currentGold;
  piVar1 = &(this->fields).goldDeltaExpected;
  *piVar1 = *piVar1 + goldDelta;
  (this->fields).goldGainedTotal = 0;
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Requesting_gold_purchase_update,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                   ((Component_1 *)this,(MethodInfo *)0x0);
  if (TypeInfo__GoldPurchasedTracker->static_fields->__f__am_cache0 ==
      (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(
                            TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                            );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)0x0,
               MethodInfo__GoldPurchasedTracker___StartGoldPurchasePendingUpdate_m__0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
               ,
               MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>__EventFunction_System__Object__void__
              );
    TypeInfo__GoldPurchasedTracker->static_fields->__f__am_cache0 =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)pUVar2;
  }
  callbackFunction =
       (ExecuteEvents_EventFunction_1_IHandleToolTip_ *)
       TypeInfo__GoldPurchasedTracker->static_fields->__f__am_cache0;
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
            );
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsInvoking_2
                    ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (pMVar4 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    pAStack5 = TypeInfo__System__Action;
    pAVar6 = (pMVar4->fields)._.OnGoldAmountChange;
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
               (MethodInfo *)0x0);
    pAVar7 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar6,(Delegate *)pUVar2,(MethodInfo *)0x0);
    pAVar6 = (Action *)0x0;
    if (pAVar7 != (Action *)0x0) {
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar6 = pAVar7;
      }
      if (pAVar6 == (Action *)0x0) goto code_?;
    }
    (pMVar4->fields)._.OnGoldAmountChange = pAVar6;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_InvokeRepeating
              ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,5.0,30.0,(MethodInfo *)0x0);
    return;
  }
  pAStack5 = (Action__Class *)0x0;
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void <StartGoldPurchasePendingUpdate>m__0(IModalPopupCreator, BaseEventData) */

void Assembly-CSharp.dll::GoldPurchasedTracker::
     GoldPurchasedTracker__StartGoldPurchasePendingUpdate_m__0
               (IModalPopupCreator *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  TM::TM__(StringLiteral_Thank_you_for_your_purchase__It_,(MethodInfo *)0x0);
  pSVar1 = TM::TM__(StringLiteral_Purchase_pending,(MethodInfo *)0x0);
  if (x == (IModalPopupCreator *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar3 = x->klass;
  uVar4 = 0;
  uVar5._0_1_ = (pIVar3->_1).rank;
  uVar5._1_1_ = (pIVar3->_1).minimumAlignment;
  if (uVar5 != 0) {
    do {
      if (pIVar3->interfaceOffsets[uVar4].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IModalPopupCreator) {
        ppMVar6 = &(&(x->klass->vtable).Create_3)[pIVar3->interfaceOffsets[uVar4].offset].method;
        goto code_?;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  ppMVar6 = (MethodInfo **)
            func_?(x,TypeInfo__UnityEngine__EventSystems__IModalPopupCreator,4);
code_?:
  (*(code *)*ppMVar6)(x,ppMVar6[1],pSVar1);
  return;
}

