
/* Void Create() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Create
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCollectibleObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_AllWorldObjectTriggerBoxEvents);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVCollectibleObject *)(this->fields)._._._.component;
  if (pMVar1 == (MVCollectibleObject *)0x0) {
    (this->fields).collectibleObject = (MVCollectibleObject *)0x0;
  }
  else {
    bVar2 = (TypeInfo__MVCollectibleObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVCollectibleObject)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).collectibleObject = pMVar1;
    bVar2 = (TypeInfo__MVCollectibleObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar1->klass)->_1).naturalAligment < bVar2) ||
       ((((ObjectPrefab__Class *)pMVar1->klass)->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo__MVCollectibleObject)) {
      FUN_?(pMVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(this->fields).collectibleObject >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pMVar1 = (this->fields).collectibleObject;
  if (pMVar1 == (MVCollectibleObject *)0x0) goto code_?;
  pTVar9 = (pMVar1->fields).triggerBoxEvents;
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
  if (pTVar9 == (TriggerBoxEvents *)0x0) {
code_?:
    plVar10 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
    if (plVar10 == (longlong *)0x0) goto code_?;
    pSVar11 = (String *)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar11,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar11,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar9->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar1 = (this->fields).collectibleObject;
    if (pMVar1 == (MVCollectibleObject *)0x0) goto code_?;
    pTVar9 = (pMVar1->fields).triggerBoxEvents;
    pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar12,(Object *)this,
               MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar9 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar9,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
  }
  pMVar1 = (this->fields).collectibleObject;
  if (pMVar1 == (MVCollectibleObject *)0x0) goto code_?;
  pAVar13 = (pMVar1->fields).allWorldObjectTriggerBoxEvents;
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
  if (pAVar13 == (AllWorldObjectTriggerBoxEvents *)0x0) {
code_?:
    plVar10 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
    if (plVar10 == (longlong *)0x0) goto code_?;
    pSVar11 = (String *)(**(code **)(*plVar10 + 0x1b8))(plVar10,*(undefined8 *)(*plVar10 + 0x1c0));
    pSVar11 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_A_AllWorldObjectTriggerBoxEvents,pSVar11,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar11,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar13->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar1 = (this->fields).collectibleObject;
    if (pMVar1 == (MVCollectibleObject *)0x0) goto code_?;
    pAVar13 = (pMVar1->fields).allWorldObjectTriggerBoxEvents;
    pUVar12 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar12,(Object *)this,
               MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pAVar13 == (AllWorldObjectTriggerBoxEvents *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppEVar14 = &(pAVar13->fields).TriggerEnter;
    a = (pAVar13->fields).TriggerEnter;
    do {
      pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)pUVar12,(MethodInfo *)0x0);
      pEVar16 = TypeInfo__System__EventHandler<TriggerEventArgs>;
      if (pDVar15 == (Delegate *)0x0) {
        pEVar17 = (EventHandler_1_TriggerEventArgs_ *)0x0;
      }
      else {
        pEVar17 = (EventHandler_1_TriggerEventArgs_ *)FUN_?(pDVar15);
        if (pEVar17 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
          FUN_?(pDVar15,pEVar16);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      pEVar18 = *ppEVar14;
      bVar8 = a == pEVar18;
      if (bVar8) {
        *ppEVar14 = pEVar17;
        pEVar18 = a;
      }
      UNLOCK();
      pEVar17 = a;
      if (!bVar8) {
        pEVar17 = pEVar18;
      }
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)ppEVar14 >> 0xc);
        uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
          puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar6 == *puVar7;
          if (bVar8) {
            *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      bVar8 = pEVar17 != a;
      a = pEVar17;
    } while (bVar8);
  }
  if ((this->fields).isVisible == 0) {
    pMVar1 = (this->fields).collectibleObject;
    if ((pMVar1 == (MVCollectibleObject *)0x0) ||
       (this_00 = (pMVar1->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  pMVar1 = (this->fields).collectibleObject;
  (this->fields).state = 0;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (pCVar19 = (pMVar1->fields).collectibleEffects, pCVar19 != (CollectibleEffects *)0x0)) {
    (pCVar19->fields).state = 0;
    piVar20 = &(this->fields)._._._.interactionFlags;
    *piVar20 = *piVar20 | 0x40000000;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Destroy
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVGamePointRewardLogicObject::MVGamePointRewardLogicObject_Destroy
            ((MVGamePointRewardLogicObject *)this,(MethodInfo *)0x0);
  if ((this->fields).initializedInWorld != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar1 == (MVGameControllerBase *)0x0) ||
        (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
       (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
       pWVar3 == (WinningConditionManager *)0x0)) {
DAT_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pOVar5 = MVWorldObject.dll::WinningConditionManager::
             WinningConditionManager_GetSingletonWinnerConditionByType
                       (pWVar3,
                        AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                       );
    if (pOVar5 == (Object *)0x0) {
      uVar6 = func_?(&TypeInfo__System__Exception);
      pEVar7 = (Exception *)func_?(uVar6);
      pSVar8 = (String *)func_?(&StringLiteral_AllCollectiblesCollected_not_fou);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar8,(MethodInfo *)0x0);
      uVar6 = func_?(&MethodInfo__MVCollectible__Destroy__);
      FUN_?(pEVar7,uVar6);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(int *)&pOVar5[1].monitor == 0) {
      uVar6 = func_?(&TypeInfo__System__Exception);
      pEVar7 = (Exception *)func_?(uVar6);
      pSVar8 = (String *)func_?(&StringLiteral_AllCollectiblesCollected_limit_i);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar7,pSVar8,(MethodInfo *)0x0);
      uVar6 = func_?(&MethodInfo__MVCollectible__Destroy__);
      FUN_?(pEVar7,uVar6);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(int *)&pOVar5[1].monitor = *(int *)&pOVar5[1].monitor + -1;
    if (pOVar5[4].klass != (Object__Class *)0x0) {
      (*(code *)((pOVar5[4].klass)->_0).namespaze)(((pOVar5[4].klass)->_0).element_class,pOVar5);
    }
    bVar9 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
    if ((bVar9 != 0) &&
       (pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0),
       pMVar2 != (MVNetworkGame *)0x0)) {
      if (*(int *)&pOVar5[1].monitor == 0) {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
           pWVar3 == (WinningConditionManager *)0x0)) goto DAT_?;
        MVWorldObject.dll::WinningConditionManager::WinningConditionManager_RemoveWinnerCondition
                  (pWVar3,*(int32_t *)((longlong)&pOVar5[1].klass + 4),(MethodInfo *)0x0);
      }
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar2 == (MVNetworkGame *)0x0) goto DAT_?;
      pAVar10 = (pMVar2->fields).OnWinningConditionFulfilled;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(TypeInfo__System__Action<IWinningCondition>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_,
                 (MethodInfo *)0x0);
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar10,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar12 = TypeInfo__System__Action<IWinningCondition>;
      if (pDVar11 == (Delegate *)0x0) {
        (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
      }
      else {
        pAVar10 = (Action_1_IWinningCondition_ *)
                 FUN_?(pDVar11,TypeInfo__System__Action<IWinningCondition>);
        if (pAVar10 == (Action_1_IWinningCondition_ *)0x0) {
          FUN_?(pDVar11,pAVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pMVar2->fields).OnWinningConditionFulfilled = pAVar10;
        pAVar12 = TypeInfo__System__Action<IWinningCondition>;
        lVar13 = FUN_?(pDVar11,TypeInfo__System__Action<IWinningCondition>);
        if (lVar13 == 0) {
          FUN_?(pDVar11,pAVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      func_?(&(pMVar2->fields).OnWinningConditionFulfilled);
    }
  }
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCollectible::MVCollectible_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVCollectible *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  fVar4 = VStack_2.x * TypeRef__System__Activator__T._0_4_;
  fVar5 = VStack_2.y + VStack_2.y;
  this_00 = (this->fields)._._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    aQStack_11[0].x = QStack_6.x;
    aQStack_11[0].y = QStack_6.y;
    aQStack_11[0].z = QStack_6.z;
    aQStack_11[0].w = QStack_6.w;
    VStack_12.y = fVar5;
    VStack_12.x = fVar4;
    VStack_12.z = fVar3 + fVar3;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar5 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Initialize
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<IWinningCondition>);
    LOCK();
    UNLOCK();
    FUN_?(&System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__MVTeam);
    LOCK();
    UNLOCK();
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<AllCollectiblesCollectedClient>_System__Object____
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_takenByList);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField,
     pWVar3 == (WinningConditionManager *)0x0)) goto code_?;
  pOVar4 = MVWorldObject.dll::WinningConditionManager::
            WinningConditionManager_GetSingletonWinnerConditionByType
                      (pWVar3,
                       AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__GetSingletonWinnerConditionByType<AllCollectiblesCollectedClient>__
                      );
  if (pOVar4 == (Object *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((pMVar1 == (MVGameControllerBase *)0x0) ||
       (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) goto code_?;
    pWVar3 = (pMVar2->fields)._WinningConditionManager_k__BackingField;
    args = (Object__Array *)
           System.Core.dll::System::Linq::Enumerable::Enumerable_Empty_2
                     (System__Object__MethodInfo__System__Array__Empty<System::Object>______);
    if ((pWVar3 == (WinningConditionManager *)0x0) ||
       (pOVar4 = MVWorldObject.dll::WinningConditionManager::
                  WinningConditionManager_CreateWinnerCondition
                            (pWVar3,args,
                             AllCollectiblesCollectedClient_MethodInfo__WinningConditionManager__CreateWinnerCondition<AllCollectiblesCollectedClient>_System__Object____
                            ), pOVar4 == (Object *)0x0)) goto code_?;
  }
  *(int *)&pOVar4[1].monitor = *(int *)&pOVar4[1].monitor + 1;
  if (pOVar4[4].klass != (Object__Class *)0x0) {
    (*(code *)((pOVar4[4].klass)->_0).namespaze)(((pOVar4[4].klass)->_0).element_class,pOVar4,0);
  }
  pMVar5 = (this->fields).collectibleObject;
  (this->fields).initializedInWorld = 1;
  if (pMVar5 != (MVCollectibleObject *)0x0) {
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar5->fields).pickupMesh,TypeRef__System__Activator__T._0_4_
               ,(MethodInfo *)0x0);
    this_00 = (this->fields)._._._.runtimeDataVariables;
    if (this_00 != (MVRuntimeDataVariables *)0x0) {
      pMVar6 = MVRuntimeDataVariables::MVRuntimeDataVariables_New
                          (this_00,StringLiteral_takenByList,_UNK_?,0,(MethodInfo *)0x0);
      bVar7 = iRam_? != 0;
      (this->fields).takenByListRunTimeVariable = pMVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).takenByListRunTimeVariable >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      this_01 = (List_1_MV_WorldObject_MVTeam_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>)
      ;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__List__);
      bVar7 = iRam_? != 0;
      (this->fields).takenByTeamList = this_01;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(this->fields).takenByTeamList >> 0xc);
        uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar7 = uVar10 == *puVar11;
          if (bVar7) {
            *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (!bVar7);
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         (pMVar12 = (pMVar2->fields)._NetworkGameStateListener_k__BackingField,
         pMVar12 != (MVNetworkGameStateListener *)0x0)) {
        if ((pMVar12->fields).currentGameState != 2) {
          pMVar6 = (this->fields).takenByListRunTimeVariable;
          if (pMVar6 == (MVRuntimeDataVariable *)0x0) goto code_?;
          this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                                 ((pMVar6->fields).value,(MethodInfo *)0x0);
          if (this_02 ==
              (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
            EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
            EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
            uStack_14 = 0;
            mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
            goto code_?;
          }
          bVar15 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((this_02->klass->_1).naturalAligment < bVar15) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (this_02->klass->_1).typeHierarchy[(ulonglong)bVar15 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(this_02);
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
          EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
          uStack_14 = 0;
          pSVar17 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
          iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (this_02,(Object *)pSVar17,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (-1 < iVar18) {
            if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0)
            goto code_?;
            FUN_?();
          }
          EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
          EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
          uStack_14 = 1;
          pSVar17 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
          iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (this_02,(Object *)pSVar17,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (-1 < iVar18) {
            if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0)
            goto code_?;
            FUN_?();
          }
          EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
          EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
          uStack_14 = 2;
          pSVar17 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
          iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (this_02,(Object *)pSVar17,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (-1 < iVar18) {
            if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0)
            goto code_?;
            FUN_?();
          }
          EStack_13.klass = (Enum__Class *)TypeInfo__MV__WorldObject__MVTeam;
          EStack_13.monitor = (MonitorData *)0xffffffffffffffff;
          uStack_14 = 3;
          pSVar17 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_13,(MethodInfo *)0x0);
          iVar18 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                             (this_02,(Object *)pSVar17,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                              ->klass->rgctx_data[0x21].method);
          if (-1 < iVar18) {
            if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0)
            goto code_?;
            FUN_?();
          }
        }
        MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((pMVar1 != (MVGameControllerBase *)0x0) &&
           (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) {
          pAVar19 = (pMVar2->fields).OnWinningConditionFulfilled;
          this_03 = (UnityAction_1_System_Object_ *)
                    FUN_?(TypeInfo__System__Action<IWinningCondition>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    (this_03,(Object *)this,
                     MethodInfo__MVCollectible__OnWinningConditionFulfilled_IWinningCondition_,
                     (MethodInfo *)0x0);
          pDVar20 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pAVar19,(Delegate *)this_03,(MethodInfo *)0x0);
          pAVar21 = TypeInfo__System__Action<IWinningCondition>;
          if (pDVar20 == (Delegate *)0x0) {
            (pMVar2->fields).OnWinningConditionFulfilled = (Action_1_IWinningCondition_ *)0x0;
          }
          else {
            pAVar19 = (Action_1_IWinningCondition_ *)
                      FUN_?(pDVar20,TypeInfo__System__Action<IWinningCondition>);
            if (pAVar19 == (Action_1_IWinningCondition_ *)0x0) {
              FUN_?(pDVar20,pAVar21);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
            (pMVar2->fields).OnWinningConditionFulfilled = pAVar19;
            pAVar21 = TypeInfo__System__Action<IWinningCondition>;
            lVar22 = FUN_?(pDVar20,TypeInfo__System__Action<IWinningCondition>);
            if (lVar22 == 0) {
              FUN_?(pDVar20,pAVar21);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar8 = (uint)((ulonglong)&(pMVar2->fields).OnWinningConditionFulfilled >> 0xc);
            uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
            do {
              uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
              puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
              LOCK();
              bVar7 = uVar10 == *puVar11;
              if (bVar7) {
                *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (!bVar7);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void OnPickup(Int32) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnPickup
               (MVCollectible *this,int32_t actorNr,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOStackX_20 = (Object *)0x0;
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
    if ((actorNr == (pMVar4->fields)._._ActorNr_k__BackingField) && ((this->fields).state == 4)) {
      pMVar5 = (this->fields).collectibleObject;
      (this->fields).isVisible = 0;
      if ((pMVar5 != (MVCollectibleObject *)0x0) &&
         (this_00 = (pMVar5->fields).pickupItem, this_00 != (GreyOutObjectScript *)0x0)) {
        GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_00,(MethodInfo *)0x0);
        pMVar5 = (this->fields).collectibleObject;
        (this->fields).state = 1;
        if ((pMVar5 != (MVCollectibleObject *)0x0) &&
           (pCVar6 = (pMVar5->fields).collectibleEffects, pCVar6 != (CollectibleEffects *)0x0)) {
          (pCVar6->fields).state = 1;
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pcRam_? = pcVar7;
          fVar9 = (float)(*pcRam_?)();
          (this->fields).pickedUpTime = fVar9;
          return;
        }
      }
    }
    else {
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
        if (cRam_? == '\0') {
          FUN_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        this_01 = (pMVar3->fields).players;
        if (this_01 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
          bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                            ((Dictionary_2_System_Int32_System_Object_ *)this_01,actorNr,
                             &pOStackX_20,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                            );
          if (bVar10 == 0) {
            return;
          }
          if (pOStackX_20 != (Object *)0x0) {
            pLVar11 = (this->fields).takenByTeamList;
            if (pLVar11 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
              if (((pLVar11->fields)._size != 0) &&
                 (iVar12 = FUN_?(pLVar11,*(undefined4 *)((longlong)&pOStackX_20[8].klass + 4)
                                        ,MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                                         ->klass->rgctx_data[0x17].rgctxDataDummy), iVar12 != -1)) {
                return;
              }
              pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if (((pMVar2 != (MVNetworkGame *)0x0) &&
                  (this_02 = (pMVar2->fields).teamManager, this_02 != (MVTeamManager *)0x0)) &&
                 (pLVar11 = MVTeamManager::MVTeamManager_GetTeamList(this_02,(MethodInfo *)0x0),
                 pLVar11 != (List_1_MV_WorldObject_MVTeam_ *)0x0)) {
                if ((pLVar11->fields)._size < 2) {
                  return;
                }
                if ((this->fields).takenByTeamList != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
                  FUN_?();
                  MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnTakenByListChange() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnTakenByListChange
               (MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                 );
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
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (pMVar3 = (pMVar2->fields).teamManager, pMVar3 != (MVTeamManager *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<MV::WorldObject::MVTeam,_System::Collections::Generic::HashSet<int>_>__get_Count__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar4 = (pMVar3->fields).teams;
    if (pDVar4 != (Dictionary_2_MV_WorldObject_MVTeam_HashSet_1_System_Int32_ *)0x0) {
      if ((pDVar4->fields)._count - (pDVar4->fields)._freeCount < 2) {
        return;
      }
      pLVar5 = (this->fields).takenByTeamList;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar1 != (MVGameControllerBase *)0x0) &&
          (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
         ((this_00 = (pMVar2->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0 &&
          ((pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0)
           , pMVar6 != (MVLocalPlayer *)0x0 && (pLVar5 != (List_1_MV_WorldObject_MVTeam_ *)0x0))))))
      {
        if ((pLVar5->fields)._size == 0) {
          return;
        }
        iVar7 = FUN_?(pLVar5,(pMVar6->fields)._._Team_k__BackingField,
                              MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                              ->klass->rgctx_data[0x17].rgctxDataDummy);
        if (iVar7 == -1) {
          return;
        }
        pMVar8 = (this->fields).collectibleObject;
        (this->fields).isVisible = 0;
        if ((pMVar8 != (MVCollectibleObject *)0x0) &&
           (this_01 = (pMVar8->fields).pickupItem, this_01 != (GreyOutObjectScript *)0x0)) {
          GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnUpdate
               (MVCollectible *this,MethodInfo *method)

{
  if ((this->fields).state == 1) {
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
    fVar3 = fVar3 - (this->fields).pickedUpTime;
    pfVar4 = &(this->fields).pickedUpStateDuration;
    if (*pfVar4 <= fVar3 && fVar3 != *pfVar4) {
      (this->fields).state = 2;
      pcVar1 = pcRam_?;
      pMVar5 = (this->fields).collectibleObject;
      if ((pMVar5 != (MVCollectibleObject *)0x0) &&
         (pCVar6 = (pMVar5->fields).collectibleEffects, pCVar6 != (CollectibleEffects *)0x0)) {
        (pCVar6->fields).state = 2;
        pcVar7 = pcRam_?;
        if ((pcVar1 == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar1, pcVar1 == (code *)0x0))
        {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar7;
        fVar3 = (float)(*pcVar1)();
        (pCVar6->fields).reshowingStartTime = fVar3;
        return;
      }
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if ((this->fields).state == 2) {
    fVar3 = (this->fields).pickedUpTime;
    fVar8 = (this->fields).pickedUpStateDuration;
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
    fVar9 = (float)(*pcRam_?)();
    fVar9 = fVar9 - (fVar3 + fVar8);
    pfVar4 = &(this->fields).reshowingStateDuration;
    if (*pfVar4 <= fVar9 && fVar9 != *pfVar4) {
      pMVar5 = (this->fields).collectibleObject;
      (this->fields).state = 3;
      if ((pMVar5 == (MVCollectibleObject *)0x0) ||
         (pCVar6 = (pMVar5->fields).collectibleEffects, pCVar6 == (CollectibleEffects *)0x0))
      goto code_?;
      (pCVar6->fields).state = 3;
    }
  }
  return;
}


/* Void OnWinningConditionFulfilled(IWinningCondition) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_OnWinningConditionFulfilled
               (MVCollectible *this,IWinningCondition *winningCondition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Clear__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).takenByTeamList;
  if (pLVar1 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).Reset.methodPtr)(this,(this->klass->vtable).Reset.method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_Reset(MVCollectible *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isVisible == 0) {
    pMVar1 = (this->fields).collectibleObject;
    if ((pMVar1 == (MVCollectibleObject *)0x0) ||
       (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(pGVar2,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  pMVar1 = (this->fields).collectibleObject;
  (this->fields).state = 0;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (pCVar3 = (pMVar1->fields).collectibleEffects, pCVar3 != (CollectibleEffects *)0x0)) {
    (pCVar3->fields).state = 0;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar4 != (MVGameControllerBase *)0x0) &&
        (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
       (this_00 = (pMVar5->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) {
      pMVar6 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0);
      if (pMVar6 != (MVLocalPlayer *)0x0) {
        iVar7 = (pMVar6->fields)._._Team_k__BackingField;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar4 != (MVGameControllerBase *)0x0) &&
            (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
           (this_01 = (pMVar5->fields).teamManager, this_01 != (MVTeamManager *)0x0)) {
          pLVar8 = MVTeamManager::MVTeamManager_GetTeamList(this_01,(MethodInfo *)0x0);
          if (pLVar8 != (List_1_MV_WorldObject_MVTeam_ *)0x0) {
            if (1 < (pLVar8->fields)._size) {
              pLVar8 = (this->fields).takenByTeamList;
              if (pLVar8 == (List_1_MV_WorldObject_MVTeam_ *)0x0) goto code_?;
              if ((pLVar8->fields)._size != 0) {
                iVar9 = FUN_?(pLVar8,iVar7,
                                      MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                                      ->klass->rgctx_data[0x17].rgctxDataDummy);
                if ((iVar9 != -1) && ((this->fields).isVisible != 0)) {
                  pMVar1 = (this->fields).collectibleObject;
                  (this->fields).isVisible = 0;
                  if ((pMVar1 == (MVCollectibleObject *)0x0) ||
                     (pGVar2 = (pMVar1->fields).pickupItem, pGVar2 == (GreyOutObjectScript *)0x0))
                  goto code_?;
                  GreyOutObjectScript::GreyOutObjectScript_GreyOut(pGVar2,(MethodInfo *)0x0);
                }
              }
            }
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SetVisible() */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_SetVisible
               (MVCollectible *this,MethodInfo *method)

