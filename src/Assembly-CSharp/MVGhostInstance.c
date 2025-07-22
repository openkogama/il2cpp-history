
/* Void ApplyGameEffect(MVWorldObjectClient, InteractionDataHandlerBase) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_ApplyGameEffect
               (MVGhostInstance *this,MVWorldObjectClient *targetAvatar,
               InteractionDataHandlerBase *interactionHandler,MethodInfo *method)

{
  auVar1._0_12_ = in_stack_2._0_12_;
  auVar1._12_4_ = unaff_EBP;
  if (cRam_? == '\0') {
    func_?();
    func_?(&StringLiteral_GameEffect_INSTANT_DEATH_out_com);
    cRam_? = '\x01';
  }
  iVar3 = (this->fields).gameEffect;
  if (iVar3 == 0) {
    bVar4 = MVGhostInstance_IsTouchingAvatar(this,targetAvatar,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      auVar5._12_4_ = auVar1._12_4_;
      auVar5._0_8_ = auVar1._0_8_;
      auVar5._8_4_ = (this->fields).damagePerSecond;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pIVar7 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                         ((InteractionData *)&stack0xffffffe4,fVar6 * auVar5._8_4_,
                          TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                          PlayerKilledByType__Enum_Ghost,(MethodInfo *)0x0);
      if (interactionHandler != (InteractionDataHandlerBase *)0x0) {
        InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                  (interactionHandler,*pIVar7,1,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (iVar3 == 1) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_GameEffect_INSTANT_DEATH_out_com,(MethodInfo *)0x0);
  }
  return;
}


/* Bounds ComputeLocalBounds(Vector3, MeshRenderer[]) */

Bounds * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_ComputeLocalBounds
                   (Bounds *__return_storage_ptr__,Vector3 origin,MeshRenderer__Array *meshRenderers
                   ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Mesh_filters_required_for_correc);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_2._0_4_ = (pVVar1->zeroVector).x;
  uStack_2._4_4_ = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar1->zeroVector).x;
  uStack_4._4_4_ = (pVVar1->zeroVector).y;
  fStack_5 = (pVVar1->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_2;
  fVar6 = _UNK_?;
  (__return_storage_ptr__->m_Center).y = uStack_2._4_4_;
  fStack_5 = fStack_5 * _UNK_?;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = (float)(undefined4)uStack_4 * fVar6;
  (__return_storage_ptr__->m_Extents).y = (float)uStack_4._4_4_ * fVar6;
  (__return_storage_ptr__->m_Extents).z = fStack_5;
  if (meshRenderers == (MeshRenderer__Array *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pcVar7 = (code *)swi(3);
    pBVar8 = (Bounds *)(*pcVar7)();
    return pBVar8;
  }
  if (meshRenderers->max_length == 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Mesh_filters_required_for_correc,(MethodInfo *)0x0);
  }
  else {
    if (meshRenderers->vector[0] == (MeshRenderer *)0x0) goto code_?;
    pBVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                       (&BStack_9,(Renderer *)meshRenderers->vector[0],(MethodInfo *)0x0);
    fVar3 = (pBVar8->m_Center).y;
    fVar6 = (pBVar8->m_Extents).x;
    fVar10 = (pBVar8->m_Extents).y;
    fVar11 = (pBVar8->m_Extents).z;
    fStack_5 = (pBVar8->m_Center).z - origin.z;
    ppMStack_12 = meshRenderers->vector;
    (__return_storage_ptr__->m_Center).x = (pBVar8->m_Center).x - origin.x;
    (__return_storage_ptr__->m_Center).y = fVar3 - origin.y;
    (__return_storage_ptr__->m_Center).z = fStack_5;
    (__return_storage_ptr__->m_Extents).x = fVar6;
    (__return_storage_ptr__->m_Extents).y = fVar10;
    (__return_storage_ptr__->m_Extents).z = fVar11;
    for (uStack_13 = 1; ppMStack_12 = ppMStack_12 + 1,
        (int)uStack_13 < (int)meshRenderers->max_length; uStack_13 = uStack_13 + 1) {
      if (meshRenderers->max_length <= uStack_13) goto code_?;
      if (*ppMStack_12 == (MeshRenderer *)0x0) goto code_?;
      pBVar8 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_9,(Renderer *)*ppMStack_12,(MethodInfo *)0x0);
      fVar3 = (pBVar8->m_Extents).y;
      fVar6 = (pBVar8->m_Extents).z;
      fStack_14 = (pBVar8->m_Center).y;
      BStack_9.m_Center.y = (pBVar8->m_Center).z;
      fStack_15 = (pBVar8->m_Extents).x;
      fVar10 = (pBVar8->m_Center).x - origin.x;
      fStack_16 = fStack_14 - origin.y;
      BStack_9.m_Center.x = BStack_9.m_Center.y - origin.z;
      uStack_2 = CONCAT44(fVar10,(undefined4)uStack_2);
      fStack_5 = BStack_9.m_Center.x - fVar6;
      point.y = fStack_16 - fVar3;
      point.x = fVar10 - fStack_15;
      point.z = fStack_5;
      BStack_9.m_Center.z = BStack_9.m_Center.y;
      BStack_9.m_Extents.x = BStack_9.m_Center.y;
      fStack_17 = fStack_14;
      fStack_18 = fStack_14;
      fStack_19 = fStack_15;
      fStack_20 = fStack_15;
      fStack_21 = fStack_15;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                (__return_storage_ptr__,point,(MethodInfo *)0x0);
      fStack_22 = fVar6 + BStack_9.m_Center.x;
      point_00.y = fVar3 + fStack_16;
      point_00.x = fStack_15 + uStack_2._4_4_;
      point_00.z = fStack_22;
      UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                (__return_storage_ptr__,point_00,(MethodInfo *)0x0);
    }
  }
  return __return_storage_ptr__;
}


