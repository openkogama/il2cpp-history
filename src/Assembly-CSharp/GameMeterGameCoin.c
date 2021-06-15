
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_Initialize
               (GameMeterGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pOVar2 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
             TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                       ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar1,(MethodInfo *)0x0);
    if (pOVar2 != (Object *)0x0) {
      pOVar3 = pOVar2[0x14].klass;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,MethodInfo__GameMeterGameCoin__OnActivationChange_bool_,
                 (MethodInfo *)0x0);
      pOVar5 = (Object__Class *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pOVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pOVar3 = (Object__Class *)0x0;
      if (pOVar5 != (Object__Class *)0x0) {
        if ((MVGameCoinManager_OnActivationChangeDelegate__Class *)(pOVar5->_0).image ==
            TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
          pOVar3 = pOVar5;
        }
        pMVar6 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)
                 TypeInfo__MVGameCoinManager__OnActivationChangeDelegate;
        if (pOVar3 == (Object__Class *)0x0) goto code_?;
      }
      pOVar2[0x14].klass = pOVar3;
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar1 != (MVNetworkGame *)0x0) {
        pOVar2 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                 TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                           ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar1,
                            (MethodInfo *)0x0);
        if (pOVar2 != (Object *)0x0) {
          a = (Delegate *)pOVar2[0x14].monitor;
          pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar4,(Object *)this,
                     MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_,(MethodInfo *)0x0);
          pOVar5 = (Object__Class *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             (a,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pOVar3 = (Object__Class *)0x0;
          if (pOVar5 == (Object__Class *)0x0) {
code_?:
            pOVar2[0x14].monitor = (MonitorData *)pOVar3;
            return;
          }
          if ((MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)(pOVar5->_0).image ==
              TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
            pOVar3 = pOVar5;
          }
          pMVar6 = TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate;
          if (pOVar3 != (Object__Class *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
  pOVar5 = extraout_ECX;
  pMVar6 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)extraout_EDX;
code_?:
  func_?(pOVar5,pMVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnActivationChange(Boolean) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnActivationChange
               (GameMeterGameCoin *this,bool wantToShow,MethodInfo *method)

{
  pGVar1 = this->klass;
  (this->fields)._.meterActive = wantToShow;
  (*(code *)(pGVar1->vtable).SetShowGameMeter.method)
            (this,_wantToShow,(pGVar1->vtable).UpdateValue.methodPtr);
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar2 == (GameObject *)0x0) {
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar3 = (code *)func_?(), pcVar3 == (code *)0x0))
  {
    uVar4 = func_?(&UNK_?,0);
    func_?(uVar4);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(0);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnDestroy
               (GameMeterGameCoin *this,MethodInfo *method)

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
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pOVar3 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
               TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                         ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar2,(MethodInfo *)0x0
                         ), pOVar3 != (Object *)0x0)) {
    pOVar4 = pOVar3[0x14].klass;
    pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar5,unaff_EDI,MethodInfo__GameMeterGameCoin__OnActivationChange_bool_,
               (MethodInfo *)0x0);
    pOVar6 = (Object__Class *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pOVar4,(Delegate *)pUVar5,(MethodInfo *)0x0);
    pOVar4 = (Object__Class *)0x0;
    if (pOVar6 != (Object__Class *)0x0) {
      if ((MVGameCoinManager_OnActivationChangeDelegate__Class *)(pOVar6->_0).image ==
          TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
        pOVar4 = pOVar6;
      }
      pMVar7 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)
               TypeInfo__MVGameCoinManager__OnActivationChangeDelegate;
      if (pOVar4 == (Object__Class *)0x0) goto code_?;
    }
    pOVar3[0x14].klass = pOVar4;
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pOVar3 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                 TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                           ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)pMVar2,
                            (MethodInfo *)0x0), pOVar3 != (Object *)0x0)) {
      source = (Delegate *)pOVar3[0x14].monitor;
      pUVar5 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar5,(Object *)&UNK_?,
                 MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_,(MethodInfo *)0x0);
      pOVar6 = (Object__Class *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         (source,(Delegate *)pUVar5,(MethodInfo *)0x0);
      pOVar4 = (Object__Class *)0x0;
      if (pOVar6 == (Object__Class *)0x0) {
code_?:
        pOVar3[0x14].monitor = (MonitorData *)pOVar4;
        return;
      }
      if ((MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)(pOVar6->_0).image ==
          TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
        pOVar4 = pOVar6;
      }
      pMVar7 = TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate;
      if (pOVar4 != (Object__Class *)0x0) goto code_?;
      goto code_?;
    }
  }
  func_?();
  pOVar6 = extraout_ECX;
  pMVar7 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate__Class *)extraout_EDX;
