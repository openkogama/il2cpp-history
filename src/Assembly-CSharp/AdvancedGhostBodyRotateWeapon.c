
/* Void Attack(Int32) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Attack
               (AdvancedGhostBodyRotateWeapon *this,int32_t woid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__WorldObjectType);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
  this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_01,woid,(MethodInfo *)0x0);
  if (this_02 == (MVWorldObjectClient *)0x0) {
    return;
  }
  pTVar1 = (this->fields).timeoutMap;
  if (pTVar1 == (TimeoutMap *)0x0) goto code_?;
  bVar2 = TimeoutMap::TimeoutMap_Contains(pTVar1,(this_02->fields)._.id,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pIVar3 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                     (this_02,(MethodInfo *)0x0);
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
  if (pIVar3 == (InteractionDataHandlerBase *)0x0) {
code_?:
    auStack_4 = (undefined1  [8])TypeInfo__MV__WorldObject__WorldObjectType;
    iStack_5 = (this_02->fields)._.type;
    pMStack_6 = (MonitorData *)0xffffffffffffffff;
    pSVar7 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_4,(MethodInfo *)0x0);
    pSVar7 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_WorldObject_does_not_have_intera,pSVar7,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar7,(MethodInfo *)0x0);
    return;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if ((pIVar3->fields)._._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar8 == (MVNetworkGame *)0x0) ||
     (pMVar9 = (pMVar8->fields).teamManager, pMVar9 == (MVTeamManager *)0x0))
  goto code_?;
  MVar10 = MVTeamManager::MVTeamManager_GetTeamFromActorNr
                    (pMVar9,(this_02->fields)._.ownerActorNr,(MethodInfo *)0x0);
  if (MVar10 == (this->fields).alliedTeam) {
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar8 == (MVNetworkGame *)0x0) ||
       (pMVar9 = (pMVar8->fields).teamManager, pMVar9 == (MVTeamManager *)0x0))
    goto code_?;
    iVar11 = MVTeamManager::MVTeamManager_TeamCount(pMVar9,(MethodInfo *)0x0);
    if (iVar11 < 2) goto code_?;
    damage = 0.0;
  }
  else {
code_?:
    damage = (this->fields).factor * _UNK_?;
  }
  puVar12 = (undefined8 *)
            (*(this_02->klass->vtable).GetTargetPosition.methodPtr)
                      (auStack_13,this_02,(this_02->klass->vtable).GetTargetPosition.method);
  auStack_4 = (undefined1  [8])*puVar12;
  fVar14 = *(float *)(puVar12 + 1);
  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if ((this_03 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_03,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_13._0_4_ = 0.0;
    auStack_13._4_4_ = 0.0;
    pMStack_15 = (MonitorData *)((ulonglong)pMStack_15 & 0xffffffff00000000);
    pvVar16 = (obj->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pcVar17 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
      uVar18 = func_?(&UNK_?);
      FUN_?(uVar18,0);
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    pcRam_? = pcVar17;
    puVar19 = auStack_13;
    (*pcRam_?)(pvVar16,puVar19);
    fVar20 = (float)auStack_4._0_4_ - (float)auStack_13._0_4_;
    fVar21 = (float)auStack_4._4_4_ - (float)auStack_13._4_4_;
    fVar14 = fVar14 - pMStack_15._0_4_;
    pMStack_6 = (MonitorData *)CONCAT44(pMStack_6._4_4_,fVar14);
    auStack_4 = (undefined1  [8])CONCAT44(fVar21,fVar20);
    fVar22 = (float)FUN_?(auStack_4);
    if (_UNK_? < fVar22) {
      fVar14 = fVar14 / fVar22;
      auStack_13._4_4_ = fVar21 / fVar22;
      auStack_13._0_4_ = fVar20 / fVar22;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar23 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_13._0_4_ = (pVVar23->zeroVector).x;
      auStack_13._4_4_ = (pVVar23->zeroVector).y;
      fVar14 = (pVVar23->zeroVector).z;
    }
    fVar22 = (this->fields).factor;
    impulse = (Vector3 *)auStack_4;
    uStack_24._0_1_ = 0;
    uStack_24._1_1_ = 0;
    uStack_24._2_2_ = 0;
    auStack_4 = (undefined1  [8])
                 CONCAT44((float)auStack_13._4_4_ * _UNK_? * fVar22,
                          (float)auStack_13._0_4_ * _UNK_? * fVar22);
    pMStack_6 = (MonitorData *)CONCAT44(pMStack_6._4_4_,fVar14 * _UNK_? * fVar22);
    auStack_13 = (undefined1  [8])0x0;
    pMStack_15 = (MonitorData *)0x0;
    MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
              ((InteractionData *)auStack_13,
               (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)puVar19 >> 8),0xc),damage,
               impulse,in_stack_25 & 0xffffff00,(MethodInfo *)0x0);
    iStack_5._0_1_ = (uint8_t)uStack_24;
    iStack_5._1_1_ = uStack_24._1_1_;
    iStack_5._2_2_ = uStack_24._2_2_;
    auStack_4 = auStack_13;
    pMStack_6 = pMStack_15;
    cVar26 = (*(pIVar3->klass->vtable).__unknown_1.methodPtr)
                      (pIVar3,0,auStack_4,CONCAT71((int7)((ulonglong)impulse >> 8),1),
                       (pIVar3->klass->vtable).__unknown_1.method);
    if (cVar26 == '\0') {
      return;
    }
    pTVar1 = (this->fields).timeoutMap;
    if (pTVar1 != (TimeoutMap *)0x0) {
      TimeoutMap::TimeoutMap_Add(pTVar1,(this_02->fields)._.id,(MethodInfo *)0x0);
      this_00 = (this->fields).weaponHitSound;
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Init(AudioSource, MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Init
               (AdvancedGhostBodyRotateWeapon *this,AudioSource *hitSound,MVCubeModelBase *body,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).weaponHitSound = hitSound;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).weaponHitSound >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (body == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pAVar7 = (body->fields).Changed;
  this_00 = (UnityAction_1_System_Object_ *)
            FUN_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_,
             (MethodInfo *)0x0);
  pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pAVar7,(Delegate *)this_00,(MethodInfo *)0x0);
  pAVar9 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
  if (pDVar8 == (Delegate *)0x0) {
    (body->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
  }
  else {
    pAVar7 = (Action_1_CubeModelChangedEventArgs_ *)
              FUN_?(pDVar8,TypeInfo__System__Action<CubeModelChangedEventArgs>);
    if (pAVar7 == (Action_1_CubeModelChangedEventArgs_ *)0x0) {
      FUN_?(pDVar8,pAVar9);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (body->fields).Changed = pAVar7;
    pAVar9 = TypeInfo__System__Action<CubeModelChangedEventArgs>;
    lVar3 = FUN_?();
    if (lVar3 == 0) {
      FUN_?(pDVar8,pAVar9);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(body->fields).Changed >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar10 = (this->fields).ghostTriggers;
  if (pLVar10 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
    piVar11 = &(pLVar10->fields)._version;
    *piVar11 = *piVar11 + 1;
    length = (pLVar10->fields)._size;
    (pLVar10->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar10->fields)._items,0,length,(MethodInfo *)0x0);
    }
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pIVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                          (this_01,(MethodInfo *)0x0);
code_?:
      if (pIVar12 != (IEnumerator *)0x0) {
        cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar13 == '\0') {
          lVar3 = FUN_?(pIVar12,TypeInfo__System__IDisposable);
          if (lVar3 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar3);
          }
          return;
        }
        if (pIVar12 != (IEnumerator *)0x0) {
          pIVar14 = pIVar12->klass;
          uVar15 = 0;
          uVar16._0_1_ = (pIVar14->_1).rank;
          uVar16._1_1_ = (pIVar14->_1).minimumAlignment;
          if (uVar16 != 0) {
            do {
              if (pIVar14->interfaceOffsets[uVar15].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                pVVar17 = &(pIVar14->vtable).MoveNext + (pIVar14->interfaceOffsets[uVar15].offset + 1)
                ;
                goto code_?;
              }
              uVar15 = uVar15 + 1;
            } while (uVar15 < uVar16);
          }
          pVVar17 = (VirtualInvokeData *)
                    FUN_?(pIVar12,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          this_02 = (Component *)(*pVVar17->methodPtr)(pIVar12,pVVar17->method);
          if (this_02 == (Component *)0x0) {
            FUN_?();
            goto code_?;
          }
          bVar18 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if ((bVar18 <= (this_02->klass->_1).naturalAligment) &&
             ((this_02->klass->_1).typeHierarchy[(ulonglong)bVar18 - 1] ==
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
code_?:
  pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_02,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar19 == (Object *)0x0) {
    bVar1 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar1 = pOVar19[1].klass != (Object__Class *)0x0;
  }
  if (!bVar1) goto code_?;
  this_03 = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_02,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
  if (this_03 == (Collider *)0x0) goto code_?;
  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
            (this_03,1,(MethodInfo *)0x0);
  pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_02,(MethodInfo *)0x0);
  if (pGVar20 != (GameObject *)0x0) {
    pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar20,
                         AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                        );
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
    if (pOVar19 == (Object *)0x0) {
code_?:
      pGVar20 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_02,(MethodInfo *)0x0);
      if (pGVar20 != (GameObject *)0x0) {
        pOVar19 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar20,
                             AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                            );
        goto code_?;
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar19[1].klass == (Object__Class *)0x0) goto code_?;
code_?:
      pLVar10 = (this->fields).ghostTriggers;
      if (pLVar10 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar10,pOVar19,
                   MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                  );
        goto code_?;
      }
code_?:
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(this_02);
code_?:
  FUN_?();
  goto code_?;
}


/* Void SetupWeaponCollision() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::
     AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ghostTriggers;
  if (pLVar1 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    length = (pLVar1->fields)._size;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (this_00,(MethodInfo *)0x0);
code_?:
      if (pIVar3 != (IEnumerator *)0x0) {
        cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar4 == '\0') {
          lVar5 = FUN_?(pIVar3,TypeInfo__System__IDisposable);
          if (lVar5 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar5);
          }
          return;
        }
        if (pIVar3 != (IEnumerator *)0x0) {
          pIVar6 = pIVar3->klass;
          uVar7 = 0;
          uVar8._0_1_ = (pIVar6->_1).rank;
          uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                pVVar9 = &(pIVar6->vtable).MoveNext + (pIVar6->interfaceOffsets[uVar7].offset + 1);
                goto code_?;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar8);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_?(pIVar3,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          this_01 = (Component *)(*pVVar9->methodPtr)(pIVar3,pVVar9->method);
          if (this_01 == (Component *)0x0) {
            FUN_?();
            goto code_?;
          }
          bVar10 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if ((bVar10 <= (this_01->klass->_1).naturalAligment) &&
             ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] ==
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_01,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar12 == (Object *)0x0) {
    bVar13 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar13 = pOVar12[1].klass != (Object__Class *)0x0;
  }
  if (!bVar13) goto code_?;
  this_02 = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_01,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
  if (this_02 == (Collider *)0x0) goto code_?;
  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
            (this_02,1,(MethodInfo *)0x0);
  pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_01,(MethodInfo *)0x0);
  if (pGVar14 != (GameObject *)0x0) {
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar14,
                         AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                        );
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
    if (pOVar12 == (Object *)0x0) {
code_?:
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
      if (pGVar14 != (GameObject *)0x0) {
        pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar14,
                             AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                            );
        goto code_?;
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar12[1].klass == (Object__Class *)0x0) goto code_?;
code_?:
      pLVar1 = (this->fields).ghostTriggers;
      if (pLVar1 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,pOVar12,
                   MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                  );
        goto code_?;
      }
code_?:
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(this_01);
code_?:
  FUN_?();
  goto code_?;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_Update
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).factor <= 0.0) {
    return;
  }
  this_00 = (this->fields).timeoutMap;
  if (this_00 != (TimeoutMap *)0x0) {
    TimeoutMap::TimeoutMap_Update(this_00,(MethodInfo *)0x0);
    pIStack_1 = (Int32__Array *)(this->fields).ghostTriggers;
    if (pIStack_1 != (Int32__Array *)0x0) {
      if (iRam_? != 0) {
        uVar2 = (uint)((ulonglong)&pIStack_1 >> 0xc);
        uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
        do {
          uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
          puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar4 == *puVar5;
          if (bVar6) {
            *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      lStack_7 = (ulonglong)(uint)*(int32_t *)((longlong)&pIStack_1->max_length + 4) << 0x20;
      uStack_8 = 0;
      LStack_9._index = (undefined4)lStack_7;
      LStack_9._version = lStack_7._4_4_;
      LStack_9._current = (Object *)0x0;
      LStack_9._list = (List_1_System_Object_ *)pIStack_1;
      while( true ) {
        bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_9,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<AdvancedGhostTriggerBase>__MoveNext__
                          );
        pOVar11 = LStack_9._current;
        if (bVar10 == 0) {
          return;
        }
        if (LStack_9._current == (Object *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&
                        System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar12 = 
        System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
        ;
        source = pOVar11[2].klass;
        if ((
            System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       System__Int32__MethodInfo__System__Linq__Enumerable__ToArray<int>_System__Collections__Generic__IEnumerable<int>_____
                       );
        }
        if (source == (Object__Class *)0x0) break;
        BStack_13.items = (Int32__Array *)0x0;
        BStack_13._8_8_ = 0;
        System.Core.dll::System::Linq::Buffer`1[System::Int32]::Buffer_1_System_Int32___ctor
                  (&BStack_13,(IEnumerable_1_System_Int32_ *)source,
                   (pMVar12->field7_0x38).rgctx_data[2].method);
        pIStack_1 = BStack_13.items;
        lStack_7 = BStack_13._8_8_;
        lVar14 = FUN_?(&pIStack_1);
        pMVar12 = (MethodInfo *)0x0;
        if (lVar14 == 0) {
code_?:
          FUN_?();
          break;
        }
        while( true ) {
          uVar2 = (uint)pMVar12;
          if ((int)*(uint *)(lVar14 + 0x18) <= (int)uVar2) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar2) {
            FUN_?();
            goto code_?;
          }
          AdvancedGhostBodyRotateWeapon_Attack
                    (this,*(int32_t *)(lVar14 + 0x20 + (longlong)(int)uVar2 * 4),(MethodInfo *)0x0);
          pMVar12 = (MethodInfo *)(ulonglong)(uVar2 + 1);
        }
      }
      s = (String *)func_?(&StringLiteral_source);
      pEVar15 = System.Core.dll::System::Linq::Error::Error_1_ArgumentNull(s,(MethodInfo *)0x0);
      FUN_?(pEVar15,pMVar12);
code_?:
      FUN_?();
      FUN_?();
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* AdvancedGhostBodyRotateWeapon() */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon__ctor
               (AdvancedGhostBodyRotateWeapon *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__List__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TimeoutMap);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).factor = 1.0;
  this_00 = (TimeoutMap *)FUN_?(TypeInfo__TimeoutMap);
  TimeoutMap::TimeoutMap__ctor(this_00,_UNK_?,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).timeoutMap = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).timeoutMap >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).alliedTeam = 4;
  this_01 = (List_1_AdvancedGhostTriggerBase_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).ghostTriggers = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).ghostTriggers >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
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
  return;
}


