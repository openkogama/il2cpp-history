
/* Void OnDestroy() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_OnDestroy
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVAvatar *)0x0) &&
     (pMVar2 = MVAvatar::MVAvatar_get_Shield(this_00,(MethodInfo *)0x0),
     pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pDVar3 = (Delegate *)(pMVar2->fields)._._.sendInterval;
    this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_01,unaff_ESI,MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__,(MethodInfo *)0x0
              );
    pDStack4 =
         mscorlib.dll::System::Delegate::Delegate_Remove
                   (pDVar3,(Delegate *)this_01,(MethodInfo *)0x0);
    pDVar3 = (Delegate *)0x0;
    if (pDStack4 != (Delegate *)0x0) {
      if ((Action__Class *)pDStack4->klass == TypeInfo__System__Action) {
        pDVar3 = pDStack4;
      }
      pAStack5 = TypeInfo__System__Action;
      if (pDVar3 == (Delegate *)0x0) goto code_?;
    }
    (pMVar2->fields)._._.sendInterval = (float)pDVar3;
    return;
  }
  func_?();
  pDStack4 = extraout_ECX;
  pAStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnPlayerJoinOrLeave() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_OnPlayerJoinOrLeave
               (XPBoostTracker *this,MethodInfo *method)

{
  XPBoostTracker_UpdateMemberCount(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      this_03 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,
                           (MethodInfo *)0x0);
      this_00 = 
      MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
      ;
      if (this_03 != (SubscriptionRulesWrapper *)0x0) {
        this_04 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_GetRule_2
                            (this_03,SubscriptionBenefit__Enum_XPBoost,
                             MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                            );
        if (this_04 != (XpBooster *)0x0) {
          iVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
                  XpBooster_GetTotalXPBoost(this_04,(int32_t)this_00->klass,(MethodInfo *)0x0);
          piVar2 = (int *)this_00->name;
          pSVar3 = (String *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat_3
                             (::StringLiteral__,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x308))(piVar2,pSVar3,*(undefined4 *)(*piVar2 + 0x30c));
            if (iVar1 < 1) {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
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
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_Start
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVLocalPlayer *)0x0) {
      pSVar1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name
                         ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_01,(MethodInfo *)0x0);
      (this->fields).localActorNr = (int32_t)pSVar1;
      XPBoostTracker_UpdateMemberCount(this,(MethodInfo *)0x0);
      XPBoostTracker_UpdateBoostText(this,(MethodInfo *)0x0);
      this_02 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_02 != (MVAvatar *)0x0) {
        pMVar2 = MVAvatar::MVAvatar_get_Shield(this_02,(MethodInfo *)0x0);
        if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
          pAStack3 = TypeInfo__System__Action;
          pDVar4 = (Delegate *)(pMVar2->fields)._._.sendInterval;
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this,MethodInfo__XPBoostTracker__OnPlayerJoinOrLeave__,
                     (MethodInfo *)0x0);
          pDStack5 =
               mscorlib.dll::System::Delegate::Delegate_Combine
                         (pDVar4,(Delegate *)this_03,(MethodInfo *)0x0);
          pDVar4 = (Delegate *)0x0;
          if (pDStack5 == (Delegate *)0x0) {
code_?:
            (pMVar2->fields)._._.sendInterval = (float)pDVar4;
            return;
          }
          if ((Action__Class *)pDStack5->klass == TypeInfo__System__Action) {
            pDVar4 = pDStack5;
          }
          pAStack6 = TypeInfo__System__Action;
          if (pDVar4 != (Delegate *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  pAStack3 = (Action__Class *)0x0;
  func_?();
  pDStack5 = extraout_ECX;
  pAStack6 = extraout_EDX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateBoostText() */