{
  if ((this->fields).isVisible == 0) {
    pMVar1 = (this->fields).collectibleObject;
    if ((pMVar1 == (MVCollectibleObject *)0x0) ||
       (this_00 = (pMVar1->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  pMVar1 = (this->fields).collectibleObject;
  (this->fields).state = 0;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (pCVar2 = (pMVar1->fields).collectibleEffects, pCVar2 != (CollectibleEffects *)0x0)) {
    (pCVar2->fields).state = 0;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVCollectible(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible__ctor
               (MVCollectible *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).isVisible = 1;
  (this->fields).pickedUpStateDuration = 0.8;
  (this->fields).reshowingStateDuration = 0.5;
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
             (ObjectPrefab *)(pPVar2->fields).mvCollectiblePrefab,worldObjects,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCollectibleObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_AllWorldObjectTriggerBoxEvents);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_A_TriggerBoxEvents_object_is_mis);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar4 = (MVCollectibleObject *)(this->fields)._._._.component;
  if (pMVar4 == (MVCollectibleObject *)0x0) {
    (this->fields).collectibleObject = (MVCollectibleObject *)0x0;
  }
  else {
    bVar5 = (TypeInfo__MVCollectibleObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar4->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pMVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__MVCollectibleObject)) {
      FUN_?(pMVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->fields).collectibleObject = pMVar4;
    bVar5 = (TypeInfo__MVCollectibleObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar4->klass)->_1).naturalAligment < bVar5) ||
       ((((ObjectPrefab__Class *)pMVar4->klass)->_1).typeHierarchy[(ulonglong)bVar5 - 1] !=
        (Il2CppClass *)TypeInfo__MVCollectibleObject)) {
      FUN_?(pMVar4);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).collectibleObject >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar8 == *puVar9;
      if (bVar1) {
        *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar4 = (this->fields).collectibleObject;
  if (pMVar4 == (MVCollectibleObject *)0x0) goto code_?;
  pTVar10 = (pMVar4->fields).triggerBoxEvents;
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
  if (pTVar10 == (TriggerBoxEvents *)0x0) {
code_?:
    plVar11 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
    if (plVar11 == (longlong *)0x0) goto code_?;
    pSVar12 = (String *)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    pSVar12 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_A_TriggerBoxEvents_object_is_mis,pSVar12,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar12,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar10->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar4 = (this->fields).collectibleObject;
    if (pMVar4 == (MVCollectibleObject *)0x0) goto code_?;
    pTVar10 = (pMVar4->fields).triggerBoxEvents;
    pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar13,(Object *)this,
               MethodInfo__MVCollectible__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar10 == (TriggerBoxEvents *)0x0) goto code_?;
    TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
              (pTVar10,(EventHandler_1_TriggerEventArgs_ *)pUVar13,(MethodInfo *)0x0);
  }
  pMVar4 = (this->fields).collectibleObject;
  if (pMVar4 == (MVCollectibleObject *)0x0) goto code_?;
  pAVar14 = (pMVar4->fields).allWorldObjectTriggerBoxEvents;
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
  if (pAVar14 == (AllWorldObjectTriggerBoxEvents *)0x0) {
code_?:
    plVar11 = (longlong *)FUN_?(&(this->klass->_0).byval_arg);
    if (plVar11 == (longlong *)0x0) goto code_?;
    pSVar12 = (String *)(**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
    pSVar12 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_A_AllWorldObjectTriggerBoxEvents,pSVar12,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar12,(MethodInfo *)0x0);
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pAVar14->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
    pMVar4 = (this->fields).collectibleObject;
    if (pMVar4 == (MVCollectibleObject *)0x0) goto code_?;
    pAVar14 = (pMVar4->fields).allWorldObjectTriggerBoxEvents;
    pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar13,(Object *)this,
               MethodInfo__MVCollectible__allWorldObjectTriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pAVar14 == (AllWorldObjectTriggerBoxEvents *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    ppEVar15 = &(pAVar14->fields).TriggerEnter;
    a = (pAVar14->fields).TriggerEnter;
    do {
      pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)a,(Delegate *)pUVar13,(MethodInfo *)0x0);
      pEVar17 = TypeInfo__System__EventHandler<TriggerEventArgs>;
      if (pDVar16 == (Delegate *)0x0) {
        pEVar18 = (EventHandler_1_TriggerEventArgs_ *)0x0;
      }
      else {
        pEVar18 = (EventHandler_1_TriggerEventArgs_ *)FUN_?(pDVar16);
        if (pEVar18 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
          FUN_?(pDVar16,pEVar17);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      LOCK();
      pEVar19 = *ppEVar15;
      bVar1 = a == pEVar19;
      if (bVar1) {
        *ppEVar15 = pEVar18;
        pEVar19 = a;
      }
      UNLOCK();
      pEVar18 = a;
      if (!bVar1) {
        pEVar18 = pEVar19;
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)ppEVar15 >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar1 = uVar8 == *puVar9;
          if (bVar1) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar1);
      }
      bVar1 = pEVar18 != a;
      a = pEVar18;
    } while (bVar1);
  }
  if ((this->fields).isVisible == 0) {
    pMVar4 = (this->fields).collectibleObject;
    if ((pMVar4 == (MVCollectibleObject *)0x0) ||
       (this_00 = (pMVar4->fields).pickupItem, this_00 == (GreyOutObjectScript *)0x0))
    goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_00,(MethodInfo *)0x0);
    (this->fields).isVisible = 1;
  }
  pMVar4 = (this->fields).collectibleObject;
  (this->fields).state = 0;
  if ((pMVar4 != (MVCollectibleObject *)0x0) &&
     (pCVar20 = (pMVar4->fields).collectibleEffects, pCVar20 != (CollectibleEffects *)0x0)) {
    (pCVar20->fields).state = 0;
    piVar21 = &(this->fields)._._._.interactionFlags;
    *piVar21 = *piVar21 | 0x40000000;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void allWorldObjectTriggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_allWorldObjectTriggerBoxEvents_TriggerEnter
               (MVCollectible *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Add_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__Contains_MV__WorldObject__MVTeam_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::MVTeam>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).collectibleObject;
  pOStackX_8 = (Object *)0x0;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldObjectEnableController,
     pWVar2 != (WorldObjectEnableController *)0x0)) {
    if ((pWVar2->fields).enableState != 2) {
      return;
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (((e != (TriggerEventArgs *)0x0) && (this_03 != (MVWorldObjectClientManager *)0x0)) &&
       (pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (this_03,(e->fields).instigatorWOID,(MethodInfo *)0x0),
       pMVar3 != (MVWorldObjectClient *)0x0)) {
      key = (pMVar3->fields)._.ownerActorNr;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar4 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar4 != (MVGameControllerBase *)0x0) &&
          (pMVar5 = (pMVar4->fields).game, pMVar5 != (MVNetworkGame *)0x0)) &&
         ((pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0 &&
          (pMVar7 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
          pMVar7 != (MVLocalPlayer *)0x0)))) {
        iVar8 = (pMVar7->fields)._._ActorNr_k__BackingField;
        if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0) {
          return;
        }
        pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar5 != (MVNetworkGame *)0x0) &&
           (pMVar6 = (pMVar5->fields).playerContainer, pMVar6 != (MVPlayerContainer *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          this_00 = (pMVar6->fields).players;
          if (this_00 != (Dictionary_2_System_Int32_MVPlayer_ *)0x0) {
            bVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                    Object]::Dictionary_2_System_Int32_System_Object__TryGetValue
                              ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,&pOStackX_8,
                               MethodInfo__System__Collections__Generic__Dictionary<int,_MVPlayer>__TryGetValue_int__MVPlayer__
                              );
            if (bVar9 == 0) {
              return;
            }
            if (pOStackX_8 != (Object *)0x0) {
              if (iVar8 == key) {
                if ((this->fields).isVisible == 0) {
                  return;
                }
              }
              else {
                if (key < 1) {
                  return;
                }
                if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0)
                goto code_?;
                cVar10 = FUN_?();
                if (cVar10 != '\0') {
                  return;
                }
              }
              pMVar1 = (this->fields).collectibleObject;
              if (pMVar1 != (MVCollectibleObject *)0x0) {
                pAVar11 = (pMVar1->fields).audioSource;
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                                  ((Object_1 *)pAVar11,(MethodInfo *)0x0);
                if (bVar9 != 0) {
                  pMVar1 = (this->fields).collectibleObject;
                  if ((pMVar1 == (MVCollectibleObject *)0x0) ||
                     (pAVar11 = (pMVar1->fields).audioSource, pAVar11 == (AudioSource *)0x0))
                  goto code_?;
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                            (pAVar11,(MethodInfo *)0x0);
                }
                pMVar1 = (this->fields).collectibleObject;
                if ((pMVar1 != (MVCollectibleObject *)0x0) &&
                   (this_01 = (pMVar1->fields).particles,
                   this_01 != (ObjectParticleEmitterScript *)0x0)) {
                  ObjectParticleEmitterScript::ObjectParticleEmitterScript_Play
                            (this_01,(MethodInfo *)0x0);
                  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                  if ((pMVar5 != (MVNetworkGame *)0x0) &&
                     ((this_02 = (pMVar5->fields).teamManager, this_02 != (MVTeamManager *)0x0 &&
                      (pLVar12 = MVTeamManager::MVTeamManager_GetTeamList(this_02,(MethodInfo *)0x0)
                      , pLVar12 != (List_1_MV_WorldObject_MVTeam_ *)0x0)))) {
                    if (1 < (pLVar12->fields)._size && iVar8 == key) {
                      if ((this->fields).takenByTeamList == (List_1_MV_WorldObject_MVTeam_ *)0x0)
                      goto code_?;
                      FUN_?();
                      MVCollectible_OnTakenByListChange(this,(MethodInfo *)0x0);
                    }
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVCollectible::MVCollectible_triggerBoxEvents_TriggerEnter
               (MVCollectible *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  pMVar1 = (this->fields).collectibleObject;
  if ((pMVar1 != (MVCollectibleObject *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldObjectEnableController,
     pWVar2 != (WorldObjectEnableController *)0x0)) {
    if (((pWVar2->fields).enableState == 2) && ((this->fields).state == 0)) {
      (this->fields).state = 4;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      if ((e == (TriggerEventArgs *)0x0) || (this_00 == (MVNetworkGame_OperationRequests *)0x0))
      goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                (this_00,(this->fields)._._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

