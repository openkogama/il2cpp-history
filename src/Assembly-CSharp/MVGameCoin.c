
/* Void Destroy() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Destroy(MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_);
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar1->fields)._GameCoinManager_k__BackingField,
     this_00 == (MVGameCoinManager *)0x0)) {
code_?:
    func_?();
  }
  else {
    MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_00,(MethodInfo *)0x0);
    if ((this->fields).useInteractor != (UseInteractor *)0x0) {
      pMVar2 = (this->fields).pickupObject;
      if (pMVar2 != (MVGameCoinObject *)0x0) {
        pTVar3 = (pMVar2->fields).triggerBoxEvents;
        pUVar4 = (this->fields).useInteractor;
        pEVar5 = (EventHandler_1_Object_ *)
                 func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (pEVar5,(Object *)pUVar4,
                   MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar3 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                    (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
          pMVar2 = (this->fields).pickupObject;
          if (pMVar2 != (MVGameCoinObject *)0x0) {
            pTVar3 = (pMVar2->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pEVar5 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar5,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar3 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                        (pTVar3,(EventHandler_1_TriggerEventArgs_ *)pEVar5,(MethodInfo *)0x0);
              pUVar4 = (this->fields).useInteractor;
              if (pUVar4 != (UseInteractor *)0x0) {
                UseInteractor::UseInteractor_OnDestroy
                          (pUVar4,(this->fields)._._._.data,(MethodInfo *)0x0);
                (this->fields).useInteractor = (UseInteractor *)0x0;
                func_?(&(this->fields).useInteractor,0);
                goto code_?;
              }
            }
          }
        }
      }
      goto code_?;
    }
code_?:
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) goto code_?;
    source = (pMVar1->fields).OnWinningConditionFulfilled;
    this_01 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?(TypeInfo__System__Action<IWinningCondition>);
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_01,(Object *)this,
               MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    iVar6 = 0;
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pDVar7 == (Delegate *)0x0) {
      *(undefined4 *)(iVar6 + 0xc0) = 0;
code_?:
      func_?();
code_?:
      MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
      return;
    }
    iVar8 = func_?();
    if (iVar8 == 0) goto code_?;
    *(int *)(iVar6 + 0xc0) = iVar8;
    iVar6 = func_?();
    if (iVar6 != 0) goto code_?;
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVGameCoin::MVGameCoin_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVGameCoin *this,float gridSize,
                    Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->oneVector).x;
  uVar3 = (pVVar1->oneVector).y;
  pSVar4 = (SharedCubeFunctions__Class *)((float)uVar2 * _UNK_?);
  fVar5 = (float)uVar3 * _UNK_?;
  fVar6 = (pVVar1->oneVector).z * _UNK_?;
  this_00 = (this->fields)._._.gameObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                ((Quaternion *)&stack0xffffffe0,this_01,(MethodInfo *)0x0);
      pSVar7 = TypeInfo__SharedCubeFunctions;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
        pSVar4 = pSVar7;
      }
      worldPosition.z = position.z;
      worldPosition.x = position.x;
      worldPosition.y = position.y;
      rotation.y = (float)pSVar4;
      rotation.x = gridSize;
      rotation.z = fVar5;
      rotation.w = fVar6;
      scale.y = fVar5;
      scale.x = (float)pSVar4;
      scale.z = fVar6;
      pVVar8 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                         (&position,worldPosition,rotation,gridSize,scale,(MethodInfo *)0x0);
      fVar5 = pVVar8->y;
      fVar6 = pVVar8->z;
      __return_storage_ptr__->x = pVVar8->x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar9)();
  return pVVar8;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Initialize(MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_);
    cRam_? = '\x01';
  }
  MVGameCoin_SetupUserInteractor(this,(MethodInfo *)0x0);
  this_00 = (this->fields).useInteractor;
  if (this_00 == (UseInteractor *)0x0) {
code_?:
    func_?();
  }
  else {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar1 == (MVNetworkGame *)0x0) ||
       (this_01 = (pMVar1->fields)._GameCoinManager_k__BackingField,
       this_01 == (MVGameCoinManager *)0x0)) goto code_?;
    MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor(this_01,(MethodInfo *)0x0);
    MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
    pMVar2 = (this->fields).pickupObject;
    if (pMVar2 == (MVGameCoinObject *)0x0) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar2->fields).visualObject,2.0,(MethodInfo *)0x0);
    pAVar3 = (Action_1_IWinningCondition___Class *)
             MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pAVar3 == (Action_1_IWinningCondition___Class *)0x0) goto code_?;
    pAStack4 = TypeInfo__System__Action<IWinningCondition>;
    a = (Delegate *)(pAVar3->vtable).Equals.method;
    this_02 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
               *)func_?();
    DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::
    DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (this_02,(Object *)this,
               MethodInfo__MVGameCoin__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          (a,(Delegate *)this_02,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (unaff_ESI == (Delegate *)0x0) {
      (pAVar3->vtable).Equals.method = (MethodInfo *)0x0;
      pAStack5 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
      pDStack6 = (Delegate *)&(pAVar3->vtable).Equals.method;
      func_?();
      return;
    }
    pAStack5 = TypeInfo__System__Action<IWinningCondition>;
    pDStack6 = unaff_ESI;
    pMVar7 = (MethodInfo *)func_?();
    if (pMVar7 == (MethodInfo *)0x0) goto code_?;
    (pAVar3->vtable).Equals.method = pMVar7;
    this = (MVGameCoin *)TypeInfo__System__Action<IWinningCondition>;
    pAStack5 = TypeInfo__System__Action<IWinningCondition>;
    pDStack6 = unaff_ESI;
    pAStack5 = (Action_1_IWinningCondition___Class *)func_?();
    unaff_EDI = pAVar3;
    if (pAStack5 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
  }
  pDStack6 = unaff_ESI;
  pAStack5 = (Action_1_IWinningCondition___Class *)this;
  func_?();
code_?:
  pDStack6 = unaff_ESI;
  pAStack5 = unaff_EDI;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean IsCoinTakeable(Int32, MVInteractableBase) */

