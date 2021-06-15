
/* Void ApplyGameEffect(MVWorldObjectClient, InteractionDataHandlerBase) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_ApplyGameEffect
               (MVGhostInstance *this,MVWorldObjectClient *targetAvatar,
               InteractionDataHandlerBase *interactionHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).gameEffect;
  if (iVar1 == 0) {
    bVar2 = MVGhostInstance_IsTouchingAvatar(this,targetAvatar,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      fVar3 = (this->fields).damagePerSecond;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                        ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
      pIVar6 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                         ((InteractionData *)&stack0xffffffe4,fVar4 * fVar3,*pVVar5,
                          PlayerKilledByType__Enum_Ghost,(MethodInfo *)0x0);
      if (interactionHandler != (InteractionDataHandlerBase *)0x0) {
        InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                  (interactionHandler,*pIVar6,1,(MethodInfo *)0x0);
        return;
      }
      func_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  else if (iVar1 == 1) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  ppuStack_2 = (undefined **)0x0;
  puStack_3 = (undefined *)0x0;
  puStack_4 = (undefined *)0x0;
  fStack_5 = 0.0;
  uStack_6 = 0;
  puStack_7 = (undefined *)0x0;
  puStack_8 = (undefined *)0x0;
  puStack_9 = (undefined *)0x0;
  puStack_10 = (undefined *)0x0;
  uStack_11 = 0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_13,(MethodInfo *)0x0);
  uStack_14._0_4_ = pVVar12->x;
  uStack_14._4_4_ = pVVar12->y;
  fVar15 = pVVar12->z;
  pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_13,(MethodInfo *)0x0);
  uVar16 = pVVar12->x;
  uVar17 = pVVar12->y;
  func_?(&puStack_1,uStack_14,fVar15,uVar16,uVar17,pVVar12->z);
  if (meshRenderers != (MeshRenderer__Array *)0x0) {
    if ((int)meshRenderers->max_length < 1) {
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)StringLiteral_Mesh_filters_required_for_correc,(MethodInfo *)0x0);
    }
    else {
      if (meshRenderers->vector[0] == (MeshRenderer *)0x0) goto code_?;
      pBVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                          (&BStack_19,(Renderer *)meshRenderers->vector[0],(MethodInfo *)0x0);
      puStack_7 = (undefined *)(pBVar18->m_Center).x;
      puStack_8 = (undefined *)(pBVar18->m_Center).y;
      puStack_9 = (undefined *)(pBVar18->m_Center).z;
      puStack_10 = (undefined *)(pBVar18->m_Extents).x;
      uStack_11._0_4_ = (pBVar18->m_Extents).y;
      uStack_11._4_4_ = (pBVar18->m_Extents).z;
      puVar20 = (undefined8 *)func_?(&VStack_13,&puStack_7);
      uStack_14 = *puVar20;
      fVar15 = *(float *)(puVar20 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar15;
      a.x = (float)(undefined4)uStack_14;
      a.y = (float)uStack_14._4_4_;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_13,a,origin,(MethodInfo *)0x0);
      uVar21 = pVVar12->x;
      uVar22 = pVVar12->y;
      fStack_5 = pVVar12->z;
      uStack_6 = 0;
      ppuStack_2 = &puStack_7;
      puStack_3 = (undefined *)uVar21;
      puStack_4 = (undefined *)uVar22;
      func_?();
      ppMVar23 = meshRenderers->vector;
      puStack_1 = puStack_7;
      ppuStack_2 = (undefined **)puStack_8;
      puStack_3 = puStack_9;
      puStack_4 = puStack_10;
      fStack_5 = (float)uStack_11;
      uStack_6 = (undefined4)((ulonglong)uStack_11 >> 0x20);
      for (uVar24 = 1; ppMVar23 = ppMVar23 + 1, (int)uVar24 < (int)meshRenderers->max_length;
          uVar24 = uVar24 + 1) {
        if (meshRenderers->max_length <= uVar24) goto code_?;
        if (*ppMVar23 == (MeshRenderer *)0x0) goto code_?;
        pBVar18 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                            ((Bounds *)&stack0xffffff88,(Renderer *)*ppMVar23,(MethodInfo *)0x0);
        puStack_7 = (undefined *)(pBVar18->m_Center).x;
        puStack_8 = (undefined *)(pBVar18->m_Center).y;
        puStack_9 = (undefined *)(pBVar18->m_Center).z;
        puStack_10 = (undefined *)(pBVar18->m_Extents).x;
        uStack_11._0_4_ = (pBVar18->m_Extents).y;
        uStack_11._4_4_ = (pBVar18->m_Extents).z;
        puVar20 = (undefined8 *)func_?(&VStack_13,&puStack_7);
        uStack_14 = *puVar20;
        fVar15 = *(float *)(puVar20 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_00.z = fVar15;
        a_00.x = (float)(undefined4)uStack_14;
        a_00.y = (float)uStack_14._4_4_;
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           (&BStack_19.m_Extents,a_00,origin,(MethodInfo *)0x0);
        uVar25 = pVVar12->x;
        uVar26 = pVVar12->y;
        fStack_5 = pVVar12->z;
        uStack_6 = 0;
        ppuStack_2 = &puStack_7;
        puStack_3 = (undefined *)uVar25;
        puStack_4 = (undefined *)uVar26;
        func_?();
        uStack_6 = 0;
        puStack_1 = puStack_8;
        ppuStack_2 = (undefined **)puStack_9;
        puStack_3 = puStack_10;
        puStack_4 = (undefined *)uStack_11;
        fStack_5 = (float)((ulonglong)uStack_11 >> 0x20);
        func_?();
      }
    }
    (__return_storage_ptr__->m_Center).x = (float)puStack_1;
    (__return_storage_ptr__->m_Center).y = (float)ppuStack_2;
    (__return_storage_ptr__->m_Center).z = (float)puStack_3;
    (__return_storage_ptr__->m_Extents).x = (float)puStack_4;
    (__return_storage_ptr__->m_Extents).y = fStack_5;
    (__return_storage_ptr__->m_Extents).z = (float)uStack_6;
    return __return_storage_ptr__;
  }
code_?:
  func_?();
code_?:
  uVar27 = func_?(0);
  func_?(uVar27);
  pcVar28 = (code *)swi(3);
  pBVar18 = (Bounds *)(*pcVar28)();
  return pBVar18;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?(TypeInfo__UpdateController);
  }
  UpdateController::UpdateController_RemoveUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
  UpdateController::UpdateController_RemoveFixedUpdateObject
            ((IUpdatecontrollerSubscriberFixedUpdate *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_02 = (PrefabPool *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (PrefabPool *)0x0) {
    pOVar1 = PrefabPool::PrefabPool_get_MVRoundCubePrefab(this_02,(MethodInfo *)0x0);
    if (pOVar1 != (ObjectPrefab *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = (MethodInfo *)&UNK_?;
      this_03 = (ScaleAnimationBase *)func_?();
      ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,method_00);
      if (this_03 != (ScaleAnimationBase *)0x0) {
        (this_03->fields)._._._._.m_CachedPtr = this;
        this_00 = (pOVar1->fields).meshRenderers;
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this_03,
                   MethodInfo__MVGameModeChangeNotifier___RemoveObject_c__AnonStorey0____m__0_IGameStateControllerSubscriber_
                   ,
                   MethodInfo__System__Predicate<IGameStateControllerSubscriber>__Predicate_System__Object__void__
                  );
        if (this_00 != (Renderer__Array *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
          List_1_UIPushOption__RemoveAll
                    ((List_1_UIPushOption_ *)this_00,(Predicate_1_UIPushOption_ *)this_04,
                     MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__RemoveAll_System__Predicate<IGameStateControllerSubscriber>_
                    );
          MVWorldObjectClient::MVWorldObjectClient_Destroy
                    ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
          this_01 = (this->fields).cullingSubscriberBase;
          if (this_01 != (CullingSubscriberBase *)0x0) {
            CullingSubscriberBase::CullingSubscriberBase_Destroy(this_01,(MethodInfo *)0x0);
            (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
          }
          return;
        }
      }
    }
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).moveTarget;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    b = (this->fields).oscilPos;
    a = *pVVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar4)();
  return pVVar1;
}


/* Vector3 GetTargetPos(Boolean) */

