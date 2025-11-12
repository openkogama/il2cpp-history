
/* Single CalculateDamageModifier() */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateDamageModifier(MVFire *this,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 == (FireObject *)0x0) || (apPStackX_8[0] = (pFVar1->fields).fireParticleSystem, apPStackX_8[0] == (ParticleSystem *)0x0)) {
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
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?,method), pcVar2 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  pcRam_? = pcVar2;
  fVar3 = (float)(*pcRam_?)(apPStackX_18);
  if (fVar3 <= 4.0) {
    return fVar3 / 12.0;
  }
  return fVar3 / 13.0;
}


/* Single CalculateDamageRadius(Single) */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateDamageRadius(MVFire *this,float intensity,MethodInfo *method)

{
  return intensity * 0.625 * 0.5;
}


/* Single CalculateScale(Single) */

float Assembly-CSharp.dll::MVFire::MVFire_CalculateScale(MVFire *this,float damageRadius,MethodInfo *method)

{
  return (damageRadius / 2.5) * 5.0;
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
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(this_00,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
      pAVar2 = (Action *)mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField != (IEditModeUI *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) {
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
    if ((pDVar9 != (Delegate *)0x0) && (lVar11 = FUN_?(pDVar9,TypeInfo__System__Action<EditModeChangeArgs>), lVar11 == 0)) {
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

Bounds * Assembly-CSharp.dll::MVFire::MVFire_GetLocalBounds(Bounds *__return_storage_ptr__,MVFire *this,BoundsContext__Enum boundsContext,MethodInfo *method)

{
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.5;
  (__return_storage_ptr__->m_Extents).y = 0.5;
  (__return_storage_ptr__->m_Extents).z = 0.5;
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
    FUN_?(&SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  pFVar1 = (this->fields).fireObject;
  if (pFVar1 != (FireObject *)0x0) {
    this_00 = (pFVar1->fields).fireCollider;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (this_00 != (Collider *)0x0) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled(this_00,TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField != (IEditModeUI *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) goto code_?;
        pDVar2 = (Delegate *)FUN_?();
        b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
        FUN_?(b,this);
        pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar2,b,(MethodInfo *)0x0);
        pAVar3 = TypeInfo__System__Action<EditModeChangeArgs>;
        if ((pDVar2 != (Delegate *)0x0) && (lVar4 = FUN_?(pDVar2,TypeInfo__System__Action<EditModeChangeArgs>), lVar4 == 0)) {
          FUN_?(pDVar2,pAVar3);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?();
      }
      pFVar1 = (this->fields).fireObject;
      if (pFVar1 != (FireObject *)0x0) {
        MVLogicObject::MVLogicObject_SetupCulling((MVLogicObject *)this,(pFVar1->fields).visualObject,2.0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar6 != (GameSessionData *)0x0) {
          if ((pGVar6->fields).gameMode == 0) {
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
            pSVar8 = (SphereVolumeIndicator *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pSVar8,SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_);
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
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pSVar8,(MethodInfo *)0x0);
            pFVar1 = (this->fields).fireObject;
            if ((pFVar1 == (FireObject *)0x0) || (value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pFVar1,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0)) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent(pTVar14,value,(MethodInfo *)0x0);
            pSVar8 = (this->fields).rangeVis;
            if (pSVar8 == (SphereVolumeIndicator *)0x0) goto code_?;
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pSVar8,(MethodInfo *)0x0);
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
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar15 = (pTVar14->fields)._._.m_CachedPtr;
            if (pvVar15 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pcVar5 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
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
            SphereVolumeIndicator::SphereVolumeIndicator_SetRadius(pSVar8,(this->fields).damageRadius,(MethodInfo *)0x0);
          }
          MVFire_SetFireToData(this,(MethodInfo *)0x0);
          MVFire_SetFireHitBoxYOffset(this,((this->fields).damageRadius / 2.5) * 5.0 * 0.04,(MethodInfo *)0x0);
          this_01 = (Action_2_Int32Enum_Object_ *)FUN_?(TypeInfo__System__Action<LogicInputState,_LogicObjectManager>);
          mscorlib.dll::System::Action`2[Int32Enum,Object]::Action_2_Int32Enum_Object___ctor(this_01,(Object *)this,MethodInfo__MVFire__OnInputStateUpdate_LogicInputState__LogicObjectManager_,(MethodInfo *)0x0);
          pIVar17 = LogicClientsideFactory::LogicClientsideFactory_CreateStateChangeInputSignalReceiver((MVWorldObject *)this,1,(Action_3_Boolean_Boolean_LogicObjectManager_ *)0x0,(Action_2_LogicInputState_LogicObjectManager_ *)this_01,(MethodInfo *)0x0);
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
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(this_02,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
              pAVar18 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar18,(Delegate *)this_02,(MethodInfo *)0x0);
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
        }
      }
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
  if ((pFVar1 != (FireObject *)0x0) && (pPVar2 = (pFVar1->fields).fireParticleSystem, pPVar2 != (ParticleSystem *)0x0)) {
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
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
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
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pFVar1,0,(MethodInfo *)0x0);
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
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__,worldObjectManager,0);
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
  resetNodes = (HashSet_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(resetNodes,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  MVWorldObject.dll::LogicObjectManager::LogicObjectManager_ResetNode(woID,resetNodes,(IWorldObjectManager *)worldObjectManager,(MethodInfo *)0x0);
  if (resetNodes != (HashSet_1_System_Int32_ *)0x0) {
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::MVFire::MVFire_OnEditModeChange(MVFire *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if ((pFVar1 != (FireObject *)0x0) && (pCVar2 = (pFVar1->fields).fireCollider, pCVar2 != (Collider *)0x0)) {
    UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled(pCVar2,0,(MethodInfo *)0x0);
    if (arg.playInEditor != 0) {
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 == (FireObject *)0x0) || (pCVar2 = (pFVar1->fields).fireCollider, pCVar2 == (Collider *)0x0)) goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled(pCVar2,1,(MethodInfo *)0x0);
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
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(this_00,(Object *)this,MethodInfo__MVFire__OnFireObjectPlaced__,(MethodInfo *)0x0);
    pAVar2 = (Action *)mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
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
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)StringLiteral_is_active_now_after_subscribing,(MethodInfo *)0x0);
    if ((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) {
      bVar9 = FUN_?(1,TypeInfo__IInputSignalReceiver);
      uVar8 = 0;
      puVar6 = (ulonglong *)(ulonglong)bVar9;
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) && (pPVar10 = (pFVar1->fields).fireParticleSystem, pPVar10 != (ParticleSystem *)0x0)) {
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
        if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?,puVar6,uVar8), pcVar4 == (code *)0x0)) {
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
          if ((pFVar1 != (FireObject *)0x0) && (pAVar13 = (pFVar1->fields).audioSource, pAVar13 != (AudioSource *)0x0)) {
            bVar14 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying(pAVar13,(MethodInfo *)0x0);
            if (bVar14 == 0) {
              return;
            }
            pFVar1 = (this->fields).fireObject;
            if ((pFVar1 != (FireObject *)0x0) && (pAVar13 = (pFVar1->fields).audioSource, pAVar13 != (AudioSource *)0x0)) {
              UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1(pAVar13,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else if ((pFVar1 != (FireObject *)0x0) && (pAVar13 = (pFVar1->fields).audioSource, pAVar13 != (AudioSource *)0x0)) {
          bVar14 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying(pAVar13,(MethodInfo *)0x0);
          if (bVar14 == 0) {
            pFVar1 = (this->fields).fireObject;
            if ((pFVar1 == (FireObject *)0x0) || (pAVar13 = (pFVar1->fields).audioSource, pAVar13 == (AudioSource *)0x0)) goto code_?;
            UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1(pAVar13,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVFire::MVFire_OnInputStateUpdate(MVFire *this,LogicInputState__Enum logicInputState,LogicObjectManager *logicObjectManager,MethodInfo *method)

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
  if ((pFVar3 != (FireObject *)0x0) && (pPVar5 = (pFVar3->fields).fireParticleSystem, pPVar5 != (ParticleSystem *)0x0)) {
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
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?,puVar1,uVar2), pcVar9 == (code *)0x0)) {
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
      if ((pFVar3 != (FireObject *)0x0) && (pAVar11 = (pFVar3->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
        bVar12 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying(pAVar11,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          return;
        }
        pFVar3 = (this->fields).fireObject;
        if ((pFVar3 != (FireObject *)0x0) && (pAVar11 = (pFVar3->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1(pAVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pFVar3 != (FireObject *)0x0) && (pAVar11 = (pFVar3->fields).audioSource, pAVar11 != (AudioSource *)0x0)) {
      bVar12 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying(pAVar11,(MethodInfo *)0x0);
      if (bVar12 == 0) {
        pFVar3 = (this->fields).fireObject;
        if ((pFVar3 == (FireObject *)0x0) || (pAVar11 = (pFVar3->fields).audioSource, pAVar11 == (AudioSource *)0x0)) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1(pAVar11,(MethodInfo *)0x0);
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
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((this->fields)._InputSignalReceiver_k__BackingField != (IInputSignalReceiver *)0x0) && (cVar1 = FUN_?(1,TypeInfo__IInputSignalReceiver,(this->fields)._InputSignalReceiver_k__BackingField), cVar1 != '\0')) {
    pLVar2 = (this->fields).woList;
    if (pLVar2 == (List_1_MVWorldObjectClient_ *)0x0) {
DAT_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    index = (pLVar2->fields)._size - 1;
    if (-1 < (int)index) {
      lVar4 = (longlong)(int)index * 8 + 0x20;
      do {
        pLVar2 = (this->fields).woList;
        if (pLVar2 == (List_1_MVWorldObjectClient_ *)0x0) goto DAT_?;
        if ((uint)(pLVar2->fields)._size <= index) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pMVar5 = (pLVar2->fields)._items;
        if (pMVar5 == (MVWorldObjectClient__Array *)0x0) goto DAT_?;
        if ((uint)pMVar5->max_length <= index) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        this_00 = *(MVWorldObjectClient **)((longlong)pMVar5->vector + lVar4 + -0x20);
        if (this_00 == (MVWorldObjectClient *)0x0) {
code_?:
          pLVar2 = (this->fields).woList;
          if (pLVar2 == (List_1_MVWorldObjectClient_ *)0x0) goto DAT_?;
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__RemoveAt((List_1_System_Object_ *)pLVar2,index,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_);
        }
        else {
          pGVar6 = (this_00->fields).gameObject;
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
          if (pGVar6 == (GameObject *)0x0) goto code_?;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pGVar6->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
          pIVar7 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase(this_00,(MethodInfo *)0x0);
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
          if (pIVar7 != (InteractionDataHandlerBase *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pIVar7->fields)._._._._._.m_CachedPtr != (void *)0x0) {
              puVar8 = (undefined8 *)(*(this_00->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_9,this_00,(this_00->klass->vtable).get_WorldPosition_1.method);
              uVar10 = *puVar8;
              uVar11 = *(undefined4 *)(puVar8 + 1);
              (*(this->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_12,this,(this->klass->vtable).get_WorldPosition_1.method);
              uStack_13 = uVar10;
              uStack_14 = uVar11;
              fVar15 = (float)FUN_?(&uStack_13);
              pCVar16 = (this_00->fields).collider;
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
              if (pCVar16 != (Collider *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((pCVar16->fields)._._.m_CachedPtr != (void *)0x0) {
                  pCVar16 = (this_00->fields).collider;
                  puVar8 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_17,this,(this->klass->vtable).get_WorldPosition_1.method);
                  if (pCVar16 == (Collider *)0x0) goto DAT_?;
                  VStack_18._0_8_ = *puVar8;
                  VStack_18.z = *(float *)(puVar8 + 1);
                  pVVar19 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_ClosestPointOnBounds(&VStack_20,pCVar16,&VStack_18,(MethodInfo *)0x0);
                  uVar10._0_4_ = pVVar19->x;
                  uVar10._4_4_ = pVVar19->y;
                  fVar15 = pVVar19->z;
                  puVar8 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_21,this,(this->klass->vtable).get_WorldPosition_1.method);
                  uStack_22 = *puVar8;
                  uStack_23 = *(undefined4 *)(puVar8 + 1);
                  uStack_24 = uVar10;
                  fStack_25 = fVar15;
                  fVar15 = (float)FUN_?(&uStack_24);
                }
              }
              uVar10 = 0;
              fVar26 = MVFire_CalculateDamageModifier(this,(MethodInfo *)0x0);
              fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
              fVar26 = (1.0 - fVar15 / (this->fields).damageRadius) * fVar27 * 100.0 * fVar26;
              if (fVar26 < 0.0) {
                fVar26 = 0.0;
              }
              else if (100.0 < fVar26) {
                fVar26 = 100.0;
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              IStack_28.interactionType = 0;
              IStack_28.playerKilledByType = 0;
              IStack_28._18_2_ = 0;
              pVVar19 = &VStack_29;
              IStack_28.damage = 0.0;
              IStack_28.impulse.x = 0.0;
              IStack_28.impulse.y = 0.0;
              IStack_28.impulse.z = 0.0;
              pVVar30 = TypeInfo__UnityEngine__Vector3->static_fields;
              VStack_29.x = (pVVar30->zeroVector).x;
              VStack_29.y = (pVVar30->zeroVector).y;
              VStack_29.z = (pVVar30->zeroVector).z;
              MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5(&IStack_28,(InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)uVar10 >> 8),0xd),fVar26,pVVar19,(PlayerKilledByType__Enum)CONCAT71((int7)((ulonglong)in_stack_31 >> 8),9),(MethodInfo *)0x0);
              uStack_32 = IStack_28.interactionType;
              uStack_33 = IStack_28.playerKilledByType;
              uStack_34 = IStack_28._18_2_;
              in_stack_31 = (pIVar7->klass->vtable).__unknown_1.method;
              fStack_35 = IStack_28.damage;
              fStack_36 = IStack_28.impulse.x;
              fStack_37 = IStack_28.impulse.y;
              fStack_38 = IStack_28.impulse.z;
              (*(pIVar7->klass->vtable).__unknown_1.methodPtr)(pIVar7,0,&fStack_35,CONCAT71((int7)((ulonglong)pVVar19 >> 8),1),in_stack_31);
            }
          }
        }
        lVar4 = lVar4 + -8;
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
  puVar3 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)(aVStack_4,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar5 = *puVar3;
  fVar6 = *(float *)(puVar3 + 1);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
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
  if ((pFVar1 != (FireObject *)0x0) && (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
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
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&pPStackX_20,0x41200000);
    pFVar1 = (this->fields).fireObject;
    if ((pFVar1 != (FireObject *)0x0) && (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
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
      if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18,0x3ecccccd);
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18,0x3f000000);
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) && (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
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
        pPStack_11 = pPVar3;
        if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pcRam_? = pcVar9;
        (*pcRam_?)(&pPStack_11,0);
        pFVar1 = (this->fields).fireObject;
        if ((pFVar1 != (FireObject *)0x0) && (PStack_12.m_ParticleSystem = (pFVar1->fields).fireParticleSystem, PStack_12.m_ParticleSystem != (ParticleSystem *)0x0)) {
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
          apPStackX_8[0] = PStack_12.m_ParticleSystem;
          curve = (AnimationCurve *)FUN_?();
          pvVar13 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Internal_Create((Keyframe__Array *)0x0,(MethodInfo *)0x0);
          (curve->fields).m_Ptr = pvVar13;
          (curve->fields).m_RequiresNativeCleanup = 1;
          if (pvVar13 != (void *)0x0) {
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar13,0,0x3f000000);
            pvVar13 = (curve->fields).m_Ptr;
            if (pvVar13 != (void *)0x0) {
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar13,0x3f19999a,0x3f000000);
              pvVar13 = (curve->fields).m_Ptr;
              if (pvVar13 != (void *)0x0) {
                pcVar9 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                (*pcRam_?)(pvVar13,0x3f800000,0x3dcccccd);
                UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_1(&PStack_2,1.0,curve,(MethodInfo *)0x0);
                PStack_14.m_Mode = PStack_2.m_Mode;
                PStack_14.m_CurveMultiplier = PStack_2.m_CurveMultiplier;
                PStack_14.m_CurveMin = PStack_2.m_CurveMin;
                PStack_14.m_CurveMax = PStack_2.m_CurveMax;
                PStack_14.m_ConstantMin = PStack_2.m_ConstantMin;
                PStack_14.m_ConstantMax = PStack_2.m_ConstantMax;
                UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+SizeOverLifetimeModule::ParticleSystem_SizeOverLifetimeModule_set_size(&PStack_12,&PStack_14,(MethodInfo *)0x0);
                return;
              }
            }
          }
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)curve,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVFire::MVFire_SetFireHitBoxYOffset(MVFire *this,float offset,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (((pFVar1 != (FireObject *)0x0) && (this_00 = (pFVar1->fields).triggerBoxEvents, this_00 != (TriggerBoxEvents *)0x0)) && (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
    aVStack_3[0].z = 0.0;
    aVStack_3[0]._0_8_ = (ulonglong)(uint)offset << 0x20;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate(pTVar2,aVStack_3,Space__Enum_World,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar4 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar4 != (GameSessionData *)0x0) {
      if ((pGVar4->fields).gameMode != 0) {
        return;
      }
      this_01 = (this->fields).rangeVis;
      if ((this_01 != (SphereVolumeIndicator *)0x0) && (pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0), pTVar2 != (Transform *)0x0)) {
        aVStack_3[0].z = 0.0;
        aVStack_3[0]._0_8_ = (ulonglong)(uint)offset << 0x20;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Translate(pTVar2,aVStack_3,Space__Enum_Self,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetFireToData() */

void Assembly-CSharp.dll::MVFire::MVFire_SetFireToData(MVFire *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
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
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)(this->fields)._._._.data;
  lVar2 = 0;
  PStackX_20.m_ParticleSystem = (ParticleSystem *)0x0;
  apPStack_3[0] = (ParticleSystem *)0x0;
  if (pDVar1 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0) goto code_?;
  iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry(pDVar1,(Object *)StringLiteral_C,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_->klass->rgctx_data[0x21].method);
  if (-1 < iVar4) {
    pDVar5 = (this->fields)._._._.data;
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item(pDVar5,(Object *)StringLiteral_C,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
    pSVar7 = TypeInfo__System__Single;
    if ((pOVar6 != (Object *)0x0) && (lVar2 = FUN_?(pOVar6,TypeInfo__System__Single), lVar2 == 0)) {
      FUN_?(pOVar6,pSVar7);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar9 = (this->fields).fireObject;
    if ((pFVar9 == (FireObject *)0x0) || (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 == (ParticleSystem *)0x0)) goto code_?;
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
    if (((*(int *)(lVar2 + 0x18) == 0) || (*(uint *)(lVar2 + 0x18) < 2)) || (*(uint *)(lVar2 + 0x18) < 3)) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    CStack_16.b = *(float *)(lVar2 + 0x28);
    CStack_16.g = *(float *)(lVar2 + 0x24);
    CStack_16.r = *(float *)(lVar2 + 0x20);
    CStack_16.a = 1.0;
    pPVar17 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::ParticleSystem_MinMaxGradient_op_Implicit(aPStack_18,&CStack_16,(MethodInfo *)0x0);
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
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::ParticleSystem_MainModule_set_startColor(&PStackX_20,&PStack_19,(MethodInfo *)0x0);
  }
  pFVar9 = (this->fields).fireObject;
  if ((pFVar9 != (FireObject *)0x0) && (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 != (ParticleSystem *)0x0)) {
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
    if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar20 = func_?(&UNK_?);
      FUN_?(uVar20,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pcRam_? = pcVar8;
    fVar21 = (float)(*pcRam_?)(&pPStackX_8);
    MVFire_SetFireHitBoxYOffset(this,-(((fVar21 * 0.625 * 0.5) / 2.5) * 5.0) * 0.04,(MethodInfo *)0x0);
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)(this->fields)._._._.data;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0) {
      iVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry(pDVar1,(Object *)StringLiteral_I,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_->klass->rgctx_data[0x21].method);
      if (-1 < iVar4) {
        pFVar9 = (this->fields).fireObject;
        if ((pFVar9 == (FireObject *)0x0) || (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 == (ParticleSystem *)0x0)) goto code_?;
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
        if ((pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) || (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item(pDVar5,(Object *)StringLiteral_I,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_), pOVar6 == (Object *)0x0)) goto code_?;
        if ((pOVar6->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
          FUN_?(pOVar6,lRam_?);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar22 = *(undefined4 *)&pOVar6[1].klass;
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(apPStack_3,uVar22);
      }
      pFVar9 = (this->fields).fireObject;
      if ((pFVar9 != (FireObject *)0x0) && (pPVar10 = (pFVar9->fields).fireParticleSystem, pPVar10 != (ParticleSystem *)0x0)) {
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
        if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar20 = func_?(&UNK_?);
          FUN_?(uVar20,0);
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pcRam_? = pcVar8;
        fVar21 = (float)(*pcRam_?)(&pPStackX_8);
        bVar15 = cRam_? == '\0';
        (this->fields).damageRadius = fVar21 * 0.625 * 0.5;
        if (bVar15) {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar23 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar23 != (GameSessionData *)0x0) {
          if ((pGVar23->fields).gameMode == 0) {
            this_00 = (this->fields).rangeVis;
            if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
            SphereVolumeIndicator::SphereVolumeIndicator_SetRadius(this_00,(this->fields).damageRadius,(MethodInfo *)0x0);
          }
          fVar24 = ((this->fields).damageRadius / 2.5) * 5.0;
          MVFire_SetFireHitBoxYOffset(this,fVar24 * 0.04,(MethodInfo *)0x0);
          MVFire_UpdateScale(this,fVar24,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CullingSubscriberBase);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pCVar25 = (this->fields)._.cullingSubscriberBase;
          if (pCVar25 != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy(pCVar25,(MethodInfo *)0x0);
            fVar24 = (this->fields).damageRadius;
            puVar26 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)(&CStack_16,this,(this->klass->vtable).get_WorldPosition_1.method);
            uVar20 = *puVar26;
            fVar27 = *(float *)(puVar26 + 1);
            callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
            FUN_?(callback,this);
            pCVar25 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
            CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar25,callback,(MethodInfo *)0x0);
            CStack_16._0_8_ = uVar20;
            CStack_16.b = fVar27;
            CullingSubscriberBase::CullingSubscriberBase_Setup(pCVar25,fVar24,(Vector3 *)&CStack_16,(MethodInfo *)0x0);
            bVar15 = iRam_? != 0;
            (this->fields)._.cullingSubscriberBase = pCVar25;
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
                pvVar28 = (obj->fields).m_Ptr;
                if (pvVar28 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar20 = func_?(&UNK_?);
                  FUN_?(uVar20,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                fVar24 = (float)(*pcRam_?)(pvVar28,fVar21);
                if (this_01 != (AudioSource *)0x0) {
                  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume(this_01,fVar24,(MethodInfo *)0x0);
                  if (fVar21 < 4.0) {
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
  if ((pFVar1 != (FireObject *)0x0) && (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
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
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(&pPStackX_20,0x41b00000);
    pFVar1 = (this->fields).fireObject;
    if ((pFVar1 != (FireObject *)0x0) && (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
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
      if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18,0x3f19999a);
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar10 = func_?(&UNK_?);
        FUN_?(uVar10,0);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(&pPStackX_18,0x3fcccccd);
      pFVar1 = (this->fields).fireObject;
      if ((pFVar1 != (FireObject *)0x0) && (pPVar3 = (pFVar1->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
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
        pvVar12 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Internal_Create((Keyframe__Array *)0x0,(MethodInfo *)0x0);
        (curve->fields).m_Ptr = pvVar12;
        (curve->fields).m_RequiresNativeCleanup = 1;
        if (pvVar12 != (void *)0x0) {
          pcVar9 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
            uVar10 = func_?(&UNK_?);
            FUN_?(uVar10,0);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pcRam_? = pcVar9;
          (*pcRam_?)(pvVar12,0,0x3ecccccd);
          pvVar12 = (curve->fields).m_Ptr;
          if (pvVar12 != (void *)0x0) {
            pcVar9 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
              uVar10 = func_?(&UNK_?);
              FUN_?(uVar10,0);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pcRam_? = pcVar9;
            (*pcRam_?)(pvVar12,0x3f19999a,0x3f800000);
            pvVar12 = (curve->fields).m_Ptr;
            if (pvVar12 != (void *)0x0) {
              pcVar9 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                uVar10 = func_?(&UNK_?);
                FUN_?(uVar10,0);
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pcRam_? = pcVar9;
              (*pcRam_?)(pvVar12,0x3f800000,0x3dcccccd);
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxCurve::ParticleSystem_MinMaxCurve__ctor_1(&PStack_2,1.0,curve,(MethodInfo *)0x0);
              PStack_13.m_Mode = PStack_2.m_Mode;
              PStack_13.m_CurveMultiplier = PStack_2.m_CurveMultiplier;
              PStack_13.m_CurveMin = PStack_2.m_CurveMin;
              PStack_13.m_CurveMax = PStack_2.m_CurveMax;
              PStack_13.m_ConstantMin = PStack_2.m_ConstantMin;
              PStack_13.m_ConstantMax = PStack_2.m_ConstantMax;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+SizeOverLifetimeModule::ParticleSystem_SizeOverLifetimeModule_set_size(&PStack_11,&PStack_13,(MethodInfo *)0x0);
              pFVar1 = (this->fields).fireObject;
              if ((pFVar1 != (FireObject *)0x0) && (pPStack_14 = (pFVar1->fields).fireParticleSystem, pPStack_14 != (ParticleSystem *)0x0)) {
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
                if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                  uVar10 = func_?(&UNK_?);
                  FUN_?(uVar10,0);
                  pcVar9 = (code *)swi(3);
                  (*pcVar9)();
                  return;
                }
                pcRam_? = pcVar9;
                (*pcRam_?)(&pPStack_14,0x3f800000);
                return;
              }
              goto code_?;
            }
          }
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)curve,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVFire::MVFire_ToggleEmitter(MVFire *this,bool activeFlag,MethodInfo *method)

{
  puVar1 = (ulonglong *)CONCAT71(in_register_00000011,activeFlag);
  pFVar2 = (this->fields).fireObject;
  if ((pFVar2 != (FireObject *)0x0) && (pPVar3 = (pFVar2->fields).fireParticleSystem, pPVar3 != (ParticleSystem *)0x0)) {
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
    if ((pcRam_? == (code *)0x0) && (pcVar7 = (code *)FUN_?(&UNK_?,puVar1,method), pcVar7 == (code *)0x0)) {
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
      if ((pFVar2 != (FireObject *)0x0) && (pAVar9 = (pFVar2->fields).audioSource, pAVar9 != (AudioSource *)0x0)) {
        bVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying(pAVar9,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          return;
        }
        pFVar2 = (this->fields).fireObject;
        if ((pFVar2 != (FireObject *)0x0) && (pAVar9 = (pFVar2->fields).audioSource, pAVar9 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1(pAVar9,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if ((pFVar2 != (FireObject *)0x0) && (pAVar9 = (pFVar2->fields).audioSource, pAVar9 != (AudioSource *)0x0)) {
      bVar10 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying(pAVar9,(MethodInfo *)0x0);
      if (bVar10 == 0) {
        pFVar2 = (this->fields).fireObject;
        if ((pFVar2 == (FireObject *)0x0) || (pAVar9 = (pFVar2->fields).audioSource, pAVar9 == (AudioSource *)0x0)) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1(pAVar9,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::MVFire::MVFire_TriggerAreaEnter(MVFire *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).woList;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((e == (TriggerEventArgs *)0x0) || (this_00 == (MVWorldObjectClientManager *)0x0)) || (pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0), pMVar3 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Add_MVWorldObjectClient_, pLVar1 == (List_1_MVWorldObjectClient_ *)0x0)) {
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
    FUN_?(pLVar1,uVar7 + 1,(pMVar3->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy,pMVar5,unaff_RDI);
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

void Assembly-CSharp.dll::MVFire::MVFire_TriggerAreaExit(MVFire *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

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
    value = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    pMVar1 = MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Remove_MVWorldObjectClient_;
    if (this_00 != (List_1_MVWorldObjectClient_ *)0x0) {
      index = mscorlib.dll::System::Array::Array_IndexOf_69((Object__Array *)(this_00->fields)._items,(Object *)value,0,(this_00->fields)._size,(MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Remove_MVWorldObjectClient_->klass->rgctx_data[0x17].method)->klass->rgctx_data[0x27].method);
      if (index < 0) {
        return;
      }
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__RemoveAt((List_1_System_Object_ *)this_00,index,pMVar1->klass->rgctx_data[0x2b].method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateDamageRadius(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateDamageRadius(MVFire *this,float intensity,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).damageRadius = intensity * 0.625 * 0.5;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 != (GameSessionData *)0x0) {
    if ((pGVar2->fields).gameMode != 0) {
      return;
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
      iVar6 = (pSVar3->fields).circleSergmentCount;
      fVar7 = 0.0;
      uStack_8 = 0;
      uStack_9 = 0x3f800000;
      fVar10 = 0.0;
      uStack_11 = 0;
      uStack_12 = 0;
      pcVar13 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
        uVar14 = func_?(&UNK_?);
        FUN_?(uVar14,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      pcRam_? = pcVar13;
      (*pcRam_?)(360.0 / (float)iVar6,&uStack_8);
      iVar6 = (pSVar3->fields).circleSergmentCount + 1;
      positions = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,iVar6);
      uVar15 = 0;
      lVar16 = (longlong)iVar6;
      if (0 < iVar6) {
        pVVar17 = positions->vector;
        fVar18 = (uStack_11._4_4_ + uStack_11._4_4_) * (float)uStack_11;
        fVar19 = ((float)uStack_12 + (float)uStack_12) * uStack_11._4_4_;
        fVar20 = (uStack_11._4_4_ + uStack_11._4_4_) * uStack_11._4_4_;
        fVar21 = ((float)uStack_12 + (float)uStack_12) * (float)uStack_12;
        fVar22 = ((float)uStack_11 + (float)uStack_11) * (float)uStack_11;
        fVar23 = ((float)uStack_12 + (float)uStack_12) * (float)uStack_11;
        fVar24 = (uStack_11._4_4_ + uStack_11._4_4_) * uStack_12._4_4_;
        fVar25 = ((float)uStack_12 + (float)uStack_12) * uStack_12._4_4_;
        fVar26 = ((float)uStack_11 + (float)uStack_11) * uStack_12._4_4_;
        uVar27 = uVar15;
        uVar28 = uVar15;
        fVar29 = fVar4;
        do {
          fVar30 = fVar7 * (fVar25 + fVar18);
          fVar31 = fVar7 * (fVar23 - fVar24);
          fVar7 = fVar29 * (fVar18 - fVar25) + fVar7 * (1.0 - (fVar21 + fVar20)) + fVar10 * (fVar24 + fVar23);
          fVar32 = fVar10 * (fVar19 - fVar26);
          fVar10 = fVar31 + fVar29 * (fVar26 + fVar19) + fVar10 * (1.0 - (fVar20 + fVar22));
          fVar29 = fVar30 + fVar29 * (1.0 - (fVar21 + fVar22)) + fVar32;
          if (positions == (Vector3__Array *)0x0) goto DAT_?;
          if ((uint)positions->max_length <= (uint)uVar27) goto code_?;
          uVar27 = (ulonglong)((uint)uVar27 + 1);
          uVar28 = uVar28 + 1;
          pVVar17->x = fVar7;
          pVVar17->y = fVar29;
          pVVar17->z = fVar10;
          pVVar17 = pVVar17 + 1;
        } while ((longlong)uVar28 < lVar16);
      }
      pLVar33 = (pSVar3->fields).rangeIndicatorXY;
      if (pLVar33 != (LineRenderer *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar34 = (pLVar33->fields)._._._.m_CachedPtr;
        if (pvVar34 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar33,(MethodInfo *)0x0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcVar13 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
          uVar14 = func_?(&UNK_?);
          FUN_?(uVar14,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        pcRam_? = pcVar13;
        (*pcRam_?)(pvVar34,iVar6);
        pLVar33 = (pSVar3->fields).rangeIndicatorXY;
        if (pLVar33 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions(pLVar33,positions,(MethodInfo *)0x0);
          iVar35 = (pSVar3->fields).circleSergmentCount;
          uStack_8 = 0x3f800000;
          uStack_9 = 0;
          uStack_11 = 0;
          uStack_12 = 0;
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar14 = func_?(&UNK_?);
            FUN_?(uVar14,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
          (*pcRam_?)(360.0 / (float)iVar35,&uStack_8);
          if (0 < iVar6) {
            pVVar17 = positions->vector;
            uVar27 = uVar15;
            uVar28 = uVar15;
            do {
              if (positions == (Vector3__Array *)0x0) goto DAT_?;
              uVar36 = (uint)uVar27;
              if (((uint)positions->max_length <= uVar36) || (pVVar17->z = pVVar17->x, (uint)positions->max_length <= uVar36)) goto code_?;
              pVVar17->x = 0.0;
              uVar27 = (ulonglong)(uVar36 + 1);
              pVVar17 = pVVar17 + 1;
              uVar28 = uVar28 + 1;
            } while ((longlong)uVar28 < lVar16);
          }
          pLVar33 = (pSVar3->fields).rangeIndicatorYZ;
          if (pLVar33 != (LineRenderer *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar34 = (pLVar33->fields)._._._.m_CachedPtr;
            if (pvVar34 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar33,(MethodInfo *)0x0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcVar13 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
              uVar14 = func_?(&UNK_?);
              FUN_?(uVar14,0);
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            pcRam_? = pcVar13;
            (*pcRam_?)(pvVar34,iVar6);
            pLVar33 = (pSVar3->fields).rangeIndicatorYZ;
            if (pLVar33 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions(pLVar33,positions,(MethodInfo *)0x0);
              iVar35 = (pSVar3->fields).circleSergmentCount;
              uStack_8 = 0x3f80000000000000;
              uStack_9 = 0;
              uStack_11 = 0;
              uStack_12 = 0;
              pcVar13 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                uVar14 = func_?(&UNK_?);
                FUN_?(uVar14,0);
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              pcRam_? = pcVar13;
              (*pcRam_?)(360.0 / (float)iVar35,&uStack_8);
              if (0 < iVar6) {
                pfVar37 = &positions->vector[0].y;
                uVar27 = uVar15;
                do {
                  if (positions == (Vector3__Array *)0x0) goto DAT_?;
                  uVar36 = (uint)uVar15;
                  if (((uint)positions->max_length <= uVar36) || (((Vector3 *)(pfVar37 + -1))->x = *pfVar37, (uint)positions->max_length <= uVar36)) {
code_?:
                    FUN_?();
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  *pfVar37 = 0.0;
                  uVar15 = (ulonglong)(uVar36 + 1);
                  pfVar37 = pfVar37 + 3;
                  uVar27 = uVar27 + 1;
                } while ((longlong)uVar27 < lVar16);
              }
              pLVar33 = (pSVar3->fields).rangeIndicatorZX;
              if (pLVar33 != (LineRenderer *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar34 = (pLVar33->fields)._._._.m_CachedPtr;
                if (pvVar34 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar33,(MethodInfo *)0x0);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pcVar13 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
                  uVar14 = func_?(&UNK_?);
                  FUN_?(uVar14,0);
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                pcRam_? = pcVar13;
                (*pcRam_?)(pvVar34,iVar6);
                pLVar33 = (pSVar3->fields).rangeIndicatorZX;
                if (pLVar33 != (LineRenderer *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions(pLVar33,positions,(MethodInfo *)0x0);
                  this_00 = (pSVar3->fields).materialCopy;
                  fVar7 = (pSVar3->fields).lineDotDensity;
                  if (this_00 != (Material *)0x0) {
                    name = UnityEngine.CoreModule.dll::UnityEngine::Shader::Shader_PropertyToID(StringLiteral__MainTex,(MethodInfo *)0x0);
                    scale.y = 1.0;
                    scale.x = fVar4 * fVar7;
                    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScaleImpl(this_00,name,scale,(MethodInfo *)0x0);
                    pLVar33 = (pSVar3->fields).rangeIndicatorXY;
                    if (pLVar33 != (LineRenderer *)0x0) {
                      fVar4 = (pSVar3->fields).lineWidth;
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth(pLVar33,fVar4,(MethodInfo *)0x0);
                      pLVar33 = (pSVar3->fields).rangeIndicatorXY;
                      if (pLVar33 != (LineRenderer *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth(pLVar33,fVar4,(MethodInfo *)0x0);
                        pLVar33 = (pSVar3->fields).rangeIndicatorYZ;
                        if (pLVar33 != (LineRenderer *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth(pLVar33,fVar4,(MethodInfo *)0x0);
                          pLVar33 = (pSVar3->fields).rangeIndicatorYZ;
                          if (pLVar33 != (LineRenderer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth(pLVar33,fVar4,(MethodInfo *)0x0);
                            pLVar33 = (pSVar3->fields).rangeIndicatorZX;
                            if (pLVar33 != (LineRenderer *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth(pLVar33,fVar4,(MethodInfo *)0x0);
                              pLVar33 = (pSVar3->fields).rangeIndicatorZX;
                              if (pLVar33 != (LineRenderer *)0x0) {
                                if (cRam_? == '\0') {
                                  FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::LineRenderer>_UnityEngine__LineRenderer_);
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                if (pLVar33 == (LineRenderer *)0x0) {
                                  FUN_?();
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                pvVar34 = (pLVar33->fields)._._._.m_CachedPtr;
                                if (pvVar34 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pLVar33,(MethodInfo *)0x0);
                                  pcVar13 = (code *)swi(3);
                                  (*pcVar13)();
                                  return;
                                }
                                pcVar13 = pcRam_?;
                                if (pcRam_? == (code *)0x0) {
                                  pcVar13 = (code *)FUN_?(&UNK_?);
                                  if (pcVar13 == (code *)0x0) {
                                    uVar14 = func_?(&UNK_?);
                                    FUN_?(uVar14,0);
                                    pcVar13 = (code *)swi(3);
                                    (*pcVar13)();
                                    return;
                                  }
                                }
                                pcRam_? = pcVar13;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                                (*pcRam_?)(pvVar34);
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
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateScale(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateScale(MVFire *this,float scale,MethodInfo *method)

{
  pFVar1 = (this->fields).fireObject;
  if (((pFVar1 == (FireObject *)0x0) || (pTVar2 = (pFVar1->fields).triggerBoxEvents, pTVar2 == (TriggerBoxEvents *)0x0)) || (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 == (Transform *)0x0)) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_5 = 0;
  fStack_6 = 0.0;
  pvVar7 = (pTVar3->fields)._._.m_CachedPtr;
  if (pvVar7 != (void *)0x0) {
    pcVar4 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pcRam_? = pcVar4;
    (*pcRam_?)(pvVar7);
    pFVar1 = (this->fields).fireObject;
    if (((pFVar1 != (FireObject *)0x0) && (pTVar2 = (pFVar1->fields).triggerBoxEvents, pTVar2 != (TriggerBoxEvents *)0x0)) && (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
      uStack_5 = CONCAT44(scale,scale);
      fStack_6 = scale;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar7 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar7 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
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
  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateSoundVolume(Single) */

void Assembly-CSharp.dll::MVFire::MVFire_UpdateSoundVolume(MVFire *this,float intensity,MethodInfo *method)

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
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?,in_RDX,method,in_R9,uVar2,uVar3), pcVar5 == (code *)0x0)) {
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
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::AudioSource>_UnityEngine__AudioSource_,uVar6,0,in_R9,uVar2,uVar3,unaff_RBX);
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
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
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


/* MVFire(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVFire::MVFire__ctor(MVFire *this,Dictionary_2_System_Object_System_Object_ *data,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

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
  this_01 = (List_1_MVWorldObjectClient_ *)FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
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
    MVLogicObject::MVLogicObject__ctor((MVLogicObject *)this,data,(pPVar6->fields).mvFirePrefab,worldObjects,(MethodInfo *)0x0);
    piVar7 = &(this->fields)._._.interactionFlags;
    *piVar7 = *piVar7 | 0x18000;
    pFVar8 = (FireObject *)(this->fields)._._.component;
    if (pFVar8 == (FireObject *)0x0) {
      (this->fields).fireObject = (FireObject *)0x0;
    }
    else {
      bVar9 = (TypeInfo__FireObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pFVar8->klass)->_1).naturalAligment < bVar9) || ((((ObjectPrefab__Class *)pFVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] != (Il2CppClass *)TypeInfo__FireObject)) {
        FUN_?(pFVar8);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      (this->fields).fireObject = pFVar8;
      bVar9 = (TypeInfo__FireObject->_1).naturalAligment;
      if (((((ObjectPrefab__Class *)pFVar8->klass)->_1).naturalAligment < bVar9) || ((((ObjectPrefab__Class *)pFVar8->klass)->_1).typeHierarchy[(ulonglong)bVar9 - 1] != (Il2CppClass *)TypeInfo__FireObject)) {
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
      if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      fVar12 = (float)(*pcRam_?)(0xbe4ccccd,0x3e4ccccd);
      if (this_00 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch(this_00,fVar12 + 1.0,(MethodInfo *)0x0);
        pFVar8 = (this->fields).fireObject;
        if (pFVar8 != (FireObject *)0x0) {
          pTVar13 = (pFVar8->fields).triggerBoxEvents;
          pUVar14 = (UnityAction_2_System_Object_System_Object_ *)FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor(pUVar14,(Object *)this,MethodInfo__MVFire__TriggerAreaEnter_System__Object__TriggerEventArgs_,(MethodInfo *)0x0);
          if (pTVar13 != (TriggerBoxEvents *)0x0) {
            TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter(pTVar13,(EventHandler_1_TriggerEventArgs_ *)pUVar14,(MethodInfo *)0x0);
            pFVar8 = (this->fields).fireObject;
            if (pFVar8 != (FireObject *)0x0) {
              pTVar13 = (pFVar8->fields).triggerBoxEvents;
              pUVar14 = (UnityAction_2_System_Object_System_Object_ *)FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor(pUVar14,(Object *)this,MethodInfo__MVFire__TriggerAreaExit_System__Object__TriggerEventArgs_,(MethodInfo *)0x0);
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
                  pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)a,(Delegate *)pUVar14,(MethodInfo *)0x0);
                  pEVar17 = TypeInfo__System__EventHandler<TriggerEventArgs>;
                  if (pDVar16 == (Delegate *)0x0) {
                    pEVar18 = (EventHandler_1_TriggerEventArgs_ *)0x0;
                  }
                  else {
                    pEVar18 = (EventHandler_1_TriggerEventArgs_ *)FUN_?(pDVar16,TypeInfo__System__EventHandler<TriggerEventArgs>);
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

Vector3 * Assembly-CSharp.dll::MVFire::MVFire_get_InputConnectorOffset(Vector3 *__return_storage_ptr__,MVFire *this,MethodInfo *method)

{
  __return_storage_ptr__->x = -1.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}

