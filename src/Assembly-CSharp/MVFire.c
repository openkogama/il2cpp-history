
/* Single CalculateDamageModifier() */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateDamageModifier(MVFire *this,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 == (FireObject *)0x0) ||
     (apPStackX_8[0] = (pFVar1->fields).fireParticleSystem, apPStackX_8[0] == (ParticleSystem *)0x0)
     ) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
    method = (MethodInfo *)(ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)((longlong)method * 8 + 0xADDR);
      puVar6 = (ulonglong *)((longlong)method * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar5 == *puVar6;
      if (bVar7) {
        *puVar6 = uVar5 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pcVar2 = pcRam_?;
  apPStackX_18[0] = apPStackX_8[0];
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?,method), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  pcRam_? = pcVar2;
  fVar3 = (float)(*pcRam_?)(apPStackX_18);
  if (fVar3 <= _UNK_?) {
    return fVar3 / _UNK_?;
  }
  return fVar3 / _UNK_?;
}


/* Single CalculateDamageRadius(Single) */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateDamageRadius
                (MVFire *this,float intensity,MethodInfo *method)

{
  return intensity * _UNK_? * _UNK_?;
}


/* Single CalculateScale(Single) */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateScale
                (MVFire *this,float damageRadius,MethodInfo *method)

{
  return (damageRadius / _UNK_?) * _UNK_?;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVFire::MVFire_Destroy(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__OnFireObjectPlaced__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Destroy((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
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
  if (pFVar1 != (FireObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pFVar1->fields)._._._._._.m_CachedPtr != (void *)0x0) {
      pFVar1 = (this->fields).fireObject;
      if (pFVar1 == (FireObject *)0x0) goto code_?;
      pAVar2 = (pFVar1->fields).OnFireObjectCreated;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
      pAVar2 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pAVar2 == (Action *)0x0) {
        (pFVar1->fields).OnFireObjectCreated = (Action *)0x0;
      }
      else {
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pFVar1->fields).OnFireObjectCreated = pAVar3;
        pAVar3 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar3 = pAVar2;
        }
        if (pAVar3 == (Action *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(pFVar1->fields).OnFireObjectCreated >> 0xc);
        puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar7 = *puVar6;
          LOCK();
          uVar8 = *puVar6;
          if (uVar7 == uVar8) {
            *puVar6 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (uVar7 != uVar8);
      }
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pDVar9 = (Delegate *)FUN_?();
    value = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(value,this);
    pDVar9 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar9,value,(MethodInfo *)0x0);
    pAVar10 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar9 != (Delegate *)0x0) &&
       (lVar11 = FUN_?(pDVar9,TypeInfo__System__Action<EditModeChangeArgs>), lVar11 == 0)) {
      FUN_?(pDVar9,pAVar10);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?();
  }
  return;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVFire::MVFire_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVFire *this,BoundsContext__Enum boundsContext,
                   MethodInfo *method)

