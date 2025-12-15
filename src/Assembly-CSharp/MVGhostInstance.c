
/* Void ApplyGameEffect(MVWorldObjectClient, InteractionDataHandlerBase) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_ApplyGameEffect
               (MVGhostInstance *this,MVWorldObjectClient *targetAvatar,
               InteractionDataHandlerBase *interactionHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameEffect_INSTANT_DEATH_out_com);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).gameEffect;
  if (iVar1 == 0) {
    bVar2 = MVGhostInstance_IsTouchingAvatar(this,targetAvatar,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = (this->fields).damagePerSecond;
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar6 = (float)(*pcRam_?)();
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      aIStack_7[0].interactionType = 0;
      aIStack_7[0].playerKilledByType = 0;
      aIStack_7[0]._18_2_ = 0;
      impulse = &IStack_8;
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      aIStack_7[0].damage = 0.0;
      aIStack_7[0].impulse.x = 0.0;
      aIStack_7[0].impulse.y = 0.0;
      aIStack_7[0].impulse.z = 0.0;
      IStack_8.damage = (pVVar9->zeroVector).x;
      IStack_8.impulse.x = (pVVar9->zeroVector).y;
      IStack_8.impulse.y = (pVVar9->zeroVector).z;
      MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                (aIStack_7,
                 (InteractionPackageType__Enum)CONCAT71((int7)((ulonglong)targetAvatar >> 8),0xd),
                 fVar6 * fVar3,(Vector3 *)impulse,
                 (PlayerKilledByType__Enum)
                 CONCAT71((int7)((ulonglong)in_stack_10 >> 8),0xf),(MethodInfo *)0x0);
      if (interactionHandler == (InteractionDataHandlerBase *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      IStack_8.interactionType = aIStack_7[0].interactionType;
      IStack_8.playerKilledByType = aIStack_7[0].playerKilledByType;
      IStack_8._18_2_ = aIStack_7[0]._18_2_;
      IStack_8.damage = aIStack_7[0].damage;
      IStack_8.impulse.x = aIStack_7[0].impulse.x;
      IStack_8.impulse.y = aIStack_7[0].impulse.y;
      IStack_8.impulse.z = aIStack_7[0].impulse.z;
      (*(interactionHandler->klass->vtable).__unknown_1.methodPtr)
                (interactionHandler,0,&IStack_8,CONCAT71((int7)((ulonglong)impulse >> 8),1),
                 (interactionHandler->klass->vtable).__unknown_1.method);
    }
  }
  else if (iVar1 == 1) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_GameEffect_INSTANT_DEATH_out_com,(MethodInfo *)0x0);
  }
  return;
}


/* Bounds ComputeLocalBounds(Vector3, MeshRenderer[]) */

Bounds * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_ComputeLocalBounds
                   (Bounds *__return_storage_ptr__,Vector3 *origin,
                   MeshRenderer__Array *meshRenderers,MethodInfo *method)

{
  method_00 = meshRenderers;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Mesh_filters_required_for_correc);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = 0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).x;
  fVar4 = (pVVar2->zeroVector).y;
  fVar5 = (pVVar2->zeroVector).z;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar6 = _UNK_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  aVStack_7[0].x = (pVVar2->zeroVector).x;
  aVStack_7[0].y = (pVVar2->zeroVector).y;
  fVar8 = (pVVar2->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = fVar3;
  (__return_storage_ptr__->m_Center).y = fVar4;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = aVStack_7[0].x * fVar6;
  (__return_storage_ptr__->m_Extents).y = aVStack_7[0].y * fVar6;
  (__return_storage_ptr__->m_Extents).z = fVar8 * fVar6;
  if (meshRenderers == (MeshRenderer__Array *)0x0) {
code_?:
    FUN_?();
    pcVar9 = (code *)swi(3);
    pBVar10 = (Bounds *)(*pcVar9)();
    return pBVar10;
  }
  if (meshRenderers->max_length == 0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Mesh_filters_required_for_correc,(MethodInfo *)0x0);
  }
  else {
    if ((int)meshRenderers->max_length == 0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      pBVar10 = (Bounds *)(*pcVar9)();
      return pBVar10;
    }
    pMVar11 = meshRenderers->vector[0];
    if (pMVar11 == (MeshRenderer *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_12 = 0;
    uStack_13 = 0;
    uStack_14 = 0;
    pvVar15 = (pMVar11->fields)._._._.m_CachedPtr;
    if (pvVar15 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar11,(MethodInfo *)0x0);
      pcVar9 = (code *)swi(3);
      pBVar10 = (Bounds *)(*pcVar9)();
      return pBVar10;
    }
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar9 = (code *)swi(3);
      pBVar10 = (Bounds *)(*pcVar9)();
      return pBVar10;
    }
    pcRam_? = pcVar9;
    (*pcRam_?)(pvVar15);
    fVar5 = (float)((ulonglong)uStack_13 >> 0x20);
    aVStack_7[0].x = origin->x;
    aVStack_7[0].y = origin->y;
    ppMVar17 = meshRenderers->vector;
    fVar3 = (float)uStack_13 - origin->z;
    (__return_storage_ptr__->m_Center).x = (float)uStack_12 - aVStack_7[0].x;
    (__return_storage_ptr__->m_Center).y = uStack_12._4_4_ - aVStack_7[0].y;
    (__return_storage_ptr__->m_Center).z = fVar3;
    (__return_storage_ptr__->m_Extents).x = fVar5;
    uStack_18 = CONCAT44(uStack_12._4_4_ - aVStack_7[0].y,(float)uStack_12 - aVStack_7[0].x);
    uStack_19 = CONCAT44(fVar5,fVar3);
    (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_14;
    (__return_storage_ptr__->m_Extents).z = (float)uStack_14._4_4_;
    for (uVar20 = 1; ppMVar17 = ppMVar17 + 1, (int)uVar20 < (int)meshRenderers->max_length;
        uVar20 = uVar20 + 1) {
      if ((uint)meshRenderers->max_length <= uVar20) goto code_?;
      pMVar11 = *ppMVar17;
      if (pMVar11 == (MeshRenderer *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_18 = 0;
      uStack_19 = 0;
      uStack_21 = 0;
      pvVar15 = (pMVar11->fields)._._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar11,(MethodInfo *)0x0);
        pcVar9 = (code *)swi(3);
        pBVar10 = (Bounds *)(*pcVar9)();
        return pBVar10;
      }
      pcVar9 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar9 = (code *)swi(3);
        pBVar10 = (Bounds *)(*pcVar9)();
        return pBVar10;
      }
      pcRam_? = pcVar9;
      (*pcRam_?)(pvVar15,&uStack_18);
      uVar22 = origin->x;
      uVar23 = origin->y;
      fVar24 = (float)uStack_18 - (float)uVar22;
      fVar8 = (float)uStack_19 - origin->z;
      fVar6 = uStack_18._4_4_ - (float)uVar23;
      fVar5 = uStack_19._4_4_;
      fVar3 = (float)uStack_21;
      fVar4 = uStack_21._4_4_;
      VStack_25.z = fVar8 - uStack_21._4_4_;
      VStack_25.y = fVar6 - (float)uStack_21;
      VStack_25.x = fVar24 - uStack_19._4_4_;
      pBVar10 = __return_storage_ptr__;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                (__return_storage_ptr__,&VStack_25,(MethodInfo *)method_00);
      aVStack_7[0].z = fVar4 + fVar8;
      aVStack_7[0].y = fVar3 + fVar6;
      aVStack_7[0].x = fVar5 + fVar24;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                (pBVar10,aVStack_7,(MethodInfo *)method_00);
    }
  }
  return __return_storage_ptr__;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_DeSelect
               (MVGhostInstance *this,MethodInfo *method)

{
  (*(this->klass->vtable).RemoveSelectionBox.methodPtr)
            (this,(this->klass->vtable).RemoveSelectionBox.method);
  if ((this->fields)._.selected != 0) {
    pMVar1 = this->klass;
    (this->fields)._.selected = 0;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar1->vtable).OnSelectedChanged.methodPtr)
              (this,0,(pMVar1->vtable).OnSelectedChanged.method);
    return;
  }
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_Destroy
               (MVGhostInstance *this,MethodInfo *method)

