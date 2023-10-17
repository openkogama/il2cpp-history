
/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_Initialize
               (GameMeterGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterGameCoin__OnActivationChange_bool_);
    func_?(&MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_);
    func_?(&TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
    func_?(&TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar2 = (pMVar1->fields)._GameCoinManager_k__BackingField;
    if (pMVar2 != (MVGameCoinManager *)0x0) {
      pMVar3 = (pMVar2->fields).OnActivationChange;
      this_00 = (UnityAction_1_System_ByteEnum_ *)
                func_?(TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
      if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
        UnityAction_1_System_ByteEnum___ctor
                  (this_00,(Object *)this,MethodInfo__GameMeterGameCoin__OnActivationChange_bool_,
                   (MethodInfo *)0x0);
        pMVar3 = (MVGameCoinManager_OnActivationChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Combine
                           ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
        if (pMVar3 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
          (pMVar2->fields).OnActivationChange = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
        }
        else {
          pMVar4 = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
            pMVar4 = pMVar3;
          }
          if (pMVar4 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) goto code_?;
          (pMVar2->fields).OnActivationChange = pMVar4;
          pMVar4 = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
          if (pMVar3->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
            pMVar4 = pMVar3;
          }
          if (pMVar4 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) goto code_?;
        }
        func_?();
        pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar1 != (MVNetworkGame *)0x0) &&
           (pMVar2 = (pMVar1->fields)._GameCoinManager_k__BackingField,
           pMVar2 != (MVGameCoinManager *)0x0)) {
          pMVar5 = (pMVar2->fields).OnGameCoinAmountChange;
          this_01 = (UnityAction_1_System_Int32Enum_ *)
                    func_?(TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate);
          if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
            UnityAction_1_System_Int32Enum___ctor
                      (this_01,(Object *)this,
                       MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_,(MethodInfo *)0x0
                      );
            pMVar5 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pMVar5,(Delegate *)this_01,(MethodInfo *)0x0);
            if (pMVar5 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
              (pMVar2->fields).OnGameCoinAmountChange =
                   (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
              func_?();
              return;
            }
            pMVar6 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
            if (pMVar5->klass == TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
              pMVar6 = pMVar5;
            }
            if (pMVar6 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
              (pMVar2->fields).OnGameCoinAmountChange = pMVar6;
              pMVar6 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
              if (pMVar5->klass == TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
                pMVar6 = pMVar5;
              }
              if (pMVar6 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
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
  (*(pGVar1->vtable).SetShowGameMeter.methodPtr)
            (this,_wantToShow,(pGVar1->vtable).SetShowGameMeter.method);
  pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar2 != (GameObject *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)(0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnDestroy
               (GameMeterGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__GameMeterGameCoin__OnActivationChange_bool_);
    func_?(&MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_);
    func_?(&TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
    func_?(&TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar2 == (MVNetworkGame *)0x0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (pMVar3 = (pMVar2->fields)._GameCoinManager_k__BackingField, pMVar3 != (MVGameCoinManager *)0x0
     )) {
    pMVar4 = (pMVar3->fields).OnActivationChange;
    this_00 = (UnityAction_1_System_ByteEnum_ *)
              func_?(TypeInfo__MVGameCoinManager__OnActivationChangeDelegate);
    if (this_00 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_00,(Object *)MethodInfo__GameMeterGameCoin__OnActivationChange_bool_,
                 MethodInfo__GameMeterGameCoin__OnActivationChange_bool_,(MethodInfo *)0x0);
      pMVar4 = (MVGameCoinManager_OnActivationChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar4 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) {
        (pMVar3->fields).OnActivationChange = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
      }
      else {
        pMVar5 = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) goto code_?;
        (pMVar3->fields).OnActivationChange = pMVar5;
        pMVar5 = (MVGameCoinManager_OnActivationChangeDelegate *)0x0;
        if (pMVar4->klass == TypeInfo__MVGameCoinManager__OnActivationChangeDelegate) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVGameCoinManager_OnActivationChangeDelegate *)0x0) goto code_?;
      }
      func_?();
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar2 != (MVNetworkGame *)0x0) &&
         (pMVar3 = (pMVar2->fields)._GameCoinManager_k__BackingField,
         pMVar3 != (MVGameCoinManager *)0x0)) {
        pMVar6 = (pMVar3->fields).OnGameCoinAmountChange;
        this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
        if (this_01 != (UnityAction_1_System_Int32Enum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
          UnityAction_1_System_Int32Enum___ctor
                    (this_01,(Object *)this_00,
                     MethodInfo__GameMeterGameCoin__OnGameCoinAmountChanged_int_,(MethodInfo *)0x0);
          pMVar6 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pMVar6,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pMVar6 == (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
            (pMVar3->fields).OnGameCoinAmountChange =
                 (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
            func_?();
            return;
          }
          pMVar7 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
          if (pMVar6->klass == TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
            (pMVar3->fields).OnGameCoinAmountChange = pMVar7;
            pMVar7 = (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0;
            if (pMVar6->klass == TypeInfo__MVGameCoinManager__OnGameCoinAmountChangeDelegate) {
              pMVar7 = pMVar6;
            }
            if (pMVar7 != (MVGameCoinManager_OnGameCoinAmountChangeDelegate *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnGameCoinAmountChanged(Int32) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_OnGameCoinAmountChanged
               (GameMeterGameCoin *this,int32_t amount,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  if ((this->fields).useText == 0) {
    this_00 = (this->fields).counter;
    if (this_00 != (RollingNumberCounterAndroid *)0x0) {
      RollingNumberCounterAndroid::RollingNumberCounterAndroid_SetCounter
                (this_00,amount,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    pTVar1 = (this->fields).counterText;
    pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&amount,(MethodInfo *)0x0);
    pSVar3 = ::StringLiteral__;
    if (pSVar2 != (String *)0x0) {
      pSVar3 = pSVar2;
    }
    if (pTVar1 != (Text *)0x0) {
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar3,(pTVar1->klass->vtable).set_text.method);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetGameMeterVisibility() */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_SetGameMeterVisibility
               (GameMeterGameCoin *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 != (MVGameCoinManager *)0x0)) {
    bVar2 = MVGameCoinManager::MVGameCoinManager_get_Active(this_00,(MethodInfo *)0x0);
    uStack_3 = CONCAT31((int3)((uint)in_ECX >> 8),bVar2);
    pGVar4 = this->klass;
    (this->fields)._.meterActive = bVar2;
    (*(pGVar4->vtable).SetShowGameMeter.methodPtr)
              (this,uStack_3,(pGVar4->vtable).SetShowGameMeter.method);
    if (bVar2 == 0) {
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterGameCoin::GameMeterGameCoin_SetShowGameMeter
               (GameMeterGameCoin *this,bool show,MethodInfo *method)

{
  this_00 = (this->fields).gameCoinBar;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,show,(MethodInfo *)0x0);
    if ((this->fields).coinAmount != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