{
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  fVar1 = _UNK_?;
  (__return_storage_ptr__->m_Extents).x = _UNK_?;
  (__return_storage_ptr__->m_Extents).y = fVar1;
  (__return_storage_ptr__->m_Extents).z = fVar1;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVFire::MVFire_Initialize(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__OnFireObjectPlaced__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__OnInputStateUpdate_LogicInputState__LogicObjectManager_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 == (FireObject *)0x0) goto code_?;
  this_00 = (pFVar1->fields).fireCollider;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_00 == (Collider *)0x0) goto code_?;
  UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
            (this_00,TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
                     (IEditModeUI *)0x0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
      (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) goto code_?;
    pDVar2 = (Delegate *)FUN_?();
    b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(b,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar2,b,(MethodInfo *)0x0);
    pAVar3 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar2 != (Delegate *)0x0) &&
       (lVar4 = FUN_?(pDVar2,TypeInfo__System__Action<EditModeChangeArgs>), lVar4 == 0)) {
      FUN_?(pDVar2,pAVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?();
  }
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 == (FireObject *)0x0) goto code_?;
  MVLogicObject::MVLogicObject_SetupCulling
            ((MVLogicObject *)this,(pFVar1->fields).visualObject,TypeRef__System__Activator__T._0_4_
             ,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar6 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar6->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar7 == (PrefabPool *)0x0) goto code_?;
    pSVar8 = (pPVar7->fields).rangeVisualizationObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar8 = (SphereVolumeIndicator *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar8,
                         SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                        );
    bVar9 = iRam_? != 0;
    (this->fields).rangeVis = pSVar8;
    if (bVar9) {
      uVar10 = (uint)((ulonglong)&(this->fields).rangeVis >> 0xc);
      uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
      do {
        uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
        puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar12 == *puVar13;
        if (bVar9) {
          *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pSVar8 = (this->fields).rangeVis;
    if (pSVar8 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar8,(MethodInfo *)0x0);
    pFVar1 = (this->fields).fireObject;
    if ((pFVar1 == (FireObject *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pFVar1,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar14,value,(MethodInfo *)0x0);
    pSVar8 = (this->fields).rangeVis;
    if (pSVar8 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar8,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar14 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar15 = (pTVar14->fields)._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar15);
    pSVar8 = (this->fields).rangeVis;
    if (pSVar8 == (SphereVolumeIndicator *)0x0) goto code_?;
    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
              (pSVar8,(this->fields).damageRadius,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar6 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar6->fields).gameMode == 4) goto code_?;
  }
  MVFire_SetFireToData(this,(MethodInfo *)0x0);
  MVFire_SetFireHitBoxYOffset
            (this,((this->fields).damageRadius / _UNK_?) * _UNK_? * _UNK_?,
             (MethodInfo *)0x0);
  this_01 = (Action_2_Int32Enum_Object_ *)
            FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
  mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor
            (this_01,(Object *)this,
             MethodInfo__MVFire__OnInputStateUpdate_LogicInputState__LogicObjectManager_,
             (MethodInfo *)0x0);
  pIVar17 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver
                      ((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,
                       (Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
  bVar9 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar17;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
    do {
      uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
      puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar12 == *puVar13;
      if (bVar9) {
        *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
    activeFlag = FUN_?(1,TypeInfo__IInputSignalReceiver);
    MVFire_ToggleEmitter(this,activeFlag,(MethodInfo *)0x0);
    pFVar1 = (this->fields).fireObject;
    if (pFVar1 != (FireObject *)0x0) {
      pAVar18 = (pFVar1->fields).OnFireObjectCreated;
      this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_02,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
      pAVar18 = (Action *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar18,(Delegate *)this_02,(MethodInfo *)0x0);
      if (pAVar18 == (Action *)0x0) {
        (pFVar1->fields).OnFireObjectCreated = (Action *)0x0;
      }
      else {
        pAVar19 = (Action *)0x0;
        if (pAVar18->klass == TypeInfo__System__Action) {
          pAVar19 = pAVar18;
        }
        if (pAVar19 == (Action *)0x0) {
          FUN_?(pAVar18);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (pFVar1->fields).OnFireObjectCreated = pAVar19;
        pAVar19 = (Action *)0x0;
        if (pAVar18->klass == TypeInfo__System__Action) {
          pAVar19 = pAVar18;
        }
        if (pAVar19 == (Action *)0x0) {
          FUN_?(pAVar18);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar10 = (uint)((ulonglong)&(pFVar1->fields).OnFireObjectCreated >> 0xc);
        uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
        do {
          uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
          puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar12 == *puVar13;
          if (bVar9) {
            *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVFire::MVFire_InitializeInventory(MVFire *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) &&
     (pPVar2 = (pFVar1->fields).fireParticleSystem, pPVar2 != (ParticleSystem *)0x0)) {
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)apPStackX_8 >> 0xc);
      puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar4;
        LOCK();
        uVar6 = *puVar4;
        if (uVar5 == uVar6) {
          *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pcVar7 = pcRam_?;
    apPStackX_8[0] = pPVar2;
    apPStackX_18[0] = pPVar2;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(apPStackX_18);
    pFVar1 = (this->fields).fireObject;
    if (pFVar1 != (FireObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pFVar1,0,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVFire::MVFire_OnDataUpdate(MVFire *this,MethodInfo *method)

{
  MVFire_SetFireToData(this,(MethodInfo *)0x0);
  woID = (this->fields)._._._.id;
  worldObjectManager = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,
                  worldObjectManager,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  resetNodes = (HashSet_1_System_Int32_ *)
               FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode
            (woID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_OnEditModeChange
               (MVFire *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) &&
     (pCVar2 = (pFVar1->fields).fireCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
              (pCVar2,0,(MethodInfo *)0x0);
    if (arg.playInEditor != 0) {
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 == (FireObject *)0x0) ||
         (pCVar2 = (pFVar1->fields).fireCollider, pCVar2 == (Collider *)0x0))
      goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (pCVar2,1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnFireObjectPlaced() */

void Assembly-CSharp.dll::MVFire::MVFire_OnFireObjectPlaced(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__OnFireObjectPlaced__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_is_active_now_after_subscribing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    pAVar2 = (pFVar1->fields).OnFireObjectCreated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar2 == (Action *)0x0) {
      (pFVar1->fields).OnFireObjectCreated = (Action *)0x0;
    }
    else {
      pAVar3 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?(pAVar2,TypeInfo__System__Action);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pFVar1->fields).OnFireObjectCreated = pAVar3;
      pAVar3 = (Action *)0x0;
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar3 = pAVar2;
      }
      if (pAVar3 == (Action *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pFVar1->fields).OnFireObjectCreated >> 0xc);
      puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar6;
        LOCK();
        uVar8 = *puVar6;
        if (uVar7 == uVar8) {
          *puVar6 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
              ((Object *)StringLiteral_is_active_now_after_subscribing,(MethodInfo *)0x0);
    if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
      bVar9 = FUN_?(1,TypeInfo__IInputSignalReceiver);
      uVar8 = 0;
      puVar6 = (ulonglong *)(ulonglong)bVar9;
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) &&
         (pPVar10 = (pFVar1->fields).fireParticleSystem, pPVar10 != (ParticleSystem *)0x0)) {
        if (iRam_? != 0) {
          uVar5 = (uint)((ulonglong)&stack0x00000008 >> 0xc);
          uVar8 = (ulonglong)(uVar5 & 0x3f);
          puVar6 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar11 = *puVar6;
            LOCK();
            uVar7 = *puVar6;
            if (uVar11 == uVar7) {
              *puVar6 = uVar11 | 1L << uVar8;
            }
            UNLOCK();
          } while (uVar11 != uVar7);
        }
        pcVar4 = pcRam_?;
        pPStackX_20 = pPVar10;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?,puVar6,uVar8), pcVar4 == (code *)0x0))
        {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(&pPStackX_20);
        pFVar1 = (this->fields).fireObject;
        if (bVar9 == 0) {
          if ((pFVar1 != (FireObject *)0x0) &&
             (pAVar13 = (pFVar1->fields).audioSource, pAVar13 != (AudioSource *)0x0)) {
            bVar14 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                              (pAVar13,(MethodInfo *)0x0);
            if (bVar14 == 0) {
              return;
            }
            pFVar1 = (this->fields).fireObject;
            if ((pFVar1 != (FireObject *)0x0) &&
               (pAVar13 = (pFVar1->fields).audioSource, pAVar13 != (AudioSource *)0x0)) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                        (pAVar13,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if ((pFVar1 != (FireObject *)0x0) &&
                (pAVar13 = (pFVar1->fields).audioSource, pAVar13 != (AudioSource *)0x0)) {
          bVar14 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                            (pAVar13,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            pFVar1 = (this->fields).fireObject;
            if ((pFVar1 == (FireObject *)0x0) ||
               (pAVar13 = (pFVar1->fields).audioSource, pAVar13 == (AudioSource *)0x0))
            goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                      (pAVar13,(MethodInfo *)0x0);
          }
          return;
        }
      }
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnInputStateUpdate(LogicInputState, LogicObjectManager) */

void Assembly-CSharp.dll::MVFire::MVFire_OnInputStateUpdate
               (MVFire *this,LogicInputState__Enum logicInputState,
               LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  if (logicInputState == LogicInputState__Enum_FromColdToHot) {
    puVar1 = (ulonglong *)CONCAT71((int7)(CONCAT44(in_register_00000014,logicInputState) >> 8),1);
  }
  else {
    if (logicInputState != LogicInputState__Enum_FromHotToCold) {
      return;
    }
    puVar1 = (ulonglong *)0x0;
  }
  uVar2 = 0;
  pFVar3 = (this->fields).fireObject;
  cVar4 = (char)puVar1;
  if ((pFVar3 != (FireObject *)0x0) &&
     (pPVar5 = (pFVar3->fields).fireParticleSystem, pPVar5 != (ParticleSystem *)0x0)) {
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      uVar2 = (ulonglong)(uVar6 & 0x3f);
      puVar1 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar7 = *puVar1;
        LOCK();
        uVar8 = *puVar1;
        if (uVar7 == uVar8) {
          *puVar1 = uVar7 | 1L << uVar2;
        }
        UNLOCK();
      } while (uVar7 != uVar8);
    }
    pcVar9 = pcRam_?;
    pPStackX_8 = pPVar5;
    pPStackX_20 = pPVar5;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?,puVar1,uVar2), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&pPStackX_20);
    pFVar3 = (this->fields).fireObject;
    if (cVar4 == '\0') {
      if ((pFVar3 != (FireObject *)0x0) &&
         (pAVar11 = (pFVar3->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
        bVar12 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar11,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          return;
        }
        pFVar3 = (this->fields).fireObject;
        if ((pFVar3 != (FireObject *)0x0) &&
           (pAVar11 = (pFVar3->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    (pAVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pFVar3 != (FireObject *)0x0) &&
            (pAVar11 = (pFVar3->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
      bVar12 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar11,(MethodInfo *)0x0);
      if (bVar12 == 0) {
        pFVar3 = (this->fields).fireObject;
        if ((pFVar3 == (FireObject *)0x0) ||
           (pAVar11 = (pFVar3->fields).audioSource, pAVar11 == (AudioSource *)0x0))
        goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar11,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVFire::MVFire_OnUpdate(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) &&
     (cVar1 = FUN_?(1,TypeInfo__IInputSignalReceiver,
                             (this->fields)._InputSignalReceiver_k__BackingField),
     fVar2 = _UNK_?, fVar3 = _UNK_?, cVar1 != '\0')) {
    pLVar4 = (this->fields).woList;
    if (pLVar4 == (List_1_MVWorldObjectClient_ *)0x0) {
DAT_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    index = (pLVar4->fields)._size - 1;
    if (-1 < (int)index) {
      lVar6 = (longlong)(int)index * 8 + 0x20;
      do {
        pLVar4 = (this->fields).woList;
        if (pLVar4 == (List_1_MVWorldObjectClient_ *)0x0) goto DAT_?;
        if ((uint)(pLVar4->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pMVar7 = (pLVar4->fields)._items;
        if (pMVar7 == (MVWorldObjectClient__Array *)0x0) goto DAT_?;
        if ((uint)pMVar7->max_length <= index) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = *(MVWorldObjectClient **)((longlong)pMVar7->vector + lVar6 + -0x20);
        if (this_00 == (MVWorldObjectClient *)0x0) {
code_?:
          pLVar4 = (this->fields).woList;
          if (pLVar4 == (List_1_MVWorldObjectClient_ *)0x0) goto DAT_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)pLVar4,index,
                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                    );
        }
        else {
          pGVar8 = (this_00->fields).gameObject;
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
          if (pGVar8 == (GameObject *)0x0) goto code_?;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pGVar8->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
          pIVar9 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                              (this_00,(MethodInfo *)0x0);
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
          if (pIVar9 != (InteractionDataHandlerBase *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pIVar9->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              puVar10 = (undefined8 *)
                        (*(this_00->klass->vtable).get_WorldPosition_1.methodPtr)
                                  (auStack_11,this_00,
                                   (this_00->klass->vtable).get_WorldPosition_1.method);
              uVar12 = *puVar10;
              uVar13 = *(undefined4 *)(puVar10 + 1);
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_14,this,(this->klass->vtable).get_WorldPosition_1.method);
              uStack_15 = uVar12;
              uStack_16 = uVar13;
              fVar17 = (float)FUN_?(&uStack_15);
              pCVar18 = (this_00->fields).collider;
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
              if (pCVar18 != (Collider *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pCVar18->fields)._._.m_CachedPtr != (void *)0x0) {
                  pCVar18 = (this_00->fields).collider;
                  puVar10 = (undefined8 *)
                            (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                                      (auStack_19,this,
                                       (this->klass->vtable).get_WorldPosition_1.method);
                  if (pCVar18 == (Collider *)0x0) goto DAT_?;
                  VStack_20._0_8_ = *puVar10;
                  VStack_20.z = *(float *)(puVar10 + 1);
                  pVVar21 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::
                            Collider_ClosestPointOnBounds
                                      (&VStack_22,pCVar18,&VStack_20,(MethodInfo *)0x0);
                  uVar12._0_4_ = pVVar21->x;
                  uVar12._4_4_ = pVVar21->y;
                  fVar17 = pVVar21->z;
                  puVar10 = (undefined8 *)
                            (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                                      (auStack_23,this,
                                       (this->klass->vtable).get_WorldPosition_1.method);
                  uStack_24 = *puVar10;
                  uStack_25 = *(undefined4 *)(puVar10 + 1);
                  uStack_26 = uVar12;
                  fStack_27 = fVar17;
                  fVar17 = (float)FUN_?(&uStack_26);
                }
              }
              uVar12 = 0;
              fVar28 = MVFire_CalculateDamageModifier(this,(MethodInfo *)0x0);
              fVar29 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              fVar28 = (fVar3 - fVar17 / (this->fields).damageRadius) * fVar29 * fVar2 * fVar28;
              if (fVar28 < 0.0) {
                fVar28 = 0.0;
              }
              else if (fVar2 < fVar28) {
                fVar28 = fVar2;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              IStack_30.interactionType = 0;
              IStack_30.playerKilledByType = 0;
              IStack_30._18_2_ = 0;
              pVVar21 = &VStack_31;
              IStack_30.damage = 0.0;
              IStack_30.impulse.x = 0.0;
              IStack_30.impulse.y = 0.0;
              IStack_30.impulse.z = 0.0;
              pVVar32 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_31.x = (pVVar32->zeroVector).x;
              VStack_31.y = (pVVar32->zeroVector).y;
              VStack_31.z = (pVVar32->zeroVector).z;
              MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                        (&IStack_30,
                         (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)uVar12 >> 8),0xd),
                         fVar28,pVVar21,
                         (PlayerKilledByType__Enum)
                         CONCAT71((int7)((ulonglong)in_stack_33 >> 8),9),
                         (MethodInfo *)0x0);
              uStack_34 = IStack_30.interactionType;
              uStack_35 = IStack_30.playerKilledByType;
              uStack_36 = IStack_30._18_2_;
              in_stack_33 = (pIVar9->klass->vtable).__unknown_1.method;
              fStack_37 = IStack_30.damage;
              fStack_38 = IStack_30.impulse.x;
              fStack_39 = IStack_30.impulse.y;
              fStack_40 = IStack_30.impulse.z;
              (*(pIVar9->klass->vtable).__unknown_1.methodPtr)
                        (pIVar9,0,&fStack_37,CONCAT71((int7)((ulonglong)pVVar21 >> 8),1),
                         in_stack_33);
            }
          }
        }
        lVar6 = lVar6 + -8;
        index = index - 1;
      } while (-1 < (int)index);
    }
  }
  return;
}


/* Void RenewCullingSize() */

void Assembly-CSharp.dll::MVFire::MVFire_RenewCullingSize(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._.cullingSubscriberBase;
  if (pCVar1 == (CullingSubscriberBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar1,(MethodInfo *)0x0);
  radius = (this->fields).damageRadius;
  puVar3 = (undefined8 *)
           (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                     (aVStack_4,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar5 = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  pCVar1 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar1,callback,(MethodInfo *)0x0);
  aVStack_4[0]._0_8_ = uVar5;
  aVStack_4[0].z = fVar6;
  CullingSubscriberBase::CullingSubscriberBase_Setup(pCVar1,radius,aVStack_4,(MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  (this->fields)._.cullingSubscriberBase = pCVar1;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
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


/* Void SetCandleAnimation() */

void Assembly-CSharp.dll::MVFire::MVFire_SetCandleAnimation(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationCurve);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).fireObject;
  PStack_2.m_Mode = 0;
  PStack_2.m_CurveMultiplier = 0.0;
  PStack_2.m_CurveMin = (AnimationCurve *)0x0;
  PStack_2.m_CurveMax = (AnimationCurve *)0x0;
  PStack_2.m_ConstantMin = 0.0;
  PStack_2.m_ConstantMax = 0.0;
  if ((pFVar1 != (FireObject *)0x0) &&
     (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
    pcVar9 = pcRam_?;
    apPStackX_8[0] = pPVar3;
    pPStackX_20 = pPVar3;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&pPStackX_20,_UNK_?);
    pFVar1 = (this->fields).fireObject;
    if ((pFVar1 != (FireObject *)0x0) &&
       (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
      pcVar9 = pcRam_?;
      apPStackX_8[0] = pPVar3;
      pPStackX_18 = pPVar3;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18,_UNK_?);
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      uVar11 = _UNK_?;
      (*pcRam_?)(&pPStackX_18,_UNK_?);
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) &&
         (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
        pcVar9 = pcRam_?;
        apPStackX_8[0] = pPVar3;
        pPStack_12 = pPVar3;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(&pPStack_12,0);
        pFVar1 = (this->fields).fireObject;
        if ((pFVar1 != (FireObject *)0x0) &&
           (PStack_13.m_ParticleSystem = (pFVar1->fields).fireParticleSystem,
           PStack_13.m_ParticleSystem != (ParticleSystem *)0x0)) {
          if (iRam_? != 0) {
            uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
          apPStackX_8[0] = PStack_13.m_ParticleSystem;
          curve = (AnimationCurve *)FUN_?();
          pvVar14 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                   AnimationCurve_Internal_Create((Keyframe__Array *)0x0,(MethodInfo *)0x0);
          (curve->fields).m_Ptr = pvVar14;
          (curve->fields).m_RequiresNativeCleanup = 1;
          if (pvVar14 != (void *)0x0) {
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar14,0,uVar11);
            pvVar14 = (curve->fields).m_Ptr;
            if (pvVar14 != (void *)0x0) {
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar14,_UNK_?,uVar11);
              pvVar14 = (curve->fields).m_Ptr;
              if (pvVar14 != (void *)0x0) {
                pcVar9 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                multiplier = _UNK_?;
                (*pcRam_?)(pvVar14,_UNK_?,_UNK_?);
                UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
                ParticleSystem_MinMaxCurve__ctor_1(&PStack_2,multiplier,curve,(MethodInfo *)0x0);
                PStack_15.m_Mode = PStack_2.m_Mode;
                PStack_15.m_CurveMultiplier = PStack_2.m_CurveMultiplier;
                PStack_15.m_CurveMin = PStack_2.m_CurveMin;
                PStack_15.m_CurveMax = PStack_2.m_CurveMax;
                PStack_15.m_ConstantMin = PStack_2.m_ConstantMin;
                PStack_15.m_ConstantMax = PStack_2.m_ConstantMax;
                UnityEngine.ParticleSystemModule.dll::UnityEngine::
                ParticleSystem+SizeOverLifetimeModule::
                ParticleSystem_SizeOverLifetimeModule_set_size
                          (&PStack_13,&PStack_15,(MethodInfo *)0x0);
                return;
              }
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)curve,(MethodInfo *)0x0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
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


/* Void SetFireHitBoxYOffset(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_SetFireHitBoxYOffset
               (MVFire *this,float offset,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (((pFVar1 != (FireObject *)0x0) &&
      (this_00 = (pFVar1->fields).triggerBoxEvents, this_00 != (TriggerBoxEvents *)0x0)) &&
     (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    aVStack_3[0].z = 0.0;
    aVStack_3[0]._0_8_ = (ulonglong)(uint)offset << 0x20;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
              (pTVar2,aVStack_3,Space__Enum_World,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).gameMode != 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar4 == (GameSessionData *)0x0) goto code_?;
        if ((pGVar4->fields).gameMode != 4) {
          return;
        }
      }
      this_01 = (this->fields).rangeVis;
      if ((this_01 != (SphereVolumeIndicator *)0x0) &&
         (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this_01,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0))
      {
        aVStack_3[0].z = 0.0;
        aVStack_3[0]._0_8_ = (ulonglong)(uint)offset << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate
                  (pTVar2,aVStack_3,Space__Enum_Self,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetFireToData() */

void Assembly-CSharp.dll::MVFire::MVFire_SetFireToData(MVFire *this,MethodInfo *method)

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
    FUN_?(&TypeInfo__System__Single);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_I);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_C);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._.data;
  lVar2 = 0;
  PStackX_20.m_ParticleSystem = (ParticleSystem *)0x0;
  apPStack_3[0] = (ParticleSystem *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     (pDVar1,(Object *)StringLiteral_C,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar4) {
    pDVar5 = (this->fields)._._._.data;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar5,(Object *)StringLiteral_C,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    pSVar7 = TypeInfo__System__Single;
    if ((pOVar6 != (Object *)0x0) &&
       (lVar2 = FUN_?(pOVar6,TypeInfo__System__Single), lVar2 == 0)) {
      FUN_?(pOVar6,pSVar7);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar9 = (this->fields).fireObject;
    if ((pFVar9 == (FireObject *)0x0) ||
       (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 == (ParticleSystem *)0x0))
    goto code_?;
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pPStackX_18 = pPVar10;
    PStackX_20.m_ParticleSystem = pPVar10;
    if (lVar2 == 0) goto code_?;
    if (((*(int *)(lVar2 + 0x18) == 0) || (*(uint *)(lVar2 + 0x18) < 2)) ||
       (*(uint *)(lVar2 + 0x18) < 3)) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    CStack_16.b = *(float *)(lVar2 + 0x28);
    CStack_16.g = *(float *)(lVar2 + 0x24);
    CStack_16.r = *(float *)(lVar2 + 0x20);
    CStack_16.a = 1.0;
    pPVar17 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
              ParticleSystem_MinMaxGradient_op_Implicit(aPStack_18,&CStack_16,(MethodInfo *)0x0);
    PStack_19.m_Mode = pPVar17->m_Mode;
    PStack_19._4_4_ = *(undefined4 *)&pPVar17->field_0x4;
    PStack_19.m_GradientMin = pPVar17->m_GradientMin;
    PStack_19.m_GradientMax = pPVar17->m_GradientMax;
    PStack_19.m_ColorMin.r = (pPVar17->m_ColorMin).r;
    PStack_19.m_ColorMin.g = (pPVar17->m_ColorMin).g;
    PStack_19.m_ColorMin.b = (pPVar17->m_ColorMin).b;
    PStack_19.m_ColorMin.a = (pPVar17->m_ColorMin).a;
    PStack_19.m_ColorMax.r = (pPVar17->m_ColorMax).r;
    PStack_19.m_ColorMax.g = (pPVar17->m_ColorMax).g;
    PStack_19.m_ColorMax.b = (pPVar17->m_ColorMax).b;
    PStack_19.m_ColorMax.a = (pPVar17->m_ColorMax).a;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startColor(&PStackX_20,&PStack_19,(MethodInfo *)0x0);
  }
  pFVar9 = (this->fields).fireObject;
  if ((pFVar9 == (FireObject *)0x0) ||
     (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 == (ParticleSystem *)0x0))
  goto code_?;
  if (iRam_? != 0) {
    uVar11 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar13 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  pcVar8 = pcRam_?;
  pPStackX_8 = pPVar10;
  pPStackX_18 = pPVar10;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  fVar21 = (float)(*pcRam_?)(&pPStackX_8);
  fVar22 = _UNK_?;
  MVFire_SetFireHitBoxYOffset
            (this,(float)((uint)(((fVar21 * _UNK_? * _UNK_?) / _UNK_?) *
                                _UNK_?) ^ _UNK_?) * _UNK_?,(MethodInfo *)0x0
            );
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields)._._._.data;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) goto code_?;
  iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::StyleComplexSelector+PseudoStateData]::
           Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                     (pDVar1,(Object *)StringLiteral_I,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      ->klass->rgctx_data[0x21].method);
  if (-1 < iVar4) {
    pFVar9 = (this->fields).fireObject;
    if ((pFVar9 == (FireObject *)0x0) ||
       (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 == (ParticleSystem *)0x0))
    goto code_?;
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pDVar5 = (this->fields)._._._.data;
    pPStackX_18 = pPVar10;
    apPStack_3[0] = pPVar10;
    if ((pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) ||
       (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__get_Item
                            (pDVar5,(Object *)StringLiteral_I,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                            ), pOVar6 == (Object *)0x0)) goto code_?;
    if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOVar6,lRam_?);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar23 = *(undefined4 *)&pOVar6[1].klass;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar20 = func_?(&UNK_?);
      FUN_?(uVar20,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(apPStack_3,uVar23);
  }
  pFVar9 = (this->fields).fireObject;
  if ((pFVar9 == (FireObject *)0x0) ||
     (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 == (ParticleSystem *)0x0))
  goto code_?;
  if (iRam_? != 0) {
    uVar11 = (uint)((ulonglong)&pPStackX_18 >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar15 = uVar13 == *puVar14;
      if (bVar15) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar15);
  }
  pcVar8 = pcRam_?;
  pPStackX_8 = pPVar10;
  pPStackX_18 = pPVar10;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pcRam_? = pcVar8;
  fVar21 = (float)(*pcRam_?)(&pPStackX_8);
  cVar24 = cRam_?;
  (this->fields).damageRadius = fVar21 * fVar22 * _UNK_?;
  if (cVar24 == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cVar24 = '\x01';
    cRam_? = '\x01';
  }
  pGVar25 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar25 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar25->fields).gameMode == 0) {
code_?:
    this_00 = (this->fields).rangeVis;
    if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
              (this_00,(this->fields).damageRadius,(MethodInfo *)0x0);
  }
  else {
    if (cVar24 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar25 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar25 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar25->fields).gameMode == 4) goto code_?;
  }
  fVar22 = ((this->fields).damageRadius / _UNK_?) * _UNK_?;
  MVFire_SetFireHitBoxYOffset(this,fVar22 * _UNK_?,(MethodInfo *)0x0);
  MVFire_UpdateScale(this,fVar22,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar26 = (this->fields)._.cullingSubscriberBase;
  if (pCVar26 != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar26,(MethodInfo *)0x0);
    fVar22 = (this->fields).damageRadius;
    puVar27 = (undefined8 *)
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                        (&CStack_16,this,(this->klass->vtable).get_WorldPosition_1.method);
    uVar20 = *puVar27;
    fVar28 = *(float *)(puVar27 + 1);
    callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
               FUN_?(
                            TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                            );
    FUN_?(callback,this);
    pCVar26 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
    CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar26,callback,(MethodInfo *)0x0);
    CStack_16._0_8_ = uVar20;
    CStack_16.b = fVar28;
    CullingSubscriberBase::CullingSubscriberBase_Setup
              (pCVar26,fVar22,(Vector3 *)&CStack_16,(MethodInfo *)0x0);
    bVar15 = iRam_? != 0;
    (this->fields)._.cullingSubscriberBase = pCVar26;
    if (bVar15) {
      uVar11 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar15 = uVar13 == *puVar14;
        if (bVar15) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar15);
    }
    pFVar9 = (this->fields).fireObject;
    if (pFVar9 != (FireObject *)0x0) {
      obj = (pFVar9->fields).soundIntensityScale;
      this_01 = (pFVar9->fields).audioSource;
      if (obj != (AnimationCurve *)0x0) {
        pvVar29 = (obj->fields).m_Ptr;
        if (pvVar29 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        fVar22 = (float)(*pcRam_?)(pvVar29,fVar21);
        if (this_01 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                    (this_01,fVar22,(MethodInfo *)0x0);
          if (fVar21 < _UNK_?) {
            MVFire_SetCandleAnimation(this,(MethodInfo *)0x0);
          }
          else {
            MVFire_SetOriginalAnimation(this,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetOriginalAnimation() */

void Assembly-CSharp.dll::MVFire::MVFire_SetOriginalAnimation(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationCurve);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pFVar1 = (this->fields).fireObject;
  PStack_2.m_Mode = 0;
  PStack_2.m_CurveMultiplier = 0.0;
  PStack_2.m_CurveMin = (AnimationCurve *)0x0;
  PStack_2.m_CurveMax = (AnimationCurve *)0x0;
  PStack_2.m_ConstantMin = 0.0;
  PStack_2.m_ConstantMax = 0.0;
  if ((pFVar1 != (FireObject *)0x0) &&
     (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
    pcVar9 = pcRam_?;
    apPStackX_8[0] = pPVar3;
    pPStackX_20 = pPVar3;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&pPStackX_20,_UNK_?);
    pFVar1 = (this->fields).fireObject;
    if ((pFVar1 != (FireObject *)0x0) &&
       (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
      pcVar9 = pcRam_?;
      apPStackX_8[0] = pPVar3;
      pPStackX_18 = pPVar3;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18,_UNK_?);
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18,_UNK_?);
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) &&
         (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
        if (iRam_? != 0) {
          uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
        apPStackX_8[0] = pPVar3;
        PStack_11.m_ParticleSystem = pPVar3;
        curve = (AnimationCurve *)FUN_?();
        pvVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                 AnimationCurve_Internal_Create((Keyframe__Array *)0x0,(MethodInfo *)0x0);
        (curve->fields).m_Ptr = pvVar12;
        (curve->fields).m_RequiresNativeCleanup = 1;
        if (pvVar12 != (void *)0x0) {
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar12,0,_UNK_?);
          pvVar12 = (curve->fields).m_Ptr;
          if (pvVar12 != (void *)0x0) {
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            multiplier = _UNK_?;
            (*pcRam_?)(pvVar12,_UNK_?,_UNK_?);
            pvVar12 = (curve->fields).m_Ptr;
            if (pvVar12 != (void *)0x0) {
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar12,multiplier,_UNK_?);
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::
              ParticleSystem_MinMaxCurve__ctor_1(&PStack_2,multiplier,curve,(MethodInfo *)0x0);
              PStack_13.m_Mode = PStack_2.m_Mode;
              PStack_13.m_CurveMultiplier = PStack_2.m_CurveMultiplier;
              PStack_13.m_CurveMin = PStack_2.m_CurveMin;
              PStack_13.m_CurveMax = PStack_2.m_CurveMax;
              PStack_13.m_ConstantMin = PStack_2.m_ConstantMin;
              PStack_13.m_ConstantMax = PStack_2.m_ConstantMax;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::
              ParticleSystem+SizeOverLifetimeModule::ParticleSystem_SizeOverLifetimeModule_set_size
                        (&PStack_11,&PStack_13,(MethodInfo *)0x0);
              pFVar1 = (this->fields).fireObject;
              if ((pFVar1 != (FireObject *)0x0) &&
                 (pPStack_14 = (pFVar1->fields).fireParticleSystem,
                 pPStack_14 != (ParticleSystem *)0x0)) {
                if (iRam_? != 0) {
                  uVar4 = (uint)((ulonglong)apPStackX_8 >> 0xc);
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
                pcVar9 = pcRam_?;
                apPStackX_8[0] = pPStack_14;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                (*pcRam_?)(&pPStack_14,multiplier);
                return;
              }
              goto code_?;
            }
          }
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)curve,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ToggleEmitter(Boolean) */

void Assembly-CSharp.dll::MVFire::MVFire_ToggleEmitter
               (MVFire *this,bool activeFlag,MethodInfo *method)

{
  puVar1 = (ulonglong *)CONCAT71(in_register_00000011,activeFlag);
  pFVar2 = (this->fields).fireObject;
  if ((pFVar2 != (FireObject *)0x0) &&
     (pPVar3 = (pFVar2->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&pPStackX_8 >> 0xc);
      method = (MethodInfo *)(ulonglong)(uVar4 & 0x3f);
      puVar1 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar5 = *puVar1;
        LOCK();
        uVar6 = *puVar1;
        if (uVar5 == uVar6) {
          *puVar1 = uVar5 | 1L << (longlong)method;
        }
        UNLOCK();
      } while (uVar5 != uVar6);
    }
    pcVar7 = pcRam_?;
    pPStackX_8 = pPVar3;
    pPStackX_20 = pPVar3;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?,puVar1,method), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    (*pcRam_?)(&pPStackX_20);
    pFVar2 = (this->fields).fireObject;
    if (activeFlag == 0) {
      if ((pFVar2 != (FireObject *)0x0) &&
         (pAVar9 = (pFVar2->fields).audioSource, pAVar9 != (AudioSource *)0x0)) {
        bVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                          (pAVar9,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          return;
        }
        pFVar2 = (this->fields).fireObject;
        if ((pFVar2 != (FireObject *)0x0) &&
           (pAVar9 = (pFVar2->fields).audioSource, pAVar9 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                    (pAVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pFVar2 != (FireObject *)0x0) &&
            (pAVar9 = (pFVar2->fields).audioSource, pAVar9 != (AudioSource *)0x0)) {
      bVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                        (pAVar9,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        pFVar2 = (this->fields).fireObject;
        if ((pFVar2 == (FireObject *)0x0) ||
           (pAVar9 = (pFVar2->fields).audioSource, pAVar9 == (AudioSource *)0x0))
        goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (pAVar9,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void TriggerAreaEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_TriggerAreaEnter
               (MVFire *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).woList;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((e == (TriggerEventArgs *)0x0) || (this_00 == (MVWorldObjectClientManager *)0x0)) ||
     (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                         (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0),
     pMVar3 = 
     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_,
     pLVar1 == (List_1_MVWorldObjectClient_ *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pMVar5 = (pLVar1->fields)._items;
  piVar6 = &(pLVar1->fields)._version;
  *piVar6 = *piVar6 + 1;
  if (pMVar5 == (MVWorldObjectClient__Array *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = (pLVar1->fields)._size;
  if (uVar7 < (uint)pMVar5->max_length) {
    (pLVar1->fields)._size = uVar7 + 1;
  }
  else {
    uVar7 = (pLVar1->fields)._size;
    FUN_?(pLVar1,uVar7 + 1,
                  (pMVar3->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy,
                  pMVar5,unaff_RDI);
    pMVar5 = (pLVar1->fields)._items;
    (pLVar1->fields)._size = uVar7 + 1;
    if (pMVar5 == (MVWorldObjectClient__Array *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((uint)pMVar5->max_length <= uVar7) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar8 = iRam_? != 0;
  pMVar5->vector[(int)uVar7] = pMVar2;
  if (bVar8) {
    uVar7 = (uint)((ulonglong)(pMVar5->vector + (int)uVar7) >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  return;
}


/* Void TriggerAreaExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_TriggerAreaExit
               (MVFire *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).woList;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    value = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    pMVar1 = 
    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Remove_MVWorldObjectClient_
    ;
    if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      index = mscorlib.dll::System::Array::Array_IndexOf_69
                        ((Object__Array *)(this_00->fields)._items,(Object *)value,0,
                         (this_00->fields)._size,
                         (MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Remove_MVWorldObjectClient_
                          ->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
      if (index < 0) {
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateDamageRadius(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateDamageRadius
               (MVFire *this,float intensity,MethodInfo *method)

{
  cVar1 = cRam_?;
  (this->fields).damageRadius = intensity * _UNK_? * _UNK_?;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    if ((pGVar2->fields).gameMode != 0) {
      if (cVar1 == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 == (GameSessionData *)0x0) goto code_?;
      if ((pGVar2->fields).gameMode != 4) {
        return;
      }
    }
    pSVar3 = (this->fields).rangeVis;
    if (pSVar3 != (SphereVolumeIndicator *)0x0) {
      fVar4 = (this->fields).damageRadius;
      uStack_5 = (undefined *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral__MainTex);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar6 = _UNK_?;
      fVar7 = _UNK_?;
      fVar8 = 0.0;
      uStack_9 = 0;
      fStack_10 = _UNK_?;
      fVar11 = 0.0;
      uStack_12 = 0;
      uStack_13 = 0;
      fVar14 = _UNK_? / (float)(pSVar3->fields).circleSergmentCount;
      pcVar15 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
      pcRam_? = pcVar15;
      (*pcRam_?)(fVar14,&uStack_9);
      iVar17 = (pSVar3->fields).circleSergmentCount + 1;
      positions = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar17);
      uVar18 = 0;
      lVar19 = (longlong)iVar17;
      if (0 < iVar17) {
        pVVar20 = positions->vector;
        fVar21 = (uStack_12._4_4_ + uStack_12._4_4_) * (float)uStack_12;
        fVar22 = ((float)uStack_13 + (float)uStack_13) * uStack_12._4_4_;
        fVar14 = (uStack_12._4_4_ + uStack_12._4_4_) * uStack_12._4_4_;
        fVar7 = ((float)uStack_13 + (float)uStack_13) * (float)uStack_13;
        fVar23 = ((float)uStack_12 + (float)uStack_12) * (float)uStack_12;
        fVar24 = ((float)uStack_13 + (float)uStack_13) * (float)uStack_12;
        fVar25 = (uStack_12._4_4_ + uStack_12._4_4_) * uStack_13._4_4_;
        fVar26 = ((float)uStack_13 + (float)uStack_13) * uStack_13._4_4_;
        fVar27 = ((float)uStack_12 + (float)uStack_12) * uStack_13._4_4_;
        fVar28 = _UNK_? - (fVar7 + fVar14);
        fVar29 = _UNK_? - (fVar14 + fVar23);
        fVar23 = _UNK_? - (fVar7 + fVar23);
        uVar30 = uVar18;
        uVar31 = uVar18;
        fVar14 = fVar4;
        do {
          fVar32 = fVar8 * (fVar26 + fVar21);
          fVar33 = fVar8 * (fVar24 - fVar25);
          fVar8 = fVar14 * (fVar21 - fVar26) + fVar8 * fVar28 + fVar11 * (fVar25 + fVar24);
          fVar7 = fVar11 * (fVar22 - fVar27);
          fVar11 = fVar33 + fVar14 * (fVar27 + fVar22) + fVar11 * fVar29;
          fVar14 = fVar32 + fVar14 * fVar23 + fVar7;
          if (positions == (Vector3__Array *)0x0) goto DAT_?;
          if ((uint)positions->max_length <= (uint)uVar30) goto code_?;
          uVar30 = (ulonglong)((uint)uVar30 + 1);
          uVar31 = uVar31 + 1;
          pVVar20->x = fVar8;
          pVVar20->y = fVar14;
          pVVar20->z = fVar11;
          pVVar20 = pVVar20 + 1;
          fVar7 = _UNK_?;
        } while ((longlong)uVar31 < lVar19);
      }
      pLVar34 = (pSVar3->fields).rangeIndicatorXY;
      if (pLVar34 != (LineRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar35 = (pLVar34->fields)._._._.m_CachedPtr;
        if (pvVar35 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar34,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar35,iVar17);
        pLVar34 = (pSVar3->fields).rangeIndicatorXY;
        if (pLVar34 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                    (pLVar34,positions,(MethodInfo *)0x0);
          iVar36 = (pSVar3->fields).circleSergmentCount;
          uStack_9 = (ulonglong)(uint)fVar7;
          fStack_10 = 0.0;
          uStack_12 = 0;
          uStack_13 = 0;
          pcVar15 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
            uVar16 = func_?(&UNK_?);
            FUN_?(uVar16,0);
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          pcRam_? = pcVar15;
          (*pcRam_?)(fVar6 / (float)iVar36,&uStack_9);
          if (0 < iVar17) {
            pVVar20 = positions->vector;
            uVar30 = uVar18;
            uVar31 = uVar18;
            do {
              if (positions == (Vector3__Array *)0x0) goto DAT_?;
              uVar37 = (uint)uVar30;
              if (((uint)positions->max_length <= uVar37) ||
                 (pVVar20->z = pVVar20->x, (uint)positions->max_length <= uVar37))
              goto code_?;
              pVVar20->x = 0.0;
              uVar30 = (ulonglong)(uVar37 + 1);
              pVVar20 = pVVar20 + 1;
              uVar31 = uVar31 + 1;
            } while ((longlong)uVar31 < lVar19);
          }
          pLVar34 = (pSVar3->fields).rangeIndicatorYZ;
          if (pLVar34 != (LineRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar35 = (pLVar34->fields)._._._.m_CachedPtr;
            if (pvVar35 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar34,(MethodInfo *)0x0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcVar15 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
              uVar16 = func_?(&UNK_?);
              FUN_?(uVar16,0);
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pcRam_? = pcVar15;
            (*pcRam_?)(pvVar35,iVar17);
            pLVar34 = (pSVar3->fields).rangeIndicatorYZ;
            if (pLVar34 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                        (pLVar34,positions,(MethodInfo *)0x0);
              iVar36 = (pSVar3->fields).circleSergmentCount;
              uStack_9 = (ulonglong)(uint)fVar7 << 0x20;
              fStack_10 = 0.0;
              uStack_12 = 0;
              uStack_13 = 0;
              pcVar15 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                uVar16 = func_?(&UNK_?);
                FUN_?(uVar16,0);
                pcVar15 = (code *)swi(3);
                (*pcVar15)();
                return;
              }
              pcRam_? = pcVar15;
              (*pcRam_?)(fVar6 / (float)iVar36,&uStack_9);
              if (0 < iVar17) {
                pfVar38 = &positions->vector[0].y;
                uVar30 = uVar18;
                do {
                  if (positions == (Vector3__Array *)0x0) goto DAT_?;
                  uVar37 = (uint)uVar18;
                  if (((uint)positions->max_length <= uVar37) ||
                     (((Vector3 *)(pfVar38 + -1))->x = *pfVar38,
                     (uint)positions->max_length <= uVar37)) {
code_?:
                    FUN_?();
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
                    return;
                  }
                  *pfVar38 = 0.0;
                  uVar18 = (ulonglong)(uVar37 + 1);
                  pfVar38 = pfVar38 + 3;
                  uVar30 = uVar30 + 1;
                } while ((longlong)uVar30 < lVar19);
              }
              pLVar34 = (pSVar3->fields).rangeIndicatorZX;
              if (pLVar34 != (LineRenderer *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar35 = (pLVar34->fields)._._._.m_CachedPtr;
                if (pvVar35 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar34,(MethodInfo *)0x0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcVar15 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
                  uVar16 = func_?(&UNK_?);
                  FUN_?(uVar16,0);
                  pcVar15 = (code *)swi(3);
                  (*pcVar15)();
                  return;
                }
                pcRam_? = pcVar15;
                (*pcRam_?)(pvVar35,iVar17);
                pLVar34 = (pSVar3->fields).rangeIndicatorZX;
                if (pLVar34 != (LineRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                            (pLVar34,positions,(MethodInfo *)0x0);
                  this_00 = (pSVar3->fields).materialCopy;
                  fVar6 = (pSVar3->fields).lineDotDensity;
                  if (this_00 != (Material *)0x0) {
                    name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID
                                     (StringLiteral__MainTex,(MethodInfo *)0x0);
                    scale.y = fVar7;
                    scale.x = fVar4 * fVar6;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScaleImpl
                              (this_00,name,scale,(MethodInfo *)0x0);
                    pLVar34 = (pSVar3->fields).rangeIndicatorXY;
                    if (pLVar34 != (LineRenderer *)0x0) {
                      fVar4 = (pSVar3->fields).lineWidth;
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_set_startWidth(pLVar34,fVar4,(MethodInfo *)0x0);
                      pLVar34 = (pSVar3->fields).rangeIndicatorXY;
                      if (pLVar34 != (LineRenderer *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                        LineRenderer_set_endWidth(pLVar34,fVar4,(MethodInfo *)0x0);
                        pLVar34 = (pSVar3->fields).rangeIndicatorYZ;
                        if (pLVar34 != (LineRenderer *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                          LineRenderer_set_startWidth(pLVar34,fVar4,(MethodInfo *)0x0);
                          pLVar34 = (pSVar3->fields).rangeIndicatorYZ;
                          if (pLVar34 != (LineRenderer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                            LineRenderer_set_endWidth(pLVar34,fVar4,(MethodInfo *)0x0);
                            pLVar34 = (pSVar3->fields).rangeIndicatorZX;
                            if (pLVar34 != (LineRenderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                              LineRenderer_set_startWidth(pLVar34,fVar4,(MethodInfo *)0x0);
                              pLVar34 = (pSVar3->fields).rangeIndicatorZX;
                              if (pLVar34 != (LineRenderer *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (pLVar34 == (LineRenderer *)0x0) {
                                  FUN_?();
                                  pcVar15 = (code *)swi(3);
                                  (*pcVar15)();
                                  return;
                                }
                                pvVar35 = (pLVar34->fields)._._._.m_CachedPtr;
                                if (pvVar35 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pLVar34,(MethodInfo *)0x0);
                                  pcVar15 = (code *)swi(3);
                                  (*pcVar15)();
                                  return;
                                }
                                pcVar15 = pcRam_?;
                                if (pcRam_? == (code *)0x0) {
                                  pcVar15 = (code *)FUN_?(&UNK_?);
                                  if (pcVar15 == (code *)0x0) {
                                    uVar16 = func_?(&UNK_?);
                                    FUN_?(uVar16,0);
                                    pcVar15 = (code *)swi(3);
                                    (*pcVar15)();
                                    return;
                                  }
                                }
                                pcRam_? = pcVar15;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*pcRam_?)(pvVar35);
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
            }
          }
        }
      }
DAT_?:
      FUN_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void UpdateScale(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateScale(MVFire *this,float scale,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (((pFVar1 == (FireObject *)0x0) ||
      (pTVar2 = (pFVar1->fields).triggerBoxEvents, pTVar2 == (TriggerBoxEvents *)0x0)) ||
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  fStack_6 = 0.0;
  pvVar7 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar7 != (void *)0x0) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar7);
    pFVar1 = (this->fields).fireObject;
    if (((pFVar1 != (FireObject *)0x0) &&
        (pTVar2 = (pFVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) &&
       (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      uStack_5 = CONCAT44(scale,scale);
      fStack_6 = scale;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar7,&uStack_5);
      return;
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateSoundVolume(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateSoundVolume
               (MVFire *this,float intensity,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  uVar2 = CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  uVar3 = CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  if (pFVar1 != (FireObject *)0x0) {
    obj = (pFVar1->fields).soundIntensityScale;
    obj_00 = (pFVar1->fields).audioSource;
    if (obj != (AnimationCurve *)0x0) {
      pvVar4 = (obj->fields).m_Ptr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?,in_RDX,method,in_R9,uVar2,uVar3),
         pcVar5 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      uVar6 = (*pcRam_?)(pvVar4,intensity);
      if (obj_00 != (AudioSource *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_
                        ,uVar6,0,in_R9,uVar2,uVar3,unaff_RBX);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj_00 == (AudioSource *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pvVar4 = (obj_00->fields)._._._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,uVar6);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* MVFire(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient])
    */

void Assembly-CSharp.dll::MVFire::MVFire__ctor
               (MVFire *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FireObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).woList = this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).woList >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields).damageRadius = 2.5;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar6 != (PrefabPool *)0x0) {
    MVLogicObject::MVLogicObject__ctor
              ((MVLogicObject *)this,data,(pPVar6->fields).mvFirePrefab,worldObjects,
               (MethodInfo *)0x0);
    piVar7 = &(this->fields)._._.interactionFlags;
    *piVar7 = *piVar7 | 0x18000;
    pFVar8 = (FireObject *)(this->fields)._._.component;
    if (pFVar8 == (FireObject *)0x0) {
      (this->fields).fireObject = (FireObject *)0x0;
    }
    else {
      bVar9 = (TypeInfo__FireObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pFVar8->klass)->_1).naturalAligment < bVar9) ||
         ((((ObjectPrefab__Class *)pFVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__FireObject)) {
        FUN_?(pFVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this->fields).fireObject = pFVar8;
      bVar9 = (TypeInfo__FireObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pFVar8->klass)->_1).naturalAligment < bVar9) ||
         ((((ObjectPrefab__Class *)pFVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
          (Il2CppClass *)TypeInfo__FireObject)) {
        FUN_?(pFVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields).fireObject >> 0xc);
      uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
      do {
        uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
        puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
        LOCK();
        bVar1 = uVar4 == *puVar5;
        if (bVar1) {
          *puVar5 = uVar4 | 1L << (ulonglong)(uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pFVar8 = (this->fields).fireObject;
    if (pFVar8 != (FireObject *)0x0) {
      this_00 = (pFVar8->fields).audioSource;
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      fVar12 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (this_00,fVar12 + _UNK_?,(MethodInfo *)0x0);
        pFVar8 = (this->fields).fireObject;
        if (pFVar8 != (FireObject *)0x0) {
          pTVar13 = (pFVar8->fields).triggerBoxEvents;
          pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                    FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
          Object]::UnityAction_2_System_Object_System_Object___ctor
                    (pUVar14,(Object *)this,
                     MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_,
                     (MethodInfo *)0x0);
          if (pTVar13 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
                      (pTVar13,(EventHandler_1_TriggerEventArgs_ *)pUVar14,(MethodInfo *)0x0);
            pFVar8 = (this->fields).fireObject;
            if (pFVar8 != (FireObject *)0x0) {
              pTVar13 = (pFVar8->fields).triggerBoxEvents;
              pUVar14 = (UnityAction_2_System_Object_System_Object_ *)
                        FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        (pUVar14,(Object *)this,
                         MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_,
                         (MethodInfo *)0x0);
              if (pTVar13 != (TriggerBoxEvents *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                ppEVar15 = &(pTVar13->fields).TriggerExit;
                a = (pTVar13->fields).TriggerExit;
                do {
                  pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                                      ((Delegate *)a,(Delegate *)pUVar14,(MethodInfo *)0x0);
                  pEVar17 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                  if (pDVar16 == (Delegate *)0x0) {
                    pEVar18 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                  }
                  else {
                    pEVar18 = (EventHandler_1_TriggerEventArgs_ *)
                              FUN_?(pDVar16,TypeInfo__System__EventHandler<TriggerEventArgs>
                                           );
                    if (pEVar18 == (EventHandler_1_TriggerEventArgs_ *)0x0) {
                      FUN_?(pDVar16,pEVar17);
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
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
                    uVar2 = (uint)((ulonglong)ppEVar15 >> 0xc);
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
                  bVar1 = pEVar18 != a;
                  a = pEVar18;
                } while (bVar1);
                return;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Vector3 get_InputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVFire::MVFire_get_InputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVFire *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -1.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