Vector3 * Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_GetTargetPos
                    (Vector3 *__return_storage_ptr__,MVGhostInstance *this,bool patrolling,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    pOVar1 = System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
             ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
             Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                       ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                         *)this_00,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      pMVar2 = pOVar1[2].monitor;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
      VVar4 = *pVVar3;
      pVVar3 = (Vector3 *)
               (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                         (&stack0xffffffd0,this,(this->klass->vtable).set_WorldPosition.methodPtr);
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                ((Vector3 *)&stack0xffffffdc,VVar4,*pVVar3,(MethodInfo *)0x0);
      if (patrolling == 0) {
        fVar5 = (this->fields).speed;
      }
      else {
        fVar5 = (this->fields).patrolSpeed;
      }
      fVar6 = (this->fields).distance;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
      uVar7._0_4_ = pVVar3->x;
      fStack_8 = pVVar3->y;
      fVar9 = pVVar3->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        uVar7._0_4_ = (float)TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      fVar10 = (float)uVar7;
      VVar4.z = fVar9;
      VVar4.x = (float)uVar7;
      VVar4.y = SUB84(uVar7,4);
      pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                         ((Quaternion *)&stack0xffffffb4,
                          ((float)pMVar2 * _UNK_? * fVar5) / fVar6,VVar4,(MethodInfo *)0x0)
      ;
      fVar6 = pQVar11->x;
      fVar9 = pQVar11->y;
      fVar12 = pQVar11->z;
      fVar13 = pQVar11->w;
      puVar14 = &UNK_?;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_forward
                         ((Vector3 *)&stack0xffffffc4,(MethodInfo *)0x0);
      fVar5 = pVVar3->y;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffc4,*pVVar3,(this->fields).distance,
                          (MethodInfo *)0x0);
      VVar4 = *pVVar3;
      if (patrolling == 0) {
        fVar15 = (this->fields).speed;
      }
      else {
        fVar15 = (this->fields).patrolSpeed;
      }
      fVar16 = (this->fields).distance;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      method_00 = (MethodInfo *)0x0;
      dVar17 = (double)((fVar15 * fVar5) / (fVar16 * _UNK_?));
      func_?();
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0xffffffc4,VVar4,(float)dVar17,method_00);
      rotation.y = fVar9;
      rotation.x = fVar6;
      rotation.z = fVar12;
      rotation.w = fVar13;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffc4,rotation,*pVVar3,(MethodInfo *)0x0);
      a.y = (float)puVar14;
      a.x = fVar10;
      a.z = (float)&stack0xffffffc4;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                ((Vector3 *)&stack0xffffffc4,a,*pVVar3,(MethodInfo *)0x0);
      return (Vector3 *)&stack0xffffffc4;
    }
  }
  func_?(0);
  pcVar18 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar18)();
  return pVVar3;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_Initialize
               (MVGhostInstance *this,MethodInfo *method)