void Assembly-CSharp.dll::XPBoostTracker::XPBoostTracker_UpdateBoostText
               (XPBoostTracker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_01 != (MVNetworkGame *)0x0) {
    this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0);
    if (this_02 != (MVLocalPlayer *)0x0) {
      this_03 = (SubscriptionRulesWrapper *)
                PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                          ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_02,
                           (MethodInfo *)0x0);
      this_00 = 
      MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
      ;
      if (this_03 != (SubscriptionRulesWrapper *)0x0) {
        this_04 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                  SubscriptionRulesWrapper_GetRule_2
                            (this_03,SubscriptionBenefit__Enum_XPBoost,
                             MV__WorldObject__Subscription__SubscriptionRules__XpBooster_MethodInfo__MV__WorldObject__Subscription__SubscriptionRulesWrapper__GetRule<MV::WorldObject::Subscription::SubscriptionRules::XpBooster>_MV__WorldObject__Subscription__SubscriptionBenefit_
                            );
        if (this_04 != (XpBooster *)0x0) {
          iVar1 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRules::XpBooster::
                  XpBooster_GetTotalXPBoost(this_04,(int32_t)this_00->klass,(MethodInfo *)0x0);
          piVar2 = (int *)this_00->name;
          pSVar3 = (String *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar3 = mscorlib.dll::System::String::String_Concat_3
                             (::StringLiteral__,pSVar3,::StringLiteral__,(MethodInfo *)0x0);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x308))(piVar2,pSVar3,*(undefined4 *)(*piVar2 + 0x30c));
            if (iVar1 < 1) {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
              if (pGVar4 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar4,0,(MethodInfo *)0x0);
                return;
              }
            }
            else {
              pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)this_00,(MethodInfo *)0x0);
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
  }
  func_?(0);
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
  puStack_4 = &stack0xffffffac;
  puVar5 = &stack0xffffffac;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMStack_6 = (MVGameControllerBase__Class *)0x0;
  puStack_7 = (undefined4 *)&stack0xffffffac;
  func_?();
  (this->fields).memberCount = 0;
  puStack_4 = &stack0xffffffac;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_4 = &stack0xffffffac, (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_4 = &stack0xffffffac;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar8 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((pMVar8 != (MVAvatar *)0x0) &&
      (pMVar9 = MVAvatar::MVAvatar_get_Shield(pMVar8,(MethodInfo *)0x0),
      pMVar9 != (MVRuntimeDataVariableClampedFloat *)0x0)) &&
     (this_00 = MVPlayerContainer::MVPlayerContainer_get_Values
                          ((MVPlayerContainer *)pMVar9,(MethodInfo *)0x0),
     this_00 != (Dictionary_2_TKey_TValue_ValueCollection_System_Int32_MVPlayer_ *)0x0)) {
    method_01 = 
    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
    ;
    pDVar10 = mscorlib.dll::System::Collections::Generic::
             Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::Object]::
             Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_WinningConditionType_System_Object_
                         *)&stack0xffffffb8,
                        (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                         *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVPlayer>__GetEnumerator__
                       );
    method_00 = (pDVar10->host_enumerator).dictionary;
    method_02 = (MethodInfo *)(pDVar10->host_enumerator).stamp;
    uStack_1 = 0;
    while( true ) {
      do {
        cVar11 = func_?();
        if (cVar11 == '\0') {
          *puStack_7 = 0xa4;
          uStack_1 = 0xffffffff;
          func_?();
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        this_01 = (NamedThemeAttribute_1_UnityEngine_Color_ *)func_?();
      } while ((this_01 == (NamedThemeAttribute_1_UnityEngine_Color_ *)0x0) ||
              (pSVar12 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                        NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_01,(MethodInfo *)0x0)
              , pSVar12 == (String *)(this->fields).localActorNr));
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        pMStack_6 = TypeInfo__MVGameControllerBase;
        func_?();
      }
      pMVar8 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar8 == (MVAvatar *)0x0) break;
      pMVar9 = MVAvatar::MVAvatar_get_Shield(pMVar8,(MethodInfo *)0x0);
      pSVar12 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
               NamedThemeAttribute_1_UnityEngine_Color__get_Name(this_01,(MethodInfo *)0x0);
      if (pMVar9 == (MVRuntimeDataVariableClampedFloat *)0x0) break;
      bVar13 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        ((MVPlayerContainer *)pMVar9,(int32_t)pSVar12,(MVPlayer **)&pMStack_6,
                         method_01);
      if (bVar13 != 0) {
        if ((pMStack_6 == (MVGameControllerBase__Class *)0x0) ||
           (method_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
                        PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                        PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)pMStack_6,
                                   (MethodInfo *)method_00),
           method_00 == (Dictionary_2_WinningConditionType_System_Object_ *)0x0)) break;
        bVar13 = MVWorldObject.dll::MV::WorldObject::Subscription::SubscriptionRulesWrapper::
                SubscriptionRulesWrapper_HasBenefit
                          ((SubscriptionRulesWrapper *)method_00,SubscriptionBenefit__Enum_XPBoost,
                           method_02);
        if (bVar13 != 0) {
          piVar14 = &(this->fields).memberCount;
          *piVar14 = *piVar14 + 1;
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}

