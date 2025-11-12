
/* Void OnDestroy() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_OnDestroy
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar2 == (MVGameControllerBase *)0x0) ||
        (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
       (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 == (MVPlayerContainer *)0x0)) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pAVar6 = (pMVar4->fields).OnPlayerListChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__,
               (MethodInfo *)0x0);
    pAVar6 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar6 == (Action *)0x0) {
      (pMVar4->fields).OnPlayerListChanged = (Action *)0x0;
    }
    else {
      pAVar7 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action *)0x0) {
        FUN_?(pAVar6,TypeInfo__System__Action);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar4->fields).OnPlayerListChanged = pAVar7;
      pAVar7 = (Action *)0x0;
      if (pAVar6->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar6;
      }
      if (pAVar7 == (Action *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar4->fields).OnPlayerListChanged >> 0xc);
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
  }
  return;
}


/* Void OnPlayerJoinOrLeave() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_OnPlayerJoinOrLeave
               (XPBoostTracker *this,MethodInfo *method)

{
  XPBoostTracker_UpdateMemberCount(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
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
  if (((((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 &&
       (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
       this_01 != (SubscriptionRulesWrapper *)0x0)))) &&
     (this_02 = (XpBooster *)
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_GetRule
                          (this_01,SubscriptionBenefit__Enum_XPBoost,
                           MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                          ), this_02 != (XpBooster *)0x0)) {
    value = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
            XpBooster_GetTotalXPBoost(this_02,(this->fields).memberCount,(MethodInfo *)0x0);
    pTVar4 = (this->fields).XPBoostText;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_5[0]._pointer._value = (void *)0x0;
    aRStack_5[0]._length = 0;
    aRStack_5[0]._12_4_ = 0;
    pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar6 = mscorlib.dll::System::String::String_Concat_5
                       (::StringLiteral__,pSVar6,::StringLiteral__,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar6,(pTVar4->klass->vtable).set_text.method);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if (value < 1) {
        if (obj != (GameObject *)0x0) {
          uVar7 = 0;
          goto code_?;
        }
      }
      else if (obj != (GameObject *)0x0) {
        uVar7 = 1;
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
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_Start
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__);
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
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar3,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    (this->fields).localActorNr = (pMVar4->fields)._._ActorNr_k__BackingField;
    XPBoostTracker_UpdateMemberCount(this,(MethodInfo *)0x0);
    XPBoostTracker_UpdateBoostText(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
      pAVar5 = (pMVar3->fields).OnPlayerListChanged;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__,
                 (MethodInfo *)0x0);
      pAVar5 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar5 == (Action *)0x0) {
        (pMVar3->fields).OnPlayerListChanged = (Action *)0x0;
      }
      else {
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?(pAVar5,TypeInfo__System__Action);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar3->fields).OnPlayerListChanged = pAVar6;
        pAVar6 = (Action *)0x0;
        if (pAVar5->klass == TypeInfo__System__Action) {
          pAVar6 = pAVar5;
        }
        if (pAVar6 == (Action *)0x0) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&(pMVar3->fields).OnPlayerListChanged >> 0xc);
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
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateBoostText() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_UpdateBoostText
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
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
  if (((((pMVar1 != (MVGameControllerBase *)0x0) &&
        (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
      ((pMVar3 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar3 != (MVLocalPlayer *)0x0 &&
       (this_01 = (pMVar3->fields)._._SubscriptionRules_k__BackingField,
       this_01 != (SubscriptionRulesWrapper *)0x0)))) &&
     (this_02 = (XpBooster *)
                MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_GetRule
                          (this_01,SubscriptionBenefit__Enum_XPBoost,
                           MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                          ), this_02 != (XpBooster *)0x0)) {
    value = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
            XpBooster_GetTotalXPBoost(this_02,(this->fields).memberCount,(MethodInfo *)0x0);
    pTVar4 = (this->fields).XPBoostText;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Number);
      LOCK();
      UNLOCK();
      FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135
        & 1) == 0) {
      FUN_?();
    }
    if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
      FUN_?();
    }
    aRStack_5[0]._pointer._value = (void *)0x0;
    aRStack_5[0]._length = 0;
    aRStack_5[0]._12_4_ = 0;
    pSVar6 = mscorlib.dll::System::Number::Number_FormatInt32
                       (value,aRStack_5,(IFormatProvider *)0x0,(MethodInfo *)0x0);
    pSVar6 = mscorlib.dll::System::String::String_Concat_5
                       (::StringLiteral__,pSVar6,::StringLiteral__,(MethodInfo *)0x0);
    if (pTVar4 != (Text *)0x0) {
      (*(pTVar4->klass->vtable).set_text.methodPtr)
                (pTVar4,pSVar6,(pTVar4->klass->vtable).set_text.method);
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if (value < 1) {
        if (obj != (GameObject *)0x0) {
          uVar7 = 0;
          goto code_?;
        }
      }
      else if (obj != (GameObject *)0x0) {
        uVar7 = 1;
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
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateMemberCount() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_UpdateMemberCount
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVPlayer>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_8 = (Object *)0x0;
  (this->fields).memberCount = 0;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
      (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 == (MVPlayerContainer *)0x0)) ||
     (pDVar4 = MVPlayerContainer::MVPlayerContainer_get_ActivePlayers(pMVar3,(MethodInfo *)0x0),
     pDVar4 == (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pDStack_6 = (pDVar4->fields)._dictionary;
  ppDStack_7 = (Dictionary_2_System_Int32_MVPlayer_ **)0x0;
  uStack_8 = 0;
  if (iRam_? != 0) {
    uVar9 = (uint)((ulonglong)&pDStack_10 >> 0xc);
    puVar11 = (ulonglong *)((ulonglong)((uVar9 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar12 = *puVar11;
      LOCK();
      uVar13 = *puVar11;
      if (uVar12 == uVar13) {
        *puVar11 = uVar12 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (uVar12 != uVar13);
  }
  if (pDStack_6 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    pDStack_10 = pDStack_6;
    FUN_?();
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_14 = (pDStack_6->fields)._version;
  uStack_8 = 0;
  uStack_15 = 0;
  pMStack_16 = (MVPlayer *)0x0;
  pDStack_10 = (Dictionary_2_System_Int32_MVPlayer_ *)0x0;
  ppDStack_7 = &pDStack_6;
code_?:
  if (pDStack_6 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
    if (iStack_14 == (pDStack_6->fields)._version) goto code_?;
    goto code_?;
  }
code_?:
  FUN_?();
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
code_?:
  do {
    if (pDStack_6 == (Dictionary_2_System_Int32_MVPlayer_ *)0x0) goto code_?;
    if ((uint)(pDStack_6->fields)._count <= uStack_15) {
      return;
    }
    pDVar17 = (pDStack_6->fields)._entries;
    lVar18 = (longlong)(int)uStack_15;
    uVar9 = uStack_15 + 1;
    if (pDVar17 == (Dictionary_2_TKey_TValue_Entry_System_Int32_MVPlayer___Array *)0x0)
    goto code_?;
    if ((uint)pDVar17->max_length <= uStack_15) {
      uStack_15 = uVar9;
      FUN_?();
      goto code_?;
    }
    uStack_15 = uVar9;
  } while (pDVar17->vector[lVar18].hashCode < 0);
  pMStack_16 = pDVar17->vector[lVar18].value;
  func_?();
  pMVar19 = pMStack_16;
  if ((pMStack_16 != (MVPlayer *)0x0) &&
     ((pMStack_16->fields)._ActorNr_k__BackingField != (this->fields).localActorNr)) {
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 != (MVNetworkGame *)0x0) {
      pMVar3 = (pMVar2->fields).playerContainer;
      key = (pMVar19->fields)._ActorNr_k__BackingField;
      if (pMVar3 != (MVPlayerContainer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_00 = (pMVar3->fields).players;
        if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          bVar20 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_8,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                             );
          if (bVar20 == 0) goto code_?;
          if (pOStackX_8 != (Object *)0x0) {
            if ((SubscriptionRulesWrapper *)pOStackX_8[7].monitor != (SubscriptionRulesWrapper *)0x0
               ) {
              bVar20 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                       SubscriptionRulesWrapper_HasBenefit
                                 ((SubscriptionRulesWrapper *)pOStackX_8[7].monitor,
                                  SubscriptionBenefit__Enum_XPBoost,(MethodInfo *)0x0);
              if (bVar20 != 0) {
                piVar21 = &(this->fields).memberCount;
                *piVar21 = *piVar21 + 1;
              }
              goto code_?;
            }
code_?:
            FUN_?();
          }
          FUN_?();
        }
        FUN_?();
      }
      FUN_?();
    }
    FUN_?();
    uVar9 = uStack_15;
code_?:
    uStack_15 = uVar9;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
    goto code_?;
  }
  goto code_?;
}