{
  object = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  MVWorldObjectClient::MVWorldObjectClient_Initialize((MVWorldObjectClient *)this,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
  if (MVar1 == MVGameMode__Enum_Edit) {
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar2 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar2 != (PrefabPool *)0x0) {
      pSVar3 = PrefabPool::PrefabPool_get_RangeVisualizationObject(pPVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pSVar3 = (SphereVolumeIndicator *)
               UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         ((XpBoostParticlePreviewer *)pSVar3,
                          SphereVolumeIndicator_MethodInfo__UnityEngine__Object__Instantiate<SphereVolumeIndicator>_SphereVolumeIndicator_
                         );
      (this->fields).rangeVis = pSVar3;
      if (pSVar3 != (SphereVolumeIndicator *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pSVar3,(MethodInfo *)0x0);
        pGVar5 = (this->fields)._.gameObject;
        if (pGVar5 != (GameObject *)0x0) {
          value = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar5,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar4,value,(MethodInfo *)0x0);
            pSVar3 = (this->fields).rangeVis;
            if (pSVar3 != (SphereVolumeIndicator *)0x0) {
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pSVar3,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                  ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
              if (pTVar4 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar4,*pVVar6,(MethodInfo *)0x0);
                pSVar3 = (this->fields).rangeVis;
                if (pSVar3 != (SphereVolumeIndicator *)0x0) {
                  SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                            (pSVar3,(this->fields).distance,(MethodInfo *)0x0);
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
code_?:
    if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
      func_?();
    }
    UpdateController::UpdateController_AddFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,
               UpdatePriority__Enum_PRE_UPDATEBUCKET_20,10,(MethodInfo *)0x0);
    UpdateController::UpdateController_AddUpdateObject
              ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_PRE_UPDATEBUCKET_20,10
               ,(MethodInfo *)0x0);
    MVGhostInstance_InitializeCommon(this,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    puVar7 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldPosition_1.method)();
    uVar8 = (this->fields).lodSphereOffset.x;
    uVar9 = (this->fields).lodSphereOffset.y;
    this = (MVGhostInstance *)(this->fields).lodSphereOffset.z;
    uVar10 = *puVar7;
    fVar11 = *(float *)(puVar7 + 1);
    fVar12 = (float)uVar10;
    fVar13 = (float)((ulonglong)uVar10 >> 0x20);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
      uVar10 = CONCAT44(fVar13,fVar12);
    }
    fVar14 = (float)uVar9;
    VVar15.z = fVar11;
    VVar15.x = (float)(int)uVar10;
    VVar15.y = (float)(int)((ulonglong)uVar10 >> 0x20);
    b.x = (float)uVar8;
    b = (Vector3)CONCAT84(uVar16,b.x);
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xfffffff0,VVar15,b,(MethodInfo *)0x0);
    VVar15 = *pVVar6;
    pUVar17 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar17,(Object *)object,
               MethodInfo__MVGhostInstance__OnStateChange_UnityEngine__CullingGroupEvent_,
               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
              );
    this_01 = (CullingSubscriberBase *)func_?();
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (this_01,3.4,VVar15,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar17,
               (MethodInfo *)0x0);
    (object->fields).cullingSubscriberBase = this_01;
    if (this_01 != (CullingSubscriberBase *)0x0) {
      LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
                ((LockCursorManager3DMode *)this_01,(Action_1_Boolean_ *)0x3,(MethodInfo *)0x0);
      pUVar18 = (object->fields)._.PositionChanged;
      pUVar17 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar17,(Object *)object,
                 MethodInfo__MVGhostInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
                 ,
                 MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
                );
      pUVar19 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pUVar18,(Delegate *)pUVar17,(MethodInfo *)0x0);
      pUVar18 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
      if (pUVar19 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        if (pUVar19->klass ==
            TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
           ) {
          pUVar18 = pUVar19;
        }
        if (pUVar18 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
        goto code_?;
      }
      (object->fields)._.PositionChanged = pUVar18;
      pGVar5 = (object->fields)._ghostInstance;
      if (pGVar5 != (GameObject *)0x0) {
        this_02 = (SmoothPhysicsMovement *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                            (pGVar5,
                             SmoothPhysicsMovement_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothPhysicsMovement>__
                            );
        (object->fields).smoothPhysicsMovement = this_02;
        if (this_02 != (SmoothPhysicsMovement *)0x0) {
          SmoothPhysicsMovement::SmoothPhysicsMovement_Init
                    (this_02,(object->fields).moveTarget,(object->fields).cullingSubscriberBase,
                     (MVWorldObjectClient *)0x0,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar2 = (PrefabPool *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pPVar2 != (PrefabPool *)0x0) {
            this_03 = PrefabPool::PrefabPool_get_MVRoundCubePrefab(pPVar2,(MethodInfo *)0x0);
            if (this_03 != (ObjectPrefab *)0x0) {
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              this_00 = (this_03->fields).meshRenderers;
              if (this_00 != (Renderer__Array *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
                List_1_UIPushOption__Add
                          ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)object,
                           MethodInfo__System__Collections__Generic__List<IGameStateControllerSubscriber>__Add_IGameStateControllerSubscriber_
                          );
                MVGameModeChangeNotifier::MVGameModeChangeNotifier_GetPresentState
                          ((MVGameModeChangeNotifier *)this_03,(MethodInfo *)0x0);
                func_?();
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_InitializeCommon
               (MVGhostInstance *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields)._ghostInstance;
  if (pGVar1 == (GameObject *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
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
    if (pUVar2 == (UseInteratorVisualization__Array *)0x0) {
code_?:
      if (meshRenderers->max_length != 0) {
        meshRenderers->vector[0] = (MeshRenderer *)pUVar2;
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
    iVar12 = func_?(pUVar2,(meshRenderers->klass->_0).element_class);
    if (iVar12 != 0) goto code_?;
  }
  uVar13 = func_?(0,0);
  func_?(uVar13);
code_?:
  uVar13 = func_?(0);
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_InitializeInventory
               (MVGhostInstance *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (*(GameObject **)(in_stack_1 + 0x104) == (GameObject *)0x0) {
code_?:
    func_?(0);
  }
  else {
    pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       (*(GameObject **)(in_stack_1 + 0x104),
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
    if (pUVar2 == (UseInteratorVisualization__Array *)0x0) {
code_?:
      if (meshRenderers->max_length != 0) {
        meshRenderers->vector[0] = (MeshRenderer *)pUVar2;
        origin.z = fVar6;
        origin.x = (float)(int)uVar5;
        origin.y = (float)(int)((ulonglong)uVar5 >> 0x20);
        pBVar8 = MVGhostInstance_ComputeLocalBounds
                           ((Bounds *)&stack0xffffffe4,origin,meshRenderers,(MethodInfo *)0x0);
        fVar6 = (pBVar8->m_Center).y;
        fVar9 = (pBVar8->m_Center).z;
        fVar10 = (pBVar8->m_Extents).x;
        uVar5 = *(undefined8 *)&(pBVar8->m_Extents).y;
        *(float *)(in_stack_1 + 0x10c) = (pBVar8->m_Center).x;
        *(float *)(in_stack_1 + 0x110) = fVar6;
        *(float *)(in_stack_1 + 0x114) = fVar9;
        *(float *)(in_stack_1 + 0x118) = fVar10;
        *(undefined8 *)(in_stack_1 + 0x11c) = uVar5;
        return;
      }
      goto code_?;
    }
    iVar11 = func_?(pUVar2,(meshRenderers->klass->_0).element_class);
    uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),uVar7);
    if (iVar11 != 0) goto code_?;
  }
  uVar7 = func_?(0,0);
  func_?(uVar7);
code_?:
  uVar7 = func_?(0);
  func_?(uVar7);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean IsTouchingAvatar(MVWorldObjectClient) */

bool Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_IsTouchingAvatar
               (MVGhostInstance *this,MVWorldObjectClient *TargetAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = MVGhostInstance_GetTacticalPos((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  fVar3 = pVVar1->z;
  if (TargetAvatar != (MVWorldObjectClient *)0x0) {
    puVar4 = (undefined8 *)
             (*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)
                       (&stack0xffffffd0,TargetAvatar);
    fVar5 = *(float *)(puVar4 + 1);
    fVar6 = (float)*puVar4;
    fVar7 = (float)((ulonglong)*puVar4 >> 0x20);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                       ((Vector3 *)&stack0xffffffd0,(MethodInfo *)0x0);
    a.y = fVar7;
    a.x = fVar6;
    a.z = fVar5;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd0,a,*pVVar1,(MethodInfo *)0x0);
    uVar8 = pVVar1->x;
    a_00.y = (float)uVar8;
    a_00.x = (float)uVar2;
    a_00.z = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffd0,a_00,*pVVar1,(MethodInfo *)0x0);
    fVar9 = (float10)func_?();
    return (float)fVar9 < _UNK_?;
  }
  func_?();
  pcVar10 = (code *)swi(3);
  bVar11 = (*pcVar10)();
  return bVar11;
}


/* Void MoveGhost(MVWorldObjectClient) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_MoveGhost
               (MVGhostInstance *this,MVWorldObjectClient *TargetAvatar,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  cVar1 = '\0';
  if (TargetAvatar == (MVWorldObjectClient *)0x0) goto code_?;
  puVar2 = (undefined8 *)
            (*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)
                      (&stack0xffffffe8,TargetAvatar,
                       (TargetAvatar->klass->vtable).set_WorldPosition.methodPtr);
  uVar3 = *puVar2;
  fVar4 = *(float *)(puVar2 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                      ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
  VVar6.z = fVar4;
  VVar6.x = (float)(int)uVar3;
  VVar6.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffe8,VVar6,*pVVar5,(MethodInfo *)0x0);
  fVar7 = pVVar5->z;
  puStack_8 = (undefined *)pVVar5->x;
  unique0x0000a404 = (Transform *)pVVar5->y;
  uVar3 = _puStack_30;
  pVVar5 = (Vector3 *)
            (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                      (&stack0xffffffe8,this,(this->klass->vtable).set_WorldPosition.methodPtr);
  VVar9.z = fVar7;
  VVar9.x = (float)uVar3;
  VVar9.y = SUB84(uVar3,4);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffe8,VVar9,*pVVar5,(MethodInfo *)0x0);
  fVar10 = (float10)func_?();
  fVar4 = (this->fields).distance;
  if (fVar4 * fVar4 < (float)fVar10) {
    pVVar5 = MVGhostInstance_GetTargetPos((Vector3 *)&stack0xffffffe8,this,0,(MethodInfo *)0x0);
    cVar1 = '\x01';
    puStack_8 = (undefined *)pVVar5->x;
    unique0x0000a404 = (Transform *)pVVar5->y;
    fVar7 = pVVar5->z;
  }
  pVVar5 = MVGhostInstance_GetTacticalPos((Vector3 *)&stack0xffffffe8,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar5->x;
  uVar3._4_4_ = pVVar5->y;
  fVar4 = pVVar5->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_06.z = fVar7;
  a_06.x = (float)puStack_8;
  a_06.y = (float)stack0xffffffd4;
  b_00.z = fVar4;
  b_00.x = (float)(int)uVar3;
  b_00.y = (float)(int)((ulonglong)uVar3 >> 0x20);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffe8,a_06,b_00,(MethodInfo *)0x0);
  pVVar5 = (Vector3 *)func_?();
  if (cVar1 == '\0') {
    fVar4 = (this->fields).speed;
  }
  else {
    fVar4 = (this->fields).patrolSpeed;
  }
  stack0xffffffd4 = (Transform *)&stack0xffffffe8;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffe8,*pVVar5,fVar4,(MethodInfo *)0x0);
  uVar11._0_4_ = pVVar5->x;
  uVar11._4_4_ = pVVar5->y;
  fVar4 = pVVar5->z;
  fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  cVar1 = (char)((ulonglong)uVar11 >> 0x38);
  a_07.z = fVar4;
  a_07.x = (float)(int)uVar11;
  a_07.y = (float)(int)((ulonglong)uVar11 >> 0x20);
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffe8,a_07,fVar12,(MethodInfo *)0x0);
  uVar13._0_4_ = pVVar5->x;
  uVar13._4_4_ = pVVar5->y;
  fVar4 = pVVar5->z;
  if (cVar1 == '\0') {
code_?:
    pVVar5 = MVGhostInstance_GetTacticalPos((Vector3 *)&stack0xffffffe8,this,(MethodInfo *)0x0);
    fVar7 = pVVar5->x;
    fVar14 = pVVar5->y;
    fVar12 = pVVar5->z;
    puVar2 = (undefined8 *)(*(code *)(TargetAvatar->klass->vtable).get_WorldPosition_1.method)();
    _puStack_30 = *puVar2;
    fVar15 = *(float *)(puVar2 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                        ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    a_00.z = fVar15;
    a_00.x = (float)puStack_8;
    a_00.y = (float)stack0xffffffd4;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffe8,a_00,*pVVar5,(MethodInfo *)0x0);
    a_01.y = fVar14;
    a_01.x = fVar7;
    a_01.z = fVar12;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffe8,a_01,*pVVar5,(MethodInfo *)0x0);
    fVar10 = (float10)func_?();
    fVar7 = (float)fVar10;
    if (cVar1 == '\0') {
      fVar12 = (this->fields).speed;
    }
    else {
      fVar12 = (this->fields).patrolSpeed;
    }
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    if (fVar7 < fVar15 * fVar12) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                          ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
      uVar13._0_4_ = pVVar5->x;
      uVar13._4_4_ = pVVar5->y;
      fVar4 = pVVar5->z;
    }
  }
  else {
    pVVar5 = MVGhostInstance_GetTacticalPos((Vector3 *)&stack0xffffffe8,this,(MethodInfo *)0x0);
    fVar12 = pVVar5->x;
    fVar15 = pVVar5->y;
    fVar14 = pVVar5->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.y = fVar15;
    a.x = fVar12;
    a.z = fVar14;
    b.z = fVar7;
    b.x = (float)puStack_8;
    b.y = (float)stack0xffffffd4;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
    fVar10 = (float10)func_?();
    fVar7 = (this->fields).patrolSpeed;
    fVar12 = (float)fVar10;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                      ((MethodInfo *)0x0);
    if (fVar15 * fVar7 <= fVar12) goto code_?;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
    fVar4 = pVVar5->z;
    uVar13._0_4_ = pVVar5->x;
    uVar13._4_4_ = pVVar5->y;
  }
  VVar6 = (this->fields).oscilPos;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                      ((Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
  fVar16 = pVVar5->x;
  fVar17 = pVVar5->y;
  stack0xffffffd4 = (Transform *)pVVar5->z;
  fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_realtimeSinceStartup
                    ((MethodInfo *)0x0);
  if (cVar1 == '\0') {
    fVar12 = (this->fields).speed;
  }
  else {
    fVar12 = (this->fields).patrolSpeed;
  }
  fVar15 = (this->fields).oscillationPeriod;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar18 = (double)((fVar12 * fVar7) / fVar15);
  func_?();
  a_03.y = fVar17;
  a_03.x = fVar16;
  a_03.z = (float)stack0xffffffd4;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&puStack_19,a_03,(float)dVar18,in_stack_20);
  fVar12 = pVVar5->y;
  fVar7 = pVVar5->z;
  VVar9 = *pVVar5;
  (this->fields).oscilPos.x = pVVar5->x;
  (this->fields).oscilPos.y = fVar12;
  (this->fields).oscilPos.z = fVar7;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&puStack_19,VVar9,VVar6,(MethodInfo *)0x0);
  VVar6 = *pVVar5;
  pTVar21 = (this->fields).moveTarget;
  stack0xffffffd4 = pTVar21;
  if (pTVar21 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffb4,pTVar21,(MethodInfo *)0x0);
    fVar22 = pVVar5->x;
    fVar23 = pVVar5->y;
    fVar7 = pVVar5->z;
    a_04.z = fVar4;
    a_04.x = (float)(int)uVar13;
    a_04.y = (float)(int)((ulonglong)uVar13 >> 0x20);
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffe8,a_04,VVar6,(MethodInfo *)0x0);
    a_05.y = fVar23;
    a_05.x = fVar22;
    a_05.z = fVar7;
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffe8,a_05,*pVVar5,(MethodInfo *)0x0);
    fVar4 = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (stack0xffffffd4,*pVVar5,(MethodInfo *)0x0);
    puVar24 = &stack0xffffffc0;
    uVar25 = 0;
    func_?();
    fVar10 = (float10)func_?();
    if ((float)fVar10 <= _UNK_?) {
      return;
    }
    pTVar21 = (this->fields).moveTarget;
    if (pTVar21 != (Transform *)0x0) {
      pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffe4,pTVar21,(MethodInfo *)0x0);
      fVar7 = pQVar26->x;
      puStack_19 = (undefined *)pQVar26->y;
      fVar12 = pQVar26->z;
      fVar15 = pQVar26->w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
      }
      forward.y = (float)uVar25;
      forward.x = (float)puVar24;
      forward.z = fVar4;
      pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                          ((Quaternion *)&stack0xffffffe4,forward,(MethodInfo *)0x0);
      if (cVar1 == '\0') {
        fVar4 = (this->fields).speed;
      }
      else {
        fVar4 = (this->fields).patrolSpeed;
      }
      a_02.y = (float)puStack_19;
      a_02.x = fVar7;
      a_02.z = fVar12;
      a_02.w = fVar15;
      pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffe4,a_02,*pQVar26,
                           fVar4 * (this->fields).turnSlerpFactor,(MethodInfo *)0x0);
      if (pTVar21 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar21,*pQVar26,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnDataUpdate
               (MVGhostInstance *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_2._16_4_ = (Object *)0x0;
  KStack_3.key = 0;
  KStack_3.value = 0;
  auStack_2._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_2._4_4_ = (MonitorData *)0x0;
  auStack_2._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_2._12_4_ = 0;
  func_?();
  puStack_4 = (undefined4 *)&stack0xffffffac;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_4 = (undefined4 *)&stack0xffffffac, (TypeInfo__System__String->_1).cctor_started == 0
     )) {
    puStack_4 = (undefined4 *)&stack0xffffffac;
    func_?(TypeInfo__System__String);
  }
  this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab(in_stack_5,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
    pDVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb8,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_2._0_4_ = pDVar6->dictionary;
    auStack_2._4_4_ = pDVar6->next;
    auStack_2._8_4_ = pDVar6->stamp;
    auStack_2._12_4_ = (pDVar6->current).key;
    auStack_2._16_4_ = (pDVar6->current).value;
    while( true ) {
      cVar7 = func_?();
      if (cVar7 == '\0') {
        *puStack_4 = 0xcb;
        func_?();
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      KStack_3 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_2,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar8 = (int *)func_?();
      if (piVar8 == (int *)0x0) break;
      value = (String *)(**(code **)(*piVar8 + 0xd8))();
      piVar8 = (int *)func_?();
      if (piVar8 == (int *)0x0) break;
      a = (String *)(**(code **)(*piVar8 + 0xd8))();
      if (a != (String *)0x0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar9 = mscorlib.dll::System::String::String_op_Equality
                          (a,StringLiteral_Speed,(MethodInfo *)0x0);
        if (bVar9 == 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar9 = mscorlib.dll::System::String::String_op_Equality
                            (a,StringLiteral_Distance,(MethodInfo *)0x0);
          if (bVar9 == 0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            bVar9 = mscorlib.dll::System::String::String_op_Equality
                              (a,StringLiteral_GameEffect,(MethodInfo *)0x0);
            if (bVar9 != 0) {
              if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                func_?();
              }
              pUVar10 = (UseLeverObject *)
                       mscorlib.dll::System::Convert::Convert_ToInt32_10(value,(MethodInfo *)0x0);
              (in_stack_5->fields).useLeverPrefab = pUVar10;
            }
          }
          else {
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            pGStack_11 = (GameObject *)
                         mscorlib.dll::System::Convert::Convert_ToSingle_9(value,(MethodInfo *)0x0);
            (in_stack_5->fields).mvMovingPlatformGroupPrefab = pGStack_11;
          }
        }
        else {
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          pGStack_11 = (GameObject *)
                       mscorlib.dll::System::Convert::Convert_ToSingle_9(value,(MethodInfo *)0x0);
          (in_stack_5->fields).mvMovingPlatformNodePrefab = pGStack_11;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_OnPositionChanged
               (MVGhostInstance *this,MVWorldObjectClient *wo,
               PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((this->fields).ghostMode == 0) {
    if (positionChangedEventArgs == (PositionChangedEventArgs *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
         Serialization::JsonProperty]::
         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_00,
                    (MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CullingApiWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CullingApiWrapper->_1).cctor_started == 0)) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    bVar1 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent,(int32_t)distanceBandIndex,(MethodInfo *)0x0);
    (this->fields).isLODVisible = bVar1;
    MVGhostInstance_UpGhosts(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._16_4_ = (Object *)0x0;
  KStack_7.key = 0;
  KStack_7.value = 0;
  auStack_6._0_4_ = (LevelRewardsManager__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Dictionary_2_System_Int32_System_Int32_ *)0x0;
  auStack_6._12_4_ = 0;
  func_?();
  puStack_8 = (undefined4 *)&stack0xffffffa4;
  puStack_4 = &stack0xffffffa4;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_8 = (undefined4 *)&stack0xffffffa4, puStack_4 = &stack0xffffffa4,
     (TypeInfo__System__String->_1).cctor_started == 0)) {
    puStack_8 = (undefined4 *)&stack0xffffffa4;
    puStack_4 = &stack0xffffffa4;
    func_?(TypeInfo__System__String);
  }
  this_00 = (Dictionary_2_WinningConditionType_System_Object_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_WinningConditionType_System_Object_ *)0x0) {
    pDVar9 = mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::
             Object]::Dictionary_2_WinningConditionType_System_Object__GetEnumerator
                       ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
                        &stack0xffffffb0,this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                       );
    auStack_6._0_4_ = pDVar9->dictionary;
    auStack_6._4_4_ = pDVar9->next;
    auStack_6._8_4_ = pDVar9->stamp;
    auStack_6._12_4_ = (pDVar9->current).key;
    auStack_6._16_4_ = (pDVar9->current).value;
    uStack_1 = 0;
    while( true ) {
      cVar10 = func_?();
      if (cVar10 == '\0') {
        *puStack_8 = 0xcb;
        uStack_1 = 0xffffffff;
        func_?();
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_7 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)auStack_6,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar11 = (int *)func_?();
      if (piVar11 == (int *)0x0) break;
      value = (String *)(**(code **)(*piVar11 + 0xd8))();
      piVar11 = (int *)func_?();
      if (piVar11 == (int *)0x0) break;
      a = (String *)(**(code **)(*piVar11 + 0xd8))();
      if (a != (String *)0x0) {
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?();
        }
        bVar12 = mscorlib.dll::System::String::String_op_Equality
                          (a,StringLiteral_Speed,(MethodInfo *)0x0);
        if (bVar12 == 0) {
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          bVar12 = mscorlib.dll::System::String::String_op_Equality
                            (a,StringLiteral_Distance,(MethodInfo *)0x0);
          if (bVar12 == 0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            bVar12 = mscorlib.dll::System::String::String_op_Equality
                              (a,StringLiteral_GameEffect,(MethodInfo *)0x0);
            if (bVar12 != 0) {
              if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
                func_?();
              }
              iVar13 = mscorlib.dll::System::Convert::Convert_ToInt32_10(value,(MethodInfo *)0x0);
              (this->fields).gameEffect = iVar13;
            }
          }
          else {
            if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
              func_?();
            }
            fStack_14 = mscorlib.dll::System::Convert::Convert_ToSingle_9(value,(MethodInfo *)0x0);
            (this->fields).distance = fStack_14;
          }
        }
        else {
          if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__Convert);
          }
          fStack_14 = mscorlib.dll::System::Convert::Convert_ToSingle_9(value,(MethodInfo *)0x0);
          (this->fields).speed = fStack_14;
        }
      }
    }
  }
  func_?();
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                     (auStack_2,this,(this->klass->vtable).set_WorldPosition.methodPtr);
  puStack_3 = (undefined *)(this->fields).lodSphereOffset.x;
  unique0x0000a404 = (this->fields).lodSphereOffset.y;
  fVar4 = (this->fields).lodSphereOffset.z;
  uVar5 = *puVar1;
  fVar6 = *(float *)(puVar1 + 1);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  uVar7 = _puStack_18;
  a.z = fVar6;
  a.x = (float)uVar5;
  a.y = SUB84(uVar5,4);
  b.z = fVar4;
  stack0xffffffec = (undefined4)((ulonglong)_puStack_18 >> 0x20);
  b.x = (float)puStack_3;
  b.y = (float)stack0xffffffec;
  _puStack_18 = uVar7;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     ((Vector3 *)&stack0xfffffff0,a,b,(MethodInfo *)0x0);
  puStack_3 = (undefined *)pVVar8->x;
  unique0x0000a404 = pVVar8->y;
  fVar4 = pVVar8->z;
  pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                          );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar9,(Object *)this,
             MethodInfo__MVGhostInstance__OnStateChange_UnityEngine__CullingGroupEvent_,
             MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
            );
  this_00 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
  uVar5 = _puStack_18;
  _puStack_18 = CONCAT44(this_00,&UNK_?);
  uVar7 = _puStack_18;
  position.z = fVar4;
  puStack_3 = (undefined *)uVar5;
  stack0xffffffec = (undefined4)((ulonglong)uVar5 >> 0x20);
  position.x = (float)puStack_3;
  position.y = (float)stack0xffffffec;
  _puStack_18 = uVar7;
  CullingSubscriberBase::CullingSubscriberBase__ctor_2
            (this_00,3.4,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar9,
             (MethodInfo *)0x0);
  (this->fields).cullingSubscriberBase = this_00;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    LockCursorManager3DMode::LockCursorManager3DMode_set_OnCursorLockChanged
              ((LockCursorManager3DMode *)this_00,(Action_1_Boolean_ *)0x3,(MethodInfo *)0x0);
    pUVar10 = (this->fields)._.PositionChanged;
    pUVar9 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar9,(Object *)this,
               MethodInfo__MVGhostInstance__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_
               ,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>__UnityAction_System__Object__void__
              );
    pUStack11 =
         (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pUVar10,(Delegate *)pUVar9,(MethodInfo *)0x0);
    pUVar10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    if (pUStack11 != (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      if (pUStack11->klass ==
          TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>)
      {
        pUVar10 = pUStack11;
      }
      pUStack12 =
           TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>
      ;
      if (pUVar10 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0)
      goto code_?;
    }
    (this->fields)._.PositionChanged = pUVar10;
    return;
  }
  func_?();
  pUStack11 = extraout_ECX;
  pUStack12 = extraout_EDX;
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
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
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pLVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                       (this_01,WorldObjectType__Enum_PlayModeAvatar,(MethodInfo *)0x0);
    (this->fields).targetWos = pLVar1;
    if (pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) {
      index = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
              Serialization::JsonProperty]::
              Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                        ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar1,
                         MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                        );
joined_?:
      index = (Object *)((int)&index[-1].monitor + 3);
      if (-1 < (int)index) {
        pLVar1 = (this->fields).targetWos;
        if (((pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) &&
            (pDVar2 = (DayNightCycle *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                 (int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                ), pDVar2 != (DayNightCycle *)0x0)) &&
           (pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar2,(MethodInfo *)0x0),
           pCVar3 != (CelestialParam *)0x0)) {
          iVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                            ((GameObject *)pCVar3,(MethodInfo *)0x0);
          if (iVar4 != (this->fields).playerLayer) goto code_?;
          pLVar1 = (this->fields).targetWos;
          if (((pLVar1 != (List_1_MVWorldObjectClient_ *)0x0) &&
              (pDVar2 = (DayNightCycle *)
                        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems
                        ::IEventSystemHandler]::
                        List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                  ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)pLVar1,
                                   (int32_t)index,
                                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                  ), pDVar2 != (DayNightCycle *)0x0)) &&
             (pCVar3 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDVar2,(MethodInfo *)0x0),
             pCVar3 != (CelestialParam *)0x0)) goto code_?;
        }
        goto code_?;
      }
      pLVar1 = (this->fields).targetWos;
      this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                 *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (this_02,(Object *)this,
                 MethodInfo__MVGhostInstance___UpdateControllerFixedUpdate_m__0_MVWorldObjectClient_
                 ,MethodInfo__System__Func<MVWorldObjectClient,_float>__Func_System__Object__void__)
      ;
      source = System.Core.dll::System::Linq::Enumerable::Enumerable_ThenBy_6
                         ((IOrderedEnumerable_1_System_Object_ *)pLVar1,
                          (Func_2_Object_Int64_ *)this_02,
                          System__Linq__IOrderedEnumerable<MVWorldObjectClient>_MethodInfo__System__Linq__Enumerable__OrderBy<MVWorldObjectClient,_float>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>__System__Func<MVWorldObjectClient,_float>_
                         );
      TargetAvatar = (MVWorldObjectClient *)
                     System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_5
                               ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,
                                MVWorldObjectClient_MethodInfo__System__Linq__Enumerable__FirstOrDefault<MVWorldObjectClient>_System__Collections__Generic__IEnumerable<MVWorldObjectClient>_
                               );
      if (TargetAvatar != (MVWorldObjectClient *)0x0) {
        this_00 = (List_1_UnityEngine_UIVertex_ *)(this->fields).targetWos;
        if (this_00 == (List_1_UnityEngine_UIVertex_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
        List_1_UnityEngine_UIVertex__Clear
                  (this_00,
                   MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__Clear__);
        MVGhostInstance_MoveGhost(this,TargetAvatar,(MethodInfo *)0x0);
        this_03 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (TargetAvatar,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar5 != 0) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          iVar6 = (this->fields).gameEffect;
          if (iVar6 == 0) {
            bVar5 = MVGhostInstance_IsTouchingAvatar(this,TargetAvatar,(MethodInfo *)0x0);
            if (bVar5 != 0) {
              fVar7 = (this->fields).damagePerSecond;
              fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                                 ((MethodInfo *)0x0);
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?();
              }
              pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                 ((Vector3 *)&stack0xffffffe8,(MethodInfo *)0x0);
              pIVar10 = ProximityDamageAndImpulse::ProximityDamageAndImpulse_Create
                                 ((InteractionData *)&stack0xffffffe0,fVar8 * fVar7,*pVVar9,
                                  PlayerKilledByType__Enum_Ghost,(MethodInfo *)0x0);
              if (this_03 != (InteractionDataHandlerBase *)0x0) {
                InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                          (this_03,*pIVar10,1,(MethodInfo *)0x0);
                MVGhostInstance_IsTouchingAvatar(this,TargetAvatar,(MethodInfo *)0x0);
                return;
              }
              goto code_?;
            }
          }
          else if (iVar6 == 1) {
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)StringLiteral_GameEffect_INSTANT_DEATH_out_com,(MethodInfo *)0x0);
          }
        }
        MVGhostInstance_IsTouchingAvatar(this,TargetAvatar,(MethodInfo *)0x0);
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
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                    ((GameObject *)pCVar3,(MethodInfo *)0x0);
  if (bVar5 == 0) {
code_?:
    pLVar1 = (this->fields).targetWos;
    if (pLVar1 == (List_1_MVWorldObjectClient_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[MVPlayer]::List_1_MVPlayer__RemoveAt
              ((List_1_MVPlayer_ *)pLVar1,(int32_t)index,
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
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                     ((MethodInfo *)0x0);
  if ((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar4 = (this_01->fields).packages;
      if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_01->fields).current = pSVar6;
    }
    if ((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((this_01->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if (0 < (int)pIVar5) {
      pQVar4 = (this_01->fields).packages;
      if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto code_?;
      pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
                Queue_1_SmoothPhysicsMovement_Package__Dequeue
                          (pQVar4,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (this_01->fields).next = pSVar6;
    }
  }
  if (((this_01->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     (pSVar6 = (this_01->fields).next, pSVar6 == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  do {
    if (fVar2 - fVar3 < (pSVar6->fields).time) {
code_?:
      pSVar6 = (this_01->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar7 = (pSVar6->fields).time;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar8 = ((fVar2 - fVar3) - fVar7) / fVar8;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      pSVar6 = (this_01->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      pSVar10 = (this_01->fields).next;
      VVar11 = (pSVar6->fields).position;
      if (pSVar10 == (SmoothPhysicsMovement_Package *)0x0) break;
      uVar12._0_4_ = (pSVar10->fields).position.x;
      uVar12._4_4_ = (pSVar10->fields).position.y;
      fVar2 = (pSVar10->fields).position.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b_01.z = fVar2;
      b_01.x = (float)uVar12;
      b_01.y = SUB84(uVar12,4);
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          ((Vector3 *)&stack0xffffffdc,VVar11,b_01,fVar8,(MethodInfo *)0x0);
      if (pTVar9 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (pTVar9,*pVVar13,(MethodInfo *)0x0);
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      pSVar6 = (this_01->fields).current;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar2 = (pSVar6->fields).rotation.x;
      fVar3 = (pSVar6->fields).rotation.y;
      fVar7 = (pSVar6->fields).rotation.z;
      fVar14 = (pSVar6->fields).rotation.w;
      pSVar6 = (this_01->fields).next;
      if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar15 = (pSVar6->fields).rotation.x;
      puVar16 = (undefined *)(pSVar6->fields).rotation.y;
      pQVar17 = (Quaternion__Class *)(pSVar6->fields).rotation.z;
      fVar18 = (pSVar6->fields).rotation.w;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar16 = &UNK_?;
        pQVar17 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      a_00.y = fVar3;
      a_00.x = fVar2;
      a_00.z = fVar7;
      a_00.w = fVar14;
      b_00.y = (float)puVar16;
      b_00.x = fVar15;
      b_00.z = (float)pQVar17;
      b_00.w = fVar18;
      pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                          ((Quaternion *)&stack0xffffffd8,a_00,b_00,fVar8,(MethodInfo *)0x0);
      if (pTVar9 == (Transform *)0x0) break;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (pTVar9,*pQVar19,(MethodInfo *)0x0);
      pMVar20 = (this_01->fields).worldObjectOwner;
      if (pMVar20 != (MVWorldObjectClient *)0x0) {
        pSVar6 = (this_01->fields).current;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        VVar11 = (pSVar6->fields).position;
        pSVar6 = (this_01->fields).next;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        uVar21._0_4_ = (pSVar6->fields).position.x;
        uVar21._4_4_ = (pSVar6->fields).position.y;
        fVar2 = (pSVar6->fields).position.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uVar21._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        b_02.z = fVar2;
        b_02.x = (float)uVar21;
        b_02.y = SUB84(uVar21,4);
        pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                            ((Vector3 *)&stack0xffffffdc,VVar11,b_02,fVar8,(MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClient *)0x0) break;
        uVar22 = pVVar13->x;
        (*(code *)(pMVar20->klass->vtable).set_WorldPosition.method)(pMVar20,uVar22);
        pSVar6 = (this_01->fields).current;
        pMVar20 = (this_01->fields).worldObjectOwner;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar2 = (pSVar6->fields).rotation.x;
        fVar3 = (pSVar6->fields).rotation.y;
        fVar7 = (pSVar6->fields).rotation.z;
        fVar14 = (pSVar6->fields).rotation.w;
        pSVar6 = (this_01->fields).next;
        if (pSVar6 == (SmoothPhysicsMovement_Package *)0x0) break;
        fVar15 = (pSVar6->fields).rotation.x;
        puVar16 = (undefined *)(pSVar6->fields).rotation.y;
        pQVar17 = (Quaternion__Class *)(pSVar6->fields).rotation.z;
        fVar18 = (pSVar6->fields).rotation.w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          puVar16 = &UNK_?;
          pQVar17 = TypeInfo__UnityEngine__Quaternion;
          func_?();
        }
        a.y = fVar3;
        a.x = fVar2;
        a.z = fVar7;
        a.w = fVar14;
        b.y = (float)puVar16;
        b.x = fVar15;
        b.z = (float)pQVar17;
        b.w = fVar18;
        pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                            ((Quaternion *)&stack0xffffffd8,a,b,fVar8,(MethodInfo *)0x0);
        if (pMVar20 == (MVWorldObjectClient *)0x0) break;
        MVWorldObjectClient::MVWorldObjectClient_set_SyncRot(pMVar20,*pQVar19,(MethodInfo *)0x0);
      }
      this_00 = (this_01->fields).cullingSubscriberBase;
      if (this_00 == (CullingSubscriberBase *)0x0) {
        return;
      }
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      if ((pTVar9 != (Transform *)0x0) &&
         (pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffffdc,pTVar9,(MethodInfo *)0x0),
         this_00 != (CullingSubscriberBase *)0x0)) {
        CullingSubscriberBase::CullingSubscriberBase_set_Position
                  (this_00,*pVVar13,(MethodInfo *)0x0);
        return;
      }
      break;
    }
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pIVar5 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)pQVar4,
                        MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__get_Count__
                       );
    if ((int)pIVar5 < 1) goto code_?;
    (this_01->fields).current = (this_01->fields).next;
    pQVar4 = (this_01->fields).packages;
    if (pQVar4 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar6 = System.dll::System::Collections::Generic::Queue`1[SmoothPhysicsMovement+Package]::
              Queue_1_SmoothPhysicsMovement_Package__Dequeue
                        (pQVar4,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    (this_01->fields).next = pSVar6;
  } while (pSVar6 != (SmoothPhysicsMovement_Package *)0x0);
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateMarkerPosition(Vector3) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_UpdateMarkerPosition
               (MVGhostInstance *this,Vector3 newPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).cullingSubscriberBase;
  VVar1 = (this->fields).lodSphereOffset;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.y = newPos.y;
  a.x = newPos.x;
  a.z = newPos.z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&newPos,a,VVar1,(MethodInfo *)0x0);
  newPos.x = 0.0;
  if (this_00 != (CullingSubscriberBase *)0x0) {
    uVar3 = pVVar2->x;
    uVar4 = pVVar2->y;
    this = (MVGhostInstance *)pVVar2->z;
    fVar5 = (float)uVar4;
    VVar1.x = (float)uVar3;
    VVar1 = (Vector3)CONCAT84(uVar6,VVar1.x);
    CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,VVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Single <UpdateControllerFixedUpdate>m__0(MVWorldObjectClient) */

float Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance__UpdateControllerFixedUpdate_m__0
                (MVGhostInstance *this,MVWorldObjectClient *a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  if (a != (MVWorldObjectClient *)0x0) {
    puVar3 = (undefined8 *)
             (*(code *)(a->klass->vtable).get_WorldPosition_1.method)
                       (auStack_4,a,(a->klass->vtable).set_WorldPosition.methodPtr);
    uStack_5 = *puVar3;
    fVar6 = *(float *)(puVar3 + 1);
    puVar3 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_WorldPosition_1.method)
                       (&VStack_7,this,(this->klass->vtable).set_WorldPosition.methodPtr);
    uStack_8 = *puVar3;
    fVar9 = *(float *)(puVar3 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a_00.z = fVar6;
    a_00.x = (float)(undefined4)uStack_5;
    a_00.y = (float)uStack_5._4_4_;
    b.z = fVar9;
    b.x = (float)(undefined4)uStack_8;
    b.y = (float)uStack_8._4_4_;
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (&VStack_7,a_00,b,(MethodInfo *)0x0);
    uStack_1._0_4_ = pVVar10->x;
    uStack_1._4_4_ = pVVar10->y;
    fStack_2 = pVVar10->z;
    fVar11 = (float10)func_?(&uStack_1,0);
    return (float)fVar11;
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  fVar11 = (float10)(*pcVar12)();
  return (float)fVar11;
}


/* MVGhostInstance(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance__ctor
               (MVGhostInstance *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).distance = 10.0;
  (this->fields).speed = 5.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).oscilPos.x = pVVar1->x;
  (this->fields).oscilPos.y = fVar2;
  (this->fields).oscilPos.z = fVar3;
  (this->fields).oscillationPeriod = 1.0;
  (this->fields).damagePerSecond = 50.0;
  (this->fields).turnSlerpFactor = 0.04;
  (this->fields).patrolSpeed = 1.0;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields).lodSphereOffset.x = pVVar1->x;
  (this->fields).lodSphereOffset.y = fVar2;
  (this->fields).lodSphereOffset.z = fVar3;
  iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).playerLayer = iVar4;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVWorldObjectClient>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__List__);
  (this->fields).targetWos = (List_1_MVWorldObjectClient_ *)this_00;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?();
  }
  pPVar5 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (pPVar5 != (PrefabPool *)0x0) {
    prefabObject = DayNightCycle::DayNightCycle_get_CurrentSunParam
                             ((DayNightCycle *)pPVar5,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVWorldObjectClient->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVWorldObjectClient->_1).cctor_started == 0)) {
      func_?();
    }
    MVWorldObjectClient::MVWorldObjectClient__ctor
              ((MVWorldObjectClient *)this,(Dictionary_2_System_Object_System_Object_ *)0x0,
               (GameObject *)prefabObject,worldObjects,(MethodInfo *)0x0);
    uVar6 = *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4);
    piVar7 = &(this->fields)._.interactionFlags;
    *(uint *)piVar7 = (uint)*piVar7 | 0x2001;
    *(undefined4 *)((int)&(this->fields)._.interactionFlags + 4) = uVar6;
    MVGhostInstance_ReadWOData(this,(MethodInfo *)0x0);
    pXVar8 = (XpBoostParticlePreviewer *)(this->fields)._.gameObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    pXVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                        (pXVar8,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                        );
    (this->fields)._ghostInstance = (GameObject *)pXVar8;
    iVar4 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Default,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4((GameObject *)pXVar8,iVar4,(MethodInfo *)0x0);
    pGVar9 = (this->fields)._ghostInstance;
    if (pGVar9 != (GameObject *)0x0) {
      pUVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                          (pGVar9,
                           UnityEngine__Collider_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::Collider>__
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pUVar10,(MethodInfo *)0x0);
      pGVar9 = (this->fields)._ghostInstance;
      if (pGVar9 != (GameObject *)0x0) {
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar9,(MethodInfo *)0x0);
        pGVar9 = (this->fields)._.gameObject;
        if (pGVar9 != (GameObject *)0x0) {
          pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar9,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                      (pTVar11,pTVar12,(MethodInfo *)0x0);
            pGVar9 = (this->fields)._ghostInstance;
            if (pGVar9 != (GameObject *)0x0) {
              pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
              pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                                 ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
              if (pTVar11 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                          (pTVar11,*pVVar1,(MethodInfo *)0x0);
                pPVar5 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
                if (pPVar5 != (PrefabPool *)0x0) {
                  value = PrefabPool::PrefabPool_get_GhostMarkerMaterial(pPVar5,(MethodInfo *)0x0);
                  pGVar9 = (this->fields)._.gameObject;
                  if (pGVar9 != (GameObject *)0x0) {
                    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
                    if (pTVar11 != (Transform *)0x0) {
                      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Find
                                          (pTVar11,StringLiteral_Ghost,(MethodInfo *)0x0);
                      if (pTVar11 != (Transform *)0x0) {
                        pGVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_gameObject
                                            ((Component_1 *)pTVar11,(MethodInfo *)0x0);
                        (this->fields)._ghostMarker = pGVar9;
                        if (pGVar9 != (GameObject *)0x0) {
                          this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                    GameObject_GetComponentsInChildren_29
                                              (pGVar9,
                                               UnityEngine__MeshRenderer_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<UnityEngine::MeshRenderer>__
                                              );
                          if (this_01 != (UseInteratorVisualization__Array *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Renderer::
                            Renderer_set_sharedMaterial((Renderer *)this_01,value,(MethodInfo *)0x0)
                            ;
                            pGVar9 = (this->fields)._ghostInstance;
                            if (pGVar9 != (GameObject *)0x0) {
                              pSVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                        Object_1_get_name((Object_1 *)pGVar9,(MethodInfo *)0x0);
                              if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr &
                                   0x2000000) != 0) &&
                                 ((TypeInfo__System__String->_1).cctor_started == 0)) {
                                func_?();
                              }
                              pSVar13 = mscorlib.dll::System::String::String_Concat_2
                                                  (pSVar13,StringLiteral__physics,(MethodInfo *)0x0)
                              ;
                              pGVar9 = (GameObject *)func_?();
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                                        (pGVar9,pSVar13,(MethodInfo *)0x0);
                              if (pGVar9 != (GameObject *)0x0) {
                                pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(pGVar9,(MethodInfo *)0x0);
                                pGVar14 = (this->fields)._ghostInstance;
                                if (pGVar14 != (GameObject *)0x0) {
                                  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                            GameObject_get_transform(pGVar14,(MethodInfo *)0x0);
                                  if (pTVar12 != (Transform *)0x0) {
                                    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                              Transform_GetParent(pTVar12,(MethodInfo *)0x0);
                                    if (pTVar11 != (Transform *)0x0) {
                                      UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                      Transform_set_parent(pTVar11,pTVar12,(MethodInfo *)0x0);
                                      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject
                                                ::GameObject_get_transform
                                                          (pGVar9,(MethodInfo *)0x0);
                                      pGVar14 = (this->fields)._ghostInstance;
                                      if (pGVar14 != (GameObject *)0x0) {
                                        pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                  GameObject::GameObject_get_transform
                                                            (pGVar14,(MethodInfo *)0x0);
                                        if (pTVar12 != (Transform *)0x0) {
                                          pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::
                                                   Transform::Transform_get_position
                                                             ((Vector3 *)&stack0xfffffff0,pTVar12,
                                                              (MethodInfo *)0x0);
                                          if (pTVar11 != (Transform *)0x0) {
                                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                            Transform_set_position
                                                      (pTVar11,*pVVar1,(MethodInfo *)0x0);
                                            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_get_transform
                                                                (pGVar9,(MethodInfo *)0x0);
                                            pGVar14 = (this->fields)._ghostInstance;
                                            if (pGVar14 != (GameObject *)0x0) {
                                              pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_get_transform
                                                                  (pGVar14,(MethodInfo *)0x0);
                                              if (pTVar12 != (Transform *)0x0) {
                                                pQVar15 = UnityEngine.CoreModule.dll::UnityEngine::
                                                          Transform::Transform_get_rotation
                                                                    ((Quaternion *)&stack0xffffffec,
                                                                     pTVar12,(MethodInfo *)0x0);
                                                if (pTVar11 != (Transform *)0x0) {
                                                  UnityEngine.CoreModule.dll::UnityEngine::Transform
                                                  ::Transform_set_rotation
                                                            (pTVar11,*pQVar15,(MethodInfo *)0x0);
                                                  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar9,(MethodInfo *)0x0);
                                                  piVar16 = &(this->fields)._.previewLayerMask;
                                                  *piVar16 = *piVar16 | 0x800;
                                                  (this->fields).moveTarget = pTVar11;
                                                  pGVar9 = (this->fields)._.gameObject;
                                                  if (pGVar9 != (GameObject *)0x0) {
                                                    pUVar10 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::GameObject::
                                                              GameObject_GetComponent_47
                                                                        (pGVar9,
                                                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::ParticleSystem>__
                                                  );
                                                  UnityEngine.CoreModule.dll::UnityEngine::Object::
                                                  Object_1_Destroy_1((Object_1 *)pUVar10,
                                                                     (MethodInfo *)0x0);
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


/* MVWorldObjectDocumentationType get_DocumentationType() */

MVWorldObjectDocumentationType__Enum
Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_get_DocumentationType
          (MVGhostInstance *this,MethodInfo *method)

{
  return MVWorldObjectDocumentationType__Enum_Ghost;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = this;
  if ((this->fields).distance == value) {
    return;
  }
  (this->fields).distance = value;
  this_02 = (Dictionary_2_System_String_Theme_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  this = (MVGhostInstance *)value;
  value_00 = (Theme *)func_?(TypeInfo__System__Single,&this);
  if (this_02 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_02,StringLiteral_Distance,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    worldObjectID =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_01,(MethodInfo *)0x0);
    value_01 = (Object *)func_?();
    if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_03,(int32_t)worldObjectID,StringLiteral_Data_Distance,value_01,
                 (MethodInfo *)0x0);
      MVar1 = MVGameControllerBase::MVGameControllerBase_get_GameMode((MethodInfo *)0x0);
      if (MVar1 == MVGameMode__Enum_Edit) {
        this_00 = (this_01->fields).rangeVis;
        if (this_00 == (SphereVolumeIndicator *)0x0) goto code_?;
        SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
                  (this_00,(this_01->fields).distance,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_Speed(Single) */

void Assembly-CSharp.dll::MVGhostInstance::MVGhostInstance_set_Speed
               (MVGhostInstance *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
  if ((this->fields).speed == value) {
    return;
  }
  (this->fields).speed = value;
  this_01 = (Dictionary_2_System_String_Theme_ *)
            PrefabPool::PrefabPool_get_MVBatteryPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  this = (MVGhostInstance *)value;
  value_00 = (Theme *)func_?(TypeInfo__System__Single,&this);
  if (this_01 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_01,StringLiteral_Speed,value_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      this = (MVGhostInstance *)TypeInfo__MVGameControllerBase;
      func_?();
    }
    this = (MVGhostInstance *)0x0;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    this = (MVGhostInstance *)0x0;
    worldObjectID =
         mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
         Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    this = (MVGhostInstance *)&pMStack_1;
    pMStack_1 = (MVGhostInstance__Class *)value;
    value_01 = (Object *)func_?();
    if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_02,(int32_t)worldObjectID,StringLiteral_Data_Speed,value_01,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

