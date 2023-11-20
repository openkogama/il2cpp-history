
/* Void OnDestroy() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_OnDestroy
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 == (MVNetworkGame *)0x0) ||
     (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) {
    uVar4 = func_?();
  }
  else {
    pAVar5 = (pMVar3->fields).OnPlayerListChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
    if (pAVar5 == (Action *)0x0) {
      (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
      ppAStack6 = &(pMVar3->fields).OnPlayerListChanged;
      pAStack7 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 != (Action *)0x0) {
      (pMVar3->fields).OnPlayerListChanged = pAVar8;
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAStack7 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAStack7 = pAVar5;
      }
      if (pAStack7 != (Action *)0x0) {
        ppAStack6 = &(pMVar3->fields).OnPlayerListChanged;
        func_?();
        return;
      }
    }
  }
  _ppAStack00000014 = uVar4;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnPlayerJoinOrLeave() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_OnPlayerJoinOrLeave
               (XPBoostTracker *this,MethodInfo *method)

{
  XPBoostTracker_UpdateMemberCount(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields)._._SubscriptionRules_k__BackingField,
       this_00 != (SubscriptionRulesWrapper *)0x0)) {
      this_02 = (XpBooster *)
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_GetRule
                          (this_00,SubscriptionBenefit__Enum_XPBoost,
                           MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                          );
      if (this_02 != (XpBooster *)0x0) {
        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
        XpBooster_GetTotalXPBoost
                  (this_02,(int32_t)in_stack_2[1].fields._.m_CachedPtr,(MethodInfo *)0x0);
        pMVar3 = in_stack_2[1].monitor;
        str1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0x00000000,(MethodInfo *)0x0);
        IVar4.m_value = (int32_t)::StringLiteral__;
        mscorlib.dll::System::String::String_Concat_4
                  (::StringLiteral__,str1,::StringLiteral__,(MethodInfo *)0x0);
        if (pMVar3 != (MonitorData *)0x0) {
          (**(code **)(*(int *)pMVar3 + 0x318))();
          if (IVar4.m_value < 1) {
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (in_stack_2,(MethodInfo *)0x0);
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               (in_stack_2,(MethodInfo *)0x0);
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_Start
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0);
    if (pMVar2 != (MVLocalPlayer *)0x0) {
      (unaff_EBX->fields).localActorNr = (pMVar2->fields)._._ActorNr_k__BackingField;
      XPBoostTracker_UpdateMemberCount(unaff_EBX,(MethodInfo *)0x0);
      XPBoostTracker_UpdateBoostText(unaff_EBX,(MethodInfo *)0x0);
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar1 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar1->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
        pAVar4 = (pMVar3->fields).OnPlayerListChanged;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__,
                   MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__,(MethodInfo *)0x0);
        pAVar4 = (Action *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
        uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
        if (pAVar4 == (Action *)0x0) {
          (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
          ppAStack6 = &(pMVar3->fields).OnPlayerListChanged;
          pAStack7 = (Action *)0x0;
          func_?();
          return;
        }
        pAVar8 = (Action *)0x0;
        if (pAVar4->klass == TypeInfo__System__Action) {
          pAVar8 = pAVar4;
        }
        if (pAVar8 != (Action *)0x0) {
          (pMVar3->fields).OnPlayerListChanged = pAVar8;
          uVar5 = CONCAT44(TypeInfo__System__Action,pAVar4);
          pAStack7 = (Action *)0x0;
          if (pAVar4->klass == TypeInfo__System__Action) {
            pAStack7 = pAVar4;
          }
          if (pAStack7 != (Action *)0x0) {
            ppAStack6 = &(pMVar3->fields).OnPlayerListChanged;
            func_?();
            return;
          }
        }
        goto code_?;
      }
    }
  }
  uVar5 = func_?();
code_?:
  _ppAStack0000002c = uVar5;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateBoostText() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_UpdateBoostText
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                   );
    func_?(&::StringLiteral__);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (this_00 = (pMVar1->fields)._._SubscriptionRules_k__BackingField,
       this_00 != (SubscriptionRulesWrapper *)0x0)) {
      this_02 = (XpBooster *)
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_GetRule
                          (this_00,SubscriptionBenefit__Enum_XPBoost,
                           MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                          );
      if (this_02 != (XpBooster *)0x0) {
        MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
        XpBooster_GetTotalXPBoost(this_02,(this->fields).memberCount,(MethodInfo *)0x0);
        pTVar2 = (this->fields).XPBoostText;
        str1 = mscorlib.dll::System::Int32::Int32_ToString
                         ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
        IVar3.m_value = (int32_t)::StringLiteral__;
        mscorlib.dll::System::String::String_Concat_4
                  (::StringLiteral__,str1,::StringLiteral__,(MethodInfo *)0x0);
        if (pTVar2 != (Text *)0x0) {
          (*(code *)(pTVar2->klass->vtable).set_text.method)();
          if (IVar3.m_value < 1) {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,0,(MethodInfo *)0x0);
              return;
            }
          }
          else {
            pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this,(MethodInfo *)0x0);
            if (pGVar4 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar4,1,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateMemberCount() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_UpdateMemberCount
               (XPBoostTracker *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pOStack_4 = (Object__Class *)0x0;
  this_01 = (MVPlayer *)0x0;
  (this->fields).memberCount = 0;
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar5 != (MVNetworkGame *)0x0) &&
     (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) {
    this_00 = (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar6,(MethodInfo *)0x0);
    if (this_00 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)&stack0xffffffd4,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                         );
      actorNr = pDVar7->_currentValue;
      uStack_1 = 1;
      while( true ) {
        do {
          do {
            bVar8 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&pOStack_4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                              );
            if (bVar8 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&pOStack_4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                         ,in_stack_9);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
          } while ((actorNr == (Object *)0x0) ||
                  (actorNr[6].klass == (Object__Class *)(this->fields).localActorNr));
          pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar5 == (MVNetworkGame *)0x0) ||
             (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 == (MVPlayerContainer *)0x0))
          goto code_?;
          in_stack_9 = (MethodInfo *)0x0;
          actorNr = (Object *)actorNr[6].klass;
          bVar8 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                            (pMVar6,(int32_t)actorNr,(MVPlayer **)&stack0xffffffe8,(MethodInfo *)0x0
                            );
        } while (bVar8 == 0);
        if (this_01 == (MVPlayer *)0x0) break;
        pMVar10 = (MVPlayer *)0x0;
        bVar8 = MVPlayer::MVPlayer_get_IsSubscriber(this_01,(MethodInfo *)0x0);
        this_01 = pMVar10;
        if (bVar8 != 0) {
          piVar11 = &(this->fields).memberCount;
          *piVar11 = *piVar11 + 1;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

