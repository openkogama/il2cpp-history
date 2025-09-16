
/* Void CameraCollision() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_CameraCollision
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    in_stack_1 = &StringLiteral_Not_within_line_segment;
    func_?();
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  func_?(&fStack_4,0,0x48);
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  pCStack_7 = (Collider *)0x0;
  pTStack_8 = (Transform *)0x0;
  pTVar9 = (this->fields).lookAtTransform;
  uStack_10 = 0;
  if (pTVar9 != (Transform *)0x0) {
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff20,pTVar9,(MethodInfo *)0x0);
    auStack_12._8_4_ = pVVar11->x;
    fStack_13 = pVVar11->y;
    fStack_6 = pVVar11->z;
    auStack_14._20_8_ = *(undefined8 *)&(this->fields).avatarHeadOffset;
    fStack_15 = (this->fields).avatarHeadOffset.z;
    auStack_14._0_4_ = (float)auStack_14._20_4_ + (float)auStack_12._8_4_;
    auStack_14._4_4_ = (float)auStack_14._24_4_ + fStack_13;
    auStack_14._8_4_ = fStack_15 + fStack_6;
    VStack_16.y = (float)auStack_14._8_4_;
    VStack_16.x = (float)auStack_14._4_4_;
    fStack_17 = (float)auStack_14._0_4_;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)auStack_12,pTVar9,(MethodInfo *)0x0);
      uVar18 = pVVar11->x;
      uVar19 = pVVar11->y;
      VStack_16.z = pVVar11->z - (float)auStack_12._8_4_;
      pVVar11 = &VStack_16;
      VStack_16.y = (float)uVar19 - (float)auStack_12._4_4_;
      VStack_16.x = (float)uVar18 - (float)auStack_12._0_4_;
      fStack_5 = VStack_16.z;
      fVar20 = (float10)func_?();
      pCStack_21 = (Collider *)(float)fVar20;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_16,(MethodInfo *)0x0);
      fStack_5 = VStack_16.z;
      pCStack_7 = pCStack_21;
      pTStack_8 = (Transform *)auStack_12._0_4_;
      fStack_4 = (float)auStack_12._8_4_;
      fVar22 = 0.0;
      aVStack_23[0].x = fStack_13;
      puVar24 = auStack_25;
      aVStack_23[0].y = fStack_6;
      puVar26 = &UNK_?;
      puVar27 = (undefined8 *)func_?(puVar24,&fStack_5);
      uVar28 = *(undefined4 *)(puVar27 + 1);
      uVar29 = (undefined4)*puVar27;
      uVar30 = (undefined4)((ulonglong)*puVar27 >> 0x20);
      iVar31 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Direction.z = (float)puVar24;
      ray.m_Direction.y = (float)puVar26;
      ray.m_Origin.y = (float)uVar29;
      ray.m_Origin.x = (float)in_stack_1;
      ray.m_Origin.z = (float)uVar30;
      ray.m_Direction.x = (float)uVar28;
      bVar32 = CollisionDetection::CollisionDetection_MVSphereCast
                         (ray,(this->fields)._.cameraRadius,(VoxelHit *)auStack_14,in_stack_33
                          ,(this->fields).ignoreAvatarId,1 << ((byte)iVar31 & 0x1f),
                          (MethodInfo *)0x0);
      uVar28 = auStack_12._0_4_;
      if ((bVar32 == 0) || (fStack_34 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon)) {
        return;
      }
      fVar35 = VStack_16.z;
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_16,pTVar9,(MethodInfo *)0x0);
        uVar37 = pVVar36->x;
        uVar38 = pVVar36->y;
        point.y = (float)pVVar11;
        point.x = fVar22;
        point.z = (float)uVar28;
        lineStart.z = fStack_39;
        lineStart._0_8_ = uStack_40;
        lineEnd.y = in_stack_41 + (float)uVar38;
        lineEnd.x = fStack_42 + (float)uVar37;
        lineEnd.z = in_stack_43 + pVVar36->z;
        bVar32 = MathFunctions::MathFunctions_DistancePointLine_1
                           (point,lineStart,lineEnd,(float *)(auStack_14 + 8),
                            (Vector3 *)(auStack_14 + 0x10),(MethodInfo *)0x0);
        if (bVar32 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug,uVar29,fVar35);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          auStack_14._12_4_ = fStack_44;
          pOVar45 = (Object *)func_?(TypeInfo__System__Single,auStack_14 + 0xc);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar45,(MethodInfo *)0x0);
          pCStack_21 = (Collider *)(this->fields).distance;
          pOVar45 = (Object *)func_?(TypeInfo__System__Single,&pCStack_21);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar45,(MethodInfo *)0x0);
        }
        fVar22 = (this->fields)._.cameraRadius;
        if ((float)auStack_12._0_4_ < fVar22) {
          dVar46 = (double)(fVar22 * fVar22 - (float)auStack_12._0_4_ * (float)auStack_12._0_4_);
          if (dVar46 < 0.0) {
            func_?();
          }
          else {
            dVar46 = SQRT(dVar46);
          }
          auStack_12._4_4_ = (undefined4)dVar46;
        }
        auStack_14._4_4_ = (this->fields).distance;
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          value.y = fStack_5 - fStack_47 * fStack_13;
          value.x = fStack_6 - fStack_34 * fStack_13;
          value.z = (float)pCStack_7 - (float)uStack_3 * fStack_13;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar9,value,(MethodInfo *)0x0);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (aVStack_23,pTVar9,(MethodInfo *)0x0);
            uVar48 = pVVar11->x;
            uVar49 = pVVar11->y;
            fStack_15 = (float)auStack_12._8_4_ - pVVar11->z;
            auStack_14._24_4_ = (float)auStack_12._4_4_ - (float)uVar49;
            auStack_14._20_4_ = (float)auStack_12._0_4_ - (float)uVar48;
            fStack_5 = fStack_15;
            fVar20 = (float10)func_?();
            uVar50 = (this->fields).currentLookAt.x;
            uVar51 = (this->fields).currentLookAt.y;
            fVar22 = (this->fields).currentLookAt.z;
            (this->fields).distance = (float)fVar20;
            fVar35 = (float)fVar20 / (float)pCStack_21;
            (this->fields).currentLookAt.x =
                 ((float)uVar50 - (float)auStack_12._0_4_) * fVar35 + (float)auStack_12._0_4_;
            (this->fields).currentLookAt.y =
                 ((float)uVar51 - (float)auStack_12._4_4_) * fVar35 + (float)auStack_12._4_4_;
            (this->fields).currentLookAt.z =
                 (fVar22 - (float)auStack_12._8_4_) * fVar35 + (float)auStack_12._8_4_;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar52 = (code *)swi(3);
  (*pcVar52)();
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
    (this->fields).ignoreAvatarId = this_00;
    func_?(&(this->fields).ignoreAvatarId,this_00);
    pTVar2 = (this->fields).lookAtTransform;
    if (pTVar2 != (Transform *)0x0) {
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_4,pTVar2,(MethodInfo *)0x0);
      QStack_5.y = pVVar3->x;
      QStack_5.z = pVVar3->y;
      VStack_4.x = (this->fields).avatarHeadOffset.x;
      VStack_4.y = (this->fields).avatarHeadOffset.y;
      VStack_4.z = (this->fields).avatarHeadOffset.z;
      QStack_5.w = VStack_4.z + pVVar3->z;
      (this->fields).currentLookAt.x = VStack_4.x + QStack_5.y;
      (this->fields).currentLookAt.y = VStack_4.y + QStack_5.z;
      (this->fields).currentLookAt.z = QStack_5.w;
      pMVar1 = (this->fields).avatarLocal;
      if ((pMVar1 != (MVAvatarLocal *)0x0) &&
         (pTVar2 = (pMVar1->fields)._._._.transform, pTVar2 != (Transform *)0x0)) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_4,pTVar2,(MethodInfo *)0x0);
        QStack_5.y = pVVar3->x;
        QStack_5.z = pVVar3->y;
        QStack_5.w = pVVar3->z;
        fVar6 = QStack_5.y + 0.0;
        fStack_7 = QStack_5.z + (this->fields).height;
        fStack_8 = QStack_5.w + 0.0;
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          pQVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             (&QStack_5,this_01,(MethodInfo *)0x0);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                             (&VStack_4,*pQVar9,(this->fields).offset,(MethodInfo *)0x0);
          uVar10 = pVVar3->x;
          uVar11 = pVVar3->y;
          QStack_5.y = fVar6 + (float)uVar10;
          QStack_5.w = fStack_8 + pVVar3->z;
          QStack_5.z = fStack_7 + (float)uVar11;
          if (pTVar2 != (Transform *)0x0) {
            value.z = QStack_5.w;
            value.x = QStack_5.y;
            value.y = fStack_7 + (float)uVar11;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,value,(MethodInfo *)0x0);
            bVar12 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
            if (bVar12 == 0) {
              return;
            }
            pSVar13 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            if ((pSVar13 != (SpawnRoleDataMediator *)0x0) &&
               (pWVar14 = (WebCompletionSource_1_System_Object_ *)(pSVar13->fields).lastRespawnType,
               pWVar14 != (WebCompletionSource_1_System_Object_ *)0x0)) {
              pTVar15 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                        WebCompletionSource_1_System_Object__get_Task
                                  (pWVar14,
                                   MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                                  );
              if (pTVar15 != (Task *)0x1) {
                return;
              }
              pSVar13 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                  ((MethodInfo *)0x0);
              if (((pSVar13 != (SpawnRoleDataMediator *)0x0) &&
                  (pWVar14 = (WebCompletionSource_1_System_Object_ *)(pSVar13->fields).reviveState,
                  pWVar14 != (WebCompletionSource_1_System_Object_ *)0x0)) &&
                 (pTVar15 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                            WebCompletionSource_1_System_Object__get_Task
                                      (pWVar14,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                      ), pTVar15 != (Task *)0x0)) {
                pSVar16 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                                    (&SStack_17,(ReviveState *)pTVar15,(MethodInfo *)0x0);
                fStack_18 = (pSVar16->Position).x;
                fStack_19 = (pSVar16->Position).y;
                fStack_20 = (pSVar16->Position).z;
                fStack_21 = (pSVar16->Rotation).x;
                fStack_22 = (pSVar16->Rotation).y;
                fStack_23 = (pSVar16->Rotation).z;
                fStack_24 = (pSVar16->Rotation).w;
                fStack_25 = (pSVar16->CameraPosition).x;
                fStack_26 = (pSVar16->CameraPosition).y;
                fStack_27 = (pSVar16->CameraPosition).z;
                fStack_28 = (pSVar16->CameraRotation).x;
                fStack_29 = (pSVar16->CameraRotation).y;
                uStack_30._0_4_ = (pSVar16->CameraRotation).z;
                uStack_30._4_4_ = (pSVar16->CameraRotation).w;
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  value_00.y = fStack_26;
                  value_00.x = fStack_25;
                  value_00.z = fStack_27;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar2,value_00,(MethodInfo *)0x0);
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    value_01.y = fStack_29;
                    value_01.x = fStack_28;
                    value_01.z = (float)(undefined4)uStack_30;
                    value_01.w = uStack_30._4_4_;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar2,value_01,(MethodInfo *)0x0);
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
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
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
  (this->fields).avatarLocal = avatarLocal;
  func_?(&(this->fields).avatarLocal,avatarLocal);
  if ((avatarLocal != (MVAvatarLocal *)0x0) &&
     (this_00 = (avatarLocal->fields)._._._.gameObject, this_00 != (GameObject *)0x0)) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0);
    (this->fields).lookAtTransform = pTVar1;
    func_?(&(this->fields).lookAtTransform,pTVar1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
                         ((Quaternion *)&stack0xffffffb8,a,b,(fVar17 + fVar17) * fVar1,
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
  uVar1 = (undefined4)((ulonglong)in_stack_2 >> 0x20);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)((int)register0x00000010 + -0x28),pTVar3,(MethodInfo *)0x0);
    uStack_5._0_4_ = pVVar4->x;
    uStack_5._4_4_ = pVVar4->y;
    VStack_6.y = pVVar4->z;
    pTVar7 = (this->fields).lookAtTransform;
    if (pTVar7 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_8,pTVar7,(MethodInfo *)0x0);
      uVar9 = pVVar4->x;
      uVar10 = pVVar4->y;
      uStack_5._0_4_ = (this->fields).prevLookAtTransformPos.x;
      uStack_5._4_4_ = (this->fields).prevLookAtTransformPos.y;
      VStack_6.y = (this->fields).prevLookAtTransformPos.z;
      fVar11 = VStack_6.z + ((float)uVar9 - (float)uStack_5);
      fVar12 = VStack_8.y + (pVVar4->z - VStack_6.y);
      VStack_8.y = fVar12;
      value.y = VStack_8.x + ((float)uVar10 - uStack_5._4_4_);
      value.x = fVar11;
      value.z = fVar12;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar3,value,(MethodInfo *)0x0);
      fVar12 = (this->fields).distance / (this->fields).desiredDistance;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Quaternion);
        cRam_? = '\x01';
      }
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)((int)&stack0x00000018 + 4),pTVar3,(MethodInfo *)0x0);
        method = (MethodInfo *)pQVar13->x;
        in_stack_14 = pQVar13->y;
        in_stack_15 = pQVar13->z;
        in_stack_16 = pQVar13->w;
        iVar17 = func_?(&stack0x00000018,&method,0,uVar1,fVar12);
        auVar18._4_8_ = 0;
        auVar18._0_4_ = *(float *)(iVar17 + 4) * _UNK_?;
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                  Quaternion_Internal_FromEulerRad
                            ((Quaternion *)&stack0xffffffc4,(Vector3)(auVar18 << 0x20),
                             (MethodInfo *)0x0);
        VStack_6.y = pQVar13->y;
        VStack_6.z = pQVar13->z;
        VStack_8.x = pQVar13->w;
        pTVar3 = (this->fields).lookAtTransform;
        uStack_5._4_4_ = pQVar13->x;
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                    ((Vector3 *)&stack0xffffffc8,pTVar3,(MethodInfo *)0x0);
          uVar19 = (this->fields).avatarHeadOffset.x;
          uVar20 = (this->fields).avatarHeadOffset.y;
          fVar21 = (this->fields).avatarHeadOffset.z;
          uVar22 = (this->fields).offset.x;
          fVar12 = (this->fields).offset.y;
          fVar23 = fVar21 + (this->fields).offset.z * fVar11;
          rotation.y = VStack_8.y;
          rotation.x = VStack_8.x;
          rotation.z = VStack_8.z;
          rotation.w = fStack_24;
          point.y = (float)uVar20 + fVar12 * fVar11;
          point.x = (float)uVar19 + (float)uVar22 * fVar11;
          point.z = fVar23;
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffd4,rotation,point,(MethodInfo *)0x0);
          VStack_8.y = pVVar4->x;
          VStack_8.z = pVVar4->y;
          fStack_24 = pVVar4->z + in_stack_25;
          (this->fields).lookAtPos.x = VStack_8.y + fVar12;
          (this->fields).lookAtPos.y = VStack_8.z + fVar23;
          (this->fields).lookAtPos.z = fStack_24;
          pTVar3 = (this->fields).lookAtTransform;
          if (pTVar3 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&fStack_26,pTVar3,(MethodInfo *)0x0);
            uVar27 = pVVar4->x;
            uVar28 = pVVar4->y;
            uVar29 = (this->fields).avatarHeadOffset.x;
            uVar30 = (this->fields).avatarHeadOffset.y;
            fVar11 = (float)uVar30 + (float)uVar28;
            fVar23 = (this->fields).avatarHeadOffset.z + pVVar4->z;
            uVar31 = (this->fields).lookAtPos.x;
            uVar32 = (this->fields).lookAtPos.y;
            in_stack_16 = ((float)uVar31 - ((float)uVar29 + (float)uVar27)) * fVar21;
            fVar12 = ((float)uVar32 - fVar11) * fVar21;
            VStack_6.y = ((this->fields).lookAtPos.z - fVar23) * fVar21;
            in_stack_33 = 0;
            in_stack_34 = 0.0;
            VStack_8.z = fVar12;
            VStack_8.y = in_stack_16;
            fStack_24 = VStack_6.y;
            fStack_35 = (float)uVar31;
            fStack_26 = (float)uVar32;
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0x0000000c,pTVar3,(MethodInfo *)0x0);
              uVar36 = pVVar4->x;
              uVar37 = pVVar4->y;
              in_stack_15 = pVVar4->z - VStack_6.z;
              _method = CONCAT44((float)uVar37 - VStack_6.y,(float)uVar36 - uStack_5._4_4_);
              in_stack_34 = in_stack_15;
              fVar38 = (float10)func_?(&stack0xfffffffc,0);
              uVar1 = 0;
              puVar39 = &stack0xfffffffc;
              puVar40 = &stack0x00000018;
              uStack_5._0_4_ = (float)fVar38;
              func_?();
              puVar40 = (undefined8 *)
                        func_?(&stack0x00000018,&method,0,puVar40,puVar39,uVar1);
              fVar21 = (this->fields).distance;
              fVar41 = (this->fields).distance;
              dVar42 = (double)((fVar11 * fVar11 + fVar21 * fVar21) -
                               ((float)((ulonglong)*puVar40 >> 0x20) * fStack_35 +
                                (float)*puVar40 * fStack_24 + *(float *)(puVar40 + 1) * fStack_26) *
                               (fVar41 + fVar41) * fVar11);
              if (dVar42 < 0.0) {
                func_?();
              }
              else {
                dVar42 = SQRT(dVar42);
              }
              in_stack_16 = VStack_8.x + (float)uStack_5;
              (this->fields).actualLookAt.x = in_stack_33._4_4_ + fVar23;
              (this->fields).actualLookAt.y = uStack_5._4_4_ + fVar12;
              (this->fields).currentLookAt.x = in_stack_33._4_4_ + fVar23;
              (this->fields).currentLookAt.y = uStack_5._4_4_ + fVar12;
              (this->fields).actualLookAt.z = in_stack_16;
              (this->fields).currentLookAt.z = in_stack_16;
              if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)dVar42 &&
                  (float)dVar42 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
                pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                uVar43 = (this->fields).actualLookAt.x;
                fStack_26 = (float)uVar43;
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pTVar7 == (Transform *)0x0) goto code_?;
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)((int)&stack0x00000018 + 4),pTVar7,
                                     (MethodInfo *)0x0);
                uVar44 = pVVar4->x;
                uVar45 = pVVar4->y;
                fVar11 = in_stack_14 - (float)uVar44 * VStack_8.x;
                fVar12 = in_stack_15 - (float)uVar45 * VStack_8.x;
                in_stack_34 = in_stack_16 - pVVar4->z * VStack_8.x;
                in_stack_33 = CONCAT44(fVar12,fVar11);
                if (pTVar3 == (Transform *)0x0) goto code_?;
                uStack_5 = uStack_5 & 0xffffffff00000000;
                value_00.y = fVar12;
                value_00.x = fVar11;
                value_00.z = in_stack_34;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar3,value_00,(MethodInfo *)0x0);
              }
              pTVar3 = (this->fields).lookAtTransform;
              if (pTVar3 != (Transform *)0x0) {
                pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0x0000000c,pTVar3,(MethodInfo *)0x0);
                fVar12 = pVVar4->y;
                uStack_5._0_4_ = pVVar4->z;
                (this->fields).prevLookAtTransformPos.x = pVVar4->x;
                (this->fields).prevLookAtTransformPos.y = fVar12;
                (this->fields).prevLookAtTransformPos.z = (float)uStack_5;
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
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
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