code_?:
  func_?(pOVar6,pMVar7);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGameCoinAmountChanged(Int32) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnGameCoinAmountChanged
               (GameMeterGameCoin *this,int32_t amount,MethodInfo *method)

{
  pRVar1 = (this->fields).counter;
  if (pRVar1 == (RollingNumberCounterAndroid *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  method = (MethodInfo *)0x0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pRVar3 = (pRVar1->fields).digits;
  if (pRVar3 != (RollingNumberDigitAndroid__Array *)0x0) {
    iVar4 = pRVar3->max_length;
    this_01 = (Collection_1_VoxelHit_ *)func_?(&amount,0);
    if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
      pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
      if ((int)iVar4 < (int)pIVar5) {
        uVar6 = 0;
        if (0 < (int)iVar4) {
          iVar7 = 0x10;
          while (pRVar3 = (pRVar1->fields).digits, pRVar3 != (RollingNumberDigitAndroid__Array *)0x0
                ) {
            if (pRVar3->max_length <= uVar6) goto code_?;
            this_00 = *(RollingNumberDigitAndroid **)((int)pRVar3->vector + iVar7 + -0x10);
            if (this_00 == (RollingNumberDigitAndroid *)0x0) break;
            RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                      (this_00,9,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 4;
            if ((int)iVar4 <= (int)uVar6) {
              return;
            }
          }
          goto code_?;
        }
      }
      else {
        pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
        if ((int)pIVar5 < (int)iVar4) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          iStack_8 = 0;
          pSVar9 = TypeInfo__System__String->static_fields->Empty;
          while( true ) {
            pIVar5 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                     Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
            if ((int)(iVar4 - (int)pIVar5) <= iStack_8) break;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            pSVar9 = mscorlib.dll::System::String::String_Concat_2
                               (pSVar9,StringLiteral__0,(MethodInfo *)0x0);
            iStack_8 = iStack_8 + 1;
          }
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          this_01 = (Collection_1_VoxelHit_ *)
                    mscorlib.dll::System::String::String_Concat_2
                              (pSVar9,(String *)this_01,(MethodInfo *)0x0);
        }
        uVar6 = 0;
        if (0 < (int)iVar4) {
          iStack_8 = 0x10;
          do {
            pRVar3 = (pRVar1->fields).digits;
            if (pRVar3 == (RollingNumberDigitAndroid__Array *)0x0) goto code_?;
            if (pRVar3->max_length <= uVar6) goto code_?;
            pCStack_10 = *(Convert__Class **)((int)pRVar3->vector + iStack_8 + -0x10);
            if (this_01 == (Collection_1_VoxelHit_ *)0x0) goto code_?;
            pSVar9 = mscorlib.dll::System::String::String_Substring_1
                               ((String *)this_01,uVar6,1,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              pCStack_10 = TypeInfo__System__Convert;
              func_?();
            }
            value = mscorlib.dll::System::Convert::Convert_ToInt32_10(pSVar9,(MethodInfo *)0x0);
            if (pCStack_10 == (Convert__Class *)0x0) goto code_?;
            RollingNumberDigitAndroid::RollingNumberDigitAndroid_set_Number
                      ((RollingNumberDigitAndroid *)pCStack_10,value,(MethodInfo *)0x0);
            uVar6 = uVar6 + 1;
            iStack_8 = iStack_8 + 4;
          } while ((int)uVar6 < (int)iVar4);
        }
      }
      return;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar11 = func_?(0,0);
  func_?(uVar11);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_SetGameMeterVisibility
               (GameMeterGameCoin *this,MethodInfo *method)

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
    this_01 = (MVGameCoinManager *)
              TierOnDeathProgress+<DoTierProgress>c__Iterator0::
              TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                        ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)this_00,(MethodInfo *)0x0
                        );
    if (this_01 != (MVGameCoinManager *)0x0) {
      bVar1 = MVGameCoinManager::MVGameCoinManager_get_Active(this_01,(MethodInfo *)0x0);
      pGVar2 = this->klass;
      (this->fields)._.meterActive = bVar1;
      (*(code *)(pGVar2->vtable).SetShowGameMeter.method)
                (this,(pGVar2->vtable).UpdateValue.methodPtr);
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          return;
        }
      }
      else if (this_02 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_02,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_SetShowGameMeter
               (GameMeterGameCoin *this,bool show,MethodInfo *method)

{
  this_00 = (this->fields).gameCoinBar;
  if ((this_00 == (Image *)0x0) ||
     (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,show,(MethodInfo *)0x0),
     (this->fields).coinAmount == (GameObject *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  return;
}


/* GameMeterType get_GameMeterType() */

GameMeterType__Enum
Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_get_GameMeterType
          (GameMeterGameCoin *this,MethodInfo *method)

{
  return GameMeterType__Enum_GameCoins;
}