/* Void body_Changed(CubeModelChangedEventArgs) */

void Assembly-CSharp.dll::AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_body_Changed
               (AdvancedGhostBodyRotateWeapon *this,CubeModelChangedEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Transform);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).ghostTriggers;
  if (pLVar1 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    length = (pLVar1->fields)._size;
    (pLVar1->fields)._size = 0;
    if (0 < length) {
      mscorlib.dll::System::Array::Array_Clear
                ((Array *)(pLVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      pIVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetEnumerator
                         (this_00,(MethodInfo *)0x0);
code_?:
      if (pIVar3 != (IEnumerator *)0x0) {
        cVar4 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
        if (cVar4 == '\0') {
          lVar5 = FUN_?(pIVar3,TypeInfo__System__IDisposable);
          if (lVar5 != 0) {
            FUN_?(0,TypeInfo__System__IDisposable,lVar5);
          }
          return;
        }
        if (pIVar3 != (IEnumerator *)0x0) {
          pIVar6 = pIVar3->klass;
          uVar7 = 0;
          uVar8._0_1_ = (pIVar6->_1).rank;
          uVar8._1_1_ = (pIVar6->_1).minimumAlignment;
          if (uVar8 != 0) {
            do {
              if (pIVar6->interfaceOffsets[uVar7].interfaceType ==
                  (Il2CppClass *)TypeInfo__System__Collections__IEnumerator) {
                pVVar9 = &(pIVar6->vtable).MoveNext + (pIVar6->interfaceOffsets[uVar7].offset + 1);
                goto code_?;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar8);
          }
          pVVar9 = (VirtualInvokeData *)
                   FUN_?(pIVar3,TypeInfo__System__Collections__IEnumerator,1);
code_?:
          this_01 = (Component *)(*pVVar9->methodPtr)(pIVar3,pVVar9->method);
          if (this_01 == (Component *)0x0) {
            FUN_?();
            goto code_?;
          }
          bVar10 = (TypeInfo__UnityEngine__Transform->_1).naturalAligment;
          if ((bVar10 <= (this_01->klass->_1).naturalAligment) &&
             ((this_01->klass->_1).typeHierarchy[(ulonglong)bVar10 - 1] ==
              (Il2CppClass *)TypeInfo__UnityEngine__Transform)) goto code_?;
          goto code_?;
        }
        goto code_?;
      }
code_?:
      FUN_?();
      FUN_?();
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_01,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
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
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pOVar12 == (Object *)0x0) {
    bVar13 = false;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar13 = pOVar12[1].klass != (Object__Class *)0x0;
  }
  if (!bVar13) goto code_?;
  this_02 = (Collider *)
            UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                      (this_01,
                       UnityEngine__Collider_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Collider>__
                      );
  if (this_02 == (Collider *)0x0) goto code_?;
  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_isTrigger
            (this_02,1,(MethodInfo *)0x0);
  pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_01,(MethodInfo *)0x0);
  if (pGVar14 != (GameObject *)0x0) {
    pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar14,
                         AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__GetComponent<AdvancedGhostTriggerBase>__
                        );
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
    if (pOVar12 == (Object *)0x0) {
code_?:
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_01,(MethodInfo *)0x0);
      if (pGVar14 != (GameObject *)0x0) {
        pOVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar14,
                             AdvancedGhostTriggerBase_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostTriggerBase>__
                            );
        goto code_?;
      }
    }
    else {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pOVar12[1].klass == (Object__Class *)0x0) goto code_?;
code_?:
      pLVar1 = (this->fields).ghostTriggers;
      if (pLVar1 != (List_1_AdvancedGhostTriggerBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)pLVar1,pOVar12,
                   MethodInfo__System__Collections__Generic__List<AdvancedGhostTriggerBase>__Add_AdvancedGhostTriggerBase_
                  );
        goto code_?;
      }
code_?:
      FUN_?();
    }
    FUN_?();
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?(this_01);
code_?:
  FUN_?();
  goto code_?;
}