/* Void DeSelect() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_DeSelect
               (MVGhostInstance *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).RemoveSelectionBox.method)
            (this,(this->klass->vtable).RemovePreviewBox.methodPtr);
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_Destroy
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  UpdateController::UpdateController_RemoveFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._GameStateController_k__BackingField,
     this_00 != (MVGameModeChangeNotifier *)0x0)) {
    MVGameModeChangeNotifier::MVGameModeChangeNotifier_RemoveObject
              (this_00,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_Destroy((MVWorldObjectClient *)this,(MethodInfo *)0x0);
    if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy
                ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
      (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
      func_?();
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void GameStateChanged(UpdateCondition) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GameStateChanged
               (MVGhostInstance *this,UpdateCondition__Enum condition,MethodInfo *method)

{
  if (condition == UpdateCondition__Enum_EDITOR) {
    iVar1 = 0;
code_?:
    (this->fields).ghostMode = iVar1;
    MVGhostInstance_UpGhosts(this,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields).smoothPhysicsMovement;
  if (this_00 != (SmoothPhysicsMovement *)0x0) {
    SmoothPhysicsMovement::SmoothPhysicsMovement_Reset(this_00,(MethodInfo *)0x0);
    pTVar2 = (this->fields).moveTarget;
    pVVar3 = MVGhostInstance_GetTargetPos((Vector3 *)&stack0xfffffff0,this,1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,*pVVar3,(MethodInfo *)0x0);
      this_01 = (this->fields)._ghostInstance;
      if (this_01 != (GameObject *)0x0) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (this_01,(MethodInfo *)0x0);
        pTVar2 = (this->fields).moveTarget;
        if (pTVar2 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xfffffff0,pTVar2,(MethodInfo *)0x0);
          if (this_02 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_02,*pVVar3,(MethodInfo *)0x0);
            iVar1 = 1;
            goto code_?;
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


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVGhostInstance *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  fVar1 = (this->fields).localBounds.m_Center.y;
  fVar2 = (this->fields).localBounds.m_Center.z;
  fVar3 = (this->fields).localBounds.m_Extents.x;
  (__return_storage_ptr__->m_Center).x = (this->fields).localBounds.m_Center.x;
  (__return_storage_ptr__->m_Center).y = fVar1;
  (__return_storage_ptr__->m_Center).z = fVar2;
  (__return_storage_ptr__->m_Extents).x = fVar3;
  fVar1 = (this->fields).localBounds.m_Extents.z;
  (__return_storage_ptr__->m_Extents).y = (this->fields).localBounds.m_Extents.y;
  (__return_storage_ptr__->m_Extents).z = fVar1;
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
  this_00 = (this->fields).moveTarget;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fVar5 = pVVar1->z;
    uVar6 = (this->fields).oscilPos.x;
    uVar7 = (this->fields).oscilPos.y;
    fVar8 = (this->fields).oscilPos.z;
    __return_storage_ptr__->x = (float)uVar3 - (float)uVar6;
    __return_storage_ptr__->y = (float)uVar4 - (float)uVar7;
    __return_storage_ptr__->z = fVar5 - fVar8;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Vector3 GetTargetPos(Boolean) */

