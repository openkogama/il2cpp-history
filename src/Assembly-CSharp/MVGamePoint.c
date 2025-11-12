
/* Void Create() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Create(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGamePointObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGamePoint__Enter_System__Object__TriggerEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVGamePointObject *)(this->fields)._._._.component;
  if (pMVar1 == (MVGamePointObject *)0x0) {
    (this->fields).gamePointObject = (MVGamePointObject *)0x0;
  }
  else {
    bVar2 = (TypeInfo__MVGamePointObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVGamePointObject)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).gamePointObject = pMVar1;
    bVar2 = (TypeInfo__MVGamePointObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVGamePointObject)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).gamePointObject >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  pMVar1 = (this->fields).gamePointObject;
  if (pMVar1 == (MVGamePointObject *)0x0) goto DAT_?;
  pTVar8 = (pMVar1->fields).triggerBoxEvents;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pTVar8 != (TriggerBoxEvents *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar8->fields)._._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).gamePointObject;
      if (pMVar1 == (MVGamePointObject *)0x0) {
DAT_?:
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = (pMVar1->fields).triggerBoxEvents;
      this_01 = (UnityAction_2_System_Object_System_Object_ *)
                FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVGamePoint__Enter_System__Object__TriggerEventArgs_,(MethodInfo *)0x0)
      ;
      if (pTVar8 == (TriggerBoxEvents *)0x0) goto DAT_?;
      TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                (pTVar8,(EventHandler_1_TriggerEventArgs_ *)this_01,(MethodInfo *)0x0);
    }
  }
  MVGamePoint_SetVisible(this,(MethodInfo *)0x0);
  MVGamePoint_HandleStandaloneDisabling(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,(Object *)StringLiteral_respawnTime,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     ->klass->rgctx_data[0x21].method);
  bVar2 = (byte)((uint)iVar9 >> 0x1f) ^ 1;
  (this->fields).canRespawn = bVar2;
  if (bVar2 != 0) {
    pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)this_00,
                        (Object *)StringLiteral_respawnTime,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pOVar10 == (Object *)0x0) goto code_?;
    if ((pOVar10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar10,lRam_?);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).respawnTime = *(int32_t *)&pOVar10[1].klass;
  }
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Destroy(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_);
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
  if (pMVar1 == (MVGameControllerBase *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pMVar1->fields).game != (MVNetworkGame *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar3 = (pMVar1->fields).game, pMVar3 == (MVNetworkGame *)0x0))
    goto code_?;
    pAVar4 = (pMVar3->fields).OnWinningConditionFulfilled;
    this_01 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<IWinningCondition>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_01,(Object *)this,
               MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_,
               (MethodInfo *)0x0);
    pDVar5 = mscorlib.dll::System::Delegate::Delegate_Remove
                        ((Delegate *)pAVar4,(Delegate *)this_01,(MethodInfo *)0x0);
    pAVar6 = TypeInfo__System__Action<IWinningCondition>;
    if (pDVar5 == (Delegate *)0x0) {
      (pMVar3->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
    }
    else {
      pAVar4 = (Action_1_IWinningCondition_ *)
                FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
      if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) {
        FUN_?(pDVar5,pAVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (pMVar3->fields).OnWinningConditionFulfilled = pAVar4;
      pAVar6 = TypeInfo__System__Action<IWinningCondition>;
      lVar7 = FUN_?();
      if (lVar7 == 0) {
        FUN_?(pDVar5,pAVar6);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)&(pMVar3->fields).OnWinningConditionFulfilled >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointAmountManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  woid = (this->fields)._._._._.id;
  if (*(int *)&(TypeInfo__GamePointAmountManager->_1).field_0x1c == 0) {
    FUN_?();
  }
  GamePointAmountManager::GamePointAmountManager_UpdateRewardData(woid,0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  if ((this->fields)._._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields)._._.cullingSubscriberBase,(MethodInfo *)0x0);
    bVar12 = iRam_? != 0;
    (this->fields)._._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar12) {
      uVar8 = (uint)((ulonglong)&(this->fields)._._.cullingSubscriberBase >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar13 = (this->fields)._._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar13 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar13->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar13 = (this->fields)._._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)pGVar13,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar1 != (MVGameControllerBase *)0x0) &&
     (pMVar3 = (pMVar1->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
    pRVar14 = (pMVar3->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._._.id;
    if (pRVar14 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_00 = (HashSet_1_System_Int32Enum_ *)(pRVar14->fields).runtimeDataVariables;
      if (this_00 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::
                HashSet_1_System_Int32Enum__Contains
                          (this_00,item,
                           MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar15 != 0) {
          pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar3 == (MVNetworkGame *)0x0) ||
             (pRVar14 = (pMVar3->fields).runtimeVariableNetworkManager,
             pRVar14 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                    (pRVar14,(this->fields)._._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Disable() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Disable(MVGamePoint *this,MethodInfo *method)

{
  (this->fields).state = 1;
  (this->fields).isVisible = 0;
  pMVar1 = (this->fields).gamePointObject;
  if ((pMVar1 != (MVGamePointObject *)0x0) &&
     (this_00 = (pMVar1->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
    (this->fields).canRespawn = 0;
    return;
  }
  FUN_?();
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
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        fVar5 = (float)(*pcRam_?)();
        (this->fields).pickUpTime = fVar5;
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HandleStandaloneDisabling() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_HandleStandaloneDisabling
               (MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
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
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Initialize(MVGamePoint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).gamePointObject;
  if (pMVar1 != (MVGamePointObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar1->fields).visualObject,
               TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) {
      pAVar4 = (pMVar3->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVGamePoint__OnWinningConditionFulfilled_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar6 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar5 == (Delegate *)0x0) {
        (pMVar3->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar4 = (Action_1_IWinningCondition_ *)
                 FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar4 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar5,pAVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        (pMVar3->fields).OnWinningConditionFulfilled = pAVar4;
        pAVar6 = TypeInfo__System__Action<IWinningCondition>;
        lVar8 = FUN_?(pDVar5,TypeInfo__System__Action<IWinningCondition>);
        if (lVar8 == 0) {
          FUN_?(pDVar5,pAVar6);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar9 = (uint)((ulonglong)&(pMVar3->fields).OnWinningConditionFulfilled >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar13 = uVar11 == *puVar12;
          if (bVar13) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar13);
      }
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_OnDataUpdate
               (MVGamePoint *this,MethodInfo *method)

{
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_OnDataUpdate
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    bVar2 = (byte)((uint)iVar1 >> 0x1f) ^ 1;
    (this->fields).canRespawn = bVar2;
    if (bVar2 != 0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,
                          (Object *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).respawnTime = *(int32_t *)&pOVar3[1].klass;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_OnUpdate(MVGamePoint *this,MethodInfo *method)

{
  if (((this->fields).canRespawn != 0) && ((this->fields).state == 1)) {
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar2 = func_?(&UNK_?);
      FUN_?(uVar2,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    fVar3 = (float)(*pcRam_?)();
    if ((float)(this->fields).respawnTime + (this->fields).pickUpTime < fVar3) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
      return;
    }
  }
  return;
}


/* Void PartialUpdateWOData(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_PartialUpdateWOData
               (MVGamePoint *this,Dictionary_2_System_Object_System_Object_ *woData,
               MethodInfo *method)

{
  MVCommon.dll::MV::Common::CommonUtils::CommonUtils_PartialUpdateHashtable
            ((this->fields)._._._._.data,woData,(MethodInfo *)0x0);
  (*(this->klass->vtable).OnDataUpdate.methodPtr)(this,(this->klass->vtable).OnDataUpdate.method);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,woData,0,in_R9,unaff_RDI);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (woData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)woData,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    bVar2 = (byte)((uint)iVar1 >> 0x1f) ^ 1;
    (this->fields).canRespawn = bVar2;
    if (bVar2 != 0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (woData,(Object *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).respawnTime = *(int32_t *)&pOVar3[1].klass;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVGamePoint::MVGamePoint_Reset(MVGamePoint *this,MethodInfo *method)

{
  MVGamePoint_SetVisible(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase,0,in_R8,in_R9,unaff_RBX);
    LOCK();
    UNLOCK();
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
  FUN_?();
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
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (newData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                        *)newData,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    bVar2 = (byte)((uint)iVar1 >> 0x1f) ^ 1;
    (this->fields).canRespawn = bVar2;
    if (bVar2 != 0) {
      pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (newData,(Object *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      if ((pOVar3->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar3,lRam_?);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (this->fields).respawnTime = *(int32_t *)&pOVar3[1].klass;
    }
    return;
  }
code_?:
  FUN_?();
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
  bVar1 = cRam_? == '\0';
  (this->fields).isVisible = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject__ctor
            ((MVGamePointRewardLogicObject *)this,data,
             (ObjectPrefab *)(pPVar2->fields).gamePointPrefab,worldObjects,(MethodInfo *)0x0);
  MVGamePoint_Create(this,(MethodInfo *)0x0);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._._.data;
  piVar4 = &(this->fields)._._._.interactionFlags;
  *piVar4 = *piVar4 | 0x100000000;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                  ,this_00,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_respawnTime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_respawnTime,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    bVar6 = (byte)((uint)iVar5 >> 0x1f) ^ 1;
    (this->fields).canRespawn = bVar6;
    if (bVar6 != 0) {
      pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_00,
                          (Object *)StringLiteral_respawnTime,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar7 == (Object *)0x0) goto code_?;
      if ((pOVar7->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar7,lRam_?);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).respawnTime = *(int32_t *)&pOVar7[1].klass;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVGamePoint::MVGamePoint_get_DocumentationType
          (MVGamePoint *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_GamePoint;
}

