
/* Void GoldPendingUpdate() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_GoldPendingUpdate
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Invoke__Requesting_gold_update_r);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Invoke__Requesting_gold_update_r,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_RequestUpdateGoldResponse
              (this_00,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0x00000000);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void GoldUpdatedCallback() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_GoldUpdatedCallback
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__);
    func_?(&TypeInfo__NotificationController);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__BrowserComm__ToJavaScript);
    func_?(&StringLiteral_Thank_you_for_waiting__Your_purc);
    func_?(&StringLiteral_GoldPendingUpdate);
    func_?(&StringLiteral_refreshCredentials);
    func_?(&StringLiteral___Expecting_a_total_of__);
    func_?(&StringLiteral_currentGold__);
    func_?(&StringLiteral_Finished_calling_Gold_Update__Di);
    func_?(&StringLiteral__and_delta_is_);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).goldGainedTotal;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar2 == (MVNetworkGame *)0x0) ||
      (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
      pMVar3 == (MVLocalPlayer *)0x0)) ||
     (pUVar4 = (pMVar3->fields)._._UserProfileData_k__BackingField, pUVar4 == (UserProfileData *)0x0
     )) {
code_?:
    func_?();
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
code_?:
    uVar5 = func_?(0);
    func_?(uVar5);
  }
  else {
    iVar6 = (pUVar4->fields).Gold - (this->fields).currentGold;
    iVar7 = 0;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    (this->fields).goldGainedTotal = iVar7 + iVar1;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar2 == (MVNetworkGame *)0x0) ||
        (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
        pMVar3 == (MVLocalPlayer *)0x0)) ||
       (pUVar4 = (pMVar3->fields)._._UserProfileData_k__BackingField,
       pUVar4 == (UserProfileData *)0x0)) goto code_?;
    (this->fields).currentGold = (pUVar4->fields).Gold;
    values = (String__Array *)func_?();
    if (values == (String__Array *)0x0) goto code_?;
    if ((StringLiteral_currentGold__ != (String *)0x0) &&
       (iVar1 = func_?(StringLiteral_currentGold__,(values->klass->_0).element_class),
       iVar1 == 0)) goto code_?;
    pSVar8 = StringLiteral_currentGold__;
    if (values->max_length == 0) goto code_?;
    values->vector[0] = StringLiteral_currentGold__;
    func_?(values->vector,pSVar8);
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).currentGold,(MethodInfo *)0x0);
    if ((pSVar8 != (String *)0x0) &&
       (iVar1 = func_?(pSVar8,(values->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (values->max_length < 2) goto code_?;
    values->vector[1] = pSVar8;
    func_?(values->vector + 1,pSVar8);
    if ((StringLiteral__and_delta_is_ != (String *)0x0) &&
       (iVar1 = func_?(StringLiteral__and_delta_is_,(values->klass->_0).element_class),
       iVar1 == 0)) goto code_?;
    pSVar8 = StringLiteral__and_delta_is_;
    if (values->max_length < 3) goto code_?;
    values->vector[2] = StringLiteral__and_delta_is_;
    func_?(values->vector + 2,pSVar8);
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).goldGainedTotal,(MethodInfo *)0x0);
    if ((pSVar8 != (String *)0x0) &&
       (iVar1 = func_?(pSVar8,(values->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (values->max_length < 4) goto code_?;
    values->vector[3] = pSVar8;
    func_?(values->vector + 3,pSVar8);
    if ((StringLiteral___Expecting_a_total_of__ != (String *)0x0) &&
       (iVar1 = func_?(StringLiteral___Expecting_a_total_of__,
                                (values->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    pSVar8 = StringLiteral___Expecting_a_total_of__;
    if (values->max_length < 5) goto code_?;
    values->vector[4] = StringLiteral___Expecting_a_total_of__;
    func_?(values->vector + 4,pSVar8);
    pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).goldDeltaExpected,(MethodInfo *)0x0);
    if ((pSVar8 != (String *)0x0) &&
       (iVar1 = func_?(pSVar8,(values->klass->_0).element_class), iVar1 == 0))
    goto code_?;
    if (values->max_length < 6) goto code_?;
    values->vector[5] = pSVar8;
    func_?(values->vector + 5,pSVar8);
    pSVar8 = mscorlib.dll::System::String::String_Concat_6(values,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log((Object *)pSVar8,(MethodInfo *)0x0);
    if ((this->fields).goldGainedTotal < (this->fields).goldDeltaExpected) {
      return;
    }
    (this->fields).goldGainedTotal = 0;
    (this->fields).goldDeltaExpected = 0;
    pMVar9 = System__Object__MethodInfo__System__Array__Empty<System::Object>______;
    iVar1 = *(int *)(System__Object__MethodInfo__System__Array__Empty<System::Object>______->
                    field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_?(iVar1);
    }
    iVar1 = *(int *)(pMVar9->field7_0x1c).methodMetadataHandle;
    if ((*(byte *)(iVar1 + 0xba) & 1) == 0) {
      iVar1 = func_?(iVar1);
    }
    args = (Object__Array *)**(undefined4 **)(iVar1 + 0x5c);
    if ((TypeInfo__BrowserComm__ToJavaScript->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__BrowserComm__ToJavaScript);
    }
    BrowserComm+ToJavaScript::BrowserComm_ToJavaScript_ExternalCall
              (StringLiteral_refreshCredentials,args,(MethodInfo *)0x0);
    pSVar8 = TM::TM__(StringLiteral_Thank_you_for_waiting__Your_purc,(MethodInfo *)0x0);
    if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__NotificationController);
    }
    NotificationController::NotificationController_PushNotification
              (pSVar8,(Sprite *)0x0,5,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 == (MVNetworkGame *)0x0) ||
       (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
       pMVar3 == (MVLocalPlayer *)0x0)) goto code_?;
    pAVar10 = (pMVar3->fields)._.OnGoldAmountChange;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
               (MethodInfo *)0x0);
    pAVar10 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar10 == (Action *)0x0) {
      (pMVar3->fields)._.OnGoldAmountChange = (Action *)0x0;
code_?:
      func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_CancelInvoke_2
                ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar2 != (MVNetworkGame *)0x0) &&
          (pMVar3 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
          pMVar3 != (MVLocalPlayer *)0x0)) &&
         (pUVar4 = (pMVar3->fields)._._UserProfileData_k__BackingField,
         pUVar4 != (UserProfileData *)0x0)) {
        pSVar8 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(pUVar4->fields).Gold,(MethodInfo *)0x0);
        pSVar8 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_Finished_calling_Gold_Update__Di,pSVar8,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)pSVar8,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    pAVar11 = (Action *)0x0;
    if (pAVar10->klass == TypeInfo__System__Action) {
      pAVar11 = pAVar10;
    }
    if (pAVar11 != (Action *)0x0) {
      (pMVar3->fields)._.OnGoldAmountChange = pAVar11;
      pAVar11 = (Action *)0x0;
      if (pAVar10->klass == TypeInfo__System__Action) {
        pAVar11 = pAVar10;
      }
      if (pAVar11 != (Action *)0x0) goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_Initialize
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int>);
    func_?(&MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_);
    cRam_? = '\x01';
  }
  pBVar1 = MVGameControllerBase::MVGameControllerBase_get_BrowserComm((MethodInfo *)0x0);
  if (pBVar1 != (BrowserComm *)0x0) {
    unaff_EBX = (Action_2_Int32_Int32___Class *)(pBVar1->fields).OnGoldPurchasedFromWeb;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)
              func_?(TypeInfo__System__Action<int,_int>);
    if (this_00 != (UnityAction_2_System_Int32_System_Int32_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
      UnityAction_2_System_Int32_System_Int32___ctor
                (this_00,(Object *)this,
                 MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_,
                 (MethodInfo *)0x0);
      pAStack2 =
           (Action_2_Int32_Int32___Class *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)unaff_EBX,(Delegate *)this_00,(MethodInfo *)0x0);
      unaff_EBX = TypeInfo__System__Action<int,_int>;
      if (pAStack2 == (Action_2_Int32_Int32___Class *)0x0) {
        (pBVar1->fields).OnGoldPurchasedFromWeb = (Action_2_Int32_Int32_ *)0x0;
        func_?();
        return;
      }
      pAStack2 = TypeInfo__System__Action<int,_int>;
      pAVar3 = (Action_2_Int32_Int32_ *)func_?();
      if (pAVar3 != (Action_2_Int32_Int32_ *)0x0) {
        (pBVar1->fields).OnGoldPurchasedFromWeb = pAVar3;
        unaff_EBX = TypeInfo__System__Action<int,_int>;
        pAStack2 = TypeInfo__System__Action<int,_int>;
        pAStack2 = (Action_2_Int32_Int32___Class *)func_?();
        if (pAStack2 != (Action_2_Int32_Int32___Class *)0x0) {
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  pAStack2 = unaff_EBX;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GoldPurchasedTracker::GoldPurchasedTracker_OnDestroy
               (GoldPurchasedTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<int,_int>);
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__);
    func_?(&MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_);
    func_?(&StringLiteral_GoldPendingUpdate);
    cRam_? = '\x01';
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsInvoking_2
                    ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_CancelInvoke_2
              ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pBVar2 = MVGameControllerBase::MVGameControllerBase_get_BrowserComm((MethodInfo *)0x0);
  if (pBVar2 == (BrowserComm *)0x0) {
code_?:
    func_?();
  }
  else {
    pAVar3 = (pBVar2->fields).OnGoldPurchasedFromWeb;
    this_00 = (UnityAction_2_System_Int32_System_Int32_ *)func_?();
    if (this_00 == (UnityAction_2_System_Int32_System_Int32_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Int32,System::Int32]::
    UnityAction_2_System_Int32_System_Int32___ctor
              (this_00,(Object *)this,
               MethodInfo__GoldPurchasedTracker__StartGoldPurchasePendingUpdate_int__int_,
               (MethodInfo *)0x0);
    pDVar4 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar4 == (Delegate *)0x0) {
      (pBVar2->fields).OnGoldPurchasedFromWeb = (Action_2_Int32_Int32_ *)0x0;
    }
    else {
      pAVar3 = (Action_2_Int32_Int32_ *)func_?();
      if (pAVar3 == (Action_2_Int32_Int32_ *)0x0) goto code_?;
      (pBVar2->fields).OnGoldPurchasedFromWeb = pAVar3;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
    this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_01 == (MVNetworkGame *)0x0) ||
       (pMVar6 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
       pMVar6 == (MVLocalPlayer *)0x0)) goto code_?;
    pAVar7 = (pMVar6->fields)._.OnGoldAmountChange;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    if (this_02 == (NavMesh_OnNavMeshPreUpdate *)0x0) goto code_?;
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
               (MethodInfo *)0x0);
    pAVar7 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar7,(Delegate *)this_02,(MethodInfo *)0x0);
    if (pAVar7 == (Action *)0x0) {
      (pMVar6->fields)._.OnGoldAmountChange = (Action *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar7->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar7;
    }
    if (pAVar8 != (Action *)0x0) {
      (pMVar6->fields)._.OnGoldAmountChange = pAVar8;
      pAVar8 = (Action *)0x0;
      if (pAVar7->klass == TypeInfo__System__Action) {
        pAVar8 = pAVar7;
      }
      if (pAVar8 != (Action *)0x0) {
        func_?();
        return;
      }
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
    func_?(&TypeInfo__System__Action);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__);
    func_?(&
                    MethodInfo__GoldPurchasedTracker____c___StartGoldPurchasePendingUpdate_b__6_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__GoldPurchasedTracker____c);
    func_?(&StringLiteral_GoldPendingUpdate);
    func_?(&StringLiteral_Requesting_gold_purchase_update);
    cRam_? = '\x01';
  }
  (this->fields).currentGold = currentGold;
  (this->fields).goldDeltaExpected = (this->fields).goldDeltaExpected + goldDelta;
  (this->fields).goldGainedTotal = 0;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Requesting_gold_purchase_update,(MethodInfo *)0x0);
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__GoldPurchasedTracker____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GoldPurchasedTracker____c);
  }
  callbackFunction = TypeInfo__GoldPurchasedTracker____c->static_fields->__9__6_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
    if ((TypeInfo__GoldPurchasedTracker____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__GoldPurchasedTracker____c);
    }
    object = TypeInfo__GoldPurchasedTracker____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>
                        );
    if (callbackFunction != (ExecuteEvents_EventFunction_1_IModalPopupCreator_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__GoldPurchasedTracker____c___StartGoldPurchasePendingUpdate_b__6_0_UnityEngine__EventSystems__IModalPopupCreator__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__GoldPurchasedTracker____c->static_fields->__9__6_0 = callbackFunction;
      func_?();
      goto code_?;
    }
  }
  else {
code_?:
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IModalPopupCreator>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IModalPopupCreator>_
              );
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_IsInvoking_2
                      ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((this_00 != (MVNetworkGame *)0x0) &&
       (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar2 != (MVLocalPlayer *)0x0)) {
      pAVar3 = (pMVar2->fields)._.OnGoldAmountChange;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      if (this_01 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_01,(Object *)this,MethodInfo__GoldPurchasedTracker__GoldUpdatedCallback__,
                   (MethodInfo *)0x0);
        pAVar3 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar3,(Delegate *)this_01,(MethodInfo *)0x0);
        if (pAVar3 == (Action *)0x0) {
          (pMVar2->fields)._.OnGoldAmountChange = (Action *)0x0;
code_?:
          func_?();
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_InvokeRepeating
                    ((MonoBehaviour *)this,StringLiteral_GoldPendingUpdate,5.0,30.0,
                     (MethodInfo *)0x0);
          return;
        }
        pAVar4 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAVar4 = pAVar3;
        }
        if (pAVar4 != (Action *)0x0) {
          (pMVar2->fields)._.OnGoldAmountChange = pAVar4;
          pAVar4 = (Action *)0x0;
          if (pAVar3->klass == TypeInfo__System__Action) {
            pAVar4 = pAVar3;
          }
          if (pAVar4 != (Action *)0x0) goto code_?;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

