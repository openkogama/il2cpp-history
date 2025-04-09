
/* Void CameraCollision() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_CameraCollision
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    in_stack_1 = &StringLiteral_Not_within_line_segment;
    func_?();
    cRam_? = '\x01';
  }
  func_?(auStack_2,0);
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  pTVar6 = (this->fields).lookAtTransform;
  uStack_7 = 0;
  if (pTVar6 != (Transform *)0x0) {
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_9,pTVar6,(MethodInfo *)0x0);
    VStack_10.x = pVVar8->x;
    VStack_10.y = pVVar8->y;
    VStack_10.z = pVVar8->z;
    auStack_11._0_4_ = (this->fields).avatarHeadOffset.x;
    auStack_11._4_4_ = (this->fields).avatarHeadOffset.y;
    VStack_9.x = (this->fields).avatarHeadOffset.z;
    uStack_12 = CONCAT44((float)auStack_11._0_4_ + VStack_10.x,VStack_9.x);
    fStack_13 = (float)auStack_11._4_4_ + VStack_10.y;
    VStack_9.x = VStack_9.x + VStack_10.z;
    uStack_5 = CONCAT44(uStack_5._4_4_,VStack_9.x);
    puVar14 = &UNK_?;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar6 != (Transform *)0x0) {
      pVVar8 = (Vector3 *)auStack_15;
      puVar16 = &UNK_?;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (pVVar8,pTVar6,(MethodInfo *)0x0);
      uVar18 = pVVar17->x;
      uVar19 = pVVar17->y;
      VStack_10.x = (float)uVar18 - fStack_4;
      fStack_13 = (float)uVar19 - fStack_3;
      VStack_10.z = pVVar17->z - (float)uStack_5;
      uStack_12 = CONCAT44(uStack_12._4_4_,VStack_10.z);
      VStack_10.y = fStack_13;
      VStack_9.x = VStack_10.z;
      fStack_20 = VStack_10.x;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_10,(MethodInfo *)0x0);
      uStack_12 = CONCAT44(fStack_4,VStack_10.z);
      fStack_13 = fStack_3;
      fStack_21 = fStack_20;
      fStack_22 = VStack_9.x;
      fStack_23 = VStack_9.y;
      uStack_24 = 0;
      uStack_25 = 0;
      auStack_26 = (undefined1  [8])CONCAT44(VStack_9.y,VStack_9.x);
      puVar27 = (undefined8 *)func_?();
      uVar28 = *puVar27;
      uVar29 = *(undefined4 *)(puVar27 + 1);
      iVar30 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      layerMask = 1 << ((byte)iVar30 & 0x1f);
      ignoreWoIds = (this->fields).ignoreAvatarId;
      dVar31 = (double)(in_stack_32 * in_stack_32 +
                        in_stack_33 * in_stack_33 +
                       in_stack_34 * in_stack_34);
      if (dVar31 < 0.0) {
        func_?();
      }
      else {
        dVar31 = SQRT(dVar31);
      }
      ray.m_Origin.y = (float)(int)uVar28;
      ray.m_Origin.x = (float)puVar14;
      ray.m_Origin.z = (float)(int)((ulonglong)uVar28 >> 0x20);
      ray.m_Direction.x = (float)uVar29;
      ray.m_Direction.y = (float)puVar16;
      ray.m_Direction.z = (float)pVVar8;
      bVar35 = CollisionDetection::CollisionDetection_MVSphereCast
                        (ray,(this->fields)._.cameraRadius,(VoxelHit *)(auStack_11 + 4),
                         (float)dVar31,ignoreWoIds,layerMask,method_00);
      if ((bVar35 == 0) || (fStack_36 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon)) {
        return;
      }
      fVar37 = (float)uStack_5;
      fVar38 = fStack_39;
      fVar40 = fStack_41;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar6 != (Transform *)0x0) {
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_10,pTVar6,(MethodInfo *)0x0);
        uVar42 = pVVar8->x;
        uVar43 = pVVar8->y;
        point.z = fVar37;
        point.x = (float)(int)uVar28;
        point.y = (float)(int)((ulonglong)uVar28 >> 0x20);
        lineStart.y = fStack_39;
        lineStart.x = VStack_9.z;
        lineStart.z = fStack_44;
        lineEnd.y = (float)uVar43 + fVar40;
        lineEnd.x = (float)uVar42 + fVar38;
        lineEnd.z = pVVar8->z + (float)in_stack_1;
        bVar35 = MathFunctions::MathFunctions_DistancePointLine_1
                          (point,lineStart,lineEnd,(float *)&stack0xffffff00,
                           (Vector3 *)(auStack_15 + 8),(MethodInfo *)0x0);
        if (bVar35 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          auStack_11._0_4_ = uStack_45;
          pOVar46 = (Object *)func_?(TypeInfo__System__Single,auStack_11);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar46,(MethodInfo *)0x0);
          fStack_44 = (this->fields).distance;
          pOVar46 = (Object *)func_?(TypeInfo__System__Single,&fStack_44);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar46,(MethodInfo *)0x0);
        }
        fVar37 = (this->fields)._.cameraRadius;
        if (fStack_13 < fVar37) {
          dVar31 = (double)(fVar37 * fVar37 - fStack_13 * fStack_13);
          if (dVar31 < 0.0) {
            func_?();
          }
          else {
            dVar31 = SQRT(dVar31);
          }
          VStack_10.x = (float)dVar31;
        }
        pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar6 != (Transform *)0x0) {
          value.y = fStack_41 - fStack_47 * VStack_10.z;
          value.x = fStack_39 - uStack_48._4_4_ * VStack_10.z;
          value.z = (float)uStack_5 - fStack_49 * VStack_10.z;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar6,value,(MethodInfo *)0x0);
          pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar6 != (Transform *)0x0) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)(auStack_26 + 4),pTVar6,(MethodInfo *)0x0);
            auStack_11._0_4_ = pVVar8->x;
            auStack_11._4_4_ = pVVar8->y;
            fStack_47 = (float)uStack_5 - pVVar8->z;
            uStack_12 = CONCAT44(uStack_12._4_4_,fStack_47);
            uStack_48 = CONCAT44(fStack_3 - (float)auStack_11._4_4_,
                                 fStack_4 - (float)auStack_11._0_4_);
            fVar50 = (float10)func_?(&uStack_48);
            uVar51 = (this->fields).currentLookAt.x;
            uVar52 = (this->fields).currentLookAt.y;
            fVar37 = (this->fields).currentLookAt.z;
            (this->fields).distance = (float)fVar50;
            fStack_13 = (float)fVar50 / fStack_13;
            (this->fields).currentLookAt.x = ((float)uVar51 - fStack_4) * fStack_13 + fStack_4;
            (this->fields).currentLookAt.y = ((float)uVar52 - fStack_3) * fStack_13 + fStack_3;
            (this->fields).currentLookAt.z =
                 (fVar37 - (float)uStack_5) * fStack_13 + (float)uStack_5;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Enter
               (GhostCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                   );
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                   );
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) && (this_00 != (HashSet_1_System_Int32_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
              (this_00,(pMVar1->fields)._._._._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    ppHVar2 = &(this->fields).ignoreAvatarId;
    *ppHVar2 = this_00;
    func_?(ppHVar2,this_00);
    pTVar3 = (this->fields).lookAtTransform;
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,pTVar3,(MethodInfo *)0x0);
      QStack_6.y = pVVar4->x;
      QStack_6.z = pVVar4->y;
      VStack_5.x = (this->fields).avatarHeadOffset.x;
      VStack_5.y = (this->fields).avatarHeadOffset.y;
      VStack_5.z = (this->fields).avatarHeadOffset.z;
      QStack_6.w = VStack_5.z + pVVar4->z;
      (this->fields).currentLookAt.x = VStack_5.x + QStack_6.y;
      (this->fields).currentLookAt.y = VStack_5.y + QStack_6.z;
      (this->fields).currentLookAt.z = QStack_6.w;
      pMVar1 = (this->fields).avatarLocal;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pTVar3 = (pMVar1->fields)._._._.transform, pTVar3 != (Transform *)0x0)) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_5,pTVar3,(MethodInfo *)0x0);
        QStack_6.y = pVVar4->x;
        QStack_6.z = pVVar4->y;
        QStack_6.w = pVVar4->z;
        fVar7 = QStack_6.y + 0.0;
        fStack_8 = QStack_6.z + (this->fields).height;
        fStack_9 = QStack_6.w + 0.0;
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             (&QStack_6,this_01,(MethodInfo *)0x0);
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             (&VStack_5,*pQVar10,(this->fields).offset,(MethodInfo *)0x0);
          QStack_6.y = pVVar4->x;
          QStack_6.z = pVVar4->y;
          QStack_6.w = pVVar4->z;
          VStack_5.x = QStack_6.y + fVar7;
          VStack_5.y = QStack_6.z + fStack_8;
          VStack_5.z = QStack_6.w + fStack_9;
          if (pTVar3 != (Transform *)0x0) {
            value.z = VStack_5.z;
            value.x = VStack_5.x;
            value.y = QStack_6.z + fStack_8;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar3,value,(MethodInfo *)0x0);
            bVar11 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
            if (bVar11 == 0) {
              return;
            }
            pSVar12 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                               ((MethodInfo *)0x0);
            if ((pSVar12 != (SpawnRoleDataMediator *)0x0) &&
               (pWVar13 = (WebCompletionSource_1_System_Object_ *)(pSVar12->fields).lastRespawnType,
               pWVar13 != (WebCompletionSource_1_System_Object_ *)0x0)) {
              pTVar14 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                        WebCompletionSource_1_System_Object__get_Task
                                  (pWVar13,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                                  );
              if (pTVar14 != (Task *)0x1) {
                return;
              }
              pSVar12 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                 ((MethodInfo *)0x0);
              if (((pSVar12 != (SpawnRoleDataMediator *)0x0) &&
                  (pWVar13 = (WebCompletionSource_1_System_Object_ *)(pSVar12->fields).reviveState,
                  pWVar13 != (WebCompletionSource_1_System_Object_ *)0x0)) &&
                 (pTVar14 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                            WebCompletionSource_1_System_Object__get_Task
                                      (pWVar13,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                      ), pTVar14 != (Task *)0x0)) {
                pSVar15 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                                    (&SStack_16,(ReviveState *)pTVar14,(MethodInfo *)0x0);
                fStack_17 = (pSVar15->Position).x;
                fStack_18 = (pSVar15->Position).y;
                fStack_19 = (pSVar15->Position).z;
                fStack_20 = (pSVar15->Rotation).x;
                fStack_21 = (pSVar15->Rotation).y;
                fStack_22 = (pSVar15->Rotation).z;
                fStack_23 = (pSVar15->Rotation).w;
                fStack_24 = (pSVar15->CameraPosition).x;
                fStack_25 = (pSVar15->CameraPosition).y;
                fStack_26 = (pSVar15->CameraPosition).z;
                fStack_27 = (pSVar15->CameraRotation).x;
                fStack_28 = (pSVar15->CameraRotation).y;
                uStack_29._0_4_ = (pSVar15->CameraRotation).z;
                uStack_29._4_4_ = (pSVar15->CameraRotation).w;
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar3 != (Transform *)0x0) {
                  value_00.y = fStack_25;
                  value_00.x = fStack_24;
                  value_00.z = fStack_26;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar3,value_00,(MethodInfo *)0x0);
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    value_01.y = fStack_28;
                    value_01.x = fStack_27;
                    value_01.z = (float)(undefined4)uStack_29;
                    value_01.w = uStack_29._4_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar3,value_01,(MethodInfo *)0x0);
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
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::GhostCamera::GhostCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,GhostCamera *this,MethodInfo *method)

{
  pMVar1 = (this->fields).avatarLocal;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (this_00 = (pMVar1->fields)._._._.transform, this_00 != (Transform *)0x0)) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,this_00,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fVar6 = pVVar2->z;
    fVar7 = (this->fields).height;
    __return_storage_ptr__->x = (float)uVar4 + 0.0;
    __return_storage_ptr__->y = (float)uVar5 + fVar7;
    __return_storage_ptr__->z = fVar6 + 0.0;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar8)();
  return pVVar2;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Initialize
               (GhostCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  ppMVar1 = &(this->fields).avatarLocal;
  *ppMVar1 = avatarLocal;
  func_?(ppMVar1,avatarLocal);
  if ((avatarLocal != (MVAvatarLocal *)0x0) &&
     (this_00 = (avatarLocal->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    ppTVar3 = &(this->fields).lookAtTransform;
    *ppTVar3 = pTVar2;
    func_?(ppTVar3,pTVar2);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdateCamera
               (GhostCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  fVar1 = (this->fields).distance;
  fVar2 = (this->fields).desiredDistance;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar3 = fVar3 + fVar3;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  (this->fields).distance = (fVar2 - fVar1) * fVar3 + fVar1;
  GhostCamera_UpdatePosition(this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).CameraCollision.method)
            (this,(this->klass->vtable).Enter.methodPtr);
  fVar1 = (float)((uint)((this->fields).actualLookAt.y - (this->fields).lookAtPos.y) &
                  _UNK_?);
  fVar1 = fVar1 * fVar1;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffcc,pTVar4,(MethodInfo *)0x0);
    fVar2 = (this->fields).lookAtPos.x;
    fVar3 = (this->fields).lookAtPos.y;
    fVar5 = (this->fields).lookAtPos.z;
    pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    if (pTVar4 != (Transform *)0x0) {
      pVVar6 = (Vector3 *)&stack0xffffffbc;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (pVVar6,pTVar4,(MethodInfo *)0x0);
      uVar8 = pVVar7->x;
      uVar9 = pVVar7->y;
      fromDirection.y = (float)pTVar4;
      fromDirection.x = (float)pVVar6;
      fromDirection.z = fVar2 - (float)uVar8;
      toDirection.y = fVar3 - (float)uVar9;
      toDirection.x = fVar2 - (float)uVar8;
      toDirection.z = fVar5 - pVVar7->z;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                         ((Quaternion *)&stack0xffffffb8,fromDirection,toDirection,(MethodInfo *)0x0
                         );
      fVar2 = pQVar10->x;
      fVar3 = pQVar10->y;
      fVar5 = pQVar10->z;
      fVar11 = pQVar10->w;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
      fVar13 = (pQVar12->identityQuaternion).x;
      fVar14 = (pQVar12->identityQuaternion).y;
      fVar15 = (pQVar12->identityQuaternion).z;
      fVar16 = (pQVar12->identityQuaternion).w;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      a.y = fVar14;
      a.x = fVar13;
      a.z = fVar15;
      a.w = fVar16;
      b.y = fVar3;
      b.x = fVar2;
      b.z = fVar5;
      b.w = fVar11;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&stack0xffffffb8,a,b,fVar17 * _UNK_? * fVar1,
                          (MethodInfo *)0x0);
      fVar1 = pQVar10->x;
      fVar2 = pQVar10->y;
      fVar3 = pQVar10->z;
      fVar5 = pQVar10->w;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffbc,pTVar4,(MethodInfo *)0x0);
        if (targetTransform != (ProtectedTransform *)0x0) {
          ProtectedTransform::ProtectedTransform_set_position
                    (targetTransform,*pVVar6,(MethodInfo *)0x0);
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar4 != (Transform *)0x0) {
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&stack0xffffffd8,pTVar4,(MethodInfo *)0x0);
            fVar11 = pQVar10->y;
            fVar13 = pQVar10->z;
            fVar14 = pQVar10->w;
            value.y = (fVar5 * fVar11 + fVar2 * fVar14 + fVar3 * pQVar10->x) - fVar1 * fVar13;
            value.x = (fVar1 * fVar14 + fVar5 * pQVar10->x + fVar2 * fVar13) - fVar3 * fVar11;
            value.z = (fVar5 * fVar13 + fVar3 * fVar14 + fVar1 * fVar11) - fVar2 * pQVar10->x;
            value.w = ((fVar5 * fVar14 - fVar1 * pQVar10->x) - fVar2 * fVar11) - fVar3 * fVar13;
            ProtectedTransform::ProtectedTransform_set_rotation
                      (targetTransform,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdatePosition
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffc8,pTVar1,(MethodInfo *)0x0);
    VStack_3.x = pVVar2->z;
    pTVar4 = (this->fields).lookAtTransform;
    if (pTVar4 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar4,(MethodInfo *)0x0);
      uVar5 = pVVar2->x;
      uVar6 = pVVar2->y;
      uVar7 = (this->fields).prevLookAtTransformPos.x;
      uVar8 = (this->fields).prevLookAtTransformPos.y;
      fVar9 = (this->fields).prevLookAtTransformPos.z;
      fStack_10 = fStack_10 + (pVVar2->z - fVar9);
      value.y = VStack_3.z + ((float)uVar6 - (float)uVar8);
      value.x = VStack_3.y + ((float)uVar5 - (float)uVar7);
      value.z = fStack_10;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,value,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)((int)&stack0x00000018 + 4),pTVar4,(MethodInfo *)0x0);
        in_stack_12._0_4_ = pQVar11->x;
        in_stack_12._4_4_ = pQVar11->y;
        in_stack_13 = pQVar11->z;
        in_stack_14 = pQVar11->w;
        iVar15 = func_?(&stack0x00000018);
        auVar16._4_8_ = 0;
        auVar16._0_4_ = *(float *)(iVar15 + 4) * _UNK_?;
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffc4,(Vector3)(auVar16 << 0x20),
                             (MethodInfo *)0x0);
        fVar17 = pQVar11->z;
        fVar18 = pQVar11->w;
        pTVar4 = (this->fields).lookAtTransform;
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffc8,pTVar4,(MethodInfo *)0x0);
          uVar19 = (this->fields).avatarHeadOffset.x;
          uVar20 = (this->fields).avatarHeadOffset.y;
          fVar21 = (this->fields).avatarHeadOffset.z;
          uVar22 = (this->fields).offset.x;
          fVar23 = (this->fields).offset.y;
          fVar24 = fVar21 + (this->fields).offset.z * (float)pTVar1;
          rotation.y = fVar9;
          rotation.x = fVar18;
          rotation.z = VStack_3.x;
          rotation.w = VStack_3.y;
          point.y = (float)uVar20 + fVar23 * (float)pTVar1;
          point.x = (float)uVar19 + (float)uVar22 * (float)pTVar1;
          point.z = fVar24;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffc4,rotation,point,(MethodInfo *)0x0);
          uVar25 = pVVar2->x;
          uVar26 = pVVar2->y;
          fVar27 = pVVar2->z;
          (this->fields).lookAtPos.x = (float)uVar25 + fVar23;
          (this->fields).lookAtPos.y = (float)uVar26 + fVar24;
          (this->fields).lookAtPos.z = fVar27 + fVar17;
          pTVar1 = (this->fields).lookAtTransform;
          fStack_10 = (float)uVar25;
          if (pTVar1 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&fStack_10,pTVar1,(MethodInfo *)0x0);
            uVar28 = pVVar2->x;
            uVar29 = pVVar2->y;
            uVar30 = (this->fields).avatarHeadOffset.x;
            uVar31 = (this->fields).avatarHeadOffset.y;
            fVar24 = (this->fields).avatarHeadOffset.z + pVVar2->z;
            uVar32 = (this->fields).lookAtPos.x;
            uVar33 = (this->fields).lookAtPos.y;
            fVar27 = ((this->fields).lookAtPos.z - fVar24) * fVar21;
            in_stack_34 = ((float)uVar32 - ((float)uVar30 + (float)uVar28)) * fVar21;
            fStack_10 = ((float)uVar33 - ((float)uVar31 + (float)uVar29)) * fVar21;
            _fStack00000018 = 0;
            in_stack_35 = 0.0;
            in_stack_36 = fVar27;
            fVar23 = fVar27;
            VStack_3.z = in_stack_34;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_3,pTVar1,(MethodInfo *)0x0);
              uVar37 = pVVar2->x;
              uVar38 = pVVar2->y;
              fVar21 = pVVar2->z - VStack_3.y;
              _fStack00000018 = CONCAT44((float)uVar38 - fVar9,(float)uVar37 - fVar18);
              in_stack_35 = fVar21;
              if (cRam_? == '\0') {
                func_?();
                cRam_? = '\x01';
              }
              if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              dVar39 = (double)(fVar17 * fVar17 +
                                (float)in_stack_12 * (float)in_stack_12 +
                               VStack_3.x * VStack_3.x);
              if (dVar39 < 0.0) {
                func_?();
              }
              else {
                dVar39 = SQRT(dVar39);
              }
              VStack_3.z = (float)dVar39;
              fVar40 = 0.0;
              puVar41 = (undefined8 *)func_?();
              in_stack_42 = *(float *)(puVar41 + 1);
              in_stack_36 = (float)((ulonglong)*puVar41 >> 0x20);
              puVar41 = (undefined8 *)func_?(&fStack_10);
              in_stack_34 = *(float *)(puVar41 + 1);
              in_stack_36 = (float)*puVar41;
              in_stack_42 = (float)((ulonglong)*puVar41 >> 0x20);
              fVar43 = (this->fields).distance;
              dVar39 = (double)((fVar43 * fVar43 + fVar9 * fVar9) -
                               (in_stack_42 * fVar21 + in_stack_36 * fVar27 +
                               in_stack_34 * (float)uVar32) * (fVar43 + fVar43) * fVar9);
              if (dVar39 < 0.0) {
                func_?();
              }
              else {
                dVar39 = SQRT(dVar39);
              }
              in_stack_34 = fVar17 + fVar18;
              (this->fields).actualLookAt.x = fStack44 + fVar23;
              (this->fields).actualLookAt.y = fVar40 + fVar24;
              (this->fields).currentLookAt.x = fStack44 + fVar23;
              (this->fields).currentLookAt.y = fVar40 + fVar24;
              (this->fields).actualLookAt.z = in_stack_34;
              (this->fields).currentLookAt.z = in_stack_34;
              if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)dVar39 &&
                  (float)dVar39 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                uVar45 = (this->fields).actualLookAt.x;
                in_stack_36 = (this->fields).actualLookAt.z;
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pTVar4 == (Transform *)0x0) goto code_?;
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xfffffffc,pTVar4,(MethodInfo *)0x0);
                uVar46 = pVVar2->x;
                uVar47 = pVVar2->y;
                fVar9 = fStack48 - (float)uVar46 * (float)uVar45;
                fVar17 = fStack44 - (float)uVar47 * (float)uVar45;
                in_stack_12 = CONCAT44(fVar17,fVar9);
                in_stack_13 = in_stack_35 - pVVar2->z * (float)uVar45;
                if (pTVar1 == (Transform *)0x0) goto code_?;
                value_00.y = fVar17;
                value_00.x = fVar9;
                value_00.z = in_stack_13;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar1,value_00,(MethodInfo *)0x0);
              }
              pTVar1 = (this->fields).lookAtTransform;
              if (pTVar1 != (Transform *)0x0) {
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0x0000000c,pTVar1,(MethodInfo *)0x0);
                fVar17 = pVVar2->y;
                fVar9 = pVVar2->z;
                (this->fields).prevLookAtTransformPos.x = pVVar2->x;
                (this->fields).prevLookAtTransformPos.y = fVar17;
                (this->fields).prevLookAtTransformPos.z = fVar9;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar49 = (code *)swi(3);
  (*pcVar49)();
  return;
}


/* GhostCamera() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera__ctor(GhostCamera *this,MethodInfo *method)

{
  uVar1 = (ulonglong)_UNK_?;
  (this->fields).avatarHeadOffset.x = (float)(int)(uVar1 << 0x20);
  (this->fields).avatarHeadOffset.y = (float)(int)((uVar1 << 0x20) >> 0x20);
  (this->fields).height = 1.0;
  (this->fields).desiredDistance = 5.0;
  (this->fields).avatarHeadOffset.z = 0.0;
  (this->fields).distance = 5.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).lookAtPos.x = (pVVar2->zeroVector).x;
  (this->fields).lookAtPos.y = fVar3;
  (this->fields).lookAtPos.z = fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).actualLookAt.x = (pVVar2->zeroVector).x;
  (this->fields).actualLookAt.y = fVar3;
  (this->fields).actualLookAt.z = fVar4;
  (this->fields)._.cameraRadius = 0.3;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

