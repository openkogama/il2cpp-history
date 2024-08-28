
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
  fVar4 = _UNK_?;
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar1->zeroVector).x;
  uStack_5._4_4_ = (pVVar1->zeroVector).y;
  fStack_6 = (pVVar1->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (float)(undefined4)uStack_2;
  (__return_storage_ptr__->m_Center).y = uStack_2._4_4_;
  fStack_6 = fStack_6 * fVar4;
  (__return_storage_ptr__->m_Center).z = fVar3;
  (__return_storage_ptr__->m_Extents).x = (float)(undefined4)uStack_5 * fVar4;
  (__return_storage_ptr__->m_Extents).y = (float)uStack_5._4_4_ * fVar4;
  (__return_storage_ptr__->m_Extents).z = fStack_6;
  if (meshRenderers != (MeshRenderer__Array *)0x0) {
    if (meshRenderers->max_length == 0) {
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)StringLiteral_Mesh_filters_required_for_correc,(MethodInfo *)0x0);
    }
    else {
      if (meshRenderers->vector[0] == (MeshRenderer *)0x0) goto code_?;
      pBVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_8,(Renderer *)meshRenderers->vector[0],(MethodInfo *)0x0);
      fVar3 = (pBVar7->m_Center).y;
      fVar4 = (pBVar7->m_Extents).x;
      fVar9 = (pBVar7->m_Extents).y;
      fVar10 = (pBVar7->m_Extents).z;
      fStack_6 = (pBVar7->m_Center).z - origin.z;
      ppMStack_11 = meshRenderers->vector;
      uStack_12 = 1;
      (__return_storage_ptr__->m_Center).x = (pBVar7->m_Center).x - origin.x;
      (__return_storage_ptr__->m_Center).y = fVar3 - origin.y;
      (__return_storage_ptr__->m_Center).z = fStack_6;
      (__return_storage_ptr__->m_Extents).x = fVar4;
      (__return_storage_ptr__->m_Extents).y = fVar9;
      (__return_storage_ptr__->m_Extents).z = fVar10;
      while( true ) {
        ppMStack_11 = ppMStack_11 + 1;
        uStack_2 = CONCAT44(uStack_12,(undefined4)uStack_2);
        if ((int)meshRenderers->max_length <= (int)uStack_12) break;
        if (meshRenderers->max_length <= uStack_12) goto code_?;
        if (*ppMStack_11 == (MeshRenderer *)0x0) goto code_?;
        pBVar7 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                           (&BStack_8,(Renderer *)*ppMStack_11,(MethodInfo *)0x0);
        fVar3 = (pBVar7->m_Extents).y;
        fVar4 = (pBVar7->m_Extents).z;
        fStack_13 = (pBVar7->m_Center).y;
        BStack_8.m_Center.y = (pBVar7->m_Center).z;
        fStack_14 = (pBVar7->m_Extents).x;
        fVar9 = (pBVar7->m_Center).x - origin.x;
        fStack_15 = fStack_13 - origin.y;
        BStack_8.m_Center.x = BStack_8.m_Center.y - origin.z;
        uStack_2 = CONCAT44(fVar9,(undefined4)uStack_2);
        fStack_6 = BStack_8.m_Center.x - fVar4;
        point.y = fStack_15 - fVar3;
        point.x = fVar9 - fStack_14;
        point.z = fStack_6;
        BStack_8.m_Center.z = BStack_8.m_Center.y;
        BStack_8.m_Extents.x = BStack_8.m_Center.y;
        fStack_16 = fStack_13;
        fStack_17 = fStack_13;
        fStack_18 = fStack_14;
        fStack_19 = fStack_14;
        fStack_20 = fStack_14;
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                  (__return_storage_ptr__,point,(MethodInfo *)0x0);
        fStack_21 = fVar4 + BStack_8.m_Center.x;
        point_00.y = fVar3 + fStack_15;
        point_00.x = fStack_14 + uStack_2._4_4_;
        point_00.z = fStack_21;
        UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Encapsulate
                  (__return_storage_ptr__,point_00,(MethodInfo *)0x0);
        uStack_12 = uStack_12 + 1;
      }
    }
    return __return_storage_ptr__;
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  pBVar7 = (Bounds *)(*pcVar22)();
  return pBVar7;
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
    this_01 = (this->fields).cullingSubscriberBase;
    if (this_01 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
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
    ppSVar4 = &(this->fields).rangeVis;
    *ppSVar4 = pSVar3;
    func_?(ppSVar4,pSVar3);
    if (*ppSVar4 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)*ppSVar4,(MethodInfo *)0x0);
    pGVar6 = (this->fields)._.gameObject;
    if (pGVar6 == (GameObject *)0x0) goto code_?;
    value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar6,(MethodInfo *)0x0);
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
              (pTVar5,value,(MethodInfo *)0x0);
    if (*ppSVar4 == (SphereVolumeIndicator *)0x0) goto code_?;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)*ppSVar4,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pTVar5 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
              (pTVar5,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
    if (*ppSVar4 == (SphereVolumeIndicator *)0x0) goto code_?;
    SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
              (*ppSVar4,(this->fields).distance,(MethodInfo *)0x0);
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
  pGVar6 = (this->fields)._ghostInstance;
  if (pGVar6 != (GameObject *)0x0) {
    pSVar7 = (SmoothPhysicsMovement *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (pGVar6,
                        SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                       );
    ppSVar8 = &(this->fields).smoothPhysicsMovement;
    *ppSVar8 = pSVar7;
    func_?();
    pSVar7 = *ppSVar8;
    if (pSVar7 != (SmoothPhysicsMovement *)0x0) {
      SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                (pSVar7,(this->fields).moveTarget,(this->fields).cullingSubscriberBase,
                 (MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
      pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar9 != (MVNetworkGame *)0x0) &&
         (this_00 = (pMVar9->fields)._GameStateController_k__BackingField,
         this_00 != (MVGameModeChangeNotifier *)0x0)) {
        MVGameModeChangeNotifier::MVGameModeChangeNotifier_AddUpdateObject
                  (this_00,(IGameStateControllerSubscriber *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
    return fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11 < _UNK_?;
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
                      (auStack_2 + 4,TargetAvatar,
                       (TargetAvatar->klass->vtable).set_WorldPosition.methodPtr);
  uVar3 = *puVar1;
  QStack_4.z = *(float *)(puVar1 + 1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar5->upVector).x;
  uVar7 = (pVVar5->upVector).y;
  fVar8 = (float)uVar6 + (float)uVar3;
  fVar9 = (float)uVar7 + (float)((ulonglong)uVar3 >> 0x20);
  QStack_4.z = (pVVar5->upVector).z + QStack_4.z;
  uVar10 = CONCAT44(fVar9,fVar8);
  puVar1 = (undefined8 *)
            (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                      (&puStack_11,this,(this->klass->vtable).set_WorldPosition.methodPtr);
  puVar12 = (undefined *)uVar10;
  uVar3 = *puVar1;
  uStack_13 = (float)uVar3;
  fVar9 = fVar9 - (float)((ulonglong)uVar3 >> 0x20);
  fVar14 = (this->fields).distance;
  if (fVar14 * fVar14 <
      fVar9 * fVar9 + (fVar8 - uStack_13) * (fVar8 - uStack_13) +
      (QStack_4.z - *(float *)(puVar1 + 1)) * (QStack_4.z - *(float *)(puVar1 + 1))) {
    MVGhostInstance_GetTargetPos((Vector3 *)(auStack_2 + 4),this,0,(MethodInfo *)0x0);
    puVar12 = (undefined *)CONCAT13(1,(int3)uVar10);
  }
  pVVar15 = MVGhostInstance_GetTacticalPos(&VStack_16,this,(MethodInfo *)0x0);
  uVar17 = pVVar15->x;
  uVar18 = pVVar15->y;
  fStack_19 = pVVar15->z;
  fVar9 = in_stack_20 - (float)uVar17;
  VStack_16.x = 0.0;
  VStack_16.y = 0.0;
  VStack_16.z = 0.0;
  fVar21 = in_stack_22 - (float)uVar18;
  in_stack_23 = in_stack_23 - fStack_19;
  fVar14 = fVar21;
  fVar8 = in_stack_23;
  puStack_11 = (undefined *)uVar18;
  QStack_4.w = fVar9;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar24 = (double)(fVar14 * fVar14 + QStack_4.w * QStack_4.w + fVar8 * fVar8);
  if (dVar24 < 0.0) {
    func_?();
  }
  else {
    dVar24 = SQRT(dVar24);
  }
  fVar25 = (float)dVar24;
  if (_UNK_? < fVar25) {
    fStack_19 = fVar8 / fVar25;
    uVar10 = CONCAT44(fVar14 / fVar25,QStack_4.w / fVar25);
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar10._0_4_ = (pVVar5->zeroVector).x;
    uVar10._4_4_ = (pVVar5->zeroVector).y;
    fStack_19 = (pVVar5->zeroVector).z;
  }
  fStack_26 = (float)uVar10;
  puStack_11 = (undefined *)((ulonglong)uVar10 >> 0x20);
  uStack_13._3_1_ = (char)((ulonglong)uVar3 >> 0x18);
  if (uStack_13._3_1_ == '\0') {
    fVar14 = (this->fields).speed;
  }
  else {
    fVar14 = (this->fields).patrolSpeed;
  }
  QStack_4.w = fStack_26 * fVar14;
  VStack_16.x = 0.0;
  VStack_16.y = 0.0;
  VStack_16.z = 0.0;
  cVar27 = (char)((uint)((float)puStack_11 * fVar14) >> 0x18);
  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  fStack_28 = in_stack_20 * fVar14;
  puStack_11 = (undefined *)(VStack_16.x * fVar14);
  fStack_19 = fVar8 * fVar14;
  VStack_16.z = fStack_28;
  if (cVar27 == '\0') {
code_?:
    pVVar15 = MVGhostInstance_GetTacticalPos(&VStack_16,this,(MethodInfo *)0x0);
    uVar29 = pVVar15->x;
    puVar1 = (undefined8 *)
              (*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)
                        (&stack0xfffffffc,TargetAvatar,
                         (TargetAvatar->klass->vtable).set_WorldPosition.methodPtr);
    fStack_28 = *(float *)(puVar1 + 1);
    puStack_11 = (undefined *)*puVar1;
    fStack_19 = (float)((ulonglong)*puVar1 >> 0x20);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30 = (pVVar5->upVector).x;
    uVar31 = (pVVar5->upVector).y;
    VStack_16.y = (pVVar5->upVector).z;
    fVar9 = fVar9 - ((float)uVar30 + (float)puStack_11);
    fVar21 = fVar21 - ((float)uVar31 + fStack_19);
    in_stack_23 = in_stack_23 - (VStack_16.y + fStack_28);
    in_stack_22 = fVar21 * fVar21 + fVar9 * fVar9 + in_stack_23 * in_stack_23;
    if ((char)((uint)in_stack_20 >> 0x18) == '\0') {
      fVar8 = (this->fields).speed;
    }
    else {
      fVar8 = (this->fields).patrolSpeed;
    }
    puVar12 = &UNK_?;
    QStack_4.w = (float)uVar30;
    VStack_16.x = (float)uVar31;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    puStack_11 = (undefined *)(fVar9 * fStack_26);
    method = (MethodInfo *)uVar29;
    if (fVar8 < (float)puStack_11) goto code_?;
  }
  else {
    pVVar15 = MVGhostInstance_GetTacticalPos(&VStack_16,this,(MethodInfo *)0x0);
    uVar32 = pVVar15->x;
    uVar33 = pVVar15->y;
    VStack_16.y = pVVar15->z;
    fVar8 = ((float)uVar33 - fStack_19) * ((float)uVar33 - fStack_19) +
             ((float)uVar32 - (float)puStack_11) * ((float)uVar32 - (float)puStack_11) +
             (VStack_16.y - fStack_28) * (VStack_16.y - fStack_28);
    fStack_26 = (this->fields).patrolSpeed;
    QStack_4.w = (float)uVar32;
    VStack_16.x = (float)uVar33;
    fVar25 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
    puStack_11 = (undefined *)(fVar25 * (float)puStack_11);
    if ((float)puStack_11 <= fStack_26) goto code_?;
code_?:
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar34 = (pVVar5->zeroVector).x;
    uVar35 = (pVVar5->zeroVector).y;
    QStack_4.z = (pVVar5->zeroVector).z;
    QStack_4.x = (float)uVar34;
    QStack_4.y = (float)uVar35;
  }
  uVar36 = (this->fields).oscilPos.x;
  uVar37 = (this->fields).oscilPos.y;
  VStack_16.z = (this->fields).oscilPos.z;
  VStack_16.x = (float)uVar36;
  VStack_16.y = (float)uVar37;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar9 = 0.0;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  puVar38 = &UNK_?;
  fStack_19 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                        ((MethodInfo *)0x0);
  if ((char)((uint)fVar8 >> 0x18) == '\0') {
    fVar21 = (this->fields).speed;
  }
  else {
    fVar21 = (this->fields).patrolSpeed;
  }
  dVar24 = (double)((fVar21 * fStack_19) / (this->fields).oscillationPeriod);
  func_?();
  fVar21 = (float)dVar24;
  fStack_28 = fStack_28 * fVar21;
  puVar39 = (undefined *)(fStack_28 - fVar8);
  (this->fields).oscilPos.x = (float)puStack_11 * fVar21;
  (this->fields).oscilPos.y = fStack_19 * fVar21;
  (this->fields).oscilPos.z = fStack_28;
  pTVar40 = (this->fields).moveTarget;
  if (pTVar40 != (Transform *)0x0) {
    pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc0,pTVar40,(MethodInfo *)0x0);
    uVar41 = pVVar15->x;
    uVar42 = pVVar15->y;
    QStack_4.y = pVVar15->z + in_stack_22 + (float)puVar12;
    value.y = (float)uVar42 + in_stack_20 + (float)puVar38;
    value.x = (float)uVar41 + fVar14 + fVar9;
    value.z = QStack_4.y;
    auStack_2 = (undefined1  [4])uVar41;
    QStack_4.x = (float)uVar42;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar40,value,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      puVar39 = &UNK_?;
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    puStack_11 = puVar12;
    fStack_19 = 0.0;
    fStack_28 = 0.0;
    auStack_2 = (undefined1  [4])0x0;
    dVar24 = (double)((float)puVar39 * (float)puVar39 + (float)puStack_11 * (float)puStack_11 +
                     fVar9 * fVar9);
    if (dVar24 < 0.0) {
      func_?();
    }
    else {
      dVar24 = SQRT(dVar24);
    }
    fVar14 = (float)dVar24;
    if (_UNK_? < fVar14) {
      fVar9 = fVar9 / fVar14;
      puStack_11 = (undefined *)((float)puStack_11 / fVar14);
      fStack_28 = fStack_19;
      uVar3 = CONCAT44((float)puVar39 / fVar14,puStack_11);
      fStack_19 = (float)puVar39 / fVar14;
      QStack_4.z = fVar9;
    }
    else {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar43 = TypeInfo__UnityEngine__Vector3->static_fields;
      puStack_11 = (undefined *)(pVVar43->zeroVector).x;
      uVar3._0_4_ = (pVVar43->zeroVector).x;
      uVar3._4_4_ = (pVVar43->zeroVector).y;
      fVar9 = (pVVar43->zeroVector).z;
      fStack_28 = 0.0;
      fStack_19 = (pVVar43->zeroVector).y;
    }
    auStack_2 = (undefined1  [4])0x0;
    fVar14 = (float)((ulonglong)uVar3 >> 0x20);
    if (_UNK_? < fVar14 * fVar14 + (float)uVar3 * (float)uVar3 + fVar9 * fVar9) {
      pTVar40 = (this->fields).moveTarget;
      if (pTVar40 == (Transform *)0x0) goto code_?;
      pQVar44 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)(auStack_2 + 4),pTVar40,(MethodInfo *)0x0);
      QStack_4.w = pQVar44->x;
      VStack_16.x = pQVar44->y;
      VStack_16.y = pQVar44->z;
      VStack_16.z = pQVar44->w;
      forward.y = QStack_4.x;
      forward.x = (float)auStack_2;
      forward.z = fVar9;
      pQVar44 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                          ((Quaternion *)auStack_2,forward,(MethodInfo *)0x0);
      if (cVar27 == '\0') {
        fVar14 = (this->fields).speed;
      }
      else {
        fVar14 = (this->fields).patrolSpeed;
      }
      a.w = (float)method;
      a.x = (pVVar5->upVector).x;
      a.y = (pVVar5->upVector).y;
      a.z = (pVVar5->upVector).z;
      pQVar44 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0x00000000,a,*pQVar44,
                           fVar14 * (this->fields).turnSlerpFactor,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                ((Transform *)QStack_4.w,*pQVar44,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar45 = (code *)swi(3);
  (*pcVar45)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnDataUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
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
  if (*(Dictionary_2_System_UInt32_System_Object_ **)(in_stack_2 + 0x58) !=
      (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
    pDVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_4,
                        *(Dictionary_2_System_UInt32_System_Object_ **)(in_stack_2 + 0x58),
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_5 = 0;
    DStack_6._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar3->_dictionary;
    DStack_6._version = pDVar3->_version;
    DStack_6._index = pDVar3->_index;
    DStack_6._current.key = (Object *)(pDVar3->_current).key;
    DStack_6._current.value = (pDVar3->_current).value;
    DStack_6._getEnumeratorRetType = pDVar3->_getEnumeratorRetType;
    pDStack_7 = &DStack_6;
    while( true ) {
      bVar8 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_6,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      pOVar9 = DStack_6._current.key;
      if (bVar8 == 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      pSStack_10 = (String *)DStack_6._current.value;
      if ((String *)DStack_6._current.value == (String *)0x0) break;
      pSStack_10 = (String *)
                   (*(code *)(((String__Class *)(DStack_6._current.value)->klass)->vtable).ToString
                             .method)(DStack_6._current.value,
                                      (((String__Class *)(DStack_6._current.value)->klass)->vtable)
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
            *(int32_t *)(in_stack_2 + 0x100) = iVar11;
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
          *(String **)(in_stack_2 + 0xdc) = pSStack_10;
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
        *(String **)(in_stack_2 + 0xe0) = pSStack_10;
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
  this_00 = (this->fields)._._.data;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
             ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                       (&DStack_7,(Dictionary_2_System_UInt32_System_Object_ *)this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    uStack_8 = 0;
    DStack_9._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar6->_dictionary;
    DStack_9._version = pDVar6->_version;
    DStack_9._index = pDVar6->_index;
    DStack_9._current.key = (Object *)(pDVar6->_current).key;
    DStack_9._current.value = (pDVar6->_current).value;
    DStack_9._getEnumeratorRetType = pDVar6->_getEnumeratorRetType;
    uStack_1 = 1;
    pDStack_10 = &DStack_9;
    while( true ) {
      bVar11 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Object,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                        (&DStack_9,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                        );
      pOVar12 = DStack_9._current.key;
      if (bVar11 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                  ((Object *)&DStack_9,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      pSStack_13 = (String *)DStack_9._current.value;
      if ((String *)DStack_9._current.value == (String *)0x0) break;
      pSStack_13 = (String *)
                   (*(code *)(((String__Class *)(DStack_9._current.value)->klass)->vtable).ToString
                             .method)(DStack_9._current.value,
                                      (((String__Class *)(DStack_9._current.value)->klass)->vtable)
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
  pDStack_4 = (Delegate *)(this->fields).lodSphereOffset.z;
  fStack_5 = (float)((ulonglong)*puVar1 >> 0x20);
  pUStack_6 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
               ((float)uStack_2._4_4_ + fStack_5);
  fVar7 = (float)pDStack_4 + *(float *)(puVar1 + 1);
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
  position.y = (float)pUStack_6;
  position.x = fStack_3;
  position.z = fVar7;
  CullingSubscriberBase::CullingSubscriberBase__ctor_2
            ((CullingSubscriberBase *)this_01,3.4,position,
             (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_00,(MethodInfo *)0x0);
  pDVar8 = (Delegate *)&(this->fields).cullingSubscriberBase;
  *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class **)pDVar8 = this_01;
  func_?();
  if (*(CullingSubscriberBase **)pDVar8 == (CullingSubscriberBase *)0x0) {
    func_?();
  }
  else {
    ((*(CullingSubscriberBase **)pDVar8)->fields)._DistanceBandIndex_k__BackingField = 3;
    pUVar9 = (this->fields)._.PositionChanged;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__MVGhostInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,(MethodInfo *)0x0);
    pDVar8 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pUVar9,(Delegate *)this_02,(MethodInfo *)0x0);
    this_01 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar8 == (Delegate *)0x0) {
      pDStack_4 = (Delegate *)&(this->fields)._.PositionChanged;
      *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ **)pDStack_4 =
           (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
      pUStack_10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)pDVar8;
      func_?();
      return;
    }
    pUStack_10 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
    pDStack_4 = pDVar8;
    pUVar9 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)func_?();
    if (pUVar9 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
    goto code_?;
    this_01 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
              &(this->fields)._.PositionChanged;
    *(UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ **)this_01 = pUVar9;
    pUStack_10 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    pUStack_6 = 
    TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
    pDStack_4 = pDVar8;
    pUStack_10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)
                 func_?();
    if (pUStack_10 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs___Class *)0x0) {
      uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
      pDStack_4 = (Delegate *)this_01;
      func_?();
      return;
    }
  }
  pUStack_10 = pUStack_6;
  uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
  pDStack_4 = pDVar8;
  func_?();
code_?:
  uStack_2 = CONCAT44(&UNK_?,(undefined4)uStack_2);
  pDStack_4 = pDVar8;
  pUStack_10 = this_01;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
        iVar2 = (this->fields).ghostMode;
        if (iVar2 == 1) {
          pGVar1 = (this->fields)._ghostInstance;
          if (pGVar1 != (GameObject *)0x0) {
            bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                              (pGVar1,(MethodInfo *)0x0);
            if (bVar3 != 0) {
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
        if (iVar2 == 0) {
          pGVar1 = (this->fields)._ghostMarker;
          if (pGVar1 == (GameObject *)0x0) goto code_?;
          bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeSelf
                            (pGVar1,(MethodInfo *)0x0);
          if (bVar3 == 0) {
            pGVar1 = (this->fields)._ghostMarker;
            if (pGVar1 == (GameObject *)0x0) goto code_?;
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar1,1,(MethodInfo *)0x0);
            pVVar4 = (Vector3 *)func_?();
            uVar5 = pVVar4->y;
            fStack6 = pVVar4->z;
            uStack7 = uVar5;
            MVGhostInstance_UpdateMarkerPosition(this,*pVVar4,(MethodInfo *)0x0);
          }
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateControllerFixedUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>_
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_float>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_float>_
                   );
    func_?(&TypeInfo__System__Func<MVWorldObjectClient,_float>);
    func_?(&MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__MVGhostInstance___UpdateControllerFixedUpdate_b__49_0_MVWorldObjectClient_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_01,WorldObjectType__Enum_PlayModeAvatar,(MethodInfo *)0x0);
    ppLVar2 = &(this->fields).targetWos;
    *ppLVar2 = pLVar1;
    func_?(ppLVar2);
    if (*ppLVar2 != (List_1_MVWorldObjectClient_ *)0x0) {
      iVar3 = ((*ppLVar2)->fields)._size;
joined_?:
      iVar3 = iVar3 + -1;
      if (-1 < iVar3) {
        if ((((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*ppLVar2 !=
              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
            (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                               ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )*ppLVar2,iVar3,
                                MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                               ), RVar4 != (RegexCharClass_SingleRange)0x0)) &&
           (*(GameObject **)((int)RVar4 + 0x88) != (GameObject *)0x0)) {
          iVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            (*(GameObject **)((int)RVar4 + 0x88),(MethodInfo *)0x0);
          if (iVar5 != (this->fields).playerLayer) goto code_?;
          if ((((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)*ppLVar2 !=
                (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
              (RVar4 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                       RegularExpressions::RegexCharClass+SingleRange]::
                       List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                 ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                   *)*ppLVar2,iVar3,
                                  MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                 ), RVar4 != (RegexCharClass_SingleRange)0x0)) &&
             (*(GameObject **)((int)RVar4 + 0x88) != (GameObject *)0x0)) goto code_?;
        }
        goto code_?;
      }
      pLVar1 = *ppLVar2;
      this_02 = (Func_2_Object_Single_ *)func_?();
      mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                (this_02,(Object *)this,
                 MethodInfo__MVGhostInstance___UpdateControllerFixedUpdate_b__49_0_MVWorldObjectClient_
                 ,(MethodInfo *)0x0);
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_4
                         ((IEnumerable_1_System_Object_ *)pLVar1,this_02,
                          System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_float>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_float>_
                         );
      TargetAvatar = (MVWorldObjectClient *)
                     System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_1
                               ((IEnumerable_1_System_Object_ *)source,
                                MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>_
                               );
      if (TargetAvatar == (MVWorldObjectClient *)0x0) {
        return;
      }
      pLVar1 = *ppLVar2;
      if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
      iVar3 = (pLVar1->fields)._size;
      piVar6 = &(pLVar1->fields)._version;
      *piVar6 = *piVar6 + 1;
      (pLVar1->fields)._size = 0;
      if (0 < iVar3) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar1->fields)._items,0,iVar3,(MethodInfo *)0x0);
      }
      MVGhostInstance_MoveGhost(this,TargetAvatar,(MethodInfo *)0x0);
      this_03 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (TargetAvatar,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 != 0) {
        if (cRam_? == '\0') {
          func_?();
          func_?(&StringLiteral_GameEffect_INSTANT_DEATH_out_com);
          cRam_? = '\x01';
        }
        iVar3 = (this->fields).gameEffect;
        if (iVar3 == 0) {
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
            if (this_03 == (InteractionDataHandlerBase *)0x0) goto code_?;
            InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                      (this_03,*pIVar10,1,(MethodInfo *)0x0);
          }
        }
        else if (iVar3 == 1) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_GameEffect_INSTANT_DEATH_out_com,(MethodInfo *)0x0);
        }
      }
      this_00 = (this->fields).moveTarget;
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                  ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
        (*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)
                  (&stack0xffffffe8,TargetAvatar);
        if (cRam_? != '\0') {
          return;
        }
        func_?();
        cRam_? = 1;
        return;
      }
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
    if (*ppLVar2 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__RemoveAt
              ((List_1_System_Object_ *)*ppLVar2,iVar3,
               MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__RemoveAt_int_);
  }
  goto joined_?;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateControllerUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  this_01 = (this->fields).smoothPhysicsMovement;
  if (this_01 == (SmoothPhysicsMovement *)0x0) {
code_?:
    func_?();
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                   );
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  ppSVar4 = &(this_01->fields).current;
  ppSVar5 = (SmoothPhysicsMovement_Package **)(fVar2 - fVar3);
  if ((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (this_01->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar4 = pSVar7;
      ppSVar5 = ppSVar4;
      func_?();
    }
    if (*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  ppSVar8 = &(this_01->fields).next;
  if ((this_01->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (this_01->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      *ppSVar8 = pSVar7;
      func_?();
      ppSVar5 = ppSVar8;
    }
  }
  if (*ppSVar4 != (SmoothPhysicsMovement_Package *)0x0) {
    pSVar7 = (this_01->fields).next;
    ppSVar8 = &(this_01->fields).next;
    if (pSVar7 != (SmoothPhysicsMovement_Package *)0x0) {
      do {
        if ((float)ppSVar5 < (pSVar7->fields).time) {
code_?:
          if (*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) break;
          fVar2 = ((*ppSVar4)->fields).time;
          fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                             ((MethodInfo *)0x0);
          this_03 = (Component *)(((float)ppSVar5 - fVar2) / fVar3);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              (this_03,(MethodInfo *)0x0);
          pSVar7 = *ppSVar4;
          if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
          uVar10 = (pSVar7->fields).position.x;
          uVar11 = (pSVar7->fields).position.y;
          pSVar12 = *ppSVar8;
          fVar2 = (pSVar7->fields).position.z;
          if (pSVar12 == (SmoothPhysicsMovement_Package *)0x0) break;
          uVar13 = (pSVar12->fields).position.x;
          uVar14 = (pSVar12->fields).position.y;
          pCVar15 = (Component *)0x0;
          if ((0.0 <= (float)this_03) &&
             (pCVar15 = _UNK_?, (float)this_03 <= (float)_UNK_?)) {
            pCVar15 = this_03;
          }
          if (pTVar9 == (Transform *)0x0) break;
          this = (MVGhostInstance *)
                 (((pSVar12->fields).position.z - fVar2) * (float)pCVar15 + fVar2);
          fVar16 = ((float)uVar14 - (float)uVar11) * (float)pCVar15 + (float)uVar11;
          fVar17 = ((float)uVar13 - (float)uVar10) * (float)pCVar15 + (float)uVar10;
          VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar17);
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                    (pTVar9,VVar18,(MethodInfo *)0x0);
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
          if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
             (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
          t = &UNK_?;
          pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                              ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation,
                               ((*ppSVar8)->fields).rotation,(float)pTVar9,(MethodInfo *)0x0);
          if (this_02 == (Transform *)0x0) break;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                    (this_02,*pQVar19,(MethodInfo *)0x0);
          pMVar20 = (this_01->fields).worldObjectOwner;
          if (pMVar20 != (MVWorldObjectClient *)0x0) {
            if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
               (*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0)) break;
            (*(code *)(pMVar20->klass->vtable).set_WorldPosition.method)();
            pMVar20 = (this_01->fields).worldObjectOwner;
            if ((*ppSVar4 == (SmoothPhysicsMovement_Package *)0x0) ||
               ((*ppSVar8 == (SmoothPhysicsMovement_Package *)0x0 ||
                (pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                                     ((Quaternion *)&stack0xffffffcc,((*ppSVar4)->fields).rotation,
                                      ((*ppSVar8)->fields).rotation,(float)t,(MethodInfo *)0x0),
                pMVar20 == (MVWorldObjectClient *)0x0)))) break;
            MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar20,*pQVar19,(MethodInfo *)0x0)
            ;
          }
          this_00 = (this_01->fields).cullingSubscriberBase;
          if (this_00 == (CullingSubscriberBase *)0x0) {
            return;
          }
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_01,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
            uVar22 = pVVar21->x;
            uVar23 = pVVar21->y;
            this = (MVGhostInstance *)pVVar21->z;
            fVar16 = (float)uVar23;
            fVar24 = (float)uVar22;
            VVar18 = (Vector3)CONCAT84(VVar18._0_8_,fVar24);
            CullingSubscriberBase::CullingSubscriberBase_set_Position
                      (this_00,VVar18,(MethodInfo *)0x0);
            return;
          }
          break;
        }
        pQVar6 = (this_01->fields).packages;
        if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
        if ((pQVar6->fields)._size < 1) goto code_?;
        *ppSVar4 = *ppSVar8;
        func_?();
        pQVar6 = (this_01->fields).packages;
        if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
        pSVar7 = (SmoothPhysicsMovement_Package *)
                  mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                  Queue_1_System_Object__Dequeue
                            ((Queue_1_System_Object_ *)pQVar6,
                             MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                            );
        *ppSVar8 = pSVar7;
        ppSVar5 = ppSVar8;
        func_?();
        pSVar7 = *ppSVar8;
      } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
      goto code_?;
    }
  }
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
  ppLVar5 = &(this->fields).targetWos;
  *ppLVar5 = this_00;
  func_?(ppLVar5,this_00);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar6 != (PrefabPool *)0x0) {
    pGVar7 = (pPVar6->fields).mvGhostInstancePrefab;
    if ((TypeInfo__MVWorldObjectClient->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor
              ((MVWorldObjectClient *)this,data,pGVar7,worldObjects,(MethodInfo *)0x0);
    uVar8 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
    piVar9 = &(this->fields)._.interactionFlags;
    *(uint *)piVar9 = (uint)*piVar9 | 0x2001;
    *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar8;
    MVGhostInstance_ReadWOData(this,(MethodInfo *)0x0);
    pGVar7 = (this->fields)._.gameObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pGVar7 = (GameObject *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)pGVar7,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    ppGVar10 = &(this->fields)._ghostInstance;
    *ppGVar10 = pGVar7;
    func_?();
    pGVar7 = *ppGVar10;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                       (StringLiteral_Default,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar7,iVar4,(MethodInfo *)0x0);
    if (*ppGVar10 != (GameObject *)0x0) {
      pOVar11 = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (*ppGVar10,
                           UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar11,(MethodInfo *)0x0)
      ;
      if (*ppGVar10 != (GameObject *)0x0) {
        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (*ppGVar10,(MethodInfo *)0x0);
        pGVar7 = (this->fields)._.gameObject;
        if (pGVar7 != (GameObject *)0x0) {
          pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar7,(MethodInfo *)0x0);
          if (pTVar12 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar12,pTVar13,(MethodInfo *)0x0);
            if (*ppGVar10 != (GameObject *)0x0) {
              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(*ppGVar10,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if (pTVar12 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar12,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                           (MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
                if (pPVar6 != (PrefabPool *)0x0) {
                  value = (pPVar6->fields).ghostMarkerMaterial;
                  pGVar7 = (this->fields)._.gameObject;
                  if (pGVar7 != (GameObject *)0x0) {
                    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                    if (pTVar12 != (Transform *)0x0) {
                      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Find
                                          (pTVar12,StringLiteral_Ghost,(MethodInfo *)0x0);
                      if (pTVar12 != (Transform *)0x0) {
                        pGVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)pTVar12,(MethodInfo *)0x0);
                        ppGVar14 = &(this->fields)._ghostMarker;
                        *ppGVar14 = pGVar7;
                        func_?();
                        pGVar7 = *ppGVar14;
                        if (pGVar7 != (GameObject *)0x0) {
                          this_01 = (Renderer *)
                                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentInChildren_1
                                              (pGVar7,
                                               UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                                              );
                          if (this_01 != (Renderer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_set_sharedMaterial(this_01,value,(MethodInfo *)0x0);
                            if (*ppGVar10 != (GameObject *)0x0) {
                              pSVar15 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_get_name((Object_1 *)*ppGVar10,(MethodInfo *)0x0);
                              pSVar15 = mscorlib.dll::System::String::String_Concat_3
                                                  (pSVar15,StringLiteral__physics,(MethodInfo *)0x0)
                              ;
                              pGVar7 = (GameObject *)func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                        (pGVar7,pSVar15,(MethodInfo *)0x0);
                              if (pGVar7 != (GameObject *)0x0) {
                                pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar7,(MethodInfo *)0x0);
                                if (*ppGVar10 != (GameObject *)0x0) {
                                  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(*ppGVar10,(MethodInfo *)0x0);
                                  if (pTVar13 != (Transform *)0x0) {
                                    pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_GetParent(pTVar13,(MethodInfo *)0x0);
                                    if (pTVar12 != (Transform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_parent(pTVar12,pTVar13,(MethodInfo *)0x0);
                                      pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar7,(MethodInfo *)0x0);
                                      if (*ppGVar10 != (GameObject *)0x0) {
                                        pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (*ppGVar10,(MethodInfo *)0x0);
                                        if (pTVar13 != (Transform *)0x0) {
                                          pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_get_position
                                                              ((Vector3 *)&stack0xfffffff0,pTVar13,
                                                               (MethodInfo *)0x0);
                                          if (pTVar12 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position
                                                      (pTVar12,*pVVar16,(MethodInfo *)0x0);
                                            pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar7,(MethodInfo *)0x0);
                                            if (*ppGVar10 != (GameObject *)0x0) {
                                              pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (*ppGVar10,(MethodInfo *)0x0);
                                              if (pTVar13 != (Transform *)0x0) {
                                                pQVar17 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_get_rotation
                                                                    ((Quaternion *)&stack0xffffffec,
                                                                     pTVar13,(MethodInfo *)0x0);
                                                if (pTVar12 != (Transform *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_set_rotation
                                                            (pTVar12,*pQVar17,(MethodInfo *)0x0);
                                                  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar7,(MethodInfo *)0x0);
                                                  ppTVar18 = &(this->fields).moveTarget;
                                                  *ppTVar18 = pTVar12;
                                                  func_?(ppTVar18);
                                                  piVar19 = &(this->fields)._.previewLayerMask;
                                                  *piVar19 = *piVar19 | 0x800;
                                                  pGVar7 = (this->fields)._.gameObject;
                                                  if (pGVar7 != (GameObject *)0x0) {
                                                    pOVar11 = (Object_1 *)
                                                              UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponent_1
                                                                        (pGVar7,
                                                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                  Object_1_Destroy_1(pOVar11,(MethodInfo *)0x0);
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
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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