bool Assembly-CSharp.dll::MVGameCoin::MVGameCoin_IsCoinTakeable
               (MVGameCoin *this,int32_t woId,MVInteractableBase *avatarInteractable,
               MethodInfo *method)

{
  return (this->fields).state == 0;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnDataUpdate(MVGameCoin *this,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UseInteractor::UseInteractor_UpdateData(this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean OnPickup(Int32) */

bool Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnPickup
               (MVGameCoin *this,int32_t instigatorID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    this = unaff_ESI;
    if (instigatorID != (pMVar2->fields)._._ActorNr_k__BackingField) {
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (((pMVar1 == (MVNetworkGame *)0x0) ||
          (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
          pMVar2 == (MVLocalPlayer *)0x0)) ||
         (pSVar3 = (pMVar2->fields).spawnRoleDataMediator, pSVar3 == (SpawnRoleDataMediator *)0x0))
      goto code_?;
      this = (MVGameCoin *)instigatorID;
      bVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
              SpawnRoleVariable`1[System::Int32]::SpawnRoleVariable_1_System_Int32__op_Equality
                        (instigatorID,(SpawnRoleVariable_1_System_Int32_ *)(pSVar3->fields).woId,
                         MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Equality_int__MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                        );
      if (bVar4 == 0) {
        return 0;
      }
    }
    if ((this->fields).state != 0) {
      return 0;
    }
    pMVar5 = (this->fields).pickupObject;
    (this->fields).isVisible = 0;
    if ((pMVar5 != (MVGameCoinObject *)0x0) &&
       (this_00 = (pMVar5->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
      (this->fields).state = 1;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      pMVar5 = (this->fields).pickupObject;
      (this->fields).pickedUpTime = fVar6;
      if (pMVar5 != (MVGameCoinObject *)0x0) {
        pAVar7 = (pMVar5->fields).audioSource;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                          ((Object_1 *)pAVar7,(MethodInfo *)0x0);
        if (bVar4 != 0) {
          pMVar5 = (this->fields).pickupObject;
          if ((pMVar5 == (MVGameCoinObject *)0x0) ||
             (pAVar7 = (pMVar5->fields).audioSource, pAVar7 == (AudioSource *)0x0))
          goto code_?;
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                    (pAVar7,(MethodInfo *)0x0);
        }
        pMVar5 = (this->fields).pickupObject;
        if ((pMVar5 != (MVGameCoinObject *)0x0) &&
           (this_01 = (pMVar5->fields).particles, this_01 != (ObjectParticleEmitterScript *)0x0)) {
          ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play(this_01,(MethodInfo *)0x0);
          pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar1 != (MVNetworkGame *)0x0) &&
             (this_02 = (pMVar1->fields)._GameCoinManager_k__BackingField,
             this_02 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_GameCoinCollect(this_02,(MethodInfo *)0x0);
            bVar4 = MVClientSettings::MVClientSettings_IsFlagSet
                              (ClientSettingFlags__Enum_GamePassSilentReleaseEnabled,
                               (MethodInfo *)0x0);
            if (bVar4 == 0) {
              return 1;
            }
            this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            triggerBoxOwnerId = (this->fields)._._._.id;
            pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if ((((pMVar1 != (MVNetworkGame *)0x0) &&
                 (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 pMVar2 != (MVLocalPlayer *)0x0)) &&
                (pSVar3 = (pMVar2->fields).spawnRoleDataMediator,
                pSVar3 != (SpawnRoleDataMediator *)0x0)) &&
               (triggerInstigatorId =
                     Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                     SpawnRoleVariableTypes::SpawnRoleVariable`1[System::Object]::
                     SpawnRoleVariable_1_System_Object__op_Implicit
                               ((SpawnRoleVariable_1_System_Object_ *)(pSVar3->fields).woId,
                                MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>__op_Implicit_MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<int>_
                               ), this_03 != (MVNetworkGame_OperationRequests *)0x0)) {
              MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                        (this_03,triggerBoxOwnerId,(int32_t)triggerInstigatorId,(MethodInfo *)0x0);
              return 1;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar4 = (*pcVar8)();
  return bVar4;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_OnUpdate(MVGameCoin *this,MethodInfo *method)

{
  if (((this->fields).state != 0) && ((this->fields).state != 3)) {
    if ((this->fields).state == 1) {
      pMVar1 = (this->fields).pickupObject;
      if ((pMVar1 == (MVGameCoinObject *)0x0) ||
         (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 == (RotateLocal *)0x0))
      goto code_?;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pRVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).pickupObject;
        if ((pMVar1 == (MVGameCoinObject *)0x0) ||
           (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 == (RotateLocal *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pRVar2,0,(MethodInfo *)0x0);
      }
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      fVar4 = fVar4 - (this->fields).pickedUpTime;
      pfVar5 = &(this->fields).pickedUpStateDuration;
      if (*pfVar5 <= fVar4 && fVar4 != *pfVar5) {
        (this->fields).state = 2;
        return;
      }
    }
    else if ((this->fields).state == 2) {
      pMVar1 = (this->fields).pickupObject;
      if ((pMVar1 == (MVGameCoinObject *)0x0) ||
         (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 == (RotateLocal *)0x0))
      goto code_?;
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pRVar2,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields).pickupObject;
        if ((pMVar1 == (MVGameCoinObject *)0x0) ||
           (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 == (RotateLocal *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pRVar2,0,(MethodInfo *)0x0);
      }
      fVar4 = (this->fields).pickedUpTime;
      fVar6 = (this->fields).pickedUpStateDuration;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
      fVar7 = fVar7 - (fVar6 + fVar4);
      pfVar5 = &(this->fields).reshowingStateDuration;
      if (*pfVar5 <= fVar7 && fVar7 != *pfVar5) {
        (this->fields).state = 3;
      }
    }
    return;
  }
  pMVar1 = (this->fields).pickupObject;
  if ((pMVar1 != (MVGameCoinObject *)0x0) &&
     (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 != (RotateLocal *)0x0)) {
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pRVar2,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      return;
    }
    pMVar1 = (this->fields).pickupObject;
    if ((pMVar1 != (MVGameCoinObject *)0x0) &&
       (pRVar2 = (pMVar1->fields).rotateLocal, pRVar2 != (RotateLocal *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pRVar2,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_Reset(MVGameCoin *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pMVar1 = (this->fields).pickupObject;
    if ((pMVar1 == (MVGameCoinObject *)0x0) ||
       (this_00 = (pMVar1->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0)) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  (this->fields).state = 0;
  return;
}


/* Void SetupUserInteractor() */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_SetupUserInteractor
               (MVGameCoin *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__System__Func<int,_bool>);
    func_?(&TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
    func_?(&TypeInfo__LevelBasedUseRequirement);
    func_?(&MethodInfo__MVGameCoin__IsCoinTakeable_int__MVInteractableBase_);
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&
                    MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UseInteractor);
    cRam_? = '\x01';
  }
  if ((this->fields).pickupObject != (MVGameCoinObject *)0x0) {
    pTVar1 = (((this->fields).pickupObject)->fields).triggerBoxEvents;
    if (pTVar1 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar1,(MethodInfo *)0x0);
      this_00 = (Predicate_1_UInt32_ *)func_?(TypeInfo__System__Func<int,_bool>);
      mscorlib.dll::System::Predicate`1[UInt32]::Predicate_1_UInt32___ctor
                (this_00,(Object *)this,this->klass[1]._0.image,(MethodInfo *)0x0);
      this_01 = (Func_3_Int32_Object_Boolean_ *)
                func_?(TypeInfo__System__Func<int,_MVInteractableBase,_bool>);
      mscorlib.dll::System::Func`3[Int32,Object,Boolean]::Func_3_Int32_Object_Boolean___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVGameCoin__IsCoinTakeable_int__MVInteractableBase_,(MethodInfo *)0x0);
      pUVar2 = (UseInteractor *)func_?(TypeInfo__UseInteractor);
      UseInteractor::UseInteractor__ctor
                (pUVar2,(MVWorldObjectClient *)0x0,(GameObject *)this_00,0,(Collider *)this_00,
                 (Func_2_Int32_Boolean_ *)this_00,
                 (Func_3_Int32_MVInteractableBase_Boolean_ *)this_01,2.5,0,1,(MethodInfo *)0x0);
      pURam000000fc = pUVar2;
      func_?();
      if (iRam_? != 0) {
        root = *(GameObject **)(iRam_? + 0x30);
        this_02 = (LevelBasedUseRequirement *)func_?(TypeInfo__LevelBasedUseRequirement);
        LevelBasedUseRequirement::LevelBasedUseRequirement__ctor(this_02,root,0,(MethodInfo *)0x0);
        if (pURam000000fc != (UseInteractor *)0x0) {
          UseInteractor::UseInteractor_AddRequirement
                    (pURam000000fc,(UseRequirement *)this_02,(MethodInfo *)0x0);
          pUVar2 = pURam000000fc;
          if (iRam_? != 0) {
            pTVar1 = *(TriggerBoxEvents **)(iRam_? + 0x18);
            pEVar3 = (EventHandler_1_Object_ *)
                     func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                      (pEVar3,(Object *)pUVar2,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar1 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                        (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
              pUVar2 = pURam000000fc;
              if (iRam_? != 0) {
                pTVar1 = *(TriggerBoxEvents **)(iRam_? + 0x18);
                pEVar3 = (EventHandler_1_Object_ *)
                         func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                          (pEVar3,(Object *)pUVar2,
                           MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar1 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
                            (pTVar1,(EventHandler_1_TriggerEventArgs_ *)pEVar3,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVGameCoin(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin__ctor
               (MVGameCoin *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__MVGameCoinObject);
    func_?(&
                    MethodInfo__MVGameCoin__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    cRam_? = '\x01';
  }
  (this->fields).isVisible = 1;
  (this->fields).pickedUpStateDuration = 0.8;
  (this->fields).reshowingStateDuration = 0.5;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar1->fields).mvGameCoinPrefab,
               worldObjects,(MethodInfo *)0x0);
    pMVar2 = (MVGameCoinObject *)(this->fields)._._.component;
    if (pMVar2 == (MVGameCoinObject *)0x0) {
      (this->fields).pickupObject = (MVGameCoinObject *)0x0;
    }
    else {
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVGameCoinObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVGameCoinObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVGameCoinObject)) goto code_?;
      (this->fields).pickupObject = pMVar2;
      if (((((ObjectPrefab__Class *)pMVar2->klass)->_1).naturalAligment <
           (TypeInfo__MVGameCoinObject->_1).naturalAligment) ||
         ((((ObjectPrefab__Class *)pMVar2->klass)->_1).typeHierarchy
          [(TypeInfo__MVGameCoinObject->_1).naturalAligment - 1] !=
          (Il2CppClass *)TypeInfo__MVGameCoinObject)) goto code_?;
    }
    func_?(&(this->fields).pickupObject);
    uVar3 = *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4);
    piVar4 = &(this->fields)._._.interactionFlags;
    *(uint *)piVar4 = (uint)*piVar4 | 0x200000;
    *(undefined4 *)((int)&(this->fields)._._.interactionFlags + 4) = uVar3;
    pMVar2 = (this->fields).pickupObject;
    if (pMVar2 != (MVGameCoinObject *)0x0) {
      pTVar5 = (pMVar2->fields).triggerBoxEvents;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar5,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        pTVar7 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
        if (pTVar7 != (Type *)0x0) {
          pSVar8 = (String *)
                   (*(code *)(pTVar7->klass->vtable).__unknown.method)
                             (pTVar7,(pTVar7->klass->vtable).get_DeclaringType.methodPtr);
          pSVar8 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar8,
                              (MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar8,(MethodInfo *)0x0);
code_?:
          if ((this->fields).isVisible == 0) {
            pMVar2 = (this->fields).pickupObject;
            if ((pMVar2 == (MVGameCoinObject *)0x0) ||
               (this_00 = (pMVar2->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
            goto code_?;
            GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
            (this->fields).isVisible = 1;
          }
          (this->fields).state = 0;
          pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar9 != (MVNetworkGame *)0x0) &&
             (this_01 = (pMVar9->fields)._GameCoinManager_k__BackingField,
             this_01 != (MVGameCoinManager *)0x0)) {
            MVGameCoinManager::MVGameCoinManager_ReportPickupChangeInEditor
                      (this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pMVar2 = (this->fields).pickupObject;
        if (pMVar2 != (MVGameCoinObject *)0x0) {
          pTVar5 = (pMVar2->fields).triggerBoxEvents;
          this_02 = (EventHandler_1_Object_ *)
                    func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVGameCoin__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                     ,(MethodInfo *)0x0);
          if (pTVar5 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar5,(EventHandler_1_TriggerEventArgs_ *)this_02,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pMVar2 = extraout_EDX;
code_?:
  func_?(pMVar2);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGameCoin::MVGameCoin_triggerBoxEvents_TriggerEnter
               (MVGameCoin *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  this_00 = (this->fields).useInteractor;
  if (this_00 != (UseInteractor *)0x0) {
    UVar1 = UseInteractor::UseInteractor_EvaluateRequirementsUsability(this_00,(MethodInfo *)0x0);
    if ((UVar1 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0),
       pMVar2 != (MVWorldObject *)0x0)) {
      (*(code *)(this->klass->vtable).OnPickup.method)();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