{
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
  UpdateController::UpdateController_RemoveFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._GameStateController_k__BackingField,
     this_00 != (MVGameModeChangeNotifier *)0x0)) {
    MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
              (this_00,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy
                ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
      bVar3 = iRam_? != 0;
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      if (bVar3) {
        uVar4 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
        puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar6 = *puVar5;
          LOCK();
          uVar7 = *puVar5;
          if (uVar6 == uVar7) {
            *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (uVar6 != uVar7);
      }
    }
    return;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void GameStateChanged(UpdateCondition) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GameStateChanged
               (MVGhostInstance *this,UpdateCondition__Enum condition,MethodInfo *method)

{
  if (condition == UpdateCondition__Enum_EDITOR) {
    iVar1 = 0;
  }
  else {
    this_00 = (this->fields).smoothPhysicsMovement;
    if (this_00 == (SmoothPhysicsMovement *)0x0) goto code_?;
    SmoothPhysicsMovement::SmoothPhysicsMovement_Reset(this_00,(MethodInfo *)0x0);
    pTVar2 = (this->fields).moveTarget;
    pVVar3 = MVGhostInstance_GetTargetPos(&VStack_4,this,1,(MethodInfo *)0x0);
    if (pTVar2 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uStack_6._0_4_ = pVVar3->x;
    uStack_6._4_4_ = pVVar3->y;
    fStack_7 = pVVar3->z;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar8);
    pGVar10 = (this->fields)._ghostInstance;
    if (pGVar10 == (GameObject *)0x0) goto code_?;
    obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                    (pGVar10,(MethodInfo *)0x0);
    pTVar2 = (this->fields).moveTarget;
    if (pTVar2 == (Transform *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (pTVar2->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar8);
    if (obj == (Transform *)0x0) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    VStack_4.x = 0.0;
    VStack_4.y = 0.0;
    VStack_4.z = 0.0;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar8 = (obj->fields)._._.m_CachedPtr;
    if (pvVar8 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    (*pcRam_?)(pvVar8);
    iVar1 = 1;
  }
  (this->fields).ghostMode = iVar1;
  pGVar10 = (this->fields)._ghostInstance;
  if (pGVar10 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar10,0,(MethodInfo *)0x0);
    pGVar10 = (this->fields)._ghostMarker;
    if (pGVar10 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar10,0,(MethodInfo *)0x0);
      if ((this->fields).isLODVisible != 0) {
        if ((this->fields).ghostMode == 1) {
          pGVar10 = (this->fields)._ghostInstance;
          if (pGVar10 == (GameObject *)0x0) goto code_?;
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar10,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            pGVar10 = (this->fields)._ghostInstance;
            if (pGVar10 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar10,1,(MethodInfo *)0x0);
          }
        }
        else if ((this->fields).ghostMode == 0) {
          pGVar10 = (this->fields)._ghostMarker;
          if (pGVar10 == (GameObject *)0x0) goto code_?;
          bVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar10,(MethodInfo *)0x0);
          if (bVar11 == 0) {
            pGVar10 = (this->fields)._ghostMarker;
            if (pGVar10 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar10,1,(MethodInfo *)0x0);
            puVar12 = (undefined8 *)
                     (*(this->klass->vtable).get_WorldPosition_1.methodPtr)(&uStack_6,this);
            VStack_4._0_8_ = *puVar12;
            VStack_4.z = *(float *)(puVar12 + 1);
            MVGhostInstance_UpdateMarkerPosition(this,&VStack_4,(MethodInfo *)0x0);
          }
        }
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


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGhostInstance *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  uVar2 = *(undefined8 *)&(this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.y;
  fVar4 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  *(undefined8 *)&(__return_storage_ptr__->m_Center).z = uVar2;
  (__return_storage_ptr__->m_Extents).y = fVar3;
  (__return_storage_ptr__->m_Extents).z = fVar4;
  return __return_storage_ptr__;
}


/* Single GetSpeed(Boolean) */

float Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GetSpeed
                (MVGhostInstance *this,bool patrolling,MethodInfo *method)

{
  if (patrolling == 0) {
    return (this->fields).speed;
  }
  return (this->fields).patrolSpeed;
}


/* Vector3 GetTacticalPos() */

Vector3 * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GetTacticalPos
                    (Vector3 *__return_storage_ptr__,MVGhostInstance *this,MethodInfo *method)

{
  obj = (this->fields).moveTarget;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  uVar7 = (this->fields).oscilPos.x;
  uVar8 = (this->fields).oscilPos.y;
  fVar9 = (this->fields).oscilPos.z;
  __return_storage_ptr__->x = (float)uStack_3 - (float)uVar7;
  __return_storage_ptr__->y = uStack_3._4_4_ - (float)uVar8;
  __return_storage_ptr__->z = fStack_4 - fVar9;
  return __return_storage_ptr__;
}


/* Vector3 GetTargetPos(Boolean) */

Vector3 * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GetTargetPos
                    (Vector3 *__return_storage_ptr__,MVGhostInstance *this,bool patrolling,
                    MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
     pMVar2 == (MoveableController *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  fVar5 = (pMVar2->fields).time;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar6->upVector).x;
  uVar8 = (pVVar6->upVector).y;
  fVar9 = (pVVar6->upVector).z;
  puVar10 = (undefined8 *)
           (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                     (auStack_11,this,(this->klass->vtable).get_WorldPosition_1.method);
  uStack_12 = *puVar10;
  fVar13 = (float)uStack_12;
  uVar14 = (ulonglong)uStack_12 >> 0x20;
  fVar15 = *(float *)(puVar10 + 1);
  fVar16 = (this->fields).distance;
  lVar17 = 0x14c;
  lVar18 = 0x14c;
  if (patrolling != 0) {
    lVar18 = 0x174;
  }
  fVar19 = *(float *)((longlong)&this->klass + lVar18);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar20 = _UNK_?;
  fVar21 = fVar5 * _UNK_?;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_12._0_4_ = (pVVar6->upVector).x;
  uStack_12._4_4_ = (pVVar6->upVector).y;
  fStack_22 = (pVVar6->upVector).z;
  uStack_23 = 0;
  uStack_24 = 0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar25 = func_?(&UNK_?);
    FUN_?(uVar25,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)((fVar21 * fVar19) / fVar16,&uStack_12,&uStack_23);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar16 = (this->fields).distance;
  pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_12._0_4_ = (pVVar6->forwardVector).x;
  uStack_12._4_4_ = (pVVar6->forwardVector).y;
  fVar19 = (pVVar6->forwardVector).z;
  if (patrolling != 0) {
    lVar17 = 0x174;
  }
  fVar5 = (float)FUN_?((fVar5 * *(float *)((longlong)&this->klass + lVar17)) /
                                (fVar16 * fVar20));
  fVar26 = (float)uStack_12 * fVar16 * fVar5;
  fVar27 = uStack_12._4_4_ * fVar16 * fVar5;
  fVar5 = fVar19 * fVar16 * fVar5;
  fVar20 = (float)uStack_24 + (float)uStack_24;
  fVar21 = uStack_23._4_4_ + uStack_23._4_4_;
  fVar19 = ((float)uStack_23 + (float)uStack_23) * (float)uStack_23;
  fVar28 = ((float)uStack_23 + (float)uStack_23) * uStack_24._4_4_;
  fVar16 = _UNK_? - (fVar20 * (float)uStack_24 + fVar19);
  fVar19 = _UNK_? - (fVar21 * uStack_23._4_4_ + fVar19);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar20 * (float)uStack_24 + fVar21 * uStack_23._4_4_)) * fVar26 +
       (fVar21 * (float)uStack_23 - fVar20 * uStack_24._4_4_) * fVar27 +
       (fVar21 * uStack_24._4_4_ + fVar20 * (float)uStack_23) * fVar5 + (float)uVar7 + fVar13;
  __return_storage_ptr__->y =
       fVar16 * fVar27 + (fVar20 * uStack_24._4_4_ + fVar21 * (float)uStack_23) * fVar26 +
       (fVar20 * uStack_23._4_4_ - fVar28) * fVar5 + (float)uVar8 + (float)uVar14;
  __return_storage_ptr__->z =
       (fVar28 + fVar20 * uStack_23._4_4_) * fVar27 +
       (fVar20 * (float)uStack_23 - fVar21 * uStack_24._4_4_) * fVar26 + fVar19 * fVar5 +
       fVar9 + fVar15;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_Initialize
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                 );
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
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._._.previewOwnerProfileId != 0) {
    (*(this->klass->vtable).AddPreviewBox.methodPtr)(this);
    piVar1 = &(this->fields)._.interactionFlags;
    *piVar1 = *piVar1 | 0x20000;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar2 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar2->fields).gameMode == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar3 == (PrefabPool *)0x0) goto code_?;
    pSVar4 = (pPVar3->fields).rangeVisualizationObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pSVar4 = (SphereVolumeIndicator *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pSVar4,
                         SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                        );
    bVar5 = iRam_? != 0;
    (this->fields).rangeVis = pSVar4;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).rangeVis >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pSVar4 = (this->fields).rangeVis;
    if (pSVar4 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar4,(MethodInfo *)0x0);
    pGVar11 = (this->fields)._.gameObject;
    if ((pGVar11 == (GameObject *)0x0) ||
       (value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar11,(MethodInfo *)0x0), pTVar10 == (Transform *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar10,value,(MethodInfo *)0x0);
    pSVar4 = (this->fields).rangeVis;
    if (pSVar4 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pSVar4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pTVar10 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
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
    pvVar13 = (pTVar10->fields)._._.m_CachedPtr;
    if (pvVar13 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar10,(MethodInfo *)0x0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar14 = func_?(&UNK_?);
      FUN_?(uVar14,0);
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pcRam_? = pcVar12;
    (*pcRam_?)(pvVar13);
    pSVar4 = (this->fields).rangeVis;
    if (pSVar4 == (SphereVolumeIndicator *)0x0) goto code_?;
    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
              (pSVar4,(this->fields).distance,(MethodInfo *)0x0);
  }
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  UpdateController::UpdateController_AddFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20
             ,10,(MethodInfo *)0x0);
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20,10,
             (MethodInfo *)0x0);
  MVGhostInstance_InitializeCommon(this,(MethodInfo *)0x0);
  MVGhostInstance_SetupCulling(this,(MethodInfo *)0x0);
  pGVar11 = (this->fields)._ghostInstance;
  if (pGVar11 != (GameObject *)0x0) {
    pSVar15 = (SmoothPhysicsMovement *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                        (pGVar11,
                         SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                        );
    bVar5 = iRam_? != 0;
    (this->fields).smoothPhysicsMovement = pSVar15;
    if (bVar5) {
      uVar6 = (uint)((ulonglong)&(this->fields).smoothPhysicsMovement >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar5 = uVar8 == *puVar9;
        if (bVar5) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar5);
    }
    pSVar15 = (this->fields).smoothPhysicsMovement;
    if (pSVar15 != (SmoothPhysicsMovement *)0x0) {
      SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                (pSVar15,(this->fields).moveTarget,(this->fields).cullingSubscriberBase,
                 (MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar16 != (MVGameControllerBase *)0x0) &&
          (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
         (this_00 = (pMVar17->fields)._GameStateController_k__BackingField,
         this_00 != (MVGameModeChangeNotifier *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__IGameStateControllerSubscriber,this,0);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar18 = 
        MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
        ;
        this_01 = (List_1_System_Object_ *)(this_00->fields).UpdateList;
        if (this_01 != (List_1_System_Object_ *)0x0) {
          piVar19 = &(this_01->fields)._version;
          *piVar19 = *piVar19 + 1;
          pOVar20 = (this_01->fields)._items;
          if (pOVar20 != (Object__Array *)0x0) {
            uVar6 = (this_01->fields)._size;
            if (uVar6 < (uint)pOVar20->max_length) {
              (this_01->fields)._size = uVar6 + 1;
              FUN_?(pOVar20,(longlong)(int)uVar6,this);
            }
            else {
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__AddWithResize
                        (this_01,(Object *)this,pMVar18->klass->rgctx_data[0xe].method);
            }
            UVar21 = MVGameModeChangeNotifier::MVGameModeChangeNotifier_GetPresentState
                               (this_00,(MethodInfo *)0x0);
            if (this != (MVGhostInstance *)0x0) {
              uVar22 = 0;
              pMVar23 = this->klass;
              uVar24._0_1_ = (pMVar23->_1).rank;
              uVar24._1_1_ = (pMVar23->_1).minimumAlignment;
              if (uVar24 != 0) {
                do {
                  if (pMVar23->interfaceOffsets[uVar22].interfaceType ==
                      (Il2CppClass *)TypeInfo__IGameStateControllerSubscriber) {
                    pVVar25 = &(pMVar23->vtable).Equals + pMVar23->interfaceOffsets[uVar22].offset;
                    goto code_?;
                  }
                  uVar22 = uVar22 + 1;
                } while (uVar22 < uVar24);
              }
              pVVar25 = (VirtualInvokeData *)FUN_?(this);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pVVar25->methodPtr)(this,(ulonglong)UVar21,pVVar25->method,pVVar25->methodPtr);
              return;
            }
          }
        }
        FUN_?();
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_InitializeCommon
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
  ;
  pGVar2 = (this->fields)._ghostInstance;
  if (pGVar2 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                   );
    }
    pMVar3 = (MeshRenderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
    pGVar2 = (this->fields)._.gameObject;
    if ((pGVar2 != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      BStack_4.m_Center.x = 0.0;
      BStack_4.m_Center.y = 0.0;
      BStack_4.m_Center.z = 0.0;
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&BStack_4);
      meshRenderers = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,1);
      if (meshRenderers != (MeshRenderer__Array *)0x0) {
        if ((pMVar3 != (MeshRenderer *)0x0) &&
           (lVar8 = FUN_?(pMVar3,(meshRenderers->klass->_0).element_class), lVar8 == 0))
        {
          uVar7 = FUN_?();
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)meshRenderers->max_length == 0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar9 = iRam_? != 0;
        meshRenderers->vector[0] = pMVar3;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)meshRenderers->vector >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        VStack_14.x = BStack_4.m_Center.x;
        VStack_14.y = BStack_4.m_Center.y;
        VStack_14.z = BStack_4.m_Center.z;
        pBVar15 = MVGhostInstance_ComputeLocalBounds
                            (&BStack_4,&VStack_14,meshRenderers,(MethodInfo *)0x0);
        fVar16 = (pBVar15->m_Center).y;
        uVar7 = *(undefined8 *)&(pBVar15->m_Center).z;
        fVar17 = (pBVar15->m_Extents).y;
        fVar18 = (pBVar15->m_Extents).z;
        (this->fields).localBounds.m_Center.x = (pBVar15->m_Center).x;
        (this->fields).localBounds.m_Center.y = fVar16;
        *(undefined8 *)&(this->fields).localBounds.m_Center.z = uVar7;
        (this->fields).localBounds.m_Extents.y = fVar17;
        (this->fields).localBounds.m_Extents.z = fVar18;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_InitializeInventory
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__MeshRenderer);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = 
  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
  ;
  pGVar2 = (this->fields)._ghostInstance;
  if (pGVar2 != (GameObject *)0x0) {
    if ((
        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?(
                   UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                   );
    }
    pMVar3 = (MeshRenderer *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
              GameObject_GetComponentInChildren_3
                        (pGVar2,0,((pMVar1->field7_0x38).rgctx_data)->method);
    pGVar2 = (this->fields)._.gameObject;
    if ((pGVar2 != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar2,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      BStack_4.m_Center.x = 0.0;
      BStack_4.m_Center.y = 0.0;
      BStack_4.m_Center.z = 0.0;
      pvVar5 = (obj->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar5,&BStack_4);
      meshRenderers = (MeshRenderer__Array *)FUN_?(TypeInfo__UnityEngine__MeshRenderer,1);
      if (meshRenderers != (MeshRenderer__Array *)0x0) {
        if ((pMVar3 != (MeshRenderer *)0x0) &&
           (lVar8 = FUN_?(pMVar3,(meshRenderers->klass->_0).element_class), lVar8 == 0))
        {
          uVar7 = FUN_?();
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)meshRenderers->max_length == 0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar9 = iRam_? != 0;
        meshRenderers->vector[0] = pMVar3;
        if (bVar9) {
          uVar10 = (uint)((ulonglong)meshRenderers->vector >> 0xc);
          puVar11 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar12 = *puVar11;
            LOCK();
            uVar13 = *puVar11;
            if (uVar12 == uVar13) {
              *puVar11 = uVar12 | 1L << (uVar10 & 0x3f);
            }
            UNLOCK();
          } while (uVar12 != uVar13);
        }
        VStack_14.x = BStack_4.m_Center.x;
        VStack_14.y = BStack_4.m_Center.y;
        VStack_14.z = BStack_4.m_Center.z;
        pBVar15 = MVGhostInstance_ComputeLocalBounds
                            (&BStack_4,&VStack_14,meshRenderers,(MethodInfo *)0x0);
        fVar16 = (pBVar15->m_Center).y;
        uVar7 = *(undefined8 *)&(pBVar15->m_Center).z;
        fVar17 = (pBVar15->m_Extents).y;
        fVar18 = (pBVar15->m_Extents).z;
        (this->fields).localBounds.m_Center.x = (pBVar15->m_Center).x;
        (this->fields).localBounds.m_Center.y = fVar16;
        *(undefined8 *)&(this->fields).localBounds.m_Center.z = uVar7;
        (this->fields).localBounds.m_Extents.y = fVar17;
        (this->fields).localBounds.m_Extents.z = fVar18;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean IsTouchingAvatar(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_IsTouchingAvatar
               (MVGhostInstance *this,MVWorldObjectClient *TargetAvatar,MethodInfo *method)

{
  pVVar1 = MVGhostInstance_GetTacticalPos(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  if (TargetAvatar != (MVWorldObjectClient *)0x0) {
    puVar5 = (undefined8 *)
             (*(TargetAvatar->klass->vtable).get_WorldPosition_1.methodPtr)
                       (auStack_6,TargetAvatar,
                        (TargetAvatar->klass->vtable).get_WorldPosition_1.method);
    VStack_2._0_8_ = *puVar5;
    fVar7 = *(float *)(puVar5 + 1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9 = (pVVar8->upVector).x;
    uVar10 = (pVVar8->upVector).y;
    uStack_3._0_4_ = (float)uStack_3 - (VStack_2.x + (float)uVar9);
    uStack_3._4_4_ = uStack_3._4_4_ - (VStack_2.y + (float)uVar10);
    fVar4 = fVar4 - (fVar7 + (pVVar8->upVector).z);
    return uStack_3._4_4_ * uStack_3._4_4_ + (float)uStack_3 * (float)uStack_3 + fVar4 * fVar4 <
           _UNK_?;
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  bVar12 = (*pcVar11)();
  return bVar12;
}


/* Void MoveGhost(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_MoveGhost
               (MVGhostInstance *this,MVWorldObjectClient *TargetAvatar,MethodInfo *method)

{
  auStack_1._4_4_ = 0;
  if (TargetAvatar == (MVWorldObjectClient *)0x0) goto code_?;
  puVar2 = (undefined8 *)
           (*(TargetAvatar->klass->vtable).get_WorldPosition_1.methodPtr)
                     (auStack_1,TargetAvatar,
                      (TargetAvatar->klass->vtable).get_WorldPosition_1.method);
  uStack_3 = *puVar2;
  fVar4 = *(float *)(puVar2 + 1);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_1._0_4_ = (pVVar5->upVector).x;
  auStack_1._4_4_ = (pVVar5->upVector).y;
  fVar4 = fVar4 + (pVVar5->upVector).z;
  fVar6 = (float)uStack_3 + (float)auStack_1._0_4_;
  fVar7 = uStack_3._4_4_ + (float)auStack_1._4_4_;
  uStack_8 = CONCAT44(fVar7,fVar6);
  puVar2 = (undefined8 *)(*(this->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_1,this);
  uStack_3 = *puVar2;
  fVar6 = fVar6 - (float)uStack_3;
  fVar7 = fVar7 - (float)((ulonglong)uStack_3 >> 0x20);
  fVar9 = (this->fields).distance;
  fVar9 = fVar9 * fVar9;
  fVar6 = fVar7 * fVar7 + fVar6 * fVar6 +
           (fVar4 - *(float *)(puVar2 + 1)) * (fVar4 - *(float *)(puVar2 + 1));
  if (fVar9 < fVar6) {
    pVVar10 = MVGhostInstance_GetTargetPos((Vector3 *)auStack_1,this,0,(MethodInfo *)0x0);
    uStack_8._0_4_ = pVVar10->x;
    uStack_8._4_4_ = pVVar10->y;
    fVar4 = pVVar10->z;
  }
  pVVar10 = MVGhostInstance_GetTacticalPos((Vector3 *)auStack_1,this,(MethodInfo *)0x0);
  uVar11 = pVVar10->x;
  uVar12 = pVVar10->y;
  fVar7 = fVar4 - pVVar10->z;
  uVar13._0_4_ = (float)uStack_8 - (float)uVar11;
  uVar13._4_4_ = uStack_8._4_4_ - (float)uVar12;
  uStack_3 = CONCAT44(uVar13._4_4_,(float)uVar13);
  fStack_14 = fVar7;
  fVar15 = (float)FUN_?(&uStack_3);
  if (_UNK_? < fVar15) {
    fVar16 = fVar7 / fVar15;
    uVar17 = CONCAT44(uVar13._4_4_ / fVar15,(float)uVar13 / fVar15);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar17._0_4_ = (pVVar5->zeroVector).x;
    uVar17._4_4_ = (pVVar5->zeroVector).y;
    fVar16 = (pVVar5->zeroVector).z;
  }
  lVar18 = 0x14c;
  if (fVar9 < fVar6) {
    lVar18 = 0x174;
  }
  fVar15 = *(float *)((longlong)&this->klass + lVar18);
  uStack_3._0_4_ = (float)uVar17;
  fVar19 = fVar15 * (float)uStack_3;
  uStack_3._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
  fVar20 = fVar15 * uStack_3._4_4_;
  pcVar21 = pcRam_?;
  uStack_3 = uVar17;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  pcRam_? = pcVar21;
  fVar22 = (float)(*pcRam_?)();
  fVar15 = fVar15 * fVar16 * fVar22;
  uStack_3 = CONCAT44(fVar20 * fVar22,fVar19 * fVar22);
  if (fVar6 <= fVar9) {
code_?:
    pVVar10 = MVGhostInstance_GetTacticalPos((Vector3 *)auStack_23,this,(MethodInfo *)0x0);
    auStack_1._0_4_ = pVVar10->x;
    auStack_1._4_4_ = pVVar10->y;
    fVar4 = pVVar10->z;
    puVar2 = (undefined8 *)
             (*(TargetAvatar->klass->vtable).get_WorldPosition_1.methodPtr)
                       (auStack_23,TargetAvatar,
                        (TargetAvatar->klass->vtable).get_WorldPosition_1.method);
    uStack_8 = *puVar2;
    fVar16 = *(float *)(puVar2 + 1);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar24._0_4_ = (pVVar5->upVector).x;
    uVar24._4_4_ = (pVVar5->upVector).y;
    fVar19 = (float)auStack_1._0_4_ - ((float)uStack_8 + (float)(undefined4)uVar24);
    fVar20 = (float)auStack_1._4_4_ - (uStack_8._4_4_ + (float)uVar24._4_4_);
    fVar4 = fVar4 - (fVar16 + (pVVar5->upVector).z);
    lVar18 = 0x14c;
    if (fVar9 < fVar6) {
      lVar18 = 0x174;
    }
    fVar16 = *(float *)((longlong)&this->klass + lVar18);
    pcVar21 = pcRam_?;
    uStack_8 = uVar24;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pcRam_? = pcVar21;
    fVar22 = (float)(*pcRam_?)();
    if (fVar20 * fVar20 + fVar19 * fVar19 + fVar4 * fVar4 < fVar22 * fVar16)
    goto code_?;
  }
  else {
    pVVar10 = MVGhostInstance_GetTacticalPos((Vector3 *)auStack_1,this,(MethodInfo *)0x0);
    auStack_23._0_4_ = pVVar10->x;
    auStack_23._4_4_ = pVVar10->y;
    fVar20 = (float)auStack_23._4_4_ - uStack_8._4_4_;
    fVar19 = (float)auStack_23._0_4_ - (float)uStack_8;
    fVar4 = pVVar10->z - fVar4;
    fVar16 = (this->fields).patrolSpeed;
    pcVar21 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pcRam_? = pcVar21;
    fVar22 = (float)(*pcRam_?)();
    if (fVar22 * fVar16 <= fVar20 * fVar20 + fVar19 * fVar19 + fVar4 * fVar4)
    goto code_?;
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_3._0_4_ = (pVVar5->zeroVector).x;
    uStack_3._4_4_ = (pVVar5->zeroVector).y;
    fVar15 = (pVVar5->zeroVector).z;
  }
  uStack_8._0_4_ = (this->fields).oscilPos.x;
  uStack_8._4_4_ = (this->fields).oscilPos.y;
  fVar4 = (this->fields).oscilPos.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_1._0_4_ = (pVVar5->upVector).x;
  auStack_1._4_4_ = (pVVar5->upVector).y;
  fVar16 = (pVVar5->upVector).z;
  pcVar21 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
    uVar13 = func_?(&UNK_?);
    FUN_?(uVar13,0);
    pcVar21 = (code *)swi(3);
    (*pcVar21)();
    return;
  }
  pcRam_? = pcVar21;
  auVar25._0_8_ = (*pcRam_?)();
  auVar25._8_8_ = extraout_XMM0_Qb;
  lVar18 = 0x14c;
  if (fVar9 < fVar6) {
    lVar18 = 0x174;
  }
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ =
       ((float)auVar25._0_8_ * *(float *)((longlong)&this->klass + lVar18)) /
       (this->fields).oscillationPeriod;
  fVar19 = (float)FUN_?(auVar26._0_8_);
  fVar16 = fVar19 * fVar16;
  fVar20 = fVar19 * (float)auStack_1._0_4_ - (float)uStack_8;
  fVar22 = fVar19 * (float)auStack_1._4_4_ - uStack_8._4_4_;
  (this->fields).oscilPos.x = fVar19 * (float)auStack_1._0_4_;
  (this->fields).oscilPos.y = fVar19 * (float)auStack_1._4_4_;
  (this->fields).oscilPos.z = fVar16;
  pTVar27 = (this->fields).moveTarget;
  if (pTVar27 != (Transform *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_8 = 0;
    uStack_28 = uStack_28 & 0xffffffff00000000;
    pvVar29 = (pTVar27->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pcVar21 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pcRam_? = pcVar21;
    (*pcRam_?)(pvVar29);
    auStack_1._4_4_ = fVar22 + uStack_3._4_4_ + uStack_8._4_4_;
    auStack_1._0_4_ = fVar20 + (float)uStack_3 + (float)uStack_8;
    auStack_1._8_4_ = (fVar16 - fVar4) + fVar15 + (float)uStack_28;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar29 = (pTVar27->fields)._._.m_CachedPtr;
    if (pvVar29 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pcVar21 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar21 = (code *)swi(3);
      (*pcVar21)();
      return;
    }
    pcRam_? = pcVar21;
    (*pcRam_?)(pvVar29);
    if (fVar9 < fVar6) {
      uVar13._4_4_ = 0.0;
    }
    auStack_1._8_4_ = fVar7;
    auStack_1._0_8_ = CONCAT44(uVar13._4_4_,(float)uVar13);
    fVar4 = (float)FUN_?(auStack_1);
    if (_UNK_? < fVar4) {
      uVar13._0_4_ = (float)uVar13 / fVar4;
      uVar13._4_4_ = uVar13._4_4_ / fVar4;
      fVar7 = fVar7 / fVar4;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar13._0_4_ = (pVVar5->zeroVector).x;
      uVar13._4_4_ = (pVVar5->zeroVector).y;
      fVar7 = (pVVar5->zeroVector).z;
      auStack_23 = (undefined1  [8])uVar13;
    }
    if (_UNK_? <
        uVar13._4_4_ * uVar13._4_4_ + (float)uVar13 * (float)uVar13 + fVar7 * fVar7) {
      pTVar27 = (this->fields).moveTarget;
      if (pTVar27 == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_23._0_4_ = 0.0;
      auStack_23._4_4_ = 0.0;
      uStack_30 = 0;
      pvVar29 = (pTVar27->fields)._._.m_CachedPtr;
      if (pvVar29 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcVar21 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcRam_? = pcVar21;
      (*pcRam_?)(pvVar29,auStack_23);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      auStack_1._0_4_ = (pVVar5->upVector).x;
      auStack_1._4_4_ = (pVVar5->upVector).y;
      uStack_3 = CONCAT44(uVar13._4_4_,(float)uVar13);
      auStack_1._8_4_ = (pVVar5->upVector).z;
      uStack_8 = 0;
      uStack_28 = 0;
      pcVar21 = pcRam_?;
      fStack_14 = fVar7;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcRam_? = pcVar21;
      (*pcRam_?)(&uStack_3,auStack_1,&uStack_8);
      uStack_31 = uStack_8;
      uStack_32 = uStack_28;
      auStack_33._0_8_ = auStack_23;
      auStack_33._8_8_ = uStack_30;
      auStack_23._0_4_ = 0.0;
      auStack_23._4_4_ = 0.0;
      uStack_30 = 0;
      pcVar21 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcRam_? = pcVar21;
      (*pcRam_?)(auStack_33);
      auStack_1._0_8_ = auStack_23;
      auStack_1._8_8_ = uStack_30;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar29 = (pTVar27->fields)._._.m_CachedPtr;
      if (pvVar29 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcVar21 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
        uVar13 = func_?(&UNK_?);
        FUN_?(uVar13,0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcRam_? = pcVar21;
      (*pcRam_?)(pvVar29,auStack_1);
    }
    return;
  }
code_?:
  FUN_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnDataUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Distance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields)._._.data;
  if (pDStack_1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_11 = 2;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._current.key = (Object *)0x0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = pDStack_1;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    pOVar14 = DStack_12._current.key;
    if (bVar13 == 0) {
      return;
    }
    if (DStack_12._current.value == (Object *)0x0) break;
    s = (String *)
        (*((DStack_12._current.value)->klass->vtable).ToString.methodPtr)
                  (DStack_12._current.value,
                   ((DStack_12._current.value)->klass->vtable).ToString.method);
    if (pOVar14 == (Object *)0x0) {
      FUN_?();
      break;
    }
    pSVar15 = (String *)
             (*(pOVar14->klass->vtable).ToString.methodPtr)
                       (pOVar14,(pOVar14->klass->vtable).ToString.method);
    if ((pSVar15 == StringLiteral_Speed) ||
       ((((pSVar15 != (String *)0x0 && (StringLiteral_Speed != (String *)0x0)) &&
         ((pSVar15->fields)._stringLength == (StringLiteral_Speed->fields)._stringLength)) &&
        (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar15->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_Speed->fields)._firstChar,
                            (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar13 != 0)))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (s == (String *)0x0) {
        (this->fields).speed = 0.0;
      }
      else {
        fVar17 = mscorlib.dll::System::Single::Single_Parse_2
                           (s,NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                              NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                            (IFormatProvider *)pCVar16,(MethodInfo *)0x0);
        (this->fields).speed = fVar17;
      }
    }
    else if ((pSVar15 == StringLiteral_Distance) ||
            (((pSVar15 != (String *)0x0 && (StringLiteral_Distance != (String *)0x0)) &&
             (((pSVar15->fields)._stringLength == (StringLiteral_Distance->fields)._stringLength &&
              (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar15->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_Distance->fields)._firstChar,
                                  (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar13 != 0)))))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (s == (String *)0x0) {
        (this->fields).distance = 0.0;
      }
      else {
        fVar17 = mscorlib.dll::System::Single::Single_Parse_2
                           (s,NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                              NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                            (IFormatProvider *)pCVar16,(MethodInfo *)0x0);
        (this->fields).distance = fVar17;
      }
    }
    else if ((pSVar15 == StringLiteral_GameEffect) ||
            (((pSVar15 != (String *)0x0 && (StringLiteral_GameEffect != (String *)0x0)) &&
             (((pSVar15->fields)._stringLength == (StringLiteral_GameEffect->fields)._stringLength &&
              (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar15->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_GameEffect->fields)._firstChar,
                                  (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar13 != 0)))))) {
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar18 = mscorlib.dll::System::Convert::Convert_ToInt32_14(s,(MethodInfo *)0x0);
      (this->fields).gameEffect = iVar18;
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnPositionChanged
               (MVGhostInstance *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((this->fields).ghostMode == 0) {
    if (positionChangedEventArgs == (PositionChangedEventArgs *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    aVStack_2[0].x = (positionChangedEventArgs->fields).NewPos.x;
    aVStack_2[0].y = (positionChangedEventArgs->fields).NewPos.y;
    aVStack_2[0].z = (positionChangedEventArgs->fields).NewPos.z;
    MVGhostInstance_UpdateMarkerPosition(this,aVStack_2,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnStateChange
               (MVGhostInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 == (CullingSubscriberBase *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
  if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar3 = CullingApiWrapper::CullingApiWrapper_Visible
                    (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
  (this->fields).isLODVisible = bVar3;
  pGVar4 = (this->fields)._ghostInstance;
  if (pGVar4 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar4,0,(MethodInfo *)0x0);
    pGVar4 = (this->fields)._ghostMarker;
    if (pGVar4 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar4,0,(MethodInfo *)0x0);
      if ((this->fields).isLODVisible != 0) {
        if ((this->fields).ghostMode == 1) {
          pGVar4 = (this->fields)._ghostInstance;
          if (pGVar4 != (GameObject *)0x0) {
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar4,(MethodInfo *)0x0);
            if (bVar3 != 0) {
              return;
            }
            pGVar4 = (this->fields)._ghostInstance;
            if (pGVar4 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,1,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar4 == (GameObject *)0x0) {
                FUN_?();
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pvVar5 = (pGVar4->fields)._.m_CachedPtr;
              if (pvVar5 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar6 = func_?(&UNK_?);
                FUN_?(uVar6,0);
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar5,1);
              return;
            }
          }
          goto code_?;
        }
        if ((this->fields).ghostMode == 0) {
          pGVar4 = (this->fields)._ghostMarker;
          if (pGVar4 == (GameObject *)0x0) goto code_?;
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar4,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            pGVar4 = (this->fields)._ghostMarker;
            if (pGVar4 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar4,1,(MethodInfo *)0x0);
            puVar7 = (undefined8 *)
                     (*(this->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_8,this);
            VStack_9._0_8_ = *puVar7;
            VStack_9.z = *(float *)(puVar7 + 1);
            MVGhostInstance_UpdateMarkerPosition(this,&VStack_9,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReadWOData() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_ReadWOData
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Convert);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Globalization__CultureInfo);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_GameEffect);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Distance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_1 = (this->fields)._._.data;
  if (pDStack_1 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_3 = 0;
  uStack_4 = 0;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&pDStack_1 >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  uStack_10 = (ulonglong)(uint)(pDStack_1->fields)._version;
  uStack_11 = 2;
  DStack_12._version = (undefined4)uStack_10;
  DStack_12._index = uStack_10._4_4_;
  DStack_12._current.key = (Object *)0x0;
  DStack_12._current.value = (Object *)0x0;
  DStack_12._getEnumeratorRetType = 2;
  DStack_12._36_4_ = 0;
  DStack_12._dictionary = pDStack_1;
  while( true ) {
    bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_12,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    pOVar14 = DStack_12._current.key;
    if (bVar13 == 0) {
      return;
    }
    if (DStack_12._current.value == (Object *)0x0) break;
    s = (String *)
        (*((DStack_12._current.value)->klass->vtable).ToString.methodPtr)
                  (DStack_12._current.value,
                   ((DStack_12._current.value)->klass->vtable).ToString.method);
    if (pOVar14 == (Object *)0x0) {
      FUN_?();
      break;
    }
    pSVar15 = (String *)
             (*(pOVar14->klass->vtable).ToString.methodPtr)
                       (pOVar14,(pOVar14->klass->vtable).ToString.method);
    if ((pSVar15 == StringLiteral_Speed) ||
       ((((pSVar15 != (String *)0x0 && (StringLiteral_Speed != (String *)0x0)) &&
         ((pSVar15->fields)._stringLength == (StringLiteral_Speed->fields)._stringLength)) &&
        (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar15->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_Speed->fields)._firstChar,
                            (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar13 != 0)))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (s == (String *)0x0) {
        (this->fields).speed = 0.0;
      }
      else {
        fVar17 = mscorlib.dll::System::Single::Single_Parse_2
                           (s,NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                              NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                            (IFormatProvider *)pCVar16,(MethodInfo *)0x0);
        (this->fields).speed = fVar17;
      }
    }
    else if ((pSVar15 == StringLiteral_Distance) ||
            (((pSVar15 != (String *)0x0 && (StringLiteral_Distance != (String *)0x0)) &&
             (((pSVar15->fields)._stringLength == (StringLiteral_Distance->fields)._stringLength &&
              (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar15->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_Distance->fields)._firstChar,
                                  (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar13 != 0)))))) {
      if (*(int *)&(TypeInfo__System__Globalization__CultureInfo->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar16 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                         ((MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (s == (String *)0x0) {
        (this->fields).distance = 0.0;
      }
      else {
        fVar17 = mscorlib.dll::System::Single::Single_Parse_2
                           (s,NumberStyles__Enum_AllowExponent|NumberStyles__Enum_AllowThousands|
                              NumberStyles__Enum_AllowDecimalPoint|NumberStyles__Enum_Integer,
                            (IFormatProvider *)pCVar16,(MethodInfo *)0x0);
        (this->fields).distance = fVar17;
      }
    }
    else if ((pSVar15 == StringLiteral_GameEffect) ||
            (((pSVar15 != (String *)0x0 && (StringLiteral_GameEffect != (String *)0x0)) &&
             (((pSVar15->fields)._stringLength == (StringLiteral_GameEffect->fields)._stringLength &&
              (bVar13 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                 ((uint8_t *)&(pSVar15->fields)._firstChar,
                                  (uint8_t *)&(StringLiteral_GameEffect->fields)._firstChar,
                                  (longlong)(pSVar15->fields)._stringLength * 2,(MethodInfo *)0x0),
              bVar13 != 0)))))) {
      if (*(int *)&(TypeInfo__System__Convert->_1).field_0x1c == 0) {
        FUN_?();
      }
      iVar18 = mscorlib.dll::System::Convert::Convert_ToInt32_14(s,(MethodInfo *)0x0);
      (this->fields).gameEffect = iVar18;
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_Select_1
               (MVGhostInstance *this,Color *color,MethodInfo *method)

{
  pMVar1 = (this->klass->vtable).AddSelectionBox.method;
  (*(this->klass->vtable).AddSelectionBox.methodPtr)(this,pMVar1);
  if ((this->fields)._.selected != 1) {
    pMVar2 = this->klass;
    (this->fields)._.selected = 1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pMVar2->vtable).OnSelectedChanged.methodPtr)
              (this,CONCAT71((int7)((ulonglong)pMVar1 >> 8),1),
               (pMVar2->vtable).OnSelectedChanged.method);
    return;
  }
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_SetupCulling
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVGhostInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGhostInstance__OnStateChange_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)
            (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                      (aVStack_2,this,(this->klass->vtable).get_WorldPosition_1.method);
  uVar3 = (this->fields).lodSphereOffset.x;
  uVar4 = (this->fields).lodSphereOffset.y;
  fVar5 = (this->fields).lodSphereOffset.z;
  uVar6 = *puVar1;
  fVar7 = *(float *)(puVar1 + 1);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)
             FUN_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  FUN_?(callback,this);
  pCVar8 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  aVStack_2[0]._0_8_ = uVar6;
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(pCVar8,callback,(MethodInfo *)0x0);
  aVStack_2[0].y = (float)uVar4 + SUB84(uVar6,4);
  aVStack_2[0].x = (float)uVar3 + (float)uVar6;
  aVStack_2[0].z = fVar5 + fVar7;
  CullingSubscriberBase::CullingSubscriberBase_Setup
            (pCVar8,_UNK_?,aVStack_2,(MethodInfo *)0x0);
  bVar9 = iRam_? != 0;
  (this->fields).cullingSubscriberBase = pCVar8;
  if (bVar9) {
    uVar10 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
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
  pCVar8 = (this->fields).cullingSubscriberBase;
  if (pCVar8 == (CullingSubscriberBase *)0x0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  (pCVar8->fields)._DistanceBandIndex_k__BackingField = 3;
  pUVar15 = (this->fields)._.PositionChanged;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(
                         TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                         );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__MVGhostInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
             ,(MethodInfo *)0x0);
  pDVar16 = mscorlib.dll::System::Delegate::Delegate_Combine
                      ((Delegate *)pUVar15,(Delegate *)this_00,(MethodInfo *)0x0);
  pUVar17 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
  ;
  if (pDVar16 == (Delegate *)0x0) {
    (this->fields)._.PositionChanged =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar15 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
              FUN_?(pDVar16,
                            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                           );
    if (pUVar15 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar16,pUVar17);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    (this->fields)._.PositionChanged = pUVar15;
    pUVar17 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar18 = FUN_?(pDVar16,
                           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                          );
    if (lVar18 == 0) {
      FUN_?(pDVar16,pUVar17);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar10 = (uint)((ulonglong)&(this->fields)._.PositionChanged >> 0xc);
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


/* Void UpGhosts() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpGhosts
               (MVGhostInstance *this,MethodInfo *method)

{
  pGVar1 = (this->fields)._ghostInstance;
  if (pGVar1 != (GameObject *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,0,(MethodInfo *)0x0);
    pGVar1 = (this->fields)._ghostMarker;
    if (pGVar1 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar1,0,(MethodInfo *)0x0);
      if ((this->fields).isLODVisible != 0) {
        if ((this->fields).ghostMode == 1) {
          pGVar1 = (this->fields)._ghostInstance;
          if (pGVar1 != (GameObject *)0x0) {
            bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar1,(MethodInfo *)0x0);
            if (bVar2 != 0) {
              return;
            }
            pGVar1 = (this->fields)._ghostInstance;
            if (pGVar1 != (GameObject *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                              ,1,0);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pGVar1 == (GameObject *)0x0) {
                FUN_?();
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pvVar4 = (pGVar1->fields)._.m_CachedPtr;
              if (pvVar4 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*pcRam_?)(pvVar4,1);
              return;
            }
          }
          goto code_?;
        }
        if ((this->fields).ghostMode == 0) {
          pGVar1 = (this->fields)._ghostMarker;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar1,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            pGVar1 = (this->fields)._ghostMarker;
            if (pGVar1 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,1,(MethodInfo *)0x0);
            puVar6 = (undefined8 *)
                     (*(this->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_7,this);
            VStack_8._0_8_ = *puVar6;
            VStack_8.z = *(float *)(puVar6 + 1);
            MVGhostInstance_UpdateMarkerPosition(this,&VStack_8,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateControllerFixedUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_float>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_float>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<MVWorldObjectClient,_float>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
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
    FUN_?(&
                  MethodInfo__MVGhostInstance___UpdateControllerFixedUpdate_b__49_0_MVWorldObjectClient_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_00,WorldObjectType__Enum_PlayModeAvatar,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).targetWos = pLVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).targetWos >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    pLVar1 = (this->fields).targetWos;
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      uVar3 = (pLVar1->fields)._size - 1;
      if (-1 < (int)uVar3) {
        lVar7 = (longlong)(int)uVar3 * 8 + 0x20;
        do {
          pLVar1 = (this->fields).targetWos;
          if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
          if ((uint)(pLVar1->fields)._size <= uVar3) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pMVar9 = (pLVar1->fields)._items;
          if (pMVar9 == (MVWorldObjectClient__Array *)0x0) goto code_?;
          if ((uint)pMVar9->max_length <= uVar3) {
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar10 = *(longlong *)((longlong)pMVar9->vector + lVar7 + -0x20);
          if ((lVar10 == 0) || (obj = *(Object **)(lVar10 + 200), obj == (Object *)0x0))
          goto code_?;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar11 = obj[1].klass;
          if (pOVar11 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          iVar13 = (*pcRam_?)(pOVar11);
          if (iVar13 == (this->fields).playerLayer) {
            if ((((this->fields).targetWos == (List_1_MVWorldObjectClient_ *)0x0) ||
                (lVar10 = FUN_?(), lVar10 == 0)) ||
               (*(GameObject **)(lVar10 + 200) == (GameObject *)0x0)) goto code_?;
            bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_get_activeInHierarchy
                              (*(GameObject **)(lVar10 + 200),(MethodInfo *)0x0);
            if (bVar14 == 0) goto code_?;
          }
          else {
code_?:
            pLVar1 = (this->fields).targetWos;
            if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)pLVar1,uVar3,
                       MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                      );
          }
          lVar7 = lVar7 + -8;
          uVar3 = uVar3 - 1;
        } while (-1 < (int)uVar3);
      }
      pLVar1 = (this->fields).targetWos;
      this_01 = (Func_2_Object_Single_ *)
                FUN_?(TypeInfo__System__Func<MVWorldObjectClient,_float>);
      mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVGhostInstance___UpdateControllerFixedUpdate_b__49_0_MVWorldObjectClient_
                 ,(MethodInfo *)0x0);
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_6
                         ((IEnumerable_1_System_Object_ *)pLVar1,this_01,
                          System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_float>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_float>_
                         );
      TargetAvatar = (MVWorldObjectClient *)
                     System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_1
                               ((IEnumerable_1_System_Object_ *)source,
                                MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>_
                               );
      if (TargetAvatar != (MVWorldObjectClient *)0x0) {
        pLVar1 = (this->fields).targetWos;
        if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
        iVar13 = (pLVar1->fields)._size;
        piVar15 = &(pLVar1->fields)._version;
        *piVar15 = *piVar15 + 1;
        (pLVar1->fields)._size = 0;
        if (0 < iVar13) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar1->fields)._items,0,iVar13,(MethodInfo *)0x0);
        }
        MVGhostInstance_MoveGhost(this,TargetAvatar,(MethodInfo *)0x0);
        pIVar16 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (TargetAvatar,(MethodInfo *)0x0);
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
        if (pIVar16 != (InteractionDataHandlerBase *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if ((pIVar16->fields)._._._._._.m_CachedPtr != (void *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Debug);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_GameEffect_INSTANT_DEATH_out_com);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            iVar13 = (this->fields).gameEffect;
            if (iVar13 == 0) {
              pMVar17 = TargetAvatar;
              bVar14 = MVGhostInstance_IsTouchingAvatar(this,TargetAvatar,(MethodInfo *)0x0);
              if (bVar14 != 0) {
                fVar18 = (this->fields).damagePerSecond;
                pcVar8 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
                  uVar12 = func_?(&UNK_?);
                  FUN_?(uVar12,0);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pcRam_? = pcVar8;
                fVar19 = (float)(*pcRam_?)();
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__UnityEngine__Vector3);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                aIStack_20[0].interactionType = 0;
                aIStack_20[0].playerKilledByType = 0;
                aIStack_20[0]._18_2_ = 0;
                impulse = &IStack_21;
                pVVar22 = TypeInfo__UnityEngine__Vector3->static_fields;
                aIStack_20[0].damage = 0.0;
                aIStack_20[0].impulse.x = 0.0;
                aIStack_20[0].impulse.y = 0.0;
                aIStack_20[0].impulse.z = 0.0;
                IStack_21.damage = (pVVar22->zeroVector).x;
                IStack_21.impulse.x = (pVVar22->zeroVector).y;
                IStack_21.impulse.y = (pVVar22->zeroVector).z;
                MVWorldObject.dll::MV::WorldObject::InteractionData::InteractionData__ctor_5
                          (aIStack_20,
                           (InteractionPackageType__Enum)
                           CONCAT71((int7)((ulonglong)pMVar17 >> 8),0xd),fVar19 * fVar18,
                           (Vector3 *)impulse,
                           (PlayerKilledByType__Enum)
                           CONCAT71((int7)((ulonglong)in_stack_23 >> 8),0xf),
                           (MethodInfo *)0x0);
                IStack_21.interactionType = aIStack_20[0].interactionType;
                IStack_21.playerKilledByType = aIStack_20[0].playerKilledByType;
                IStack_21._18_2_ = aIStack_20[0]._18_2_;
                IStack_21.damage = aIStack_20[0].damage;
                IStack_21.impulse.x = aIStack_20[0].impulse.x;
                IStack_21.impulse.y = aIStack_20[0].impulse.y;
                IStack_21.impulse.z = aIStack_20[0].impulse.z;
                (*(pIVar16->klass->vtable).__unknown_1.methodPtr)
                          (pIVar16,0,&IStack_21,CONCAT71((int7)((ulonglong)impulse >> 8),1),
                           (pIVar16->klass->vtable).__unknown_1.method);
              }
            }
            else if (iVar13 == 1) {
              if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                FUN_?();
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)StringLiteral_GameEffect_INSTANT_DEATH_out_com,(MethodInfo *)0x0)
              ;
            }
          }
        }
        MVGhostInstance_IsTouchingAvatar(this,TargetAvatar,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateControllerUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  obj = (this->fields).smoothPhysicsMovement;
  if (obj == (SmoothPhysicsMovement *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  fVar4 = (float)(*pcRam_?)();
  if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      bVar7 = iRam_? != 0;
      (obj->fields).current = pSVar6;
      if (bVar7) {
        uVar8 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
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
    }
    if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar5->fields)._size) {
      pSVar6 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar5,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (obj->fields).next = pSVar6;
      func_?(&(obj->fields).next);
    }
  }
  if (((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar6 = (obj->fields).next;
  do {
    if (fVar3 - fVar4 < (pSVar6->fields).time) {
code_?:
      pSVar6 = (obj->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar12 = (pSVar6->fields).time;
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
      fVar13 = (float)(*pcRam_?)();
      fVar13 = ((fVar3 - fVar4) - fVar12) / fVar13;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar14 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar14 == (void *)0x0) {
DAT_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
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
      pvVar14 = (void *)(*pcRam_?)(pvVar14);
      pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar14,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      fVar3 = _UNK_?;
      pSVar6 = (obj->fields).current;
      if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
         (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
      uStack_17._0_4_ = (pSVar16->fields).position.x;
      uStack_17._4_4_ = (pSVar16->fields).position.y;
      QStack_18.x = (pSVar6->fields).position.x;
      QStack_18.y = (pSVar6->fields).position.y;
      if (fVar13 < 0.0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = _UNK_?;
        if (fVar13 <= _UNK_?) {
          fVar4 = fVar13;
        }
      }
      if (pOVar15 != (Object *)0x0) {
        QStack_18.y = ((float)uStack_17._4_4_ - QStack_18.y) * fVar4 + QStack_18.y;
        QStack_18.x = ((float)(undefined4)uStack_17 - QStack_18.x) * fVar4 + QStack_18.x;
        QStack_18.z = ((pSVar16->fields).position.z - (pSVar6->fields).position.z) * fVar4 +
                      (pSVar6->fields).position.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar19 = pOVar15[1].klass;
        if (pOVar19 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
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
        (*pcRam_?)(pOVar19);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar14 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar14 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
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
        pvVar14 = (void *)(*pcRam_?)(pvVar14);
        pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar14,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        pSVar6 = (obj->fields).current;
        if ((pSVar6 != (SmoothPhysicsMovement_Package *)0x0) &&
           (pSVar16 = (obj->fields).next, pSVar16 != (SmoothPhysicsMovement_Package *)0x0)) {
          uStack_20._0_4_ = (pSVar16->fields).rotation.x;
          uStack_20._4_4_ = (pSVar16->fields).rotation.y;
          uStack_21._0_4_ = (pSVar16->fields).rotation.z;
          uStack_21._4_4_ = (pSVar16->fields).rotation.w;
          QStack_22.x = (pSVar6->fields).rotation.x;
          QStack_22.y = (pSVar6->fields).rotation.y;
          QStack_22.z = (pSVar6->fields).rotation.z;
          QStack_22.w = (pSVar6->fields).rotation.w;
          uStack_17 = 0;
          uStack_23 = 0;
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
          (*pcRam_?)(&QStack_22,&uStack_20,fVar13,&uStack_17);
          if (pOVar15 == (Object *)0x0) {
            FUN_?();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uStack_24 = (undefined4)uStack_17;
          uStack_25 = uStack_17._4_4_;
          uStack_26 = (float)uStack_23;
          uStack_27 = uStack_23._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar19 = pOVar15[1].klass;
          if (pOVar19 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
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
          (*pcRam_?)(pOVar19);
          if ((obj->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
            pSVar6 = (obj->fields).current;
            pMVar28 = (obj->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
            uVar29 = (pSVar16->fields).position.x;
            uVar30 = (pSVar16->fields).position.y;
            uStack_17._0_4_ = (pSVar6->fields).position.x;
            uStack_17._4_4_ = (pSVar6->fields).position.y;
            if (fVar13 < 0.0) {
              fVar3 = 0.0;
            }
            else if (fVar13 <= fVar3) {
              fVar3 = fVar13;
            }
            QStack_18.z = ((pSVar16->fields).position.z - (pSVar6->fields).position.z) * fVar3 +
                          (pSVar6->fields).position.z;
            QStack_18.y = ((float)uVar30 - (float)uStack_17._4_4_) * fVar3 + (float)uStack_17._4_4_;
            QStack_18.x = ((float)uVar29 - (float)(undefined4)uStack_17) * fVar3 +
                          (float)(undefined4)uStack_17;
            (*(pMVar28->klass->vtable).set_WorldPosition.methodPtr)(pMVar28,&QStack_18);
            pSVar6 = (obj->fields).current;
            pMVar28 = (obj->fields).worldObjectOwner;
            if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar16 = (obj->fields).next, pSVar16 == (SmoothPhysicsMovement_Package *)0x0)) break;
            QStack_22.x = (pSVar16->fields).rotation.x;
            QStack_22.y = (pSVar16->fields).rotation.y;
            QStack_22.z = (pSVar16->fields).rotation.z;
            QStack_22.w = (pSVar16->fields).rotation.w;
            uStack_20._0_4_ = (pSVar6->fields).rotation.x;
            uStack_20._4_4_ = (pSVar6->fields).rotation.y;
            uStack_21._0_4_ = (pSVar6->fields).rotation.z;
            uStack_21._4_4_ = (pSVar6->fields).rotation.w;
            QStack_18.x = 0.0;
            QStack_18.y = 0.0;
            QStack_18.z = 0.0;
            QStack_18.w = 0.0;
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
            (*pcRam_?)(&uStack_20,&QStack_22,fVar13,&QStack_18);
            if (pMVar28 == (MVWorldObjectClient *)0x0) break;
            QStack_22.x = QStack_18.x;
            QStack_22.y = QStack_18.y;
            QStack_22.z = QStack_18.z;
            QStack_22.w = QStack_18.w;
            MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                      (pMVar28,&QStack_22,(MethodInfo *)0x0);
          }
          if ((obj->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
            return;
          }
          pCVar31 = (obj->fields).cullingSubscriberBase;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar14 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar14 == (void *)0x0) goto DAT_?;
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
          pvVar14 = (void *)(*pcRam_?)(pvVar14);
          pOVar15 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar14,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar15 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_17 = 0;
            uStack_23 = uStack_23 & 0xffffffff00000000;
            pOVar19 = pOVar15[1].klass;
            if (pOVar19 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar15,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
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
            (*pcRam_?)(pOVar19,&uStack_17);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingApiWrapper);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CullingApiWrapper);
            }
            pBVar32 = TypeInfo__CullingApiWrapper->static_fields->spheres;
            if (pBVar32 != (BoundingSphere__Array *)0x0) {
              uVar8 = (pCVar31->fields)._CullingIndex_k__BackingField;
              if (uVar8 < (uint)pBVar32->max_length) {
                pBVar32->vector[(int)uVar8].position.x = (float)(undefined4)uStack_17;
                pBVar32->vector[(int)uVar8].position.y = (float)uStack_17._4_4_;
                pBVar32->vector[(int)uVar8].position.z = (float)uStack_23;
                return;
              }
              FUN_?();
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          break;
        }
      }
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar5->fields)._size < 1) goto code_?;
    bVar7 = iRam_? != 0;
    (obj->fields).current = (obj->fields).next;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
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
    pQVar5 = (obj->fields).packages;
    if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar6 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar5,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    bVar7 = iRam_? != 0;
    (obj->fields).next = pSVar6;
    if (bVar7) {
      uVar8 = (uint)((ulonglong)&(obj->fields).next >> 0xc);
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
    pSVar6 = (obj->fields).next;
  } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateMarkerPosition(Vector3) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateMarkerPosition
               (MVGhostInstance *this,Vector3 *newPos,MethodInfo *method)

{
  uVar1 = (this->fields).lodSphereOffset.x;
  uVar2 = (this->fields).lodSphereOffset.y;
  uVar3 = newPos->x;
  uVar4 = newPos->y;
  pCVar5 = (this->fields).cullingSubscriberBase;
  fVar6 = (this->fields).lodSphereOffset.z;
  fVar7 = newPos->z;
  if (pCVar5 != (CullingSubscriberBase *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar8 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar8 != (BoundingSphere__Array *)0x0) {
      uVar9 = (pCVar5->fields)._CullingIndex_k__BackingField;
      if (uVar9 < (uint)pBVar8->max_length) {
        pBVar8->vector[(int)uVar9].position.x = (float)uVar1 + (float)uVar3;
        pBVar8->vector[(int)uVar9].position.y = (float)uVar2 + (float)uVar4;
        pBVar8->vector[(int)uVar9].position.z = fVar6 + fVar7;
        return;
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Single <UpdateControllerFixedUpdate>b__49_0(MVWorldObjectClient) */

float Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance__UpdateControllerFixedUpdate_b__49_0
                (MVGhostInstance *this,MVWorldObjectClient *a,MethodInfo *method)

{
  if (a != (MVWorldObjectClient *)0x0) {
    puVar1 = (undefined8 *)
             (*(a->klass->vtable).get_WorldPosition_1.methodPtr)
                       (auStack_2,a,(a->klass->vtable).get_WorldPosition_1.method);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    puVar1 = (undefined8 *)
             (*(this->klass->vtable).get_WorldPosition_1.methodPtr)
                       (auStack_2,this,(this->klass->vtable).get_WorldPosition_1.method);
    fVar5 = (float)uVar3 - (float)*puVar1;
    fVar6 = (float)((ulonglong)uVar3 >> 0x20) - (float)((ulonglong)*puVar1 >> 0x20);
    return fVar6 * fVar6 + fVar5 * fVar5 +
           (fVar4 - *(float *)(puVar1 + 1)) * (fVar4 - *(float *)(puVar1 + 1));
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  fVar4 = (float)(*pcVar7)();
  return fVar4;
}


/* MVGhostInstance(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance__ctor
               (MVGhostInstance *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__GameObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectClient);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__physics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ghost);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Player);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).distance = 10.0;
  (this->fields).speed = 5.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).oscilPos.x = (pVVar2->zeroVector).x;
  (this->fields).oscilPos.y = fVar3;
  (this->fields).oscilPos.z = fVar4;
  (this->fields).oscillationPeriod = 1.0;
  (this->fields).damagePerSecond = 50.0;
  (this->fields).turnSlerpFactor = 0.04;
  (this->fields).patrolSpeed = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->upVector).y;
  fVar4 = (pVVar2->upVector).z;
  (this->fields).lodSphereOffset.x = (pVVar2->upVector).x;
  (this->fields).lodSphereOffset.y = fVar3;
  (this->fields).lodSphereOffset.z = fVar4;
  iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).playerLayer = iVar5;
  this_00 = (List_1_MVWorldObjectClient_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).targetWos = this_00;
  if (bVar1) {
    uVar6 = (uint)((ulonglong)&(this->fields).targetWos >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar10 != (PrefabPool *)0x0) {
    pGVar11 = (pPVar10->fields).mvGhostInstancePrefab;
    if (*(int *)&(TypeInfo__MVWorldObjectClient->_1).field_0x1c == 0) {
      FUN_?();
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor
              ((MVWorldObjectClient *)this,data,pGVar11,worldObjects,(MethodInfo *)0x0);
    piVar12 = &(this->fields)._.interactionFlags;
    *piVar12 = *piVar12 | 0x2001;
    MVGhostInstance_ReadWOData(this,(MethodInfo *)0x0);
    pGVar11 = (this->fields)._.gameObject;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    pGVar11 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pGVar11,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    bVar1 = iRam_? != 0;
    (this->fields)._ghostInstance = pGVar11;
    if (bVar1) {
      uVar6 = (uint)((ulonglong)&(this->fields)._ghostInstance >> 0xc);
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
    pGVar11 = (this->fields)._ghostInstance;
    iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar11,iVar5,(MethodInfo *)0x0);
    pGVar11 = (this->fields)._ghostInstance;
    if (pGVar11 != (GameObject *)0x0) {
      pOVar13 = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar11,
                           UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                          );
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
                (pOVar13,0.0,(MethodInfo *)0x0);
      pGVar11 = (this->fields)._ghostInstance;
      if (pGVar11 != (GameObject *)0x0) {
        pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar11,(MethodInfo *)0x0);
        pGVar11 = (this->fields)._.gameObject;
        if ((pGVar11 != (GameObject *)0x0) &&
           (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar11,(MethodInfo *)0x0), pTVar14 != (Transform *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (pTVar14,pTVar15,(MethodInfo *)0x0);
          pGVar11 = (this->fields)._ghostInstance;
          if (pGVar11 != (GameObject *)0x0) {
            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar11,(MethodInfo *)0x0);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (pTVar14 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar16 = (pTVar14->fields)._._.m_CachedPtr;
              if (pvVar16 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
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
              (*pcRam_?)(pvVar16);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__PrefabPool);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pPVar10 = TypeInfo__PrefabPool->static_fields->instance;
              if (pPVar10 != (PrefabPool *)0x0) {
                pGVar11 = (this->fields)._.gameObject;
                m = (pPVar10->fields).ghostMarkerMaterial;
                if ((pGVar11 != (GameObject *)0x0) &&
                   (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar11,(MethodInfo *)0x0),
                   pTVar14 != (Transform *)0x0)) {
                  if (StringLiteral_Ghost == (String *)0x0) {
                    uVar18 = func_?(&TypeInfo__System__ArgumentNullException);
                    this_02 = (ArgumentNullException *)func_?(uVar18);
                    pSVar19 = (String *)func_?(&StringLiteral_Name_cannot_be_null);
                    mscorlib.dll::System::ArgumentNullException::ArgumentNullException__ctor_1
                              (this_02,pSVar19,(MethodInfo *)0x0);
                    uVar18 = func_?(&
                                                 MethodInfo__UnityEngine__Transform__Find_System__String_
                                                );
                    FUN_?(this_02,uVar18);
                    pcVar17 = (code *)swi(3);
                    (*pcVar17)();
                    return;
                  }
                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_FindRelativeTransformWithPath
                                      (pTVar14,StringLiteral_Ghost,0,(MethodInfo *)0x0);
                  if (pTVar14 != (Transform *)0x0) {
                    pGVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)pTVar14,(MethodInfo *)0x0);
                    bVar1 = iRam_? != 0;
                    (this->fields)._ghostMarker = pGVar11;
                    if (bVar1) {
                      uVar6 = (uint)((ulonglong)&(this->fields)._ghostMarker >> 0xc);
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
                    pMVar20 = 
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                    ;
                    pGVar11 = (this->fields)._ghostMarker;
                    if (pGVar11 != (GameObject *)0x0) {
                      if ((
                          UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
                        FUN_?(
                                     UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                                     );
                      }
                      this_01 = (Renderer *)
                                UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                GameObject_GetComponentInChildren_3
                                          (pGVar11,0,((pMVar20->field7_0x38).rgctx_data)->method);
                      if (this_01 != (Renderer *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterial
                                  (this_01,m,(MethodInfo *)0x0);
                        pGVar11 = (this->fields)._ghostInstance;
                        if (pGVar11 != (GameObject *)0x0) {
                          pSVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                    Object_1_GetName((Object_1 *)pGVar11,(MethodInfo *)0x0);
                          pSVar19 = mscorlib.dll::System::String::String_Concat_4
                                              (pSVar19,StringLiteral__physics,(MethodInfo *)0x0);
                          pGVar11 = (GameObject *)FUN_?(TypeInfo__UnityEngine__GameObject);
                          if (cRam_? == '\0') {
                            FUN_?(&TypeInfo__UnityEngine__Object);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                            FUN_?();
                          }
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_Internal_CreateGameObject(pGVar11,pSVar19,(MethodInfo *)0x0);
                          if (pGVar11 != (GameObject *)0x0) {
                            pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
                            pGVar21 = (this->fields)._ghostInstance;
                            if (((pGVar21 != (GameObject *)0x0) &&
                                (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                           GameObject_get_transform(pGVar21,(MethodInfo *)0x0),
                                pTVar15 != (Transform *)0x0)) &&
                               (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                          Transform_GetParent(pTVar15,(MethodInfo *)0x0),
                               pTVar14 != (Transform *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_set_parent(pTVar14,pTVar15,(MethodInfo *)0x0);
                              pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
                              pGVar21 = (this->fields)._ghostInstance;
                              if ((pGVar21 != (GameObject *)0x0) &&
                                 (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar21,(MethodInfo *)0x0),
                                 pTVar15 != (Transform *)0x0)) {
                                if (cRam_? == '\0') {
                                  FUN_?(&
                                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                               );
                                  LOCK();
                                  UNLOCK();
                                  cRam_? = '\x01';
                                }
                                pvVar16 = (pTVar15->fields)._._.m_CachedPtr;
                                if (pvVar16 == (void *)0x0) {
                                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                  ThrowHelper_2_ThrowNullReferenceException
                                            ((Object *)pTVar15,(MethodInfo *)0x0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcVar17 = pcRam_?;
                                if ((pcRam_? == (code *)0x0) &&
                                   (pcVar17 = (code *)FUN_?(&UNK_?),
                                   pcVar17 == (code *)0x0)) {
                                  uVar18 = func_?(&UNK_?);
                                  FUN_?(uVar18,0);
                                  pcVar17 = (code *)swi(3);
                                  (*pcVar17)();
                                  return;
                                }
                                pcRam_? = pcVar17;
                                (*pcRam_?)(pvVar16);
                                if (pTVar14 != (Transform *)0x0) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  pvVar16 = (pTVar14->fields)._._.m_CachedPtr;
                                  if (pvVar16 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)pTVar14,(MethodInfo *)0x0);
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pcVar17 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar17 = (code *)FUN_?(&UNK_?),
                                     pcVar17 == (code *)0x0)) {
                                    uVar18 = func_?(&UNK_?);
                                    FUN_?(uVar18,0);
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                  pcRam_? = pcVar17;
                                  (*pcRam_?)(pvVar16);
                                  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar11,(MethodInfo *)0x0);
                                  pGVar21 = (this->fields)._ghostInstance;
                                  if ((pGVar21 != (GameObject *)0x0) &&
                                     (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform(pGVar21,(MethodInfo *)0x0)
                                     , pTVar15 != (Transform *)0x0)) {
                                    if (cRam_? == '\0') {
                                      FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                      LOCK();
                                      UNLOCK();
                                      cRam_? = '\x01';
                                    }
                                    pvVar16 = (pTVar15->fields)._._.m_CachedPtr;
                                    if (pvVar16 == (void *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper
                                      ::ThrowHelper_2_ThrowNullReferenceException
                                                ((Object *)pTVar15,(MethodInfo *)0x0);
                                      pcVar17 = (code *)swi(3);
                                      (*pcVar17)();
                                      return;
                                    }
                                    pcVar17 = pcRam_?;
                                    if ((pcRam_? == (code *)0x0) &&
                                       (pcVar17 = (code *)FUN_?(&UNK_?),
                                       pcVar17 == (code *)0x0)) {
                                      uVar18 = func_?(&UNK_?);
                                      FUN_?(uVar18,0);
                                      pcVar17 = (code *)swi(3);
                                      (*pcVar17)();
                                      return;
                                    }
                                    pcRam_? = pcVar17;
                                    (*pcRam_?)(pvVar16);
                                    if (pTVar14 != (Transform *)0x0) {
                                      if (cRam_? == '\0') {
                                        FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                  );
                                        LOCK();
                                        UNLOCK();
                                        cRam_? = '\x01';
                                      }
                                      pvVar16 = (pTVar14->fields)._._.m_CachedPtr;
                                      if (pvVar16 == (void *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::
                                        ThrowHelper::ThrowHelper_2_ThrowNullReferenceException
                                                  ((Object *)pTVar14,(MethodInfo *)0x0);
                                        pcVar17 = (code *)swi(3);
                                        (*pcVar17)();
                                        return;
                                      }
                                      pcVar17 = pcRam_?;
                                      if ((pcRam_? == (code *)0x0) &&
                                         (pcVar17 = (code *)FUN_?(&UNK_?),
                                         pcVar17 == (code *)0x0)) {
                                        uVar18 = func_?(&UNK_?);
                                        FUN_?(uVar18,0);
                                        pcVar17 = (code *)swi(3);
                                        (*pcVar17)();
                                        return;
                                      }
                                      pcRam_? = pcVar17;
                                      (*pcRam_?)(pvVar16);
                                      pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar11,(MethodInfo *)0x0);
                                      bVar1 = iRam_? != 0;
                                      (this->fields).moveTarget = pTVar14;
                                      if (bVar1) {
                                        uVar6 = (uint)((ulonglong)&(this->fields).moveTarget >> 0xc
                                                       );
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
                                      piVar22 = &(this->fields)._.previewLayerMask;
                                      *piVar22 = *piVar22 | 0x800;
                                      pGVar11 = (this->fields)._.gameObject;
                                      if (pGVar11 != (GameObject *)0x0) {
                                        pOVar13 = (Object_1 *)
                                                  UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_GetComponent_1
                                                            (pGVar11,
                                                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                                                  );
                                        if (cRam_? == '\0') {
                                          FUN_?(&TypeInfo__UnityEngine__Object);
                                          LOCK();
                                          UNLOCK();
                                          cRam_? = '\x01';
                                        }
                                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c
                                            == 0) {
                                          FUN_?();
                                        }
                                        UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_Destroy(pOVar13,0.0,(MethodInfo *)0x0);
                                        return;
                                      }
                                    }
                                    FUN_?();
                                    pcVar17 = (code *)swi(3);
                                    (*pcVar17)();
                                    return;
                                  }
                                }
                                FUN_?();
                                pcVar17 = (code *)swi(3);
                                (*pcVar17)();
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
            FUN_?();
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Single get_Speed() */

float Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_get_Speed
                (MVGhostInstance *this,MethodInfo *method)

{
  return (this->fields).speed;
}


/* Void set_Distance(Single) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_set_Distance
               (MVGhostInstance *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Distance);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Data_Distance);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).distance == value) {
    return;
  }
  (this->fields).distance = value;
  this_00 = (this->fields)._._.data;
  afStackX_10[0] = value;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_Distance,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (this->fields)._._.id;
    afStackX_10[0] = value;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_02,worldObjectID,StringLiteral_Data_Distance,pOVar1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode == 0) {
          this_01 = (this->fields).rangeVis;
          if (this_01 == (SphereVolumeIndicator *)0x0) goto DAT_?;
          SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                    (this_01,(this->fields).distance,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void set_Speed(Single) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_set_Speed
               (MVGhostInstance *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Data_Speed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).speed == value) {
    return;
  }
  (this->fields).speed = value;
  this_00 = (this->fields)._._.data;
  afStackX_10[0] = value;
  pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              (this_00,(Object *)StringLiteral_Speed,pOVar1,
               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),1),
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
               ->klass->rgctx_data[0x22].method);
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (this->fields)._._.id;
    afStackX_10[0] = value;
    pOVar1 = (Object *)FUN_?(uRam_?,afStackX_10);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_01,worldObjectID,StringLiteral_Data_Speed,pOVar1,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

