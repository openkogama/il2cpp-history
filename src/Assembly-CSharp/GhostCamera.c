
/* Void CameraCollision() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_CameraCollision
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?(&TypeInfo__UnityEngine__Mathf);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Default);
    in_stack_1 = &UNK_?;
    func_?(&StringLiteral_Not_within_line_segment);
    cRam_? = '\x01';
  }
  uStack_2 = 0;
  uStack_3 = 0;
  func_?(auStack_4,0);
  pTVar5 = (this->fields).lookAtTransform;
  if (pTVar5 != (Transform *)0x0) {
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_7,pTVar5,(MethodInfo *)0x0);
    uVar8 = pVVar6->x;
    uVar9 = pVVar6->y;
    fStack_10 = pVVar6->z;
    uVar11 = (this->fields).avatarHeadOffset.x;
    uVar12 = (this->fields).avatarHeadOffset.y;
    auStack_13._0_4_ = (this->fields).avatarHeadOffset.z;
    auStack_13._8_4_ = (float)uVar12 + (float)uVar9;
    auStack_13._4_4_ = (float)uVar11 + (float)uVar8;
    pTStack_14 = (Transform *)((float)auStack_13._0_4_ + fStack_10);
    auStack_13._16_4_ = pTStack_14;
    puVar15 = &UNK_?;
    auStack_16._8_4_ = uVar11;
    fStack_17 = (float)uVar12;
    auStack_13._24_4_ = uVar8;
    fStack_18 = (float)uVar9;
    pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar5 != (Transform *)0x0) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)auStack_16,pTVar5,(MethodInfo *)0x0);
      uVar19 = pVVar6->x;
      uVar20 = pVVar6->y;
      auStack_13._12_4_ = (float)uVar19 - (float)auStack_13._24_4_;
      auStack_13._16_4_ = (float)uVar20 - fStack_18;
      auStack_13._20_4_ = pVVar6->z - VStack_7.x;
      auStack_13._4_4_ = auStack_13._20_4_;
      fVar21 = (float10)func_?(auStack_13 + 0xc,0);
      fStack_10 = (float)fVar21;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                ((Vector3 *)(auStack_13 + 0xc),(MethodInfo *)0x0);
      auStack_13._8_4_ = auStack_13._24_4_;
      auStack_13._4_4_ = auStack_13._20_4_;
      auStack_13._12_4_ = fStack_18;
      uStack_22 = uStack_3._4_4_;
      puVar23 = auStack_13 + 4;
      uVar24 = 0;
      fStack_25 = fStack_10;
      fStack_26 = VStack_7.x;
      uStack_27 = 0;
      uStack_28 = 0;
      auStack_29 = (undefined1  [8])CONCAT44(VStack_7.x,fStack_10);
      puVar30 = (undefined8 *)func_?(&pCStack_31);
      uVar32 = *puVar30;
      uVar33 = *(undefined4 *)(puVar30 + 1);
      iVar34 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                         (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Direction.z = (float)uVar24;
      ray.m_Direction.y = (float)puVar23;
      ray.m_Origin.y = (float)(int)uVar32;
      ray.m_Origin.x = (float)puVar15;
      ray.m_Origin.z = (float)(int)((ulonglong)uVar32 >> 0x20);
      ray.m_Direction.x = (float)uVar33;
      bVar35 = CollisionDetection::CollisionDetection_MVSphereCast
                         (ray,(this->fields)._.cameraRadius,(VoxelHit *)auStack_13,in_stack_36
                          ,(this->fields).ignoreAvatarId,1 << ((byte)iVar34 & 0x1f),
                          (MethodInfo *)0x0);
      pTVar5 = pTStack_14;
      if ((fStack_37 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) || (bVar35 == 0)) {
        return;
      }
      afStack_38[1] = 0.0;
      afStack_38[2] = 0.0;
      fVar39 = 0.0;
      afStack_38[3] = 0.0;
      uVar33 = 0;
      pCVar40 = pCStack_31;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)(auStack_13 + 0x10),this_00,(MethodInfo *)0x0);
        uVar41 = pVVar6->x;
        uVar42 = pVVar6->y;
        point.y = (float)puVar23;
        point.x = (float)uVar33;
        point.z = (float)pTVar5;
        lineStart.y = fStack_43;
        lineStart.x = VStack_7.z;
        lineStart.z = afStack_38[3];
        lineEnd.y = in_stack_44 + (float)uVar42;
        lineEnd.x = fVar39 + (float)uVar41;
        lineEnd.z = (float)in_stack_1 + pVVar6->z;
        bVar35 = MathFunctions::MathFunctions_DistancePointLine_1
                           (point,lineStart,lineEnd,afStack_38,(Vector3 *)(auStack_16 + 8),
                            (MethodInfo *)0x0);
        if (bVar35 == 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug,pCVar40);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          auStack_13._0_4_ = fStack_45;
          pOVar46 = (Object *)func_?(TypeInfo__System__Single,auStack_13);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar46,(MethodInfo *)0x0);
          auStack_13._12_4_ = (this->fields).distance;
          pOVar46 = (Object *)func_?(TypeInfo__System__Single,auStack_13 + 0xc);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar46,(MethodInfo *)0x0);
        }
        fVar39 = (this->fields)._.cameraRadius;
        if ((float)auStack_13._16_4_ < fVar39) {
          dVar47 = (double)(fVar39 * fVar39 - (float)auStack_13._16_4_ * (float)auStack_13._16_4_);
          if (dVar47 < 0.0) {
            func_?();
          }
          else {
            dVar47 = SQRT(dVar47);
          }
          auStack_16._0_4_ = (undefined4)dVar47;
        }
        auStack_16._8_4_ = (this->fields).distance;
        pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar5 != (Transform *)0x0) {
          value.y = (float)pCStack_31 - fStack_48 * (float)auStack_16._8_4_;
          value.x = fStack_43 - uStack_49._4_4_ * (float)auStack_16._8_4_;
          value.z = (float)pTStack_14 - (float)uStack_3 * (float)auStack_16._8_4_;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar5,value,(MethodInfo *)0x0);
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar5 != (Transform *)0x0) {
            pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)(auStack_29 + 4),pTVar5,(MethodInfo *)0x0);
            uVar50 = pVVar6->x;
            uVar51 = pVVar6->y;
            fStack_48 = VStack_7.x - pVVar6->z;
            auStack_13._4_4_ = fStack_48;
            uStack_49 = CONCAT44(fStack_18 - (float)uVar51,(float)auStack_13._24_4_ - (float)uVar50);
            fStack_17 = (float)uVar50;
            auStack_13._0_4_ = uVar51;
            fVar21 = (float10)func_?(&uStack_49,0);
            uVar52 = (this->fields).currentLookAt.x;
            uVar53 = (this->fields).currentLookAt.y;
            fVar39 = (this->fields).currentLookAt.z;
            (this->fields).distance = (float)fVar21;
            VStack_7.y = (float)fVar21 / VStack_7.y;
            (this->fields).currentLookAt.x =
                 ((float)uVar52 - (float)auStack_13._24_4_) * VStack_7.y + (float)auStack_13._24_4_;
            (this->fields).currentLookAt.y = ((float)uVar53 - fStack_18) * VStack_7.y + fStack_18;
            (this->fields).currentLookAt.z = (fVar39 - VStack_7.x) * VStack_7.y + VStack_7.x;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar54 = (code *)swi(3);
  (*pcVar54)();
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
          QStack_5.y = pVVar3->x;
          QStack_5.z = pVVar3->y;
          QStack_5.w = pVVar3->z;
          VStack_4.x = QStack_5.y + fVar6;
          VStack_4.y = QStack_5.z + fStack_7;
          VStack_4.z = QStack_5.w + fStack_8;
          if (pTVar2 != (Transform *)0x0) {
            value.z = VStack_4.z;
            value.x = VStack_4.x;
            value.y = QStack_5.z + fStack_7;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar2,value,(MethodInfo *)0x0);
            bVar10 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
            if (bVar10 == 0) {
              return;
            }
            pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                               ((MethodInfo *)0x0);
            if ((pSVar11 != (SpawnRoleDataMediator *)0x0) &&
               (pWVar12 = (WebCompletionSource_1_System_Object_ *)(pSVar11->fields).lastRespawnType,
               pWVar12 != (WebCompletionSource_1_System_Object_ *)0x0)) {
              pTVar13 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                       WebCompletionSource_1_System_Object__get_Task
                                 (pWVar12,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                                 );
              if (pTVar13 != (Task *)0x1) {
                return;
              }
              pSVar11 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                 ((MethodInfo *)0x0);
              if (((pSVar11 != (SpawnRoleDataMediator *)0x0) &&
                  (pWVar12 = (WebCompletionSource_1_System_Object_ *)(pSVar11->fields).reviveState,
                  pWVar12 != (WebCompletionSource_1_System_Object_ *)0x0)) &&
                 (pTVar13 = System.dll::System::Net::WebCompletionSource`1[System::Object]::
                           WebCompletionSource_1_System_Object__get_Task
                                     (pWVar12,
                                      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                     ), pTVar13 != (Task *)0x0)) {
                pSVar14 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                                    (&SStack_15,(ReviveState *)pTVar13,(MethodInfo *)0x0);
                fStack_16 = (pSVar14->Position).x;
                fStack_17 = (pSVar14->Position).y;
                fStack_18 = (pSVar14->Position).z;
                fStack_19 = (pSVar14->Rotation).x;
                fStack_20 = (pSVar14->Rotation).y;
                fStack_21 = (pSVar14->Rotation).z;
                fStack_22 = (pSVar14->Rotation).w;
                fStack_23 = (pSVar14->CameraPosition).x;
                fStack_24 = (pSVar14->CameraPosition).y;
                fStack_25 = (pSVar14->CameraPosition).z;
                fStack_26 = (pSVar14->CameraRotation).x;
                fStack_27 = (pSVar14->CameraRotation).y;
                uStack_28._0_4_ = (pSVar14->CameraRotation).z;
                uStack_28._4_4_ = (pSVar14->CameraRotation).w;
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this,(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  value_00.y = fStack_24;
                  value_00.x = fStack_23;
                  value_00.z = fStack_25;
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar2,value_00,(MethodInfo *)0x0);
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)this,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    value_01.y = fStack_27;
                    value_01.x = fStack_26;
                    value_01.z = (float)(undefined4)uStack_28;
                    value_01.w = uStack_28._4_4_;
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
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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
  (*(code *)(this->klass->vtable).CameraCollision.method)(this,this->klass[1]._0.image);
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
        method = (MethodInfo *)pQVar11->x;
        in_stack_12 = pQVar11->y;
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
            fVar23 = (float)uVar31 + (float)uVar29;
            fVar27 = (this->fields).avatarHeadOffset.z + pVVar2->z;
            uVar32 = (this->fields).lookAtPos.x;
            uVar33 = (this->fields).lookAtPos.y;
            fVar17 = ((this->fields).lookAtPos.z - fVar27) * fVar21;
            in_stack_14 = ((float)uVar32 - ((float)uVar30 + (float)uVar28)) * fVar21;
            fVar21 = ((float)uVar33 - fVar23) * fVar21;
            _fStack00000018 = 0;
            in_stack_34 = 0.0;
            method = (MethodInfo *)uVar33;
            in_stack_12 = fVar17;
            VStack_3.z = in_stack_14;
            fStack_10 = fVar21;
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_3,pTVar1,(MethodInfo *)0x0);
              uVar35 = pVVar2->x;
              uVar36 = pVVar2->y;
              fVar37 = pVVar2->z - VStack_3.x;
              _fStack00000018 = CONCAT44((float)uVar36 - fVar9,(float)uVar35 - fVar18);
              in_stack_34 = fVar37;
              fVar38 = (float10)func_?();
              uVar39 = 0;
              ppMVar40 = &method;
              pfVar41 = &fStack_10;
              fVar42 = (float)fVar38;
              puVar43 = (undefined8 *)func_?();
              in_stack_13 = *(float *)(puVar43 + 1);
              method = (MethodInfo *)*puVar43;
              in_stack_12 = (float)((ulonglong)*puVar43 >> 0x20);
              puVar43 = (undefined8 *)
                        func_?(&fStack_10,&stack0x00000018,0,pfVar41,ppMVar40,uVar39);
              in_stack_14 = *(float *)(puVar43 + 1);
              in_stack_12 = (float)*puVar43;
              in_stack_13 = (float)((ulonglong)*puVar43 >> 0x20);
              fVar24 = (this->fields).distance;
              fVar44 = (this->fields).distance;
              dVar45 = (double)((fVar23 * fVar23 + fVar24 * fVar24) -
                               (in_stack_13 * fVar37 + in_stack_12 * fVar17 +
                               in_stack_14 * (float)uVar32) * (fVar44 + fVar44) * fVar23);
              if (dVar45 < 0.0) {
                func_?();
              }
              else {
                dVar45 = SQRT(dVar45);
              }
              in_stack_14 = fVar9 + fVar42;
              (this->fields).actualLookAt.x = fStack46 + fVar27;
              (this->fields).actualLookAt.y = fVar18 + fVar21;
              (this->fields).currentLookAt.x = fStack46 + fVar27;
              (this->fields).currentLookAt.y = fVar18 + fVar21;
              (this->fields).actualLookAt.z = in_stack_14;
              (this->fields).currentLookAt.z = in_stack_14;
              if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= (float)dVar45 &&
                  (float)dVar45 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                uVar47 = (this->fields).actualLookAt.y;
                in_stack_12 = (this->fields).actualLookAt.z;
                method = (MethodInfo *)uVar47;
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)this,(MethodInfo *)0x0);
                if (pTVar4 == (Transform *)0x0) goto code_?;
                pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xfffffffc,pTVar4,(MethodInfo *)0x0);
                uVar48 = pVVar2->x;
                uVar49 = pVVar2->y;
                fVar9 = fStack50 - (float)uVar48 * VStack_3.y;
                fVar17 = fStack46 - (float)uVar49 * VStack_3.y;
                in_stack_51 = CONCAT44(fVar17,fVar9);
                in_stack_52 = in_stack_34 - pVVar2->z * VStack_3.y;
                if (pTVar1 == (Transform *)0x0) goto code_?;
                value_00.y = fVar17;
                value_00.x = fVar9;
                value_00.z = in_stack_52;
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
  pcVar53 = (code *)swi(3);
  (*pcVar53)();
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

