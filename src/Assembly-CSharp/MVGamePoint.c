
/* Void Create() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Create(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    func_?(&TypeInfo__MVGamePointObject);
    func_?(&MethodInfo__MVGamePoint__Enter_System__Object__TriggerEventArgs_);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (MVGamePointObject *)(this->fields)._._._.component;
  if (pMVar1 == (MVGamePointObject *)0x0) {
    (this->fields).gamePointObject = (MVGamePointObject *)0x0;
code_?:
    func_?(&(this->fields).gamePointObject,pMVar1);
    pMVar1 = (this->fields).gamePointObject;
    if (pMVar1 != (MVGamePointObject *)0x0) {
      pTVar2 = (pMVar1->fields).triggerBoxEvents;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
code_?:
        MVGamePoint_SetVisible(this,(MethodInfo *)0x0);
        MVGamePoint_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
        MVGamePoint_UpdateCanRespawn(this,(this->fields)._._._._.data,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (this->fields).gamePointObject;
      if (pMVar1 != (MVGamePointObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVGamePoint__Enter_System__Object__TriggerEventArgs_,
                   (MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)this_00,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  else {
    if (((TypeInfo__MVGamePointObject->_1).naturalAligment <=
         (((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment) &&
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy
        [(TypeInfo__MVGamePointObject->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__MVGamePointObject)) {
      (this->fields).gamePointObject = pMVar1;
      if (((TypeInfo__MVGamePointObject->_1).naturalAligment <=
           (((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment) &&
         ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy
          [(TypeInfo__MVGamePointObject->_1).naturalAligment - 1] ==
          (Il2CppClass *)TypeInfo__MVGamePointObject)) goto code_?;
    }
    func_?(pMVar1,TypeInfo__MVGamePointObject);
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Destroy(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar1 != (MVNetworkGame *)0x0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar1 == (MVNetworkGame *)0x0) {
      func_?();
      goto code_?;
    }
    pAVar2 = (pMVar1->fields).OnWinningConditionFulfilled;
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)
              func_?(TypeInfo__System__Action<IWinningCondition>);
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar3 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pDVar3 == (Delegate *)0x0) {
      (pMVar1->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar2 = (Action_1_IWinningCondition_ *)func_?();
      if (pAVar2 == (Action_1_IWinningCondition_ *)0x0) {
code_?:
        func_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pMVar1->fields).OnWinningConditionFulfilled = pAVar2;
      iVar5 = func_?();
      if (iVar5 == 0) goto code_?;
    }
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__GamePointAmountManager);
    cRam_? = '\x01';
  }
  woid = (this->fields)._._._._.id;
  if ((TypeInfo__GamePointAmountManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__GamePointAmountManager);
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Disable(MVGamePoint *this,MethodInfo *method)

{
  pMVar1 = (this->fields).gamePointObject;
  (this->fields).state = 1;
  (this->fields).isVisible = 0;
  if ((pMVar1 != (MVGamePointObject *)0x0) &&
     (this_00 = (pMVar1->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
    (this->fields).canRespawn = 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Enter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Enter
               (MVGamePoint *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if ((this->fields).state != 0) {
    return;
  }
  pMVar1 = (this->fields).gamePointObject;
  (this->fields).state = 1;
  (this->fields).isVisible = 0;
  if ((pMVar1 != (MVGamePointObject *)0x0) &&
     (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).gamePointObject;
    if ((pMVar1 != (MVGamePointObject *)0x0) &&
       ((pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0 &&
        (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pGVar2,(MethodInfo *)0x0), this_00 != (GameObject *)0x0))
       )) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,(this->fields).canRespawn,(MethodInfo *)0x0);
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (this_01,(this->fields)._._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
        FakeGamePointGainEffectManager::FakeGamePointGainEffectManager_FakeGainEffect
                  (1,(MethodInfo *)0x0);
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).pickUpTime = fVar3;
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void HandleStandaloneDisabling() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_HandleStandaloneDisabling
               (MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      pMVar2 = (this->fields).gamePointObject;
      (this->fields).state = 1;
      (this->fields).isVisible = 0;
      if ((pMVar2 == (MVGamePointObject *)0x0) ||
         (this_00 = (pMVar2->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
      goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
      (this->fields).canRespawn = 0;
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Initialize(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<IWinningCondition>);
    func_?(&MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_);
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).gamePointObject;
  if (pMVar1 == (MVGamePointObject *)0x0) {
code_?:
    func_?();
  }
  else {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar2 == (MVNetworkGame *)0x0) goto code_?;
    a = (pMVar2->fields).OnWinningConditionFulfilled;
    this_00 = (SpawnRoleVariable_1_T_SubDelegate_System_Object_ *)func_?();
    Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::
    SpawnRoleVariable`1[T]+SubDelegate[System::Object]::
    SpawnRoleVariable_1_T_SubDelegate_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    unaff_ESI = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
    unaff_EDI = TypeInfo__System__Action<IWinningCondition>;
    if (unaff_ESI == (Delegate *)0x0) {
      iRam_? = 0;
      pAStack3 = (Action_1_IWinningCondition___Class *)0x0;
code_?:
      pDStack4 = (Delegate *)0xc0;
      func_?();
      return;
    }
    pAStack3 = TypeInfo__System__Action<IWinningCondition>;
    pDStack4 = unaff_ESI;
    iVar5 = func_?();
    this = (MVGamePoint *)TypeInfo__System__Action<IWinningCondition>;
    if (iVar5 == 0) goto code_?;
    unaff_EDI = (Action_1_IWinningCondition___Class *)0x0;
    pAStack3 = TypeInfo__System__Action<IWinningCondition>;
    pDStack4 = unaff_ESI;
    iRam_? = iVar5;
    pAStack3 = (Action_1_IWinningCondition___Class *)func_?();
    if (pAStack3 != (Action_1_IWinningCondition___Class *)0x0) goto code_?;
  }
  pDStack4 = unaff_ESI;
  pAStack3 = (Action_1_IWinningCondition___Class *)this;
  func_?();
code_?:
  pDStack4 = unaff_ESI;
  pAStack3 = unaff_EDI;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_OnDataUpdate
               (MVGamePoint *this,MethodInfo *method)

{
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  MVGamePoint_UpdateCanRespawn(this,(this->fields)._._._._.data,(MethodInfo *)0x0);
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_OnUpdate(MVGamePoint *this,MethodInfo *method)

{
  if (((this->fields).canRespawn != 0) && ((this->fields).state == 1)) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((float)(this->fields).respawnTime + (this->fields).pickUpTime < fVar1) {
      (*(code *)(this->klass->vtable).Reset.method)
                (this,(this->klass->vtable).OnObjectLinkChanged.methodPtr);
    }
  }
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_PartialUpdateWOData
               (MVGamePoint *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  MVWorldObjectClient::MVWorldObjectClient_PartialUpdateWOData
            ((MVWorldObjectClient *)this,woData,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_respawnTime);
    cRam_? = '\x01';
  }
  if (in_stack_1 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (in_stack_1,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    *(bool *)(in_stack_3 + 0xfd) = bVar2;
    if (bVar2 == 0) {
      return;
    }
    TVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (in_stack_1,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar4.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar4.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        puVar5 = (undefined4 *)func_?();
        *(undefined4 *)(in_stack_3 + 0x100) = *puVar5;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Reset(MVGamePoint *this,MethodInfo *method)

{
  MVGamePoint_SetVisible(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode != 0) {
      *(undefined4 *)(in_stack_2 + 0xf8) = 1;
      *(undefined1 *)(in_stack_2 + 0xfc) = 0;
      if ((*(int *)(in_stack_2 + 0x108) == 0) ||
         (this_00 = *(GreyOutObjectScript **)(*(int *)(in_stack_2 + 0x108) + 0x20),
         this_00 == (GreyOutObjectScript *)0x0)) goto code_?;
      GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
      *(undefined1 *)(in_stack_2 + 0xfd) = 0;
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetVisible() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_SetVisible(MVGamePoint *this,MethodInfo *method)

{
  if ((this->fields).isVisible != 0) {
code_?:
    (this->fields).state = 0;
    return;
  }
  pMVar1 = (this->fields).gamePointObject;
  if ((pMVar1 != (MVGamePointObject *)0x0) &&
     (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
    pMVar1 = (this->fields).gamePointObject;
    if ((pMVar1 != (MVGamePointObject *)0x0) &&
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 != (GreyOutObjectScript *)0x0)) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pGVar2,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_00,1,(MethodInfo *)0x0);
        (this->fields).isVisible = 1;
        goto code_?;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateCanRespawn(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_UpdateCanRespawn
               (MVGamePoint *this,Dictionary_2_System_Object_System_Object_ *newData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_respawnTime);
    cRam_? = '\x01';
  }
  if (newData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newData,
                       (Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    (this->fields).canRespawn = bVar1;
    if (bVar1 == 0) {
      return;
    }
    TVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newData,
                       (Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    if (TVar2.m_Index != 0) {
      if (*(Il2CppClass **)(*(int *)TVar2.m_Index + 0x20) ==
          (TypeInfo__System__Int32->_0).element_class) {
        piVar3 = (int32_t *)func_?();
        (this->fields).respawnTime = *piVar3;
        return;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVGamePoint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint__ctor
               (MVGamePoint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields).isVisible = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 != (PrefabPool *)0x0) {
    MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
              ((MVGamePointRewardLogicObject *)this,data,
               (ObjectPrefab *)(pPVar1->fields).gamePointPrefab,worldObjects,(MethodInfo *)0x0);
    MVGamePoint_Create(this,(MethodInfo *)0x0);
    iVar2 = (this->fields)._._._.interactionFlags;
    puVar3 = (uint *)((int)&(this->fields)._._._.interactionFlags + 4);
    *puVar3 = *puVar3 | 1;
    newData = (this->fields)._._._._.data;
    *(int *)&(this->fields)._._._.interactionFlags = (int)iVar2;
    MVGamePoint_UpdateCanRespawn(this,newData,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVGamePoint::MVGamePoint_get_DocumentationType
          (MVGamePoint *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_GamePoint;
}