Vector3 * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GetTargetPos
                    (Vector3 *__return_storage_ptr__,MVGhostInstance *this,bool patrolling,
                    MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
     pMVar2 != (MoveableController *)0x0)) {
    fVar3 = (pMVar2->fields).time;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5 = (pVVar4->upVector).x;
    uVar6 = (pVVar4->upVector).y;
    fVar7 = (pVVar4->upVector).z;
    puVar8 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
    fVar9 = *(float *)(puVar8 + 1);
    fStack_10 = (float)*puVar8;
    fStack_11 = (float)((ulonglong)*puVar8 >> 0x20);
    if (patrolling == 0) {
      fVar12 = (this->fields).speed;
    }
    else {
      fVar12 = (this->fields).patrolSpeed;
    }
    fVar13 = (this->fields).distance;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffffa0,(fVar3 * _UNK_? * fVar12) / fVar13,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    rotation = *pQVar14;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar15 = (pVVar4->forwardVector).x;
    uVar16 = (pVVar4->forwardVector).y;
    fVar13 = (pVVar4->forwardVector).z;
    fVar12 = (this->fields).distance;
    fVar17 = (float)uVar15 * fVar12;
    if (patrolling == 0) {
      fVar18 = (this->fields).speed;
    }
    else {
      fVar18 = (this->fields).patrolSpeed;
    }
    dVar19 = (double)((fVar18 * fVar3) / (fVar12 * _UNK_?));
    func_?();
    fVar3 = (float)dVar19;
    point.y = (float)uVar16 * fVar12 * fVar3;
    point.x = fVar17 * fVar3;
    point.z = fVar13 * fVar12 * fVar3;
    pVVar20 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffa0,rotation,point,(MethodInfo *)0x0);
    uVar21 = pVVar20->x;
    uVar22 = pVVar20->y;
    fVar3 = pVVar20->z;
    __return_storage_ptr__->x = (float)uVar21 + fStack_10 + (float)uVar5;
    __return_storage_ptr__->y = (float)uVar22 + fStack_11 + (float)uVar6;
    __return_storage_ptr__->z = fVar3 + fVar9 + fVar7;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar23 = (code *)swi(3);
  pVVar20 = (Vector3 *)(*pcVar23)();
  return pVVar20;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_Initialize
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                   );
    func_?(&
                    SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__PrefabPool);
      cRam_? = '\x01';
    }
    pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar2 == (PrefabPool *)0x0) goto code_?;
    pSVar3 = (pPVar2->fields).rangeVisualizationObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pSVar3 = (SphereVolumeIndicator *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)pSVar3,
                        SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                       );
    (this->fields).rangeVis = pSVar3;
    func_?(&(this->fields).rangeVis,pSVar3);
    pSVar3 = (this->fields).rangeVis;
    if (pSVar3 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pSVar3,(MethodInfo *)0x0);
    pGVar5 = (this->fields)._.gameObject;
    if (pGVar5 == (GameObject *)0x0) goto code_?;
    value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar5,(MethodInfo *)0x0);
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar4,value,(MethodInfo *)0x0);
    pSVar3 = (this->fields).rangeVis;
    if (pSVar3 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pSVar3,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar4 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    pSVar3 = (this->fields).rangeVis;
    if (pSVar3 == (SphereVolumeIndicator *)0x0) goto code_?;
    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
              (pSVar3,(this->fields).distance,(MethodInfo *)0x0);
  }
  if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_AddFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20
             ,10,(MethodInfo *)0x0);
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20,10,
             (MethodInfo *)0x0);
  MVGhostInstance_InitializeCommon(this,(MethodInfo *)0x0);
  MVGhostInstance_SetupCulling(this,(MethodInfo *)0x0);
  pGVar5 = (this->fields)._ghostInstance;
  if (pGVar5 != (GameObject *)0x0) {
    pSVar6 = (SmoothPhysicsMovement *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar5,
                        SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                       );
    (this->fields).smoothPhysicsMovement = pSVar6;
    func_?();
    pSVar6 = (this->fields).smoothPhysicsMovement;
    if (pSVar6 != (SmoothPhysicsMovement *)0x0) {
      SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                (pSVar6,(this->fields).moveTarget,(this->fields).cullingSubscriberBase,
                 (MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar7 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar7->fields)._GameStateController_k__BackingField,
         this_00 != (MVGameModeChangeNotifier *)0x0)) {
        MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
                  (this_00,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_InitializeCommon
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__MeshRenderer);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._ghostInstance;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (MeshRenderer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_1
                       (pGVar1,
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                       );
    pGVar1 = (this->fields)._.gameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (pGVar1,(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_4,this_00,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    meshRenderers = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer);
    if (meshRenderers == (MeshRenderer__Array *)0x0) goto code_?;
    if (pMVar2 == (MeshRenderer *)0x0) {
code_?:
      if (meshRenderers->max_length != 0) {
        meshRenderers->vector[0] = pMVar2;
        func_?(meshRenderers->vector,pMVar2);
        origin.z = fVar6;
        origin.x = (float)(undefined4)uStack_5;
        origin.y = (float)uStack_5._4_4_;
        pBVar7 = MVGhostInstance_ComputeLocalBounds
                            ((Bounds *)&stack0xffffffdc,origin,meshRenderers,(MethodInfo *)0x0);
        fVar6 = (pBVar7->m_Center).y;
        fVar8 = (pBVar7->m_Center).z;
        fVar9 = (pBVar7->m_Extents).x;
        fVar10 = (pBVar7->m_Extents).y;
        fVar11 = (pBVar7->m_Extents).z;
        (this->fields).localBounds.m_Center.x = (pBVar7->m_Center).x;
        (this->fields).localBounds.m_Center.y = fVar6;
        (this->fields).localBounds.m_Center.z = fVar8;
        (this->fields).localBounds.m_Extents.x = fVar9;
        (this->fields).localBounds.m_Extents.y = fVar10;
        (this->fields).localBounds.m_Extents.z = fVar11;
        return;
      }
      goto code_?;
    }
    iVar12 = func_?(pMVar2,(meshRenderers->klass->_0).element_class);
    if (iVar12 != 0) goto code_?;
  }
  uVar13 = func_?(0);
  func_?(uVar13);
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_InitializeInventory
               (MVGhostInstance *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                   );
    func_?(&TypeInfo__UnityEngine__MeshRenderer);
    cRam_? = '\x01';
  }
  if (*(GameObject **)(in_stack_1 + 0x10c) == (GameObject *)0x0) {
code_?:
    func_?();
  }
  else {
    pMVar2 = (MeshRenderer *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentInChildren_1
                       (*(GameObject **)(in_stack_1 + 0x10c),
                        UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                       );
    if (*(GameObject **)(in_stack_1 + 0x88) == (GameObject *)0x0) goto code_?;
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (*(GameObject **)(in_stack_1 + 0x88),(MethodInfo *)0x0);
    if (this_00 == (Transform *)0x0) goto code_?;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&puStack_4,this_00,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar3->x;
    uVar5._4_4_ = pVVar3->y;
    fVar6 = pVVar3->z;
    meshRenderers = (MeshRenderer__Array *)func_?(TypeInfo__UnityEngine__MeshRenderer);
    uVar7 = (undefined4)uVar5;
    if (meshRenderers == (MeshRenderer__Array *)0x0) goto code_?;
    if (pMVar2 == (MeshRenderer *)0x0) {
code_?:
      if (meshRenderers->max_length != 0) {
        meshRenderers->vector[0] = pMVar2;
        func_?(meshRenderers->vector,pMVar2);
        origin.z = fVar6;
        origin.x = (float)(int)uVar5;
        origin.y = (float)(int)((ulonglong)uVar5 >> 0x20);
        pBVar8 = MVGhostInstance_ComputeLocalBounds
                           ((Bounds *)&stack0xffffffe4,origin,meshRenderers,(MethodInfo *)0x0);
        fVar6 = (pBVar8->m_Center).y;
        fVar9 = (pBVar8->m_Center).z;
        fVar10 = (pBVar8->m_Extents).x;
        uVar5 = *(undefined8 *)&(pBVar8->m_Extents).y;
        *(float *)(in_stack_1 + 0x114) = (pBVar8->m_Center).x;
        *(float *)(in_stack_1 + 0x118) = fVar6;
        *(float *)(in_stack_1 + 0x11c) = fVar9;
        *(float *)(in_stack_1 + 0x120) = fVar10;
        *(undefined8 *)(in_stack_1 + 0x124) = uVar5;
        return;
      }
      goto code_?;
    }
    iVar11 = func_?(pMVar2,(meshRenderers->klass->_0).element_class);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),uVar7);
    if (iVar11 != 0) goto code_?;
  }
  uVar7 = func_?(0);
  func_?(uVar7);
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean IsTouchingAvatar(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_IsTouchingAvatar
               (MVGhostInstance *this,MVWorldObjectClient *TargetAvatar,MethodInfo *method)

{
  MVGhostInstance_GetTacticalPos(&VStack_1,this,(MethodInfo *)0x0);
  if (TargetAvatar != (MVWorldObjectClient *)0x0) {
    ppVStack_2 = (Vector3__Class **)(TargetAvatar->klass->vtable).set_WorldPosition.methodPtr;
    pMStack_3 = TargetAvatar;
    puVar4 = (undefined8 *)(*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)();
    VStack_1._0_8_ = *puVar4;
    VStack_1.z = *(float *)(puVar4 + 1);
    if (cRam_? == '\0') {
      ppVStack_2 = &TypeInfo__UnityEngine__Vector3;
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6 = (pVVar5->upVector).x;
    uVar7 = (pVVar5->upVector).y;
    fVar8 = (float)&fStack_9 - ((float)uVar6 + VStack_1.x);
    fVar10 = (float)pMStack_3 - ((float)uVar7 + VStack_1.y);
    fVar11 = (float)ppVStack_2 - ((pVVar5->upVector).z + VStack_1.z);
    return fVar8 * fVar8 + fVar10 * fVar10 + fVar11 * fVar11 < _UNK_?;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  bVar13 = (*pcVar12)();
  return bVar13;
}


/* Void MoveGhost(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_MoveGhost
               (MVGhostInstance *this,MVWorldObjectClient *TargetAvatar,MethodInfo *method)

{
  if (TargetAvatar == (MVWorldObjectClient *)0x0) goto code_?;
  puVar1 = (undefined8 *)
            (*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)
                      (&stack0xffffff90,TargetAvatar,
                       (TargetAvatar->klass->vtable).set_WorldPosition.methodPtr);
  fVar2 = *(float *)(puVar1 + 1);
  fVar3 = (float)*puVar1;
  fVar4 = (float)((ulonglong)*puVar1 >> 0x20);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  puStack_6 = (undefined *)(pVVar5->upVector).x;
  unique0x0000a404 = (pVVar5->upVector).y;
  fVar3 = (float)puStack_6 + fVar3;
  fVar4 = unique0x0000a404 + fVar4;
  fVar2 = (pVVar5->upVector).z + fVar2;
  fVar7 = fVar3;
  fVar8 = fVar4;
  fVar9 = fVar2;
  puVar1 = (undefined8 *)
            (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                      (&stack0xffffff90,this,(this->klass->vtable).set_WorldPosition.methodPtr);
  _puStack_38 = *puVar1;
  fVar3 = fVar3 - (float)puStack_6;
  fVar4 = fVar4 - stack0xffffffcc;
  fVar10 = (this->fields).distance;
  bVar11 = fVar10 * fVar10 <
           fVar3 * fVar3 + fVar4 * fVar4 +
           (fVar2 - *(float *)(puVar1 + 1)) * (fVar2 - *(float *)(puVar1 + 1));
  if (bVar11) {
    pVVar12 = MVGhostInstance_GetTargetPos((Vector3 *)&stack0xffffff90,this,0,(MethodInfo *)0x0);
    fVar7 = pVVar12->x;
    fVar8 = pVVar12->y;
    fVar9 = pVVar12->z;
  }
  pVVar12 = MVGhostInstance_GetTacticalPos((Vector3 *)&stack0xffffff90,this,(MethodInfo *)0x0);
  puStack_6 = (undefined *)pVVar12->x;
  unique0x0000a404 = pVVar12->y;
  puStack_13 = (undefined *)(fVar7 - (float)puStack_6);
  puVar1 = (undefined8 *)func_?(&VStack_14,&stack0xffffffa4,0);
  _puStack_38 = *puVar1;
  if (bVar11) {
    fVar2 = (this->fields).patrolSpeed;
  }
  else {
    fVar2 = (this->fields).speed;
  }
  fVar4 = (float)puStack_6 * fVar2;
  fVar3 = stack0xffffffcc * fVar2;
  fVar2 = *(float *)(puVar1 + 1) * fVar2;
  pVVar12 = (Vector3 *)&UNK_?;
  join_0x00001100_4_ =
       UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 * join_0x00001100_4_;
  _puStack_38 = CONCAT44(fVar3 * join_0x00001100_4_,fVar4 * join_0x00001100_4_);
  if (bVar11) {
    pVVar12 = (Vector3 *)&stack0xffffffa0;
    pVVar15 = MVGhostInstance_GetTacticalPos(pVVar12,this,(MethodInfo *)0x0);
    VStack_14.x = pVVar15->x;
    VStack_14.y = pVVar15->y;
    VStack_14.z = pVVar15->z;
    fVar7 = VStack_14.x - fVar7;
    fVar8 = VStack_14.y - fVar8;
    fVar9 = VStack_14.z - fVar9;
    fVar4 = (this->fields).patrolSpeed;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    if (fVar3 * fVar4 <= fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9) goto code_?;
code_?:
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    puStack_6 = (undefined *)(pVVar5->zeroVector).x;
    unique0x0000a404 = (pVVar5->zeroVector).y;
    fVar2 = (pVVar5->zeroVector).z;
  }
  else {
code_?:
    pVVar15 = MVGhostInstance_GetTacticalPos(&VStack_14,this,(MethodInfo *)0x0);
    fVar4 = pVVar15->x;
    fVar3 = pVVar15->y;
    fVar10 = pVVar15->z;
    puVar1 = (undefined8 *)(*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)();
    fVar7 = *(float *)(puVar1 + 1);
    fVar8 = (float)*puVar1;
    fVar9 = (float)((ulonglong)*puVar1 >> 0x20);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_14.x = (pVVar5->upVector).x;
    VStack_14.y = (pVVar5->upVector).y;
    VStack_14.z = (pVVar5->upVector).z;
    fVar4 = fVar4 - (VStack_14.x + fVar8);
    fVar3 = fVar3 - (VStack_14.y + fVar9);
    fVar10 = fVar10 - (VStack_14.z + fVar7);
    if (bVar11) {
      fVar7 = (this->fields).patrolSpeed;
    }
    else {
      fVar7 = (this->fields).speed;
    }
    fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    if (fVar4 * fVar4 + fVar3 * fVar3 + fVar10 * fVar10 < fVar8 * fVar7) goto code_?;
  }
  VStack_14.x = (this->fields).oscilPos.x;
  VStack_14.y = (this->fields).oscilPos.y;
  VStack_14.z = (this->fields).oscilPos.z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar5->upVector).x;
  fVar9 = (pVVar5->upVector).y;
  fVar4 = (pVVar5->upVector).z;
  puVar16 = &UNK_?;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  if (bVar11) {
    fVar7 = (this->fields).patrolSpeed;
  }
  else {
    fVar7 = (this->fields).speed;
  }
  dVar17 = (double)((fVar7 * fVar3) / (this->fields).oscillationPeriod);
  func_?();
  fVar3 = (float)dVar17;
  fVar18 = fVar4 * fVar3 - VStack_14.z;
  fVar7 = fVar10 * fVar3 - VStack_14.x;
  fVar8 = fVar9 * fVar3 - VStack_14.y;
  (this->fields).oscilPos.x = fVar10 * fVar3;
  (this->fields).oscilPos.y = fVar9 * fVar3;
  (this->fields).oscilPos.z = fVar4 * fVar3;
  pTVar19 = (this->fields).moveTarget;
  if (pTVar19 != (Transform *)0x0) {
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_14,pTVar19,(MethodInfo *)0x0);
    uVar20 = _puStack_38;
    stack0xffffffcc = (float)(_puStack_38 >> 0x20);
    uVar21 = pVVar15->x;
    uVar22 = pVVar15->y;
    puStack_6 = (undefined *)uVar20;
    value.y = (float)uVar22 + fVar8 + stack0xffffffcc;
    value.x = (float)uVar21 + fVar7 + (float)puStack_6;
    value.z = pVVar15->z + fVar18 + fVar2;
    _puStack_38 = uVar20;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar19,value,(MethodInfo *)0x0);
    _puStack_38 = CONCAT44(pVVar12,puStack_13);
    if (bVar11) {
      _puStack_38 = ZEXT48(puStack_13);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              ((Vector3 *)&puStack_6,(MethodInfo *)0x0);
    uVar20 = _puStack_38;
    stack0xffffffcc = (float)(_puStack_38 >> 0x20);
    if (_UNK_? <
        stack0xffffffcc * stack0xffffffcc + (float)puStack_6 * (float)puStack_6 +
        (float)puVar16 * (float)puVar16) {
      pTVar19 = (this->fields).moveTarget;
      _puStack_38 = uVar20;
      if (pTVar19 == (Transform *)0x0) goto code_?;
      pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&puStack_13,pTVar19,(MethodInfo *)0x0);
      uVar20 = _puStack_38;
      puStack_13 = (undefined *)pQVar23->x;
      fVar2 = pQVar23->y;
      fVar4 = pQVar23->z;
      puVar24 = &UNK_?;
      forward.z = (float)puVar16;
      stack0xffffffcc = (float)(_puStack_38 >> 0x20);
      forward.x = (float)puStack_6;
      forward.y = stack0xffffffcc;
      _puStack_38 = uVar20;
      pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                          ((Quaternion *)&stack0xffffff90,forward,(MethodInfo *)0x0);
      if (bVar11) {
        fVar3 = (this->fields).patrolSpeed;
      }
      else {
        fVar3 = (this->fields).speed;
      }
      a.y = fVar2;
      a.x = (float)puStack_13;
      a.z = fVar4;
      a.w = (float)puVar24;
      pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&puStack_13,a,*pQVar23,
                           fVar3 * (this->fields).turnSlerpFactor,(MethodInfo *)0x0);
      stack0xffffffcc = (float)pTVar19;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                (pTVar19,*pQVar23,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnDataUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_GameEffect);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral_Distance);
    cRam_? = '\x01';
  }
  DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_2._version = 0;
  DStack_2._index = 0;
  DStack_2._current.key = (Object *)0x0;
  DStack_2._current.value = (Object *)0x0;
  DStack_2._getEnumeratorRetType = 0;
  if (*(Dictionary_2_System_UInt32_System_Object_ **)(in_stack_3 + 0x58) !=
      (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_5,
                        *(Dictionary_2_System_UInt32_System_Object_ **)(in_stack_3 + 0x58),
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_6 = 0;
    DStack_2._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar4->_dictionary;
    DStack_2._version = pDVar4->_version;
    DStack_2._index = pDVar4->_index;
    DStack_2._current.key = (Object *)(pDVar4->_current).key;
    DStack_2._16_8_ = *(undefined8 *)&(pDVar4->_current).value;
    pDStack_7 = &DStack_2;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_2,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      pOVar9 = DStack_2._current.key;
      if (bVar8 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_2,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      pSStack_10 = (String *)DStack_2._current.value;
      if ((String *)DStack_2._current.value == (String *)0x0) break;
      pSStack_10 = (String *)
                   (*(code *)(((String__Class *)(DStack_2._current.value)->klass)->vtable).ToString
                             .method)(DStack_2._current.value,
                                      (((String__Class *)(DStack_2._current.value)->klass)->vtable)
                                      .CompareTo.methodPtr);
      if (pOVar9 == (Object *)0x0) break;
      a = (String *)
          (*(code *)(pOVar9->klass->vtable).ToString.method)(pOVar9,pOVar9->klass[1]._0.image);
      bVar8 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_Speed,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        bVar8 = mscorlib.dll::System::String::String_op_Equality
                          (a,StringLiteral_Distance,(MethodInfo *)0x0);
        if (bVar8 == 0) {
          bVar8 = mscorlib.dll::System::String::String_op_Equality
                            (a,StringLiteral_GameEffect,(MethodInfo *)0x0);
          if (bVar8 != 0) {
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Convert);
            }
            iVar11 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSStack_10,(MethodInfo *)0x0);
            *(int32_t *)(in_stack_3 + 0x100) = iVar11;
          }
        }
        else {
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pSStack_10 = (String *)
                       mscorlib.dll::System::Convert::Convert_ToSingle_13
                                 (pSStack_10,(IFormatProvider *)pCVar12,(MethodInfo *)0x0);
          *(String **)(in_stack_3 + 0xdc) = pSStack_10;
        }
      }
      else {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar12 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        pSStack_10 = (String *)
                     mscorlib.dll::System::Convert::Convert_ToSingle_13
                               (pSStack_10,(IFormatProvider *)pCVar12,(MethodInfo *)0x0);
        *(String **)(in_stack_3 + 0xe0) = pSStack_10;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnPositionChanged
               (MVGhostInstance *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((this->fields).ghostMode == 0) {
    if (positionChangedEventArgs == (PositionChangedEventArgs *)0x0) {
      uVar1 = func_?(&stack0xfffffff0);
      func_?(uVar1);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    MVGhostInstance_UpdateMarkerPosition
              (this,(positionChangedEventArgs->fields).NewPos,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnStateChange
               (MVGhostInstance *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar2 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,distanceBandIndex,(MethodInfo *)0x0);
    (this->fields).isLODVisible = bVar2;
    MVGhostInstance_UpGhosts(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ReadWOData() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_ReadWOData
               (MVGhostInstance *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&TypeInfo__System__String);
    func_?(&StringLiteral_GameEffect);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral_Distance);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_6._version = 0;
  DStack_6._index = 0;
  DStack_6._current.key = (Object *)0x0;
  DStack_6._current.value = (Object *)0x0;
  DStack_6._getEnumeratorRetType = 0;
  this_00 = (this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_8,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_9 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar7->_dictionary;
    DStack_6._version = pDVar7->_version;
    DStack_6._index = pDVar7->_index;
    DStack_6._current.key = (Object *)(pDVar7->_current).key;
    DStack_6._16_8_ = *(undefined8 *)&(pDVar7->_current).value;
    uStack_1 = 1;
    pDStack_10 = &DStack_6;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      pOVar12 = DStack_6._current.key;
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pSStack_13 = (String *)DStack_6._current.value;
      if ((String *)DStack_6._current.value == (String *)0x0) break;
      pSStack_13 = (String *)
                   (*(code *)(((String__Class *)(DStack_6._current.value)->klass)->vtable).ToString
                             .method)(DStack_6._current.value,
                                      (((String__Class *)(DStack_6._current.value)->klass)->vtable)
                                      .CompareTo.methodPtr);
      if (pOVar12 == (Object *)0x0) break;
      a = (String *)
          (*(code *)(pOVar12->klass->vtable).ToString.method)(pOVar12,pOVar12->klass[1]._0.image);
      bVar11 = mscorlib.dll::System::String::String_op_Equality
                        (a,StringLiteral_Speed,(MethodInfo *)0x0);
      if (bVar11 == 0) {
        bVar11 = mscorlib.dll::System::String::String_op_Equality
                          (a,StringLiteral_Distance,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          bVar11 = mscorlib.dll::System::String::String_op_Equality
                            (a,StringLiteral_GameEffect,(MethodInfo *)0x0);
          if (bVar11 != 0) {
            if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__System__Convert);
            }
            iVar14 = mscorlib.dll::System::Convert::Convert_ToInt32_14(pSStack_13,(MethodInfo *)0x0);
            (this->fields).gameEffect = iVar14;
          }
        }
        else {
          if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Globalization__CultureInfo);
          }
          pCVar15 = mscorlib.dll::System::Globalization::CultureInfo::
                   CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pSStack_13 = (String *)
                       mscorlib.dll::System::Convert::Convert_ToSingle_13
                                 (pSStack_13,(IFormatProvider *)pCVar15,(MethodInfo *)0x0);
          (this->fields).distance = (float)pSStack_13;
        }
      }
      else {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pCVar15 = mscorlib.dll::System::Globalization::CultureInfo::CultureInfo_get_InvariantCulture
                           ((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        pSStack_13 = (String *)
                     mscorlib.dll::System::Convert::Convert_ToSingle_13
                               (pSStack_13,(IFormatProvider *)pCVar15,(MethodInfo *)0x0);
        (this->fields).speed = (float)pSStack_13;
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void Select(Color) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_Select_1
               (MVGhostInstance *this,Color color,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).AddSelectionBox.method)
            (this,(this->klass->vtable).RemoveSelectionBox.methodPtr);
  MVWorldObjectClient::MVWorldObjectClient_set_Selected
            ((MVWorldObjectClient *)this,1,(MethodInfo *)0x0);
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_SetupCulling
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__MVGhostInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                   );
    func_?(&MethodInfo__MVGhostInstance__OnStateChange_UnityEngine__CullingGroupEvent_);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&
                    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
                   );
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_WorldPosition_1.method)(&uStack_2,this);
  uStack_2._0_4_ = (this->fields).lodSphereOffset.x;
  uStack_2._4_4_ = (this->fields).lodSphereOffset.y;
  fStack_3 = (float)*puVar1;
  fStack_3 = (float)(undefined4)uStack_2 + fStack_3;
  pMStack_4 = (MVGhostInstance *)(this->fields).lodSphereOffset.z;
  fStack_5 = (float)((ulonglong)*puVar1 >> 0x20);
  fStack_6 = (float)uStack_2._4_4_ + fStack_5;
  fVar7 = (float)pMStack_4 + *(float *)(puVar1 + 1);
  this_00 = (UnityAction_1_UnityEngine_Vector2_ *)
            func_?(
                           TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
  UnityAction_1_UnityEngine_Vector2___ctor
            (this_00,(Object *)this,
             MethodInfo__MVGhostInstance__OnStateChange_UnityEngine__CullingGroupEvent_,
             (MethodInfo *)0x0);
  this_01 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
            func_?(TypeInfo__CullingSubscriberBase);
  position.y = fStack_6;
  position.x = fStack_3;
  position.z = fVar7;
  CullingSubscriberBase::CullingSubscriberBase__ctor_2
            ((CullingSubscriberBase *)this_01,3.4,position,
             (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)this_01;
  func_?();
  pCVar8 = (this->fields).cullingSubscriberBase;
  if (pCVar8 == (CullingSubscriberBase *)0x0) {
    func_?();
    pMStack_4 = this;
  }
  else {
    (pCVar8->fields)._DistanceBandIndex_k__BackingField = 3;
    pUVar9 = (this->fields)._.PositionChanged;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__MVGhostInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pMVar10 = (MVGhostInstance *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar9,(Delegate *)this_02,(MethodInfo *)0x0);
    this_01 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pMVar10 == (MVGhostInstance *)0x0) {
      pUStack_11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0;
      (this->fields)._.PositionChanged =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
code_?:
      pMStack_4 = (MVGhostInstance *)&(this->fields)._.PositionChanged;
      uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
      func_?();
      return;
    }
    pUStack_11 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
    pMStack_4 = pMVar10;
    pUVar9 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    pMStack_4 = pMVar10;
    if (pUVar9 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      (this->fields)._.PositionChanged = pUVar9;
      this_01 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      pUStack_11 = 
      TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
      pUStack_11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                   func_?();
      pMStack_4 = pMVar10;
      if (pUStack_11 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0)
      goto code_?;
    }
  }
  uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
  pUStack_11 = this_01;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
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
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar1,1,(MethodInfo *)0x0);
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
            pVVar3 = (Vector3 *)func_?();
            uVar4 = pVVar3->y;
            fStack5 = pVVar3->z;
            uStack6 = uVar4;
            MVGhostInstance_UpdateMarkerPosition(this,*pVVar3,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateControllerFixedUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_00,WorldObjectType__Enum_PlayModeAvatar,(MethodInfo *)0x0);
    (this->fields).targetWos = pLVar1;
    func_?();
    pLVar1 = (this->fields).targetWos;
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      iVar2 = (pLVar1->fields)._size;
joined_?:
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).targetWos;
        if (((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               (pLVar3,iVar2,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                               ), RVar4 != (RegexCharClass_SingleRange)0x0)) &&
           (*(GameObject **)((int)RVar4 + 0x88) != (GameObject *)0x0)) {
          iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            (*(GameObject **)((int)RVar4 + 0x88),(MethodInfo *)0x0);
          if (iVar5 != (this->fields).playerLayer) goto code_?;
          pLVar3 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   (this->fields).targetWos;
          if (((pLVar3 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
              && (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                          RegularExpressions::RegexCharClass+SingleRange]::
                          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                    (pLVar3,iVar2,
                                     MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                    ), RVar4 != (RegexCharClass_SingleRange)0x0)) &&
             (*(GameObject **)((int)RVar4 + 0x88) != (GameObject *)0x0)) goto code_?;
        }
        goto code_?;
      }
      pLVar1 = (this->fields).targetWos;
      this_01 = (Func_2_Object_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                (this_01,(Object *)this,
                 MethodInfo__MVGhostInstance___UpdateControllerFixedUpdate_b__49_0_MVWorldObjectClient_
                 ,(MethodInfo *)0x0);
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_4
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
        iVar2 = (pLVar1->fields)._size;
        piVar6 = &(pLVar1->fields)._version;
        *piVar6 = *piVar6 + 1;
        (pLVar1->fields)._size = 0;
        if (0 < iVar2) {
          mscorlib.dll::System::Array::Array_Clear
                    ((Array *)(pLVar1->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        MVGhostInstance_MoveGhost(this,TargetAvatar,(MethodInfo *)0x0);
        this_02 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (TargetAvatar,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar7 != 0) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          iVar2 = (this->fields).gameEffect;
          if (iVar2 == 0) {
            bVar7 = MVGhostInstance_IsTouchingAvatar(this,TargetAvatar,(MethodInfo *)0x0);
            if (bVar7 != 0) {
              fVar8 = (this->fields).damagePerSecond;
              fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                 ((MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              pIVar10 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                 ((InteractionData *)&stack0xffffffe0,fVar9 * fVar8,
                                  TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                                  PlayerKilledByType__Enum_Ghost,(MethodInfo *)0x0);
              if (this_02 == (InteractionDataHandlerBase *)0x0) goto code_?;
              InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                        (this_02,*pIVar10,1,(MethodInfo *)0x0);
            }
          }
          else if (iVar2 == 1) {
            if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                      ((Object *)StringLiteral_GameEffect_INSTANT_DEATH_out_com,(MethodInfo *)0x0);
          }
        }
        MVGhostInstance_GetTacticalPos((Vector3 *)&stack0xffffffe8,this,(MethodInfo *)0x0);
        (*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)();
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
code_?:
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                    (*(GameObject **)((int)RVar4 + 0x88),(MethodInfo *)0x0);
  if (bVar7 == 0) {
code_?:
    pLVar1 = (this->fields).targetWos;
    if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)pLVar1,iVar2,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_);
  }
  goto joined_?;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateControllerUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  this_02 = (this->fields).smoothPhysicsMovement;
  if (this_02 != (SmoothPhysicsMovement *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                     );
      cRam_? = '\x01';
    }
    _puStack_14 = CONCAT44(&UNK_?,puStack_1);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    _puStack_14 = CONCAT44(&UNK_?,puStack_1);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    ppSVar4 = (SmoothPhysicsMovement_Package **)(fVar2 - fVar3);
    if ((this_02->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar5 = (this_02->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar5->fields)._size) {
        pSVar6 = (SmoothPhysicsMovement_Package *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar5,
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                           );
        (this_02->fields).current = pSVar6;
        ppSVar4 = &(this_02->fields).current;
        func_?();
      }
      if ((this_02->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
        return;
      }
    }
    if ((this_02->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
      pQVar5 = (this_02->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      if (0 < (pQVar5->fields)._size) {
        pSVar6 = (SmoothPhysicsMovement_Package *)
                 mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                 Queue_1_System_Object__Dequeue
                           ((Queue_1_System_Object_ *)pQVar5,
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                           );
        (this_02->fields).next = pSVar6;
        ppSVar4 = &(this_02->fields).next;
        func_?();
      }
    }
    if (((this_02->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
       ((this_02->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
      return;
    }
    pSVar6 = (this_02->fields).next;
    ppSVar7 = &(this_02->fields).next;
    do {
      if ((float)ppSVar4 < (pSVar6->fields).time) {
code_?:
        pSVar6 = (this_02->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar2 = (pSVar6->fields).time;
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                           ((MethodInfo *)0x0);
        fVar3 = ((float)ppSVar4 - fVar2) / fVar3;
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_02,(MethodInfo *)0x0);
        pSVar6 = (this_02->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        VStack_9.x = (pSVar6->fields).position.x;
        VStack_9.y = (pSVar6->fields).position.y;
        pSVar10 = (this_02->fields).next;
        VStack_9.z = (pSVar6->fields).position.z;
        if (pSVar10 == (SmoothPhysicsMovement_Package *)0x0) break;
        puStack_1 = (undefined1 *)(pSVar10->fields).position.x;
        unique0x0000a404 = (pSVar10->fields).position.y;
        fVar2 = 0.0;
        if ((0.0 <= fVar3) && (fVar2 = _UNK_?, fVar3 <= _UNK_?)) {
          fVar2 = fVar3;
        }
        VStack_9.x = ((float)puStack_1 - VStack_9.x) * fVar2 + VStack_9.x;
        VStack_9.y = ((float)unique0x0000a404 - VStack_9.y) * fVar2 + VStack_9.y;
        VStack_9.z = ((pSVar10->fields).position.z - VStack_9.z) * fVar2 + VStack_9.z;
        if (pTVar8 == (Transform *)0x0) break;
        this = (MVGhostInstance *)VStack_9.z;
        fVar11 = VStack_9.y;
        fVar12 = VStack_9.x;
        VVar13 = (Vector3)CONCAT84(VVar13._0_8_,fVar12);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar8,VVar13,(MethodInfo *)0x0);
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_02,(MethodInfo *)0x0);
        pSVar6 = (this_02->fields).current;
        if ((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
           (pSVar10 = (this_02->fields).next, pSVar10 == (SmoothPhysicsMovement_Package *)0x0)) break;
        fVar2 = (pSVar6->fields).rotation.y;
        pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffdc,(pSVar6->fields).rotation,
                             (pSVar10->fields).rotation,(float)this_02,(MethodInfo *)0x0);
        if (pTVar8 == (Transform *)0x0) break;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar8,*pQVar14,(MethodInfo *)0x0);
        if ((this_02->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
          pSVar6 = (this_02->fields).current;
          if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
          puStack_1 = (undefined1 *)(pSVar6->fields).position.x;
          unique0x0000a404 = (pSVar6->fields).position.y;
          VStack_9.z = (pSVar6->fields).position.z;
          pSVar6 = (this_02->fields).next;
          if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
          VStack_9.x = (pSVar6->fields).position.x;
          VStack_9.y = (pSVar6->fields).position.y;
          if (fVar2 < 0.0) {
            fVar3 = 0.0;
          }
          else {
            fVar3 = _UNK_?;
            if (fVar2 <= _UNK_?) {
              fVar3 = fVar2;
            }
          }
          VStack_9.z = ((pSVar6->fields).position.z - VStack_9.z) * fVar3 + VStack_9.z;
          (*(code *)(((this_02->fields).worldObjectOwner)->klass->vtable).set_WorldPosition.method)
                    ();
          pSVar6 = (this_02->fields).current;
          this_00 = (this_02->fields).worldObjectOwner;
          if (((pSVar6 == (SmoothPhysicsMovement_Package *)0x0) ||
              (pSVar10 = (this_02->fields).next, pSVar10 == (SmoothPhysicsMovement_Package *)0x0)) ||
             (pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                  ((Quaternion *)&stack0xffffffdc,(pSVar6->fields).rotation,
                                   (pSVar10->fields).rotation,fVar2,(MethodInfo *)0x0),
             this_00 == (MVWorldObjectClient *)0x0)) break;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(this_00,*pQVar14,(MethodInfo *)0x0);
        }
        if ((this_02->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
          return;
        }
        this_01 = (this_02->fields).cullingSubscriberBase;
        _puStack_14 = CONCAT44(this_02,&UNK_?);
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_02,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          _puStack_14 = CONCAT44(&UNK_?,puStack_1);
          pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_9,pTVar8,(MethodInfo *)0x0);
          uVar16 = pVVar15->x;
          uVar17 = pVVar15->y;
          this = (MVGhostInstance *)pVVar15->z;
          fVar11 = (float)uVar17;
          fVar18 = (float)uVar16;
          VVar13 = (Vector3)CONCAT84(VVar13._0_8_,fVar18);
          CullingSubscriberBase::CullingSubscriberBase_set_Position
                    (this_01,VVar13,(MethodInfo *)0x0);
          return;
        }
        break;
      }
      pQVar5 = (this_02->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      if ((pQVar5->fields)._size < 1) goto code_?;
      (this_02->fields).current = *ppSVar7;
      func_?();
      pQVar5 = (this_02->fields).packages;
      if (pQVar5 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
      pSVar6 = (SmoothPhysicsMovement_Package *)
               mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
               Queue_1_System_Object__Dequeue
                         ((Queue_1_System_Object_ *)pQVar5,
                          MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                         );
      *ppSVar7 = pSVar6;
      ppSVar4 = ppSVar7;
      func_?();
      pSVar6 = *ppSVar7;
    } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
  }
code_?:
  stack0xfffffff0 = (undefined4)((ulonglong)_puStack_14 >> 0x20);
  VStack_9.z = (float)&UNK_?;
  puStack_1 = &stack0xfffffff0;
  uVar19 = func_?();
  _puStack_14 = CONCAT44(stack0xfffffff0,uVar19);
  VStack_9.z = (float)&UNK_?;
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void UpdateMarkerPosition(Vector3) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateMarkerPosition
               (MVGhostInstance *this,Vector3 newPos,MethodInfo *method)

{
  uVar1 = (this->fields).lodSphereOffset.x;
  uVar2 = (this->fields).lodSphereOffset.y;
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    value.y = newPos.y + (float)uVar2;
    value.x = newPos.x + (float)uVar1;
    value.z = newPos.z + (this->fields).lodSphereOffset.z;
    CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,value,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single <UpdateControllerFixedUpdate>b__49_0(MVWorldObjectClient) */

float Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance__UpdateControllerFixedUpdate_b__49_0
                (MVGhostInstance *this,MVWorldObjectClient *a,MethodInfo *method)

{
  if (a != (MVWorldObjectClient *)0x0) {
    puVar1 = (undefined8 *)
             (*(code *)(a->klass->vtable).get_WorldPosition_1.method)
                       (&fStack_2,a,(a->klass->vtable).set_WorldPosition.methodPtr);
    uStack_3 = *puVar1;
    fStack_4 = *(float *)(puVar1 + 1);
    puVar1 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                       (auStack_5,this,(this->klass->vtable).set_WorldPosition.methodPtr);
    fStack_2 = (float)*puVar1;
    fStack_6 = (float)((ulonglong)*puVar1 >> 0x20);
    return (uStack_3._4_4_ - fStack_6) * (uStack_3._4_4_ - fStack_6) +
           ((float)uStack_3 - fStack_2) * ((float)uStack_3 - fStack_2) +
           (fStack_4 - *(float *)(puVar1 + 1)) * (fStack_4 - *(float *)(puVar1 + 1));
  }
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* MVGhostInstance(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance__ctor
               (MVGhostInstance *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                   );
    func_?(&
                    UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                   );
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                   );
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral__physics);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Ghost);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  (this->fields).distance = 10.0;
  (this->fields).speed = 5.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).oscilPos.x = (pVVar1->zeroVector).x;
  (this->fields).oscilPos.y = fVar2;
  (this->fields).oscilPos.z = fVar3;
  (this->fields).oscillationPeriod = 1.0;
  (this->fields).damagePerSecond = 50.0;
  (this->fields).turnSlerpFactor = 0.04;
  (this->fields).patrolSpeed = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  (this->fields).lodSphereOffset.x = (pVVar1->upVector).x;
  (this->fields).lodSphereOffset.y = fVar2;
  (this->fields).lodSphereOffset.z = fVar3;
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                     (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).playerLayer = iVar4;
  this_00 = (List_1_MVWorldObjectClient_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).targetWos = this_00;
  func_?(&(this->fields).targetWos,this_00);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar5 != (PrefabPool *)0x0) {
    pGVar6 = (pPVar5->fields).mvGhostInstancePrefab;
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor
              ((MVWorldObjectClient *)this,data,pGVar6,worldObjects,(MethodInfo *)0x0);
    uVar7 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
    piVar8 = &(this->fields)._.interactionFlags;
    *(uint *)piVar8 = (uint)*piVar8 | 0x2001;
    *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar7;
    MVGhostInstance_ReadWOData(this,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._.gameObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar6 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pGVar6,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    (this->fields)._ghostInstance = pGVar6;
    func_?();
    pGVar6 = (this->fields)._ghostInstance;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar6,iVar4,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._ghostInstance;
    if (pGVar6 != (GameObject *)0x0) {
      pOVar9 = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar6,
                           UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar9,(MethodInfo *)0x0)
      ;
      pGVar6 = (this->fields)._ghostInstance;
      if (pGVar6 != (GameObject *)0x0) {
        pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar6,(MethodInfo *)0x0);
        pGVar6 = (this->fields)._.gameObject;
        if (pGVar6 != (GameObject *)0x0) {
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar6,(MethodInfo *)0x0);
          if (pTVar10 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar10,pTVar11,(MethodInfo *)0x0);
            pGVar6 = (this->fields)._ghostInstance;
            if (pGVar6 != (GameObject *)0x0) {
              pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar10 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar10,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                           (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar5 != (PrefabPool *)0x0) {
                  value = (pPVar5->fields).ghostMarkerMaterial;
                  pGVar6 = (this->fields)._.gameObject;
                  if (pGVar6 != (GameObject *)0x0) {
                    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                    if (pTVar10 != (Transform *)0x0) {
                      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Find
                                          (pTVar10,StringLiteral_Ghost,(MethodInfo *)0x0);
                      if (pTVar10 != (Transform *)0x0) {
                        pGVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pTVar10,(MethodInfo *)0x0);
                        (this->fields)._ghostMarker = pGVar6;
                        func_?();
                        pGVar6 = (this->fields)._ghostMarker;
                        if (pGVar6 != (GameObject *)0x0) {
                          this_01 = (Renderer *)
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentInChildren_1
                                              (pGVar6,
                                               UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                                              );
                          if (this_01 != (Renderer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_set_sharedMaterial(this_01,value,(MethodInfo *)0x0);
                            pGVar6 = (this->fields)._ghostInstance;
                            if (pGVar6 != (GameObject *)0x0) {
                              pSVar12 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_get_name((Object_1 *)pGVar6,(MethodInfo *)0x0);
                              pSVar12 = mscorlib.dll::System::String::String_Concat_3
                                                  (pSVar12,StringLiteral__physics,(MethodInfo *)0x0)
                              ;
                              pGVar6 = (GameObject *)func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                        (pGVar6,pSVar12,(MethodInfo *)0x0);
                              if (pGVar6 != (GameObject *)0x0) {
                                pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar6,(MethodInfo *)0x0);
                                pGVar13 = (this->fields)._ghostInstance;
                                if (pGVar13 != (GameObject *)0x0) {
                                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar13,(MethodInfo *)0x0);
                                  if (pTVar11 != (Transform *)0x0) {
                                    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_GetParent(pTVar11,(MethodInfo *)0x0);
                                    if (pTVar10 != (Transform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_parent(pTVar10,pTVar11,(MethodInfo *)0x0);
                                      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar6,(MethodInfo *)0x0);
                                      pGVar13 = (this->fields)._ghostInstance;
                                      if (pGVar13 != (GameObject *)0x0) {
                                        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar13,(MethodInfo *)0x0);
                                        if (pTVar11 != (Transform *)0x0) {
                                          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_get_position
                                                              ((Vector3 *)&stack0xfffffff0,pTVar11,
                                                               (MethodInfo *)0x0);
                                          if (pTVar10 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position
                                                      (pTVar10,*pVVar14,(MethodInfo *)0x0);
                                            pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar6,(MethodInfo *)0x0);
                                            pGVar13 = (this->fields)._ghostInstance;
                                            if (pGVar13 != (GameObject *)0x0) {
                                              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar13,(MethodInfo *)0x0);
                                              if (pTVar11 != (Transform *)0x0) {
                                                pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_get_rotation
                                                                    ((Quaternion *)&stack0xffffffec,
                                                                     pTVar11,(MethodInfo *)0x0);
                                                if (pTVar10 != (Transform *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_set_rotation
                                                            (pTVar10,*pQVar15,(MethodInfo *)0x0);
                                                  pTVar10 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar6,(MethodInfo *)0x0);
                                                  (this->fields).moveTarget = pTVar10;
                                                  func_?(&(this->fields).moveTarget);
                                                  piVar16 = &(this->fields)._.previewLayerMask;
                                                  *piVar16 = *piVar16 | 0x800;
                                                  pGVar6 = (this->fields)._.gameObject;
                                                  if (pGVar6 != (GameObject *)0x0) {
                                                    pOVar9 = (Object_1 *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponent_1
                                                                        (pGVar6,
                                                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                  Object_1_Destroy_1(pOVar9,(MethodInfo *)0x0);
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
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Single get_Distance() */

float Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_get_Distance
                (MVGhostInstance *this,MethodInfo *method)

{
  return (this->fields).distance;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Distance);
    func_?(&StringLiteral_Data_Distance);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  if ((this->fields).distance == value) {
    return;
  }
  this_00 = (this->fields)._._.data;
  (this->fields).distance = value;
  this = (MVGhostInstance *)value;
  pOVar2 = (Object *)func_?(TypeInfo__System__Single,&this);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_Distance,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (pMVar1->fields)._._.id;
    fStack_3 = value;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_02,worldObjectID,StringLiteral_Data_Distance,pOVar2,(MethodInfo *)0x0);
      MVar4 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar4 == MVGameMode__Enum_Edit) {
        this_01 = (pMVar1->fields).rangeVis;
        if (this_01 == (SphereVolumeIndicator *)0x0) goto code_?;
        SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                  (this_01,(pMVar1->fields).distance,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void set_Speed(Single) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_set_Speed
               (MVGhostInstance *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Speed);
    func_?(&StringLiteral_Data_Speed);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  if ((this->fields).speed == value) {
    return;
  }
  this_00 = (this->fields)._._.data;
  (this->fields).speed = value;
  this = (MVGhostInstance *)value;
  pOVar2 = (Object *)func_?(TypeInfo__System__Single,&this);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_Speed,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID = (pMVar1->fields)._._.id;
    fStack_3 = value;
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&fStack_3);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_01,worldObjectID,StringLiteral_Data_Speed,pOVar2,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

