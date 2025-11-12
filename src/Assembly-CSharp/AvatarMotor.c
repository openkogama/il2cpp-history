
/* Vector3 ApplyInputVelocityChange(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_ApplyInputVelocityChange
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 *velocity,
                    Vector3 *inputDirection,MethodInfo *method)

{
  aVStack_1[0].x = inputDirection->x;
  aVStack_1[0].y = inputDirection->y;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  aVStack_1[0].z = inputDirection->z;
  method_00 = this;
  fVar3 = AvatarMotor_GetSpeed(this,(this->fields).speed,aVStack_1,(MethodInfo *)0x0);
  uVar4 = inputDirection->x;
  uVar5 = inputDirection->y;
  fVar6 = inputDirection->z;
  (this->fields).speed = fVar3;
  fVar6 = fVar6 * fVar3;
  aVStack_1[0].y = (float)uVar5 * fVar3;
  aVStack_1[0].x = (float)uVar4 * fVar3;
  aVStack_1[0].z = fVar6;
  fVar7 = (float)FUN_?(aVStack_1);
  if (fVar7 == 0.0) {
    uVar8._0_4_ = velocity->x;
    uVar8._4_4_ = velocity->y;
  }
  else {
    fVar7 = velocity->x;
    fVar9 = velocity->z;
    VStack_2.y = 0.0;
    VStack_2.x = fVar7;
    VStack_2.z = fVar9;
    fVar10 = (float)FUN_?(&VStack_2);
    fVar11 = (float)uVar4 * fVar3 * _UNK_?;
    fVar3 = (float)uVar5 * fVar3 * _UNK_?;
    fVar6 = fVar6 * _UNK_?;
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar12 = (code *)swi(3);
      pVVar13 = (Vector3 *)(*pcVar12)();
      return pVVar13;
    }
    pcRam_? = pcVar12;
    fVar14 = (float)(*pcRam_?)();
    fVar7 = fVar11 * fVar14 + fVar7;
    fVar9 = fVar6 * fVar14 + fVar9;
    VStack_2.y = fVar3 * fVar14 + 0.0;
    VStack_2.x = fVar7;
    VStack_2.z = fVar9;
    fVar6 = (float)FUN_?(&VStack_2);
    pfVar15 = &(this->fields).speed;
    if (fVar10 < fVar6 && (*pfVar15 <= fVar6 && fVar6 != *pfVar15)) {
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&VStack_2,(MethodInfo *)method_00);
      fVar7 = VStack_2.x * fVar10;
      fVar9 = VStack_2.z * fVar10;
    }
    velocity->z = fVar9;
    uVar16 = velocity->y;
    uVar8 = CONCAT44(uVar16,fVar7);
    velocity->x = fVar7;
    velocity->y = (float)uVar16;
  }
  fVar6 = velocity->z;
  __return_storage_ptr__->x = (float)(int)uVar8;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar8 >> 0x20);
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Vector3 ApplyInputVelocityChangeGrounded(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_ApplyInputVelocityChangeGrounded
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 *velocity,
                    Vector3 *inputDirection,MethodInfo *method)

{
  auStack_1 = *(undefined1 (*) [8])inputDirection;
  method_00 = (MethodInfo *)auStack_1;
  fStack_2 = inputDirection->z;
  fVar3 = AvatarMotor_GetSpeed(this,(this->fields).speed,(Vector3 *)method_00,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                      ((Vector3 *)&pIStack_5,&(this->fields).velocityPrevFrame,method_00);
  fVar6 = (float)func_?(pVVar4->y);
  obj = (this->fields).slopeSpeedMultiplier;
  fVar6 = fVar6 * _UNK_?;
  if (obj != (AnimationCurve *)0x0) {
    pvVar7 = (obj->fields).m_Ptr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar8)();
      return pVVar4;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar8)();
      return pVVar4;
    }
    pcRam_? = pcVar8;
    fVar6 = (float)(*pcRam_?)(pvVar7,fVar6);
    pIStack_5 = *(InvokerMethod *)inputDirection;
    fVar6 = fVar6 * fVar3;
    (this->fields).speed = fVar6;
    pMVar10 = (this->fields)._.groundState;
    if (pMVar10 != (MVGroundState *)0x0) {
      auStack_1 = *(undefined1 (*) [8])&(pMVar10->fields).groundNormal;
      fStack_2 = (pMVar10->fields).groundNormal.z;
      pIStack_5 = (InvokerMethod)
                   CONCAT44((float)((ulonglong)pIStack_5 >> 0x20) * fVar6,
                            SUB84(pIStack_5,0) * fVar6);
      fStack_11 = inputDirection->z * fVar6;
      pVVar4 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal
                          (aVStack_12,(Vector3 *)&pIStack_5,(Vector3 *)auStack_1,(MethodInfo *)0x0
                          );
      uVar13 = velocity->x;
      uVar14 = velocity->y;
      auStack_1 = *(undefined1 (*) [8])pVVar4;
      fVar3 = pVVar4->z;
      fVar15 = SUB84(auStack_1,0);
      fVar16 = pVVar4->z;
      fVar6 = velocity->z;
      uVar17 = (ulonglong)auStack_1 >> 0x20;
      pMVar10 = (this->fields)._.groundState;
      pAVar18 = (this->fields).interactableLocal;
      fStack_2 = fVar16;
      if (((pMVar10 != (MVGroundState *)0x0) &&
          (pMVar19 = (pMVar10->fields).groundMaterial, pMVar19 != (MVMaterial *)0x0)) &&
         (pAVar18 != (AvatarInteractable *)0x0)) {
        fVar20 = (float)(*(pAVar18->klass->vtable).HandleModifierEffect.methodPtr)
                                  (pAVar18,0xc,
                                   (pMVar19->fields)._PhysicalProperties_k__BackingField.friction *
                                   (this->fields).frictionMultiplier,
                                   (pAVar18->klass->vtable).HandleModifierEffect.method);
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          pVVar4 = (Vector3 *)(*pcVar8)();
          return pVVar4;
        }
        pcRam_? = pcVar8;
        fVar21 = (float)(*pcRam_?)();
        fVar20 = (fVar21 * fVar20 * fVar20) / _UNK_?;
        uVar22 = velocity->x;
        uVar23 = velocity->y;
        fVar21 = (fVar15 - (float)uVar13) * fVar20 + (float)uVar22;
        fVar15 = ((float)uVar17 - (float)uVar14) * fVar20 + (float)uVar23;
        fVar3 = (fVar3 - fVar6) * fVar20 + velocity->z;
        pMVar10 = (this->fields)._.groundState;
        pAVar18 = (this->fields).interactableLocal;
        velocity->x = fVar21;
        velocity->y = fVar15;
        velocity->z = fVar3;
        if (((pMVar10 != (MVGroundState *)0x0) &&
            (pMVar19 = (pMVar10->fields).groundMaterial, pMVar19 != (MVMaterial *)0x0)) &&
           (pAVar18 != (AvatarInteractable *)0x0)) {
          fVar6 = (float)(*(pAVar18->klass->vtable).HandleModifierEffect.methodPtr)
                                    (pAVar18,0xc,
                                     (pMVar19->fields)._PhysicalProperties_k__BackingField.friction *
                                     (this->fields).frictionMultiplier,
                                     (pAVar18->klass->vtable).HandleModifierEffect.method);
          if ((fVar6 * fVar6 < _UNK_?) &&
             (fVar6 = (float)FUN_?(auStack_1), fVar6 != 0.0)) {
            fVar6 = (float)auStack_1._0_4_ * _UNK_?;
            fVar20 = (float)auStack_1._4_4_ * _UNK_?;
            fVar16 = fVar16 * _UNK_?;
            pcVar8 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar8 = (code *)swi(3);
              pVVar4 = (Vector3 *)(*pcVar8)();
              return pVVar4;
            }
            pcRam_? = pcVar8;
            fVar24 = (float)(*pcRam_?)();
            velocity->x = fVar6 * fVar24 + fVar21;
            velocity->y = fVar20 * fVar24 + fVar15;
            velocity->z = fVar16 * fVar24 + fVar3;
          }
          fVar3 = velocity->z;
          fVar6 = velocity->y;
          __return_storage_ptr__->x = velocity->x;
          __return_storage_ptr__->y = fVar6;
          __return_storage_ptr__->z = fVar3;
          return __return_storage_ptr__;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar8)();
  return pVVar4;
}


/* Void DealImpactDamage(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_DealImpactDamage
               (AvatarMotor *this,Vector3 *curVelocity,Vector3 *prevVelocity,MethodInfo *method)

{
  this_00 = (this->fields).impactState;
  if (this_00 == (ImpactState *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  VStack_2.x = prevVelocity->x;
  VStack_2.y = prevVelocity->y;
  VStack_2.z = prevVelocity->z;
  interactableLocal = (this->fields).interactableLocal;
  VStack_3.x = curVelocity->x;
  VStack_3.y = curVelocity->y;
  VStack_3.z = curVelocity->z;
  fVar4 = ImpactState::ImpactState_UpdateImpactState
                    (this_00,&VStack_3,&VStack_2,(MVInteractableBase *)interactableLocal,
                     (MethodInfo *)0x0);
  if (fVar4 != 0.0) {
    pAVar5 = (this->fields).interactableLocal;
    if (pAVar5 == (AvatarInteractable *)0x0) goto code_?;
    (*(pAVar5->klass->vtable).TakeDamage.methodPtr)
              (pAVar5,fVar4,0,CONCAT71((int7)((ulonglong)interactableLocal >> 8),5),
               (pAVar5->klass->vtable).TakeDamage.method);
  }
  return;
}


/* Void FixedUpdateFunction(IMotorAPI) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_FixedUpdateFunction
               (AvatarMotor *this,IMotorAPI *motorApi,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IMotorAPI);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  cVar2 = (*(this->klass->vtable).get_IsMovementLocked.methodPtr)(this);
  if (cVar2 != '\0') {
    return;
  }
  pSVar3 = (this->fields).smoothCharacterController;
  if (((pSVar3 == (SmoothCharacterController *)0x0) ||
      (pMVar4 = (pSVar3->fields).controller, pMVar4 == (MvCharacterController *)0x0)) ||
     (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pMVar4,(MethodInfo *)0x0), motorApi == (IMotorAPI *)0x0))
  goto code_?;
  puVar6 = (undefined8 *)FUN_?(&VStack_7,2,TypeInfo__IMotorAPI,motorApi);
  if (pTVar5 != (Transform *)0x0) {
    auStack_8._0_8_ = *puVar6;
    auStack_8._8_8_ = puVar6[1];
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
    if (pvVar9 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
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
    (*pcRam_?)(pvVar9,auStack_8);
    pSVar3 = (this->fields).smoothCharacterController;
    fVar12 = (this->fields).velocityPrevFrame.z;
    uVar11._0_4_ = (this->fields).velocityPrevFrame.x;
    uVar11._4_4_ = (this->fields).velocityPrevFrame.y;
    if ((pSVar3 != (SmoothCharacterController *)0x0) &&
       (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) {
      this_00 = (this->fields).movableMotorState;
      if (this_00 != (MVMovableMotorState *)0x0) {
        VStack_13._0_8_ = uVar11;
        VStack_13.z = fVar12;
        bVar14 = MVMovableMotorState::MVMovableMotorState_Move
                           (this_00,&VStack_13,pMVar4,(pMVar4->fields).elipsoidRadius.x,
                            (this->fields)._.groundState,&VStack_1,(MethodInfo *)0x0);
        inputJump = FUN_?(4,TypeInfo__IMotorAPI,motorApi);
        puVar6 = (undefined8 *)FUN_?(&VStack_7,0,TypeInfo__IMotorAPI,motorApi);
        fVar15 = VStack_1.z;
        uVar16 = VStack_1._0_8_;
        VStack_13.z = *(float *)(puVar6 + 1);
        VStack_13._0_8_ = *puVar6;
        VStack_17.x = VStack_1.x;
        VStack_17.y = VStack_1.y;
        VStack_17.z = VStack_1.z;
        VStack_7._0_8_ = uVar11;
        VStack_7.z = fVar12;
        pVVar18 = AvatarMotor_GetVelocity
                            ((Vector3 *)auStack_8,this,&VStack_7,&VStack_17,inputJump,&VStack_13,
                             (MethodInfo *)0x0);
        uVar19 = VStack_1._0_8_;
        if (bVar14 == 0) {
          VStack_17.x = pVVar18->x;
          VStack_17.y = pVVar18->y;
          VStack_17.z = pVVar18->z;
          VStack_1.x = (float)uVar16;
          VStack_1.y = SUB84(uVar16,4);
          VStack_7.x = VStack_1.x;
          VStack_7.y = VStack_1.y;
          VStack_7.z = fVar15;
          VStack_1._0_8_ = uVar19;
          AvatarMotor_Move(this,&VStack_17,&VStack_7,(MethodInfo *)0x0);
          AvatarMotor_UpdateVelocity(this,(MethodInfo *)0x0);
          auStack_8._0_4_ = (this->fields).velocityPrevFrame.x;
          auStack_8._4_4_ = (this->fields).velocityPrevFrame.y;
          fVar20 = (this->fields).velocityPrevFrame.z;
          (this->fields).velocityPrevFrame.x = auStack_8._0_4_ - VStack_1.x;
          (this->fields).velocityPrevFrame.y = auStack_8._4_4_ - VStack_1.y;
          (this->fields).velocityPrevFrame.z = fVar20 - fVar15;
        }
        else {
          uVar16._0_4_ = pVVar18->x;
          uVar16._4_4_ = pVVar18->y;
          fVar15 = pVVar18->z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_7.x = (pVVar21->zeroVector).x;
          VStack_7.y = (pVVar21->zeroVector).y;
          VStack_7.z = (pVVar21->zeroVector).z;
          VStack_17._0_8_ = uVar16;
          VStack_17.z = fVar15;
          AvatarMotor_Move(this,&VStack_17,&VStack_7,(MethodInfo *)0x0);
          AvatarMotor_UpdateVelocity(this,(MethodInfo *)0x0);
        }
        this_01 = (this->fields).impactState;
        if (this_01 != (ImpactState *)0x0) {
          VStack_17.x = (this->fields).velocityPrevFrame.x;
          VStack_17.y = (this->fields).velocityPrevFrame.y;
          VStack_17.z = (this->fields).velocityPrevFrame.z;
          interactableLocal = (this->fields).interactableLocal;
          VStack_7._0_8_ = uVar11;
          VStack_7.z = fVar12;
          fVar12 = ImpactState::ImpactState_UpdateImpactState
                             (this_01,&VStack_17,&VStack_7,(MVInteractableBase *)interactableLocal,
                              (MethodInfo *)0x0);
          if (fVar12 != 0.0) {
            pAVar22 = (this->fields).interactableLocal;
            if (pAVar22 == (AvatarInteractable *)0x0) goto code_?;
            interactableLocal =
                 (AvatarInteractable *)CONCAT71((int7)((ulonglong)interactableLocal >> 8),5);
            (*(pAVar22->klass->vtable).TakeDamage.methodPtr)
                      (pAVar22,fVar12,0,interactableLocal,(pAVar22->klass->vtable).TakeDamage.method);
          }
          bVar23 = FUN_?(4);
          pBVar24 = (this->fields).bounceState;
          if (pBVar24 != (BounceState *)0x0) {
            if ((((pBVar24->fields).bounced & bVar23) != 0) &&
               ((this->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
              pAVar25 = (this->fields).OnActiveBounce;
              (*(pAVar25->fields)._._.invoke_impl)((pAVar25->fields)._._.method_code);
            }
            this_02 = (this->fields)._GetSizeState_k__BackingField;
            if (this_02 != (SizeState *)0x0) {
              fVar12 = SizeState::SizeState_get_AvatarScale(this_02,(MethodInfo *)0x0);
              if ((this_02->fields).currentSize != fVar12) {
                SizeState::SizeState_ScaleChanged(this_02,(MethodInfo *)0x0);
              }
              pSVar3 = (this->fields).smoothCharacterController;
              this_03 = (this->fields).waterState;
              if (((pSVar3 != (SmoothCharacterController *)0x0) &&
                  (pMVar4 = (pSVar3->fields).controller, pMVar4 != (MvCharacterController *)0x0)) &&
                 (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pMVar4,(MethodInfo *)0x0),
                 pTVar5 != (Transform *)0x0)) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                VStack_1.x = 0.0;
                VStack_1.y = 0.0;
                VStack_1.z = 0.0;
                pvVar9 = (pTVar5->fields)._._.m_CachedPtr;
                if (pvVar9 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar5,(MethodInfo *)0x0);
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
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
                (*pcRam_?)(pvVar9,&VStack_1);
                pAVar22 = (this->fields).interactableLocal;
                if (this_03 != (WaterState *)0x0) {
                  (this_03->fields).worldPosition.x = VStack_1.x;
                  (this_03->fields).worldPosition.y = VStack_1.y;
                  (this_03->fields).worldPosition.z = VStack_1.z;
                  WaterState::WaterState_UpdateModifiers
                            (this_03,(MVInteractableBase *)pAVar22,(MethodInfo *)0x0);
                  VStack_7.x = (this_03->fields).worldPosition.x;
                  VStack_7.y = (this_03->fields).worldPosition.y;
                  VStack_7.z = (this_03->fields).worldPosition.z;
                  fVar12 = WaterState::WaterState_ComputeAvatarWaterProximity
                                     (this_03,&VStack_7,(MethodInfo *)0x0);
                  if ((fVar12 < _UNK_? ^ (this_03->fields).hasGillsNoLungs) == 1) {
                    (this_03->fields).oxygen = (this_03->fields).oxygenMax;
                  }
                  else {
                    fVar12 = (this_03->fields).oxygen;
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
                    fVar15 = (float)(*pcRam_?)();
                    fVar12 = fVar12 - fVar15;
                    fVar15 = 0.0;
                    if (0.0 <= fVar12) {
                      fVar15 = fVar12;
                    }
                    (this_03->fields).oxygen = fVar15;
                    if (fVar15 <= 0.0) {
                      pcVar10 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0))
                      {
                        uVar11 = func_?(&UNK_?);
                        FUN_?(uVar11,0);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                      pcRam_? = pcVar10;
                      fVar12 = (float)(*pcRam_?)();
                      if (pAVar22 == (AvatarInteractable *)0x0) goto code_?;
                      (*(pAVar22->klass->vtable).TakeDamage.methodPtr)
                                (pAVar22,fVar12 * _UNK_?,0,
                                 CONCAT71((int7)((ulonglong)interactableLocal >> 8),6),
                                 (pAVar22->klass->vtable).TakeDamage.method);
                    }
                  }
                  return;
                }
              }
            }
          }
        }
code_?:
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Single GetSpeed(Single, Vector3) */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetSpeed
                (AvatarMotor *this,float currentSpeed,Vector3 *inputDirection,MethodInfo *method)

{
  pAVar1 = (this->fields).interactableLocal;
  if (pAVar1 == (AvatarInteractable *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  fVar4 = (float)(*(pAVar1->klass->vtable).HandleModifierEffect.methodPtr)
                           (pAVar1,3,(this->fields).walkSpeed,
                            (pAVar1->klass->vtable).HandleModifierEffect.method);
  fVar3 = (this->fields).speedBoostSetting;
  fVar5 = (this->fields).currentLerp;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  pcRam_? = pcVar2;
  fVar7 = (float)(*pcRam_?)();
  fVar7 = fVar7 + fVar5;
  pfVar8 = &(this->fields).lerpTime;
  (this->fields).currentLerp = fVar7;
  if (*pfVar8 <= fVar7 && fVar7 != *pfVar8) {
    (this->fields).currentLerp = (this->fields).lerpTime;
  }
  fVar5 = (float)FUN_?(inputDirection);
  if (fVar5 == 0.0) {
    (this->fields).currentLerp = 0.0;
  }
  fVar5 = (float)FUN_?(((this->fields).currentLerp / (this->fields).lerpTime) *
                               _UNK_? * _UNK_?);
  return fVar5 * fVar4 * fVar3;
}


/* Single GetSpeedGrounded(Single, Vector3) */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetSpeedGrounded
                (AvatarMotor *this,float currentSpeed,Vector3 *inputDirection,MethodInfo *method)

{
  auStack_1._0_8_ = *(undefined8 *)inputDirection;
  auStack_1._8_4_ = inputDirection->z;
  method_00 = (MethodInfo *)auStack_1;
  fVar2 = AvatarMotor_GetSpeed(this,currentSpeed,(Vector3 *)method_00,(MethodInfo *)0x0);
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     ((Vector3 *)auStack_1,&(this->fields).velocityPrevFrame,method_00);
  fVar4 = (float)func_?(pVVar3->y);
  obj = (this->fields).slopeSpeedMultiplier;
  fVar4 = fVar4 * _UNK_?;
  if (obj == (AnimationCurve *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    fVar2 = (float)(*pcVar5)();
    return fVar2;
  }
  pvVar6 = (obj->fields).m_Ptr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar5 = (code *)swi(3);
    fVar2 = (float)(*pcVar5)();
    return fVar2;
  }
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar5 = (code *)swi(3);
    fVar2 = (float)(*pcVar5)();
    return fVar2;
  }
  pcRam_? = pcVar5;
  fVar4 = (float)(*pcRam_?)(pvVar6,fVar4);
  return fVar4 * fVar2;
}


/* Vector3 GetVelocity(Vector3, Vector3, Boolean, Vector3) */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_GetVelocity
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,Vector3 *velocity,
                    Vector3 *movableVelocity,bool inputJump,Vector3 *inputDirection,
                    MethodInfo *method)

{
  pMVar1 = (this->fields)._.groundState;
  if (pMVar1 == (MVGroundState *)0x0) goto code_?;
  bVar2 = MVGroundState::MVGroundState_get_Grounded(pMVar1,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    VStack_3.x = inputDirection->x;
    VStack_3.y = inputDirection->y;
    VStack_3.z = inputDirection->z;
    uStack_4._0_4_ = velocity->x;
    uStack_4._4_4_ = velocity->y;
    fStack_5 = velocity->z;
    pVVar6 = AvatarMotor_ApplyInputVelocityChange
                       ((Vector3 *)&pAStack_7,this,(Vector3 *)&uStack_4,&VStack_3,
                        (MethodInfo *)0x0);
    VStack_3._0_8_ = *(undefined8 *)&(this->fields).velocityPrevFrame;
    VStack_3.z = (this->fields).velocityPrevFrame.z;
    uStack_4 = *(AvatarInteractable **)pVVar6;
    fStack_5 = pVVar6->z;
    pVVar6 = MVRigidBody::MVRigidBody_ApplyGravity
                       ((Vector3 *)&pAStack_7,(MVRigidBody *)this,(Vector3 *)&uStack_4,&VStack_3,
                        (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
    fVar8 = pVVar6->y;
    fVar9 = pVVar6->z;
    velocity->x = pVVar6->x;
    velocity->y = fVar8;
    velocity->z = fVar9;
    if ((inputJump != 0) && (velocity->y <= 0.0 && velocity->y != 0.0)) {
      velocity->y = (this->fields).slowFallVelocityMultiplier * velocity->y;
    }
  }
  else {
    pMVar1 = (this->fields)._.groundState;
    if (pMVar1 == (MVGroundState *)0x0) goto code_?;
    VStack_3.x = velocity->x;
    VStack_3.y = velocity->y;
    VStack_3.z = velocity->z;
    pVVar6 = MVGroundState::MVGroundState_ApplySlidingVelocity
                       ((Vector3 *)&pAStack_7,pMVar1,&VStack_3,(this->fields)._.density,
                        (MVInteractableBase *)(this->fields).interactableLocal,(MethodInfo *)0x0);
    fVar9 = pVVar6->z;
    uStack_4 = *(AvatarInteractable **)pVVar6;
    pMVar1 = (this->fields)._.groundState;
    *(AvatarInteractable **)velocity = uStack_4;
    velocity->z = fVar9;
    pAVar10 = (this->fields).interactableLocal;
    VStack_3._0_8_ = uStack_4;
    if ((pMVar1 == (MVGroundState *)0x0) ||
       (pMVar11 = (pMVar1->fields).groundMaterial, pMVar11 == (MVMaterial *)0x0))
    goto code_?;
    fStack_12 = (pMVar11->fields)._PhysicalProperties_k__BackingField.toughness;
    if (pAVar10 == (AvatarInteractable *)0x0) goto code_?;
    fVar8 = (float)(*(pAVar10->klass->vtable).HandleModifierEffect.methodPtr)
                              (pAVar10,0xc,
                               (pMVar11->fields)._PhysicalProperties_k__BackingField.friction *
                               (this->fields).frictionMultiplier,
                               (pAVar10->klass->vtable).HandleModifierEffect.method);
    fVar8 = fVar8 * fVar8;
    fVar13 = fVar8 * VStack_3.x;
    fVar14 = fVar8 * VStack_3.y;
    pcVar15 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
      uVar16 = func_?(&UNK_?);
      FUN_?(uVar16,0);
      pcVar15 = (code *)swi(3);
      pVVar6 = (Vector3 *)(*pcVar15)();
      return pVVar6;
    }
    pcRam_? = pcVar15;
    fVar17 = (float)(*pcRam_?)();
    fStack_5 = fVar9 - fVar8 * fVar9 * fVar17;
    uStack_4 = (AvatarInteractable *)
                CONCAT44(uStack_4._4_4_ - fVar14 * fVar17,(float)uStack_4 - fVar13 * fVar17);
    VStack_3._0_8_ = *(undefined8 *)inputDirection;
    VStack_3.z = inputDirection->z;
    pVVar6 = AvatarMotor_ApplyInputVelocityChangeGrounded
                       ((Vector3 *)&pAStack_7,this,(Vector3 *)&uStack_4,&VStack_3,
                        (MethodInfo *)0x0);
    fVar8 = pVVar6->y;
    fVar9 = pVVar6->z;
    velocity->x = pVVar6->x;
    velocity->y = fVar8;
    velocity->z = fVar9;
  }
  this_00 = (this->fields).bounceState;
  if (this_00 != (BounceState *)0x0) {
    VStack_3._0_8_ = *(undefined8 *)velocity;
    VStack_3.z = velocity->z;
    pVVar6 = BounceState::BounceState_ApplyBounceVelocity
                       ((Vector3 *)&pAStack_7,this_00,&VStack_3,(MethodInfo *)0x0);
    bVar18 = cRam_? == '\0';
    this_01 = (this->fields).jumpState;
    fVar9 = (this->fields)._.density;
    fVar13 = pVVar6->y;
    fVar8 = pVVar6->z;
    velocity->x = pVVar6->x;
    velocity->y = fVar13;
    velocity->z = fVar8;
    uStack_4 = (this->fields).interactableLocal;
    pMVar1 = (this->fields)._.groundState;
    if (bVar18) {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar19 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar19 != (MVGameControllerBase *)0x0) {
      this_02 = (pMVar19->fields).waterPlaneManager;
      pSVar20 = (this->fields).smoothCharacterController;
      if ((((pSVar20 != (SmoothCharacterController *)0x0) &&
           (this_03 = (pSVar20->fields).controller, this_03 != (MvCharacterController *)0x0)) &&
          (this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)this_03,(MethodInfo *)0x0),
          this_04 != (GameObject *)0x0)) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_04,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        VStack_3._0_8_ = (AvatarInteractable *)0x0;
        VStack_3.z = 0.0;
        pvVar21 = (obj->fields)._._.m_CachedPtr;
        if (pvVar21 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar15 = (code *)swi(3);
          pVVar6 = (Vector3 *)(*pcVar15)();
          return pVVar6;
        }
        pcVar15 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar15 = (code *)FUN_?(&UNK_?), pcVar15 == (code *)0x0)) {
          uVar16 = func_?(&UNK_?);
          FUN_?(uVar16,0);
          pcVar15 = (code *)swi(3);
          pVVar6 = (Vector3 *)(*pcVar15)();
          return pVVar6;
        }
        pcRam_? = pcVar15;
        (*pcRam_?)(pvVar21,&VStack_3);
        if (this_02 != (WaterPlaneManager *)0x0) {
          pAStack_7 = (AvatarInteractable *)VStack_3._0_8_;
          fStack_22 = VStack_3.z;
          fVar8 = WaterPlaneManager::WaterPlaneManager_ComputeAvatarWaterProximity
                             (this_02,(Vector3 *)&pAStack_7,(MethodInfo *)0x0);
          if (this_01 != (JumpState *)0x0) {
            pAStack_7._0_4_ = movableVelocity->x;
            pAStack_7._4_4_ = movableVelocity->y;
            fStack_22 = movableVelocity->z;
            VStack_3.z = velocity->z;
            VStack_3.x = velocity->x;
            VStack_3.y = velocity->y;
            pVVar6 = JumpState::JumpState_ApplyJumping
                               ((Vector3 *)&uStack_4,this_01,(MVInteractableBase *)uStack_4,pMVar1
                                ,fVar9,fVar8,inputJump,&VStack_3,(Vector3 *)&pAStack_7,
                                (MethodInfo *)0x0);
            pAStack_7._0_4_ = pVVar6->x;
            pAStack_7._4_4_ = pVVar6->y;
            fStack_22 = pVVar6->z;
            pVVar6 = MVRigidBody::MVRigidBody_GetImpulse
                               (&VStack_3,(MVRigidBody *)this,(Vector3 *)&pAStack_7,
                                (MVInteractableBase *)(this->fields).interactableLocal,
                                (MethodInfo *)0x0);
            pAStack_7._0_4_ = pVVar6->x;
            pAStack_7._4_4_ = pVVar6->y;
            fStack_22 = pVVar6->z;
            pVVar6 = MVRigidBody::MVRigidBody_VelocityDamping
                               (&VStack_3,(Vector3 *)&pAStack_7,_UNK_?,
                                (MVInteractableBase *)(this->fields).interactableLocal,
                                (MethodInfo *)0x0);
            fVar8 = pVVar6->y;
            fVar9 = pVVar6->z;
            __return_storage_ptr__->x = pVVar6->x;
            __return_storage_ptr__->y = fVar8;
            __return_storage_ptr__->z = fVar9;
            return __return_storage_ptr__;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar15)();
  return pVVar6;
}


/* Void HandleMovementBoost() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_HandleMovementBoost
               (AvatarMotor *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).walkSpeed = (this->fields).walkSpeedBase;
  apBStackX_8[0] = (Boost *)0x0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar4 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar4->fields).boostController, this_01 != (BoostController *)0x0)))) {
    bVar5 = BoostController::BoostController_TryGetActiveBoost
                      (this_01,BoostType__Enum_MovementSpeedFloatMultiplier,apBStackX_8,
                       (MethodInfo *)0x0);
    if (bVar5 == 0) {
      return;
    }
    fVar6 = (this->fields).walkSpeedBase;
    if ((apBStackX_8[0] != (Boost *)0x0) &&
       (pOVar7 = Boost::Boost_get_Value(apBStackX_8[0],(MethodInfo *)0x0), pOVar7 != (Object *)0x0))
    {
      if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        (this->fields).walkSpeed =
             ((float)*(int *)&pOVar7[1].klass / _UNK_? + _UNK_?) * fVar6;
        return;
      }
      FUN_?(pOVar7,lRam_?);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void HandleSoundEffects(Boolean) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_HandleSoundEffects
               (AvatarMotor *this,bool inputJump,MethodInfo *method)

{
  pBVar1 = (this->fields).bounceState;
  if (pBVar1 == (BounceState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((pBVar1->fields).bounced & inputJump) != 0) &&
     ((this->fields).OnActiveBounce != (AvatarMotor_OnActiveBounceDelegate *)0x0)) {
    pAVar3 = (this->fields).OnActiveBounce;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar3->fields)._._.invoke_impl)
              ((pAVar3->fields)._._.method_code,(pAVar3->fields)._._.method);
    return;
  }
  return;
}


/* Void Init(AvatarInteractable, Vector3, MVWorldObjectClient, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Init
               (AvatarMotor *this,AvatarInteractable *interactableLocal,Vector3 *centerOffset,
               MVWorldObjectClient *worldObjectOwner,WorldObjectSkillDataManager *skillDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GroundChange>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarMotor__HandleMovementBoost__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarMotor___Init_b__43_0__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BounceState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__ImpactState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__JumpState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__JumpState__UpdateJumpState_GroundChange_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__JumpState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVMovableMotorState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MvCharacterController__GetOverlappingObjects__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__JumpState__OnWallJumpDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__SizeState__OnScalingWhileColliding_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__SizeState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRigidBody__StuckEvaluator);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__WaterState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_SlowFall);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FrictionMultiplier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SuperSpeed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                       (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                         (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
      (this->fields).speedBoostSetting = (float)iVar2 / _UNK_?;
    }
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                       (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    fVar4 = _UNK_?;
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                         (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
      fVar4 = (float)(100 - iVar2) / _UNK_?;
    }
    if (this != (AvatarMotor *)0x0) {
      (this->fields).slowFallVelocityMultiplier = fVar4;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                         (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                           (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
        fVar3 = (float)(100 - iVar2) / _UNK_?;
      }
      (this->fields).frictionMultiplier = fVar3;
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject *)0x0) {
        pSVar6 = (SmoothCharacterController *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                            (pGVar5,
                             SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                            );
        bVar7 = iRam_? != 0;
        (this->fields).smoothCharacterController = pSVar6;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(this->fields).smoothCharacterController >> 0xc);
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
        pSVar6 = (this->fields).smoothCharacterController;
        pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (pSVar6 != (SmoothCharacterController *)0x0) {
          SmoothCharacterController::SmoothCharacterController_Init
                    (pSVar6,pGVar5,(CullingSubscriberBase *)0x0,worldObjectOwner,(MethodInfo *)0x0
                    );
          uVar12 = _UNK_?;
          fVar3 = _UNK_?;
          pSVar6 = (this->fields).smoothCharacterController;
          if ((pSVar6 != (SmoothCharacterController *)0x0) &&
             (pMVar13 = (pSVar6->fields).controller, pMVar13 != (MvCharacterController *)0x0)) {
            bVar7 = cRam_? == '\0';
            uVar14 = centerOffset->x;
            uVar15 = centerOffset->y;
            fVar4 = centerOffset->z;
            (pMVar13->fields).elipsoidRadius.x = _UNK_?;
            (pMVar13->fields).elipsoidRadius.y = (float)uVar12;
            (pMVar13->fields).elipsoidRadius.z = fVar3;
            fVar3 = centerOffset->z;
            (pMVar13->fields).center.x = (float)uVar14;
            (pMVar13->fields).center.y = (float)uVar15;
            (pMVar13->fields).center.z = fVar4;
            (pMVar13->fields).centerBase.x = (float)uVar14;
            (pMVar13->fields).centerBase.y = (float)uVar15;
            (pMVar13->fields).centerBase.z = fVar3;
            fVar4 = (pMVar13->fields).elipsoidRadius.y;
            fVar3 = (pMVar13->fields).elipsoidRadius.z;
            (pMVar13->fields).radiusBase.x = (pMVar13->fields).elipsoidRadius.x;
            (pMVar13->fields).radiusBase.y = fVar4;
            (pMVar13->fields).radiusBase.z = fVar3;
            if (bVar7) {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar16 = TypeInfo__MVGameControllerBase->static_fields->instance;
            if ((((pMVar16 != (MVGameControllerBase *)0x0) &&
                 (pMVar17 = (pMVar16->fields).game, pMVar17 != (MVNetworkGame *)0x0)) &&
                (this_00 = (pMVar17->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0))
               && (pMVar18 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                       (this_00,(MethodInfo *)0x0), pMVar18 != (MVLocalPlayer *)0x0)
               ) {
              this_01 = (pMVar18->fields).boostController;
              this_03 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (this_03,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
                         (MethodInfo *)0x0);
              if (this_01 != (BoostController *)0x0) {
                BoostController::BoostController_SubscribeToBoostChanged
                          (this_01,BoostType__Enum_MovementSpeedFloatMultiplier,(Action *)this_03,
                           (MethodInfo *)0x0);
                AvatarMotor_HandleMovementBoost(this,(MethodInfo *)0x0);
                this_02 = (this->fields)._._.worldObjectParent;
                if (this_02 != (MVWorldObjectClient *)0x0) {
                  pHVar19 = MVWorldObjectClient::MVWorldObjectClient_get_WorldIDsRecursive
                                      (this_02,(MethodInfo *)0x0);
                  pSVar6 = (this->fields).smoothCharacterController;
                  if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                     (pMVar13 = (pSVar6->fields).controller, pMVar13 != (MvCharacterController *)0x0)
                     ) {
                    bVar7 = iRam_? != 0;
                    (pMVar13->fields).IgnoreWoIds = pHVar19;
                    if (bVar7) {
                      uVar8 = (uint)((ulonglong)&(pMVar13->fields).IgnoreWoIds >> 0xc);
                      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                      do {
                        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                        LOCK();
                        bVar7 = uVar10 == *puVar11;
                        if (bVar7) {
                          *puVar11 = uVar10 | 1L << (ulonglong)(uVar8 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar7);
                    }
                    pSVar6 = (this->fields).smoothCharacterController;
                    if (pSVar6 != (SmoothCharacterController *)0x0) {
                      pMVar13 = (pSVar6->fields).controller;
                      this_04 = (Func_1_UnityEngine_Vector2Int_ *)
                                FUN_?(
                                             TypeInfo__System__Func<System::Collections::Generic::List<MVOverlapResult>_>
                                             );
                      mscorlib.dll::System::Func`1[UnityEngine::Vector2Int]::
                      Func_1_UnityEngine_Vector2Int___ctor
                                (this_04,(Object *)pMVar13,
                                 MethodInfo__MvCharacterController__GetOverlappingObjects__,
                                 (MethodInfo *)0x0);
                      this_05 = (MVRigidBody_StuckEvaluator *)
                                FUN_?(TypeInfo__MVRigidBody__StuckEvaluator);
                      MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator__ctor
                                (this_05,(Func_1_System_Collections_Generic_List_1_MVOverlapResult_
                                          *)this_04,(MethodInfo *)0x0);
                      bVar7 = iRam_? != 0;
                      (this->fields).stuckEvaluator = this_05;
                      if (bVar7) {
                        uVar8 = (uint)((ulonglong)&(this->fields).stuckEvaluator >> 0xc);
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
                      pMVar20 = (MVMovableMotorState *)FUN_?(TypeInfo__MVMovableMotorState);
                      (this->fields).movableMotorState = pMVar20;
                      if (iRam_? != 0) {
                        uVar8 = (uint)((ulonglong)&(this->fields).movableMotorState >> 0xc);
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
                      iVar21 = iRam_?;
                      (this->fields).interactableLocal = interactableLocal;
                      if (iVar21 != 0) {
                        uVar8 = (uint)((ulonglong)&(this->fields).interactableLocal >> 0xc);
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
                      pBVar22 = (BounceState *)FUN_?(TypeInfo__BounceState);
                      BounceState::BounceState__ctor
                                (pBVar22,(MVInteractable *)interactableLocal,(MethodInfo *)0x0);
                      bVar7 = iRam_? != 0;
                      (this->fields).bounceState = pBVar22;
                      if (bVar7) {
                        uVar8 = (uint)((ulonglong)&(this->fields).bounceState >> 0xc);
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
                      this_06 = (WaterState *)FUN_?(TypeInfo__WaterState);
                      WaterState::WaterState__ctor(this_06,skillDataManager,(MethodInfo *)0x0);
                      bVar7 = iRam_? != 0;
                      (this->fields).waterState = this_06;
                      if (bVar7) {
                        uVar8 = (uint)((ulonglong)&(this->fields).waterState >> 0xc);
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
                      pSVar6 = (this->fields).smoothCharacterController;
                      if (pSVar6 != (SmoothCharacterController *)0x0) {
                        pMVar13 = (pSVar6->fields).controller;
                        pSVar23 = (SizeState *)FUN_?(TypeInfo__SizeState);
                        (pSVar23->fields).currentSize = 1.0;
                        (pSVar23->fields).interactableLocal = (MVInteractable *)interactableLocal;
                        if (iRam_? != 0) {
                          uVar8 = (uint)((ulonglong)&pSVar23->fields >> 0xc);
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
                        iVar21 = iRam_?;
                        (pSVar23->fields).controllerLocal = pMVar13;
                        if (iVar21 != 0) {
                          uVar8 = (uint)((ulonglong)&(pSVar23->fields).controllerLocal >> 0xc);
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
                            iVar21 = iRam_?;
                          } while (!bVar7);
                        }
                        (this->fields)._GetSizeState_k__BackingField = pSVar23;
                        if (iVar21 != 0) {
                          uVar8 = (uint)((ulonglong)&(this->fields)._GetSizeState_k__BackingField
                                         >> 0xc);
                          uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
                          do {
                            uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
                            puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
                            LOCK();
                            bVar7 = uVar10 == *puVar11;
                            if (bVar7) {
                              *puVar11 = uVar10 | 1L << (ulonglong)(uVar8 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar7);
                        }
                        pJVar24 = (JumpState *)FUN_?(TypeInfo__JumpState);
                        JumpState::JumpState__ctor
                                  (pJVar24,_UNK_?,skillDataManager,(MethodInfo *)0x0);
                        bVar7 = iRam_? != 0;
                        (this->fields).jumpState = pJVar24;
                        if (bVar7) {
                          uVar8 = (uint)((ulonglong)&(this->fields).jumpState >> 0xc);
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
                        pJVar24 = (this->fields).jumpState;
                        if (pJVar24 != (JumpState *)0x0) {
                          pJVar25 = (pJVar24->fields).OnWallJump;
                          pDVar26 = (Delegate *)
                                    FUN_?(TypeInfo__JumpState__OnWallJumpDelegate);
                          pMVar27 = MethodInfo__AvatarMotor___Init_b__43_0__;
                          bVar7 = iRam_? != 0;
                          (pDVar26->fields).method_ptr =
                               MethodInfo__AvatarMotor___Init_b__43_0__->virtualMethodPointer;
                          (pDVar26->fields).method = pMVar27;
                          (pDVar26->fields).m_target = (Object *)this;
                          if (bVar7) {
                            uVar8 = (uint)((ulonglong)&(pDVar26->fields).m_target >> 0xc);
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
                          uVar28 = pMVar27->parameters_count;
                          (pDVar26->fields).method_code = pDVar26;
                          if (((pMVar27->flags & 0x10) == 0) || (uVar28 != 0)) {
                            (pDVar26->fields).method_code = (pDVar26->fields).m_target;
                            puVar29 = (pDVar26->fields).method_ptr;
                          }
                          else {
                            puVar29 = &UNK_?;
                          }
                          (pDVar26->fields).invoke_impl = puVar29;
                          (pDVar26->fields).extra_arg = FUN_?;
                          pJVar25 = (JumpState_OnWallJumpDelegate *)
                                    mscorlib.dll::System::Delegate::Delegate_Combine
                                              ((Delegate *)pJVar25,pDVar26,(MethodInfo *)0x0);
                          if (pJVar25 == (JumpState_OnWallJumpDelegate *)0x0) {
                            (pJVar24->fields).OnWallJump = (JumpState_OnWallJumpDelegate *)0x0;
                          }
                          else {
                            pJVar30 = (JumpState_OnWallJumpDelegate *)0x0;
                            if (pJVar25->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
                              pJVar30 = pJVar25;
                            }
                            if (pJVar30 == (JumpState_OnWallJumpDelegate *)0x0) {
                              FUN_?();
                              pcVar31 = (code *)swi(3);
                              (*pcVar31)();
                              return;
                            }
                            (pJVar24->fields).OnWallJump = pJVar30;
                            pJVar30 = (JumpState_OnWallJumpDelegate *)0x0;
                            if (pJVar25->klass == TypeInfo__JumpState__OnWallJumpDelegate) {
                              pJVar30 = pJVar25;
                            }
                            if (pJVar30 == (JumpState_OnWallJumpDelegate *)0x0) {
                              FUN_?();
                              pcVar31 = (code *)swi(3);
                              (*pcVar31)();
                              return;
                            }
                          }
                          if (iRam_? != 0) {
                            uVar8 = (uint)((ulonglong)&(pJVar24->fields).OnWallJump >> 0xc);
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
                          pMVar32 = (this->fields)._.groundState;
                          if (pMVar32 != (MVGroundState *)0x0) {
                            pAVar33 = (pMVar32->fields).OnGroundChange;
                            pJVar24 = (this->fields).jumpState;
                            this_07 = (UnityAction_1_System_Int32Enum_ *)
                                      FUN_?(TypeInfo__System__Action<GroundChange>);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Int32Enum]::UnityAction_1_System_Int32Enum___ctor
                                      (this_07,(Object *)pJVar24,
                                       MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                                       (MethodInfo *)0x0);
                            pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                ((Delegate *)pAVar33,(Delegate *)this_07,
                                                 (MethodInfo *)0x0);
                            pAVar34 = TypeInfo__System__Action<GroundChange>;
                            if (pDVar26 == (Delegate *)0x0) {
                              (pMVar32->fields).OnGroundChange = (Action_1_GroundChange_ *)0x0;
                            }
                            else {
                              pAVar33 = (Action_1_GroundChange_ *)
                                        FUN_?(pDVar26,TypeInfo__System__Action<GroundChange>
                                                     );
                              if (pAVar33 == (Action_1_GroundChange_ *)0x0) {
                                FUN_?(pDVar26,pAVar34);
                                pcVar31 = (code *)swi(3);
                                (*pcVar31)();
                                return;
                              }
                              (pMVar32->fields).OnGroundChange = pAVar33;
                              pAVar34 = TypeInfo__System__Action<GroundChange>;
                              lVar35 = FUN_?(pDVar26,TypeInfo__System__Action<GroundChange>)
                              ;
                              if (lVar35 == 0) {
                                FUN_?(pDVar26,pAVar34);
                                pcVar31 = (code *)swi(3);
                                (*pcVar31)();
                                return;
                              }
                            }
                            if (iRam_? != 0) {
                              uVar8 = (uint)((ulonglong)&(pMVar32->fields).OnGroundChange >> 0xc);
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
                            pSVar6 = (this->fields).smoothCharacterController;
                            if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                               (pMVar13 = (pSVar6->fields).controller,
                               pMVar13 != (MvCharacterController *)0x0)) {
                              pAVar36 = (pMVar13->fields).OnControllerColliderHit;
                              pSVar23 = (this->fields)._GetSizeState_k__BackingField;
                              pDVar26 = (Delegate *)
                                        FUN_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                              ;
                              FUN_?(pDVar26,pSVar23);
                              pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                  ((Delegate *)pAVar36,pDVar26,(MethodInfo *)0x0);
                              pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                              if (pDVar26 == (Delegate *)0x0) {
                                (pMVar13->fields).OnControllerColliderHit =
                                     (Action_1_MVControllerColliderHit_ *)0x0;
                              }
                              else {
                                pAVar36 = (Action_1_MVControllerColliderHit_ *)
                                          FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                ;
                                if (pAVar36 == (Action_1_MVControllerColliderHit_ *)0x0) {
                                  FUN_?(pDVar26,pAVar37);
                                  pcVar31 = (code *)swi(3);
                                  (*pcVar31)();
                                  return;
                                }
                                (pMVar13->fields).OnControllerColliderHit = pAVar36;
                                pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                lVar35 = FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                ;
                                if (lVar35 == 0) {
                                  FUN_?(pDVar26,pAVar37);
                                  pcVar31 = (code *)swi(3);
                                  (*pcVar31)();
                                  return;
                                }
                              }
                              if (iRam_? != 0) {
                                uVar8 = (uint)((ulonglong)&(pMVar13->fields).OnControllerColliderHit
                                               >> 0xc);
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
                              pSVar6 = (this->fields).smoothCharacterController;
                              if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                                 (pMVar13 = (pSVar6->fields).controller,
                                 pMVar13 != (MvCharacterController *)0x0)) {
                                pAVar36 = (pMVar13->fields).OnControllerColliderHit;
                                pDVar26 = (Delegate *)
                                          FUN_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                ;
                                if (interactableLocal != (AvatarInteractable *)0x0) {
                                  FUN_?(pDVar26,interactableLocal);
                                  pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                      ((Delegate *)pAVar36,pDVar26,(MethodInfo *)0x0
                                                      );
                                  pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                  if (pDVar26 == (Delegate *)0x0) {
                                    (pMVar13->fields).OnControllerColliderHit =
                                         (Action_1_MVControllerColliderHit_ *)0x0;
                                  }
                                  else {
                                    pAVar36 = (Action_1_MVControllerColliderHit_ *)
                                              FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                    ;
                                    if (pAVar36 == (Action_1_MVControllerColliderHit_ *)0x0) {
                                      FUN_?(pDVar26,pAVar37);
                                      pcVar31 = (code *)swi(3);
                                      (*pcVar31)();
                                      return;
                                    }
                                    (pMVar13->fields).OnControllerColliderHit = pAVar36;
                                    pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                    lVar35 = FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                    ;
                                    if (lVar35 == 0) {
                                      FUN_?(pDVar26,pAVar37);
                                      pcVar31 = (code *)swi(3);
                                      (*pcVar31)();
                                      return;
                                    }
                                  }
                                  if (iRam_? != 0) {
                                    uVar8 = (uint)((ulonglong)
                                                    &(pMVar13->fields).OnControllerColliderHit >> 0xc
                                                   );
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
                                  pSVar6 = (this->fields).smoothCharacterController;
                                  if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                                     (pMVar13 = (pSVar6->fields).controller,
                                     pMVar13 != (MvCharacterController *)0x0)) {
                                    pAVar36 = (pMVar13->fields).OnControllerColliderHit;
                                    pJVar24 = (this->fields).jumpState;
                                    pDVar26 = (Delegate *)
                                              FUN_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                    ;
                                    FUN_?(pDVar26,pJVar24);
                                    pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                        ((Delegate *)pAVar36,pDVar26,
                                                         (MethodInfo *)0x0);
                                    pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                    if (pDVar26 == (Delegate *)0x0) {
                                      (pMVar13->fields).OnControllerColliderHit =
                                           (Action_1_MVControllerColliderHit_ *)0x0;
                                    }
                                    else {
                                      pAVar36 = (Action_1_MVControllerColliderHit_ *)
                                                FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                      ;
                                      if (pAVar36 == (Action_1_MVControllerColliderHit_ *)0x0) {
                                        FUN_?(pDVar26,pAVar37);
                                        pcVar31 = (code *)swi(3);
                                        (*pcVar31)();
                                        return;
                                      }
                                      (pMVar13->fields).OnControllerColliderHit = pAVar36;
                                      pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                      lVar35 = FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                      ;
                                      if (lVar35 == 0) {
                                        FUN_?(pDVar26,pAVar37);
                                        pcVar31 = (code *)swi(3);
                                        (*pcVar31)();
                                        return;
                                      }
                                    }
                                    if (iRam_? != 0) {
                                      uVar8 = (uint)((ulonglong)
                                                      &(pMVar13->fields).OnControllerColliderHit >>
                                                     0xc);
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
                                    pSVar6 = (this->fields).smoothCharacterController;
                                    if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                                       (pMVar13 = (pSVar6->fields).controller,
                                       pMVar13 != (MvCharacterController *)0x0)) {
                                      pAVar36 = (pMVar13->fields).OnControllerColliderHit;
                                      pBVar22 = (this->fields).bounceState;
                                      pDVar26 = (Delegate *)
                                                FUN_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                      ;
                                      FUN_?(pDVar26,pBVar22);
                                      pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                          ((Delegate *)pAVar36,pDVar26,
                                                           (MethodInfo *)0x0);
                                      pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                      if (pDVar26 == (Delegate *)0x0) {
                                        (pMVar13->fields).OnControllerColliderHit =
                                             (Action_1_MVControllerColliderHit_ *)0x0;
                                      }
                                      else {
                                        pAVar36 = (Action_1_MVControllerColliderHit_ *)
                                                  FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                        ;
                                        if (pAVar36 == (Action_1_MVControllerColliderHit_ *)0x0) {
                                          FUN_?(pDVar26,pAVar37);
                                          pcVar31 = (code *)swi(3);
                                          (*pcVar31)();
                                          return;
                                        }
                                        (pMVar13->fields).OnControllerColliderHit = pAVar36;
                                        pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                        lVar35 = FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                        ;
                                        if (lVar35 == 0) {
                                          FUN_?(pDVar26,pAVar37);
                                          pcVar31 = (code *)swi(3);
                                          (*pcVar31)();
                                          return;
                                        }
                                      }
                                      if (iRam_? != 0) {
                                        uVar8 = (uint)((ulonglong)
                                                        &(pMVar13->fields).OnControllerColliderHit >>
                                                       0xc);
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
                                      pSVar6 = (this->fields).smoothCharacterController;
                                      if ((pSVar6 != (SmoothCharacterController *)0x0) &&
                                         (pMVar13 = (pSVar6->fields).controller,
                                         pMVar13 != (MvCharacterController *)0x0)) {
                                        pAVar36 = (pMVar13->fields).OnControllerColliderHit;
                                        pIVar38 = (this->fields).impactState;
                                        pDVar26 = (Delegate *)
                                                  FUN_?(
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                        ;
                                        FUN_?(pDVar26,pIVar38);
                                        pDVar26 = mscorlib.dll::System::Delegate::Delegate_Combine
                                                            ((Delegate *)pAVar36,pDVar26,
                                                             (MethodInfo *)0x0);
                                        pAVar37 = TypeInfo__System__Action<MVControllerColliderHit>;
                                        if (pDVar26 == (Delegate *)0x0) {
                                          (pMVar13->fields).OnControllerColliderHit =
                                               (Action_1_MVControllerColliderHit_ *)0x0;
                                        }
                                        else {
                                          pAVar36 = (Action_1_MVControllerColliderHit_ *)
                                                    FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                          ;
                                          if (pAVar36 == (Action_1_MVControllerColliderHit_ *)0x0) {
                                            FUN_?(pDVar26,pAVar37);
                                            pcVar31 = (code *)swi(3);
                                            (*pcVar31)();
                                            return;
                                          }
                                          (pMVar13->fields).OnControllerColliderHit = pAVar36;
                                          pAVar37 = 
                                          TypeInfo__System__Action<MVControllerColliderHit>;
                                          lVar35 = FUN_?(pDVar26,
                                                  TypeInfo__System__Action<MVControllerColliderHit>)
                                          ;
                                          if (lVar35 == 0) {
                                            FUN_?(pDVar26,pAVar37);
                                            pcVar31 = (code *)swi(3);
                                            (*pcVar31)();
                                            return;
                                          }
                                        }
                                        if (iRam_? != 0) {
                                          uVar8 = (uint)((ulonglong)
                                                          &(pMVar13->fields).OnControllerColliderHit
                                                         >> 0xc);
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
  FUN_?();
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
  return;
}


/* Void InitSkills(WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_InitSkills
               (AvatarMotor *this,WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_SlowFall);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_FrictionMultiplier);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_SuperSpeed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SuperSpeed,(MethodInfo *)0x0);
      (this->fields).speedBoostSetting = (float)iVar2 / _UNK_?;
    }
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    fVar4 = _UNK_?;
    if (bVar1 != 0) {
      iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_SlowFall,(MethodInfo *)0x0);
      fVar4 = (float)(100 - iVar2) / _UNK_?;
    }
    if (this != (AvatarMotor *)0x0) {
      (this->fields).slowFallVelocityMultiplier = fVar4;
      bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                        (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        iVar2 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                          (skillDataManager,StringLiteral_FrictionMultiplier,(MethodInfo *)0x0);
        fVar3 = (float)(100 - iVar2) / _UNK_?;
      }
      (this->fields).frictionMultiplier = fVar3;
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean IsAirJumping() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsAirJumping
               (AvatarMotor *this,MethodInfo *method)

{
  pJVar1 = (this->fields).jumpState;
  if (pJVar1 == (JumpState *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pJVar1->fields).airJumping == 0) {
    return 0;
  }
  (pJVar1->fields).airJumping = 0;
  return 1;
}


/* Boolean IsJumping() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsJumping(AvatarMotor *this,MethodInfo *method)

{
  pJVar1 = (this->fields).jumpState;
  if (pJVar1 != (JumpState *)0x0) {
    return (pJVar1->fields).jumping;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean IsStuck() */

bool Assembly-CSharp.dll::AvatarMotor::AvatarMotor_IsStuck(AvatarMotor *this,MethodInfo *method)

{
  this_02 = (this->fields).stuckEvaluator;
  if (this_02 == (MVRigidBody_StuckEvaluator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Key__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVOverlapResult>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVRigidBody_StuckEvaluator::StuckObject>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDStack_3 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_4 = 0;
  iStack_5 = 0;
  uStack_6 = 0;
  pDStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                *)0x0;
  uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0;
  iStack_9 = 0;
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  pIStack_13 = (IntVector__Array *)0x0;
  uStack_14 = 0;
  pDStack_15 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
  uStack_16 = 0;
  iStack_17 = 0;
  pMStack_18 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  fVar20 = (float)(*pcRam_?)();
  if (fVar20 - (this_02->fields).updateTime < (this_02->fields).updateInterval) {
    pDVar21 = (this_02->fields).stuckObjects;
    if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)0x0)
    goto code_?;
    if ((pDVar21->fields)._count == (pDVar21->fields)._freeCount) {
      return 0;
    }
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
code_?:
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
code_?:
    FUN_?();
    uVar22 = uStack_16;
code_?:
    uStack_16 = uVar22;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
code_?:
    FUN_?();
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
  fVar20 = (float)(*pcRam_?)();
  (this_02->fields).updateTime = fVar20;
  pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_GetOverlapDictionary
                       (this_02,(MethodInfo *)0x0);
  if (pDVar23 ==
      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
  {
    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this_02->fields).stuckObjects;
    if (pDVar23 !=
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (pDVar23,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Clear__
                );
      return 0;
    }
  }
  else {
    pDVar24 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)FUN_?(TypeInfo__System__Collections__Generic__List<int>);
    FUN_?(pDVar24,MethodInfo__System__Collections__Generic__List<int>__List__);
    this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)(this_02->fields).stuckObjects;
    pDStack_25 = pDVar24;
    if ((this_00 !=
         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
         0x0) && (pDVar26 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                            UIElements::TypeConverterRegistry+ConverterKey,System::Object]::
                            Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys
                                      (this_00,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Keys__
                                      ),
                 pDVar26 !=
                 (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                  *)0x0)) {
      pDStack_27 = (pDVar26->fields)._dictionary;
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)0x0;
      uStack_29 = 0;
      if (iRam_? != 0) {
        uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
        uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
        do {
          uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
          puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
          LOCK();
          bVar34 = uVar32 == *puVar33;
          if (bVar34) {
            *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
          }
          UNLOCK();
        } while (!bVar34);
      }
      if (pDStack_27 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        pDStack_30 = pDStack_27;
        FUN_?();
        pcVar1 = (code *)swi(3);
        bVar2 = (*pcVar1)();
        return bVar2;
      }
      ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                      **)((ulonglong)(uint)(pDStack_27->fields)._version << 0x20);
      uStack_29 = 0;
      uStack_35 = (longlong)ppDStack_28;
      uStack_36 = 0;
      pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0;
      ppDStack_28 = &pDStack_27;
code_?:
      if (pDStack_27 !=
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) {
        if (uStack_35._4_4_ == (pDStack_27->fields)._version) {
          uVar22 = (uint)uStack_35;
code_?:
          if (pDStack_27 !=
              (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
               *)0x0) {
            if (uVar22 < (uint)(pDStack_27->fields)._count) {
              pDVar37 = (pDStack_27->fields)._entries;
              lVar38 = (longlong)(int)uVar22;
              uStack_35 = CONCAT44(uStack_35._4_4_,uVar22 + 1);
              if (pDVar37 != (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                             *)0x0) {
                if (uVar22 < (uint)pDVar37->max_length) goto code_?;
                goto code_?;
              }
              goto code_?;
            }
            uStack_35 = CONCAT44(uStack_35._4_4_,(pDStack_27->fields)._count + 1);
            uStack_36 = (ulonglong)uStack_36._4_4_ << 0x20;
            if (pDVar24 !=
                (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0) {
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              iStack_5 = *(int *)((longlong)&(pDVar24->fields)._entries + 4);
              uStack_29 = 0;
              uStack_4 = 0;
              uStack_6 = 0;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_3;
              pDStack_3 = pDVar24;
              while( true ) {
                if (pDStack_3 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((iStack_5 != *(int *)((longlong)&(pDStack_3->fields)._entries + 4)) ||
                   (lVar38 = (longlong)(int)uStack_4,
                   *(uint *)&(pDStack_3->fields)._entries <= uStack_4)) break;
                pIVar39 = (pDStack_3->fields)._buckets;
                if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                if ((uint)pIVar39->max_length <= uStack_4) goto code_?;
                uStack_6 = CONCAT44(uStack_6._4_4_,pIVar39->vector[lVar38]);
                uStack_4 = uStack_4 + 1;
                pDVar21 = (this_02->fields).stuckObjects;
                if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *)
                              0x0) goto code_?;
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__Remove
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,pIVar39->vector[lVar38]
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Remove_int_
                          );
              }
              if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   ->klass->field_0x135 & 1) == 0) {
                FUN_?();
              }
              if (pDStack_3 ==
                  (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0) goto code_?;
              if (iStack_5 != *(int *)((longlong)&(pDStack_3->fields)._entries + 4))
              goto code_?;
              uStack_4 = *(int *)&(pDStack_3->fields)._entries + 1;
              uStack_6 = uStack_6 & 0xffffffff00000000;
              if (iRam_? != 0) {
                uVar22 = (uint)((ulonglong)&pDStack_40 >> 0xc);
                uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                do {
                  uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                  puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                  LOCK();
                  bVar34 = uVar32 == *puVar33;
                  if (bVar34) {
                    *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar34);
              }
              uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)(ulonglong)(uint)(pDVar23->fields)._version;
              uStack_42 = 2;
              uStack_43 = (IntVector__Array *)0x0;
              uStack_44 = 0;
              uStack_45 = 0;
              uStack_8 = uStack_41;
              iStack_9 = 0;
              uStack_10 = 0;
              uStack_11 = 0;
              uStack_12 = 0;
              pIStack_13 = (IntVector__Array *)0x0;
              uStack_14 = 2;
              pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0;
              ppDStack_28 = &pDStack_7;
              pDStack_7 = pDVar23;
              pDStack_40 = pDVar23;
              do {
                if (pDStack_7 ==
                    (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                     *)0x0) goto code_?;
                if ((int)uStack_8 != (pDStack_7->fields)._version) goto code_?;
                uVar22 = uStack_8._4_4_;
                do {
                  if (pDStack_7 ==
                      (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                       *)0x0) goto code_?;
                  if ((uint)(pDStack_7->fields)._count <= uVar22) {
                    uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                 *)CONCAT44((pDStack_7->fields)._count + 1,(int)uStack_8);
                    iStack_9 = 0;
                    uStack_10 = 0;
                    uStack_11 = 0;
                    uStack_12 = 0;
                    pIStack_13 = (IntVector__Array *)0x0;
                    iVar46 = (pDVar23->fields)._count;
                    if (0 < iVar46) {
                      pIVar39 = (pDVar23->fields)._buckets;
                      if (pIVar39 == (Int32__Array *)0x0) goto code_?;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._buckets,0,(int32_t)pIVar39->max_length,
                                 (MethodInfo *)0x0);
                      (pDVar23->fields)._count = 0;
                      (pDVar23->fields)._freeList = -1;
                      (pDVar23->fields)._freeCount = 0;
                      mscorlib.dll::System::Array::Array_Clear
                                ((Array *)(pDVar23->fields)._entries,0,iVar46,(MethodInfo *)0x0);
                    }
                    piVar47 = &(pDVar23->fields)._version;
                    *piVar47 = *piVar47 + 1;
                    pDVar23 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)(this_02->fields).stuckObjects;
                    if ((pDVar23 ==
                         (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                          *)0x0) ||
                       (pDVar48 = mscorlib.dll::System::Collections::Generic::
                                  Dictionary`2[UnityEngine::UIElements::
                                  TypeConverterRegistry+ConverterKey,System::Object]::
                                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                                            (pDVar23,
                                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Values__
                                            ),
                       pDVar48 ==
                       (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                        *)0x0)) goto code_?;
                    pDVar23 = (pDVar48->fields)._dictionary;
                    ppDStack_28 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                    **)0x0;
                    uStack_29 = 0;
                    if (iRam_? != 0) {
                      uVar22 = (uint)((ulonglong)&pDStack_30 >> 0xc);
                      uVar31 = (ulonglong)((uVar22 & 0x1fffff) >> 6);
                      do {
                        uVar32 = *(ulonglong *)(uVar31 * 8 + 0xADDR);
                        puVar33 = (ulonglong *)(uVar31 * 8 + 0xADDR);
                        LOCK();
                        bVar34 = uVar32 == *puVar33;
                        if (bVar34) {
                          *puVar33 = uVar32 | 1L << (uVar22 & 0x3f);
                        }
                        UNLOCK();
                      } while (!bVar34);
                    }
                    fVar20 = TypeRef__System__Activator__T._0_4_;
                    if (pDVar23 ==
                        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                         *)0x0) {
                      pDStack_30 = pDVar23;
                      FUN_?();
                      pcVar1 = (code *)swi(3);
                      bVar2 = (*pcVar1)();
                      return bVar2;
                    }
                    iStack_17 = (pDVar23->fields)._version;
                    uStack_29 = 0;
                    uStack_16 = 0;
                    pMStack_18 = (MVRigidBody_StuckEvaluator_StuckObject *)0x0;
                    pDStack_30 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                                   *)0x0;
                    ppDStack_28 = &pDStack_15;
                    pDStack_15 = pDVar23;
                    while( true ) {
                      if (pDStack_15 ==
                          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                           *)0x0) goto code_?;
                      if (iStack_17 != (pDStack_15->fields)._version) break;
                      do {
                        if (pDStack_15 ==
                            (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)0x0) goto code_?;
                        if ((uint)(pDStack_15->fields)._count <= uStack_16) {
                          return 0;
                        }
                        pDVar37 = (pDStack_15->fields)._entries;
                        lVar38 = (longlong)(int)uStack_16;
                        uVar22 = uStack_16 + 1;
                        if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                       *)0x0) goto code_?;
                        bVar34 = (uint)pDVar37->max_length <= uStack_16;
                        uStack_16 = uVar22;
                        if (bVar34) goto code_?;
                      } while ((&pDVar37->vector[0].hashCode)[lVar38 * 6] < 0);
                      pMStack_18 = *(MVRigidBody_StuckEvaluator_StuckObject **)
                                     ((longlong)&pDVar37->vector[0].key + lVar38 * 0x18 + 8);
                      func_?();
                      pMVar49 = pMStack_18;
                      if (pMStack_18 == (MVRigidBody_StuckEvaluator_StuckObject *)0x0)
                      goto code_?;
                      pcVar1 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar1 = (code *)FUN_?(), pcVar1 == (code *)0x0))
                      goto code_?;
                      pcRam_? = pcVar1;
                      fVar50 = (float)(*pcRam_?)();
                      if ((fVar20 <= fVar50 - (pMVar49->fields).stuckTime) &&
                         (bVar2 = MVRigidBody+StuckEvaluator+StuckObject::
                                   MVRigidBody_StuckEvaluator_StuckObject_HandleFineGrained
                                             (pMVar49,(MethodInfo *)0x0), bVar2 == 0)) {
                        return 1;
                      }
                    }
                    goto code_?;
                  }
                  pDVar37 = (pDStack_7->fields)._entries;
                  lVar38 = (longlong)(int)uVar22;
                  uStack_8 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(uVar22 + 1,(int)uStack_8);
                  if (pDVar37 == (Dictionary_2_TKey_TValue_Entry_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object___Array
                                 *)0x0) goto code_?;
                  if ((uint)pDVar37->max_length <= uVar22) goto code_?;
                  lVar51 = lVar38 * 0x20;
                  uVar22 = uVar22 + 1;
                } while (pDVar37->vector[lVar38].hashCode < 0);
                iVar46 = *(int32_t *)&pDVar37->vector[lVar38].key.SourceType;
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)0x0;
                uStack_52 = (IntVector__Array *)0x0;
                apIStack_53[0] = (IntVector__Array *)0x0;
                pTVar54 = &pDVar37->vector[lVar38].key;
                pIVar55 = *(IntVector__Array **)&pTVar54->DestinationType;
                pIVar56 = *(IntVector__Array **)(pTVar54 + 1);
                if ((MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_MVOverlapResult>__MoveNext__
                     ->klass->field_0x135 & 1) == 0) {
                  FUN_?();
                }
                pDStack_25 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                               *)CONCAT44(pDStack_25._4_4_,iVar46);
                uStack_52 = pIVar55;
                apIStack_53[0] = pIVar56;
                func_?(apIStack_53);
                iStack_9 = (int32_t)pDStack_25;
                uStack_10 = pDStack_25._4_4_;
                uStack_11 = SUB84(uStack_52,0);
                uStack_12 = uStack_52._4_4_;
                pIStack_13 = apIStack_53[0];
                func_?(&pIStack_13);
                iVar46 = iStack_9;
                pDStack_40 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                              *)CONCAT44(uStack_10,iStack_9);
                uStack_41 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                             *)CONCAT44(uStack_12,uStack_11);
                uStack_43 = pIStack_13;
                this_01 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
                          (this_02->fields).stuckObjects;
                if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
                goto code_?;
                iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,UnityEngine::Vector3]::
                         Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                                   (this_01,iStack_9,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__ContainsKey_int_
                                    ->klass->rgctx_data[0x21].method);
                pDVar21 = (this_02->fields).stuckObjects;
                if (iVar57 < 0) {
                  pMVar49 = (MVRigidBody_StuckEvaluator_StuckObject *)
                            FUN_?(TypeInfo__MVRigidBody_StuckEvaluator__StuckObject);
                  pDStack_25 = uStack_41;
                  uStack_52 = uStack_43;
                  MVRigidBody+StuckEvaluator+StuckObject::
                  MVRigidBody_StuckEvaluator_StuckObject__ctor
                            (pMVar49,(MVOverlapResult *)&pDStack_25,(MethodInfo *)0x0);
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__TryInsert
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                             (Object *)pMVar49,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)lVar51 >> 8),2),
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__Add_int__MVRigidBody_StuckEvaluator__StuckObject_
                             ->klass->rgctx_data[0x22].method);
                }
                else {
                  if (pDVar21 == (Dictionary_2_System_Int32_MVRigidBody_StuckEvaluator_StuckObject_ *
                                )0x0) goto code_?;
                  pOVar58 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                            Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar21,iVar46,
                                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVRigidBody_StuckEvaluator::StuckObject>__get_Item_int_
                                      );
                  if (pOVar58 == (Object *)0x0) goto code_?;
                  *(undefined4 *)&pOVar58[1].monitor = (undefined4)uStack_41;
                  *(undefined4 *)((longlong)&pOVar58[1].monitor + 4) = uStack_41._4_4_;
                  *(undefined4 *)&pOVar58[2].klass = (undefined4)uStack_43;
                  *(undefined4 *)((longlong)&pOVar58[2].klass + 4) = uStack_43._4_4_;
                  func_?();
                }
              } while( true );
            }
            goto code_?;
          }
          goto code_?;
        }
        goto code_?;
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
code_?:
  uVar22 = uVar22 + 1;
  if (-1 < (&pDVar37->vector[0].hashCode)[lVar38 * 6]) goto code_?;
  goto code_?;
code_?:
  iVar46 = *(int32_t *)((longlong)&pDVar37->vector[0].key + lVar38 * 0x18);
  uStack_36 = CONCAT44(uStack_36._4_4_,iVar46);
  iVar57 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
           Int32,PendingPrototypeData]::Dictionary_2_System_Int32_PendingPrototypeData__FindEntry
                     ((Dictionary_2_System_Int32_PendingPrototypeData_ *)pDVar23,iVar46,
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVOverlapResult>__ContainsKey_int_
                      ->klass->rgctx_data[0x21].method);
  if (iVar57 < 0) {
    if (pDVar24 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) goto code_?;
    FUN_?(pDVar24,iVar46,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* Void Move(Vector3, Vector3) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Move
               (AvatarMotor *this,Vector3 *velocity,Vector3 *movableVelocity,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 != (SmoothCharacterController *)0x0) &&
     (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
    aVStack_3[0].x = velocity->x;
    aVStack_3[0].y = velocity->y;
    fVar4 = velocity->y;
    fVar5 = movableVelocity->z;
    fVar6 = velocity->z;
    fVar7 = velocity->z;
    (pMVar2->fields)._Velocity_k__BackingField.x = velocity->x;
    (pMVar2->fields)._Velocity_k__BackingField.y = fVar4;
    uVar8 = movableVelocity->x;
    uVar9 = movableVelocity->y;
    (pMVar2->fields)._Velocity_k__BackingField.z = fVar6;
    fVar4 = (float)uVar8 + aVStack_3[0].x;
    fVar6 = (float)uVar9 + aVStack_3[0].y;
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
    fVar12 = (float)(*pcRam_?)();
    pSVar1 = (this->fields).smoothCharacterController;
    if ((pSVar1 != (SmoothCharacterController *)0x0) &&
       (pMVar2 = (pSVar1->fields).controller, pMVar2 != (MvCharacterController *)0x0)) {
      aVStack_3[0].y = fVar6 * fVar12;
      aVStack_3[0].x = fVar4 * fVar12;
      aVStack_3[0].z = (fVar5 + fVar7) * fVar12;
      (*(pMVar2->klass->vtable).__unknown_1.methodPtr)
                (pMVar2,aVStack_3,(pMVar2->klass->vtable).__unknown_1.method);
      pSVar1 = (this->fields).smoothCharacterController;
      if ((pSVar1 != (SmoothCharacterController *)0x0) &&
         (this_00 = (this->fields)._.groundState, this_00 != (MVGroundState *)0x0)) {
        aVStack_3[0].x = velocity->x;
        aVStack_3[0].y = velocity->y;
        aVStack_3[0].z = velocity->z;
        MVGroundState::MVGroundState_Update
                  (this_00,(pSVar1->fields).controller,aVStack_3,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_OnDestroy(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).waterState;
  if (pWVar1 == (WaterState *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<MV::Common::SpawnRoleModeType>__remove_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar2 != 0) {
    pSVar3 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                       ((MethodInfo *)0x0);
    if (pSVar3 == (SpawnRoleDataMediator *)0x0) goto code_?;
    pSVar4 = (pSVar3->fields).spawnRoleMode;
    uVar5 = FUN_?(
                          TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<MV::Common::SpawnRoleModeType>
                          );
    FUN_?(uVar5,pWVar1,
                  MethodInfo__WaterState__OnAvatarModeChange_MV__Common__SpawnRoleModeType_);
    if (pSVar4 == (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_MV_Common_SpawnRoleModeType_ *)
                  0x0) goto code_?;
    FUN_?();
  }
  object = (this->fields).jumpState;
  if (object == (JumpState *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar6 == (MVGameControllerBase *)0x0) ||
         (pMVar7 = (pMVar6->fields).game, pMVar7 == (MVNetworkGame *)0x0)) ||
        (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 == (MVPlayerContainer *)0x0)) ||
       (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
       pMVar9 == (MVLocalPlayer *)0x0)) goto code_?;
    pBVar10 = (pMVar9->fields).boostController;
    pNVar11 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar11,(Object *)object,MethodInfo__JumpState__HandleJumpBoost__,(MethodInfo *)0x0);
    if (pBVar10 == (BoostController *)0x0) goto code_?;
    BoostController::BoostController_UnSubscribeToBoostChanged
              (pBVar10,BoostType__Enum_JumpPowerFloatMultiplier,(Action *)pNVar11,(MethodInfo *)0x0);
  }
  bVar2 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar6 != (MVGameControllerBase *)0x0) &&
      (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
     ((pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0 &&
      (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
      pMVar9 != (MVLocalPlayer *)0x0)))) {
    pBVar10 = (pMVar9->fields).boostController;
    pNVar11 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (pNVar11,(Object *)this,MethodInfo__AvatarMotor__HandleMovementBoost__,
               (MethodInfo *)0x0);
    if (pBVar10 != (BoostController *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                (pBVar10,BoostType__Enum_MovementSpeedFloatMultiplier,(Action *)pNVar11,
                 (MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_Reset(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Clear__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._.impulseVectors;
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    piVar2 = &(pLVar1->fields)._version;
    *piVar2 = *piVar2 + 1;
    (pLVar1->fields)._size = 0;
    pIVar3 = (this->fields).impactState;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    cVar4 = cRam_?;
    pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar6 = (pVVar5->zeroVector).z;
    if (pIVar3 != (ImpactState *)0x0) {
      fVar7 = (pVVar5->zeroVector).y;
      (pIVar3->fields).prevVelocityChangeVector.x = (pVVar5->zeroVector).x;
      (pIVar3->fields).prevVelocityChangeVector.y = fVar7;
      (pIVar3->fields).prevVelocityChangeVector.z = fVar6;
      if (cVar4 == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar6 = (pVVar5->zeroVector).z;
      fVar7 = (pVVar5->zeroVector).y;
      pSVar8 = (this->fields).smoothCharacterController;
      (this->fields).velocityPrevFrame.x = (pVVar5->zeroVector).x;
      (this->fields).velocityPrevFrame.y = fVar7;
      (this->fields).velocityPrevFrame.z = fVar6;
      if (pSVar8 != (SmoothCharacterController *)0x0) {
        pMVar9 = (pSVar8->fields).controller;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
        if (pMVar9 != (MvCharacterController *)0x0) {
          fVar7 = (pVVar5->zeroVector).y;
          fVar6 = (pVVar5->zeroVector).z;
          (pMVar9->fields)._Velocity_k__BackingField.x = (pVVar5->zeroVector).x;
          (pMVar9->fields)._Velocity_k__BackingField.y = fVar7;
          (pMVar9->fields)._Velocity_k__BackingField.z = fVar6;
          this_00 = (pSVar8->fields).smoothPhysicsMovement;
          if (this_00 != (SmoothPhysicsMovement *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                            ,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_01 = (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)
                      (this_00->fields).packages;
            if (this_01 != (Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData_ *)0x0
               ) {
              mscorlib.dll::System::Collections::Generic::
              Queue`1[NotificationAreaSingleInstanceQueue+NotificationQueueData]::
              Queue_1_NotificationAreaSingleInstanceQueue_NotificationQueueData__Clear
                        (this_01,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Clear__
                        );
              iVar10 = iRam_?;
              (this_00->fields).current = (SmoothPhysicsMovement_Package *)0x0;
              if (iVar10 != 0) {
                uVar11 = (uint)((ulonglong)&(this_00->fields).current >> 0xc);
                lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                do {
                  uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar15 = uVar13 == *puVar14;
                  if (bVar15) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                  iVar10 = iRam_?;
                } while (!bVar15);
              }
              (this_00->fields).next = (SmoothPhysicsMovement_Package *)0x0;
              if (iVar10 != 0) {
                uVar11 = (uint)((ulonglong)&(this_00->fields).next >> 0xc);
                lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                do {
                  uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                  puVar14 = (ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar15 = uVar13 == *puVar14;
                  if (bVar15) {
                    *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar15);
              }
              pTVar16 = (this_00->fields).targetTransform;
              pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)this_00,(MethodInfo *)0x0);
              if (pTVar17 != (Transform *)0x0) {
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
                if (pvVar18 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                pcVar19 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                  uVar20 = func_?(&UNK_?);
                  FUN_?(uVar20,0);
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                pcRam_? = pcVar19;
                (*pcRam_?)(pvVar18);
                if (pTVar16 != (Transform *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                 );
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar18 = (pTVar16->fields)._._.m_CachedPtr;
                  if (pvVar18 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  pcVar19 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                    uVar20 = func_?(&UNK_?);
                    FUN_?(uVar20,0);
                    pcVar19 = (code *)swi(3);
                    (*pcVar19)();
                    return;
                  }
                  pcRam_? = pcVar19;
                  (*pcRam_?)(pvVar18);
                  pTVar16 = (this_00->fields).targetTransform;
                  pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                  if (pTVar17 != (Transform *)0x0) {
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar18 = (pTVar17->fields)._._.m_CachedPtr;
                    if (pvVar18 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0)
                      ;
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcVar19 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                      uVar20 = func_?(&UNK_?);
                      FUN_?(uVar20,0);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcRam_? = pcVar19;
                    (*pcRam_?)(pvVar18);
                    if (pTVar16 == (Transform *)0x0) {
                      FUN_?();
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    uStack_21 = 0;
                    uStack_22 = 0;
                    uStack_23 = 0;
                    uStack_24 = 0;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar18 = (pTVar16->fields)._._.m_CachedPtr;
                    if (pvVar18 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar16,(MethodInfo *)0x0);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcVar19 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
                      uVar20 = func_?(&UNK_?);
                      FUN_?(uVar20,0);
                      pcVar19 = (code *)swi(3);
                      (*pcVar19)();
                      return;
                    }
                    pcRam_? = pcVar19;
                    (*pcRam_?)(pvVar18,&uStack_21);
                    return;
                  }
                }
                FUN_?();
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
            }
            FUN_?();
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
        }
        FUN_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void SuspendImpactDamage() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_SuspendImpactDamage
               (AvatarMotor *this,MethodInfo *method)

{
  pIVar1 = (this->fields).impactState;
  if (pIVar1 != (ImpactState *)0x0) {
    bVar2 = cRam_? == '\0';
    (pIVar1->fields).suspendImpactDamageCounter = 1;
    if (bVar2) {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    (pIVar1->fields).prevVelocityChangeVector.x = (pVVar3->zeroVector).x;
    (pIVar1->fields).prevVelocityChangeVector.y = fVar4;
    (pIVar1->fields).prevVelocityChangeVector.z = fVar5;
    (pIVar1->fields).collidedPrevFrame = 0;
    return;
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateFunction() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_UpdateFunction
               (AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (obj = (pSVar1->fields).smoothPhysicsMovement, obj == (SmoothPhysicsMovement *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar5 = (float)(*pcRam_?)();
  if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      bVar8 = iRam_? != 0;
      (obj->fields).current = pSVar7;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
    }
    if ((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) {
      return;
    }
  }
  if ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0) {
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) goto DAT_?;
    if (0 < (pQVar6->fields)._size) {
      pSVar7 = (SmoothPhysicsMovement_Package *)
                mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                Queue_1_System_Object__Dequeue
                          ((Queue_1_System_Object_ *)pQVar6,
                           MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                          );
      (obj->fields).next = pSVar7;
      func_?(&(obj->fields).next);
    }
  }
  if (((obj->fields).current == (SmoothPhysicsMovement_Package *)0x0) ||
     ((obj->fields).next == (SmoothPhysicsMovement_Package *)0x0)) {
    return;
  }
  pSVar7 = (obj->fields).next;
  do {
    if (fVar4 - fVar5 < (pSVar7->fields).time) {
code_?:
      pSVar7 = (obj->fields).current;
      if (pSVar7 == (SmoothPhysicsMovement_Package *)0x0) break;
      fVar13 = (pSVar7->fields).time;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar14 = (float)(*pcRam_?)();
      fVar14 = ((fVar4 - fVar5) - fVar13) / fVar14;
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
      pvVar15 = (obj->fields)._._._._.m_CachedPtr;
      if (pvVar15 == (void *)0x0) {
DAT_?:
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      pvVar15 = (void *)(*pcRam_?)(pvVar15);
      pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                Unmarshal_UnmarshalUnityObject
                          (pvVar15,
                           UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                          );
      fVar4 = _UNK_?;
      pSVar7 = (obj->fields).current;
      if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
         (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
      uStack_18._0_4_ = (pSVar17->fields).position.x;
      uStack_18._4_4_ = (pSVar17->fields).position.y;
      QStack_19.x = (pSVar7->fields).position.x;
      QStack_19.y = (pSVar7->fields).position.y;
      if (fVar14 < 0.0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = _UNK_?;
        if (fVar14 <= _UNK_?) {
          fVar5 = fVar14;
        }
      }
      if (pOVar16 != (Object *)0x0) {
        QStack_19.y = ((float)uStack_18._4_4_ - QStack_19.y) * fVar5 + QStack_19.y;
        QStack_19.x = ((float)(undefined4)uStack_18 - QStack_19.x) * fVar5 + QStack_19.x;
        QStack_19.z = ((pSVar17->fields).position.z - (pSVar7->fields).position.z) * fVar5 +
                      (pSVar7->fields).position.z;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar20 = pOVar16[1].klass;
        if (pOVar20 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pOVar20);
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
        pvVar15 = (obj->fields)._._._._.m_CachedPtr;
        if (pvVar15 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        pvVar15 = (void *)(*pcRam_?)(pvVar15);
        pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                  Unmarshal_UnmarshalUnityObject
                            (pvVar15,
                             UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                            );
        pSVar7 = (obj->fields).current;
        if ((pSVar7 != (SmoothPhysicsMovement_Package *)0x0) &&
           (pSVar17 = (obj->fields).next, pSVar17 != (SmoothPhysicsMovement_Package *)0x0)) {
          uStack_21._0_4_ = (pSVar17->fields).rotation.x;
          uStack_21._4_4_ = (pSVar17->fields).rotation.y;
          uStack_22._0_4_ = (pSVar17->fields).rotation.z;
          uStack_22._4_4_ = (pSVar17->fields).rotation.w;
          QStack_23.x = (pSVar7->fields).rotation.x;
          QStack_23.y = (pSVar7->fields).rotation.y;
          QStack_23.z = (pSVar7->fields).rotation.z;
          QStack_23.w = (pSVar7->fields).rotation.w;
          uStack_18 = 0;
          uStack_24 = 0;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(&QStack_23,&uStack_21,fVar14,&uStack_18);
          if (pOVar16 == (Object *)0x0) {
            FUN_?();
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uStack_25 = (undefined4)uStack_18;
          uStack_26 = uStack_18._4_4_;
          uStack_27 = (float)uStack_24;
          uStack_28 = uStack_24._4_4_;
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pOVar20 = pOVar16[1].klass;
          if (pOVar20 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          (*pcRam_?)(pOVar20);
          if ((obj->fields).worldObjectOwner != (MVWorldObjectClient *)0x0) {
            pSVar7 = (obj->fields).current;
            pMVar29 = (obj->fields).worldObjectOwner;
            if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
            uVar30 = (pSVar17->fields).position.x;
            uVar31 = (pSVar17->fields).position.y;
            uStack_18._0_4_ = (pSVar7->fields).position.x;
            uStack_18._4_4_ = (pSVar7->fields).position.y;
            if (fVar14 < 0.0) {
              fVar4 = 0.0;
            }
            else if (fVar14 <= fVar4) {
              fVar4 = fVar14;
            }
            QStack_19.z = ((pSVar17->fields).position.z - (pSVar7->fields).position.z) * fVar4 +
                          (pSVar7->fields).position.z;
            QStack_19.y = ((float)uVar31 - (float)uStack_18._4_4_) * fVar4 + (float)uStack_18._4_4_;
            QStack_19.x = ((float)uVar30 - (float)(undefined4)uStack_18) * fVar4 +
                          (float)(undefined4)uStack_18;
            (*(pMVar29->klass->vtable).set_WorldPosition.methodPtr)(pMVar29,&QStack_19);
            pSVar7 = (obj->fields).current;
            pMVar29 = (obj->fields).worldObjectOwner;
            if ((pSVar7 == (SmoothPhysicsMovement_Package *)0x0) ||
               (pSVar17 = (obj->fields).next, pSVar17 == (SmoothPhysicsMovement_Package *)0x0)) break;
            QStack_23.x = (pSVar17->fields).rotation.x;
            QStack_23.y = (pSVar17->fields).rotation.y;
            QStack_23.z = (pSVar17->fields).rotation.z;
            QStack_23.w = (pSVar17->fields).rotation.w;
            uStack_21._0_4_ = (pSVar7->fields).rotation.x;
            uStack_21._4_4_ = (pSVar7->fields).rotation.y;
            uStack_22._0_4_ = (pSVar7->fields).rotation.z;
            uStack_22._4_4_ = (pSVar7->fields).rotation.w;
            QStack_19.x = 0.0;
            QStack_19.y = 0.0;
            QStack_19.z = 0.0;
            QStack_19.w = 0.0;
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(&uStack_21,&QStack_23,fVar14,&QStack_19);
            if (pMVar29 == (MVWorldObjectClient *)0x0) break;
            QStack_23.x = QStack_19.x;
            QStack_23.y = QStack_19.y;
            QStack_23.z = QStack_19.z;
            QStack_23.w = QStack_19.w;
            MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                      (pMVar29,&QStack_23,(MethodInfo *)0x0);
          }
          if ((obj->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
            return;
          }
          pCVar32 = (obj->fields).cullingSubscriberBase;
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
          pvVar15 = (obj->fields)._._._._.m_CachedPtr;
          if (pvVar15 == (void *)0x0) goto DAT_?;
          pcVar2 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
            uVar3 = func_?(&UNK_?);
            FUN_?(uVar3,0);
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pcRam_? = pcVar2;
          pvVar15 = (void *)(*pcRam_?)(pvVar15);
          pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                    Unmarshal_UnmarshalUnityObject
                              (pvVar15,
                               UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                              );
          if (pOVar16 != (Object *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_18 = 0;
            uStack_24 = uStack_24 & 0xffffffff00000000;
            pOVar20 = pOVar16[1].klass;
            if (pOVar20 == (Object__Class *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException(pOVar16,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar3 = func_?(&UNK_?);
              FUN_?(uVar3,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pOVar20,&uStack_18);
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__CullingApiWrapper);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__CullingApiWrapper);
            }
            pBVar33 = TypeInfo__CullingApiWrapper->static_fields->spheres;
            if (pBVar33 != (BoundingSphere__Array *)0x0) {
              uVar9 = (pCVar32->fields)._CullingIndex_k__BackingField;
              if (uVar9 < (uint)pBVar33->max_length) {
                pBVar33->vector[(int)uVar9].position.x = (float)(undefined4)uStack_18;
                pBVar33->vector[(int)uVar9].position.y = (float)uStack_18._4_4_;
                pBVar33->vector[(int)uVar9].position.z = (float)uStack_24;
                return;
              }
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          break;
        }
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    if ((pQVar6->fields)._size < 1) goto code_?;
    bVar8 = iRam_? != 0;
    (obj->fields).current = (obj->fields).next;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(obj->fields).current >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pQVar6 = (obj->fields).packages;
    if (pQVar6 == (Queue_1_SmoothPhysicsMovement_Package_ *)0x0) break;
    pSVar7 = (SmoothPhysicsMovement_Package *)
              mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
              Queue_1_System_Object__Dequeue
                        ((Queue_1_System_Object_ *)pQVar6,
                         MethodInfo__System__Collections__Generic__Queue<SmoothPhysicsMovement::Package>__Dequeue__
                        );
    bVar8 = iRam_? != 0;
    (obj->fields).next = pSVar7;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(obj->fields).next >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pSVar7 = (obj->fields).next;
  } while (pSVar7 != (SmoothPhysicsMovement_Package *)0x0);
DAT_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateVelocity() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_UpdateVelocity
               (AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (pMVar2 = (pSVar1->fields).controller, pMVar2 == (MvCharacterController *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar4 = (pMVar2->fields)._Velocity_k__BackingField.x;
  uVar5 = (pMVar2->fields)._Velocity_k__BackingField.y;
  fVar6 = (pMVar2->fields)._Velocity_k__BackingField.z;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  fVar8 = (float)(*pcRam_?)();
  (this->fields).velocityPrevFrame.x = (float)uVar4 / fVar8;
  (this->fields).velocityPrevFrame.y = (float)uVar5 / fVar8;
  (this->fields).velocityPrevFrame.z = fVar6 / fVar8;
  return;
}


/* Void <Init>b__43_0() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor__Init_b__43_0
               (AvatarMotor *this,MethodInfo *method)

{
  if ((this->fields).OnWallJump != (AvatarMotor_OnWallJumpDelegate *)0x0) {
    pAVar1 = (this->fields).OnWallJump;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(pAVar1->fields)._._.method);
    return;
  }
  return;
}


/* AvatarMotor() */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor__ctor(AvatarMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__AnimationCurve);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ImpactState);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Keyframe);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&DD5CE2C05B256C578ABF6E71A1ED1333F4485549E8BD792C67E31B6E82755C18_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).walkSpeed = 8.0;
  (this->fields).walkSpeedBase = 8.0;
  keys = (Keyframe__Array *)FUN_?();
  uVar1 = _UNK_?;
  if (keys != (Keyframe__Array *)0x0) {
    if ((int)keys->max_length != 0) {
      uVar2 = _UNK_?;
      keys->vector[0].m_Time = (float)_UNK_?;
      uVar3 = _UNK_?;
      keys->vector[0].m_Value = (float)uVar2;
      _UNK_? = (undefined4)uVar1;
      _UNK_? = SUB84(uVar1,4);
      uVar2 = _UNK_?;
      keys->vector[0].m_InTangent = (float)_UNK_?;
      _UNK_? = uVar3;
      keys->vector[0].m_OutTangent = (float)uVar2;
      keys->vector[0].m_WeightedMode = 0;
      uVar4 = _UNK_?;
      uVar1 = _UNK_?;
      keys->vector[0].m_InWeight = 0.0;
      keys->vector[0].m_OutWeight = 0.0;
      uVar3 = _UNK_?;
      if (1 < (uint)keys->max_length) {
        _UNK_? = (undefined4)uVar1;
        _UNK_? = SUB84(uVar1,4);
        uVar2 = _UNK_?;
        keys->vector[1].m_Time = (float)_UNK_?;
        _UNK_? = uVar3;
        uVar1 = _UNK_?;
        keys->vector[1].m_Value = (float)uVar2;
        _UNK_? = (undefined4)uVar4;
        _UNK_? = SUB84(uVar4,4);
        uVar2 = _UNK_?;
        keys->vector[1].m_InTangent = (float)_UNK_?;
        _UNK_? = uVar1;
        keys->vector[1].m_OutTangent = (float)uVar2;
        keys->vector[1].m_WeightedMode = 0;
        uVar4 = _UNK_?;
        uVar1 = _UNK_?;
        keys->vector[1].m_InWeight = 0.0;
        keys->vector[1].m_OutWeight = 0.0;
        uVar3 = _UNK_?;
        if (2 < (uint)keys->max_length) {
          _UNK_? = (undefined4)uVar1;
          _UNK_? = SUB84(uVar1,4);
          uVar2 = _UNK_?;
          keys->vector[2].m_Time = (float)_UNK_?;
          _UNK_? = uVar3;
          uVar1 = _UNK_?;
          keys->vector[2].m_Value = (float)uVar2;
          _UNK_? = (undefined4)uVar4;
          _UNK_? = SUB84(uVar4,4);
          uVar2 = _UNK_?;
          keys->vector[2].m_InTangent = (float)_UNK_?;
          _UNK_? = uVar1;
          keys->vector[2].m_OutTangent = (float)uVar2;
          keys->vector[2].m_WeightedMode = 0;
          keys->vector[2].m_InWeight = 0.0;
          keys->vector[2].m_OutWeight = 0.0;
          pAVar5 = (AnimationCurve *)FUN_?(TypeInfo__UnityEngine__AnimationCurve);
          pvVar6 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::
                    AnimationCurve_Internal_Create(keys,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          (pAVar5->fields).m_Ptr = pvVar6;
          (pAVar5->fields).m_RequiresNativeCleanup = 1;
          (this->fields).slopeSpeedMultiplier = pAVar5;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).slopeSpeedMultiplier >> 0xc);
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
          explosionEvents =
               (RuntimeEventType__Enum__Array *)
               FUN_?(TypeInfo__MV__Common__RuntimeEventType,3);
          mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::
          RuntimeHelpers_InitializeArray_1
                    ((Array *)explosionEvents,
                     _DD5CE2C05B256C578ABF6E71A1ED1333F4485549E8BD792C67E31B6E82755C18_Field,
                     (MethodInfo *)0x0);
          this_00 = (ImpactState *)FUN_?(TypeInfo__ImpactState);
          ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
          bVar7 = iRam_? != 0;
          (this->fields).impactState = this_00;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields).impactState >> 0xc);
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
          (this->fields).speedBoostSetting = 1.0;
          (this->fields).slowFallVelocityMultiplier = 1.0;
          (this->fields).frictionMultiplier = 1.0;
          (this->fields).lerpTime = 0.4;
          if (cRam_? == '\0') {
            FUN_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
                         );
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MVGroundState);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = (MVGroundState *)FUN_?(TypeInfo__MVGroundState);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVMaterial);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar13 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
          bVar7 = iRam_? != 0;
          (pMVar12->fields).groundMaterial = pMVar13;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&pMVar12->fields >> 0xc);
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
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?();
          }
          uVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool
                   ::ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c
              == 0) {
            FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
          }
          lStack_14 = (ulonglong)uVar8 << 0x20;
          uVar15 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->
                  cryptoKey;
          bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::
                   ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning
                             ((MethodInfo *)0x0);
          uStack_17._0_2_ = (ushort)(bVar16 != 0) << 8;
          uStack_17 = (uint)CONCAT12(1,(short)uStack_17);
          bVar7 = cRam_? == '\0';
          (pMVar12->fields).grounded.currentCryptoKey = uVar15;
          *(undefined3 *)&(pMVar12->fields).grounded.field_0x1 = lStack_14._1_3_;
          (pMVar12->fields).grounded.hiddenValue = lStack_14._4_4_;
          (pMVar12->fields).grounded.fakeValue = (undefined1)uStack_17;
          (pMVar12->fields).grounded.fakeValueChanged = uStack_17._1_1_;
          (pMVar12->fields).grounded.inited = uStack_17._2_1_;
          (pMVar12->fields).grounded.field_0xb = uStack_17._3_1_;
          if (bVar7) {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          bVar7 = iRam_? != 0;
          pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar19 = (pVVar18->zeroVector).y;
          fVar20 = (pVVar18->zeroVector).z;
          (pMVar12->fields).groundNormal.x = (pVVar18->zeroVector).x;
          (pMVar12->fields).groundNormal.y = fVar19;
          (pMVar12->fields).groundNormal.z = fVar20;
          (this->fields)._.groundState = pMVar12;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields)._.groundState >> 0xc);
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
          (this->fields)._.weight = 1.0;
          (this->fields)._.density = 1.0;
          (this->fields)._.isPlayerControlled = 1;
          pLVar21 = (List_1_UnityEngine_Vector3_ *)
                    FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>
                                 );
          FUN_?(pLVar21,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
                       );
          bVar7 = iRam_? != 0;
          (this->fields)._.impulseVectors = pLVar21;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(this->fields)._.impulseVectors >> 0xc);
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
          bVar7 = cRam_? == '\0';
          (this->fields)._._.findWorldObjectParent = 1;
          if (bVar7) {
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
      }
    }
    FUN_?();
    pcVar22 = (code *)swi(3);
    (*pcVar22)();
    return;
  }
  FUN_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* MvCharacterController get_Controller() */

MvCharacterController *
Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_Controller(AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if (pSVar1 != (SmoothCharacterController *)0x0) {
    return (pSVar1->fields).controller;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (MvCharacterController *)(*pcVar2)();
  return pMVar3;
}


/* Single get_FrictionCoefficient() */

float Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_FrictionCoefficient
                (AvatarMotor *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.groundState;
  pAVar2 = (this->fields).interactableLocal;
  if (((pMVar1 != (MVGroundState *)0x0) &&
      (pMVar3 = (pMVar1->fields).groundMaterial, pMVar3 != (MVMaterial *)0x0)) &&
     (pAVar2 != (AvatarInteractable *)0x0)) {
    fVar4 = (float)(*(pAVar2->klass->vtable).HandleModifierEffect.methodPtr)
                             (pAVar2,0xc,
                              (pMVar3->fields)._PhysicalProperties_k__BackingField.friction *
                              (this->fields).frictionMultiplier,
                              (pAVar2->klass->vtable).HandleModifierEffect.method);
    return fVar4 * fVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  fVar4 = (float)(*pcVar5)();
  return fVar4;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::AvatarMotor::AvatarMotor_get_Velocity
                    (Vector3 *__return_storage_ptr__,AvatarMotor *this,MethodInfo *method)

{
  pSVar1 = (this->fields).smoothCharacterController;
  if ((pSVar1 == (SmoothCharacterController *)0x0) ||
     (pMVar2 = (pSVar1->fields).controller, pMVar2 == (MvCharacterController *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  uVar5 = (pMVar2->fields)._Velocity_k__BackingField.x;
  uVar6 = (pMVar2->fields)._Velocity_k__BackingField.y;
  fVar7 = (pMVar2->fields)._Velocity_k__BackingField.z;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  pcRam_? = pcVar3;
  fVar9 = (float)(*pcRam_?)();
  __return_storage_ptr__->x = (float)uVar5 / fVar9;
  __return_storage_ptr__->y = (float)uVar6 / fVar9;
  __return_storage_ptr__->z = fVar7 / fVar9;
  return __return_storage_ptr__;
}


/* Void set_WalkSpeedBase(Single) */

void Assembly-CSharp.dll::AvatarMotor::AvatarMotor_set_WalkSpeedBase
               (AvatarMotor *this,float value,MethodInfo *method)

{
  (this->fields).walkSpeedBase = value;
  bVar1 = cRam_? == '\0';
  (this->fields).walkSpeed = (this->fields).walkSpeedBase;
  apBStackX_8[0] = (Boost *)0x0;
  if (bVar1) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     ((pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      pMVar4 != (MVLocalPlayer *)0x0 &&
      (this_01 = (pMVar4->fields).boostController, this_01 != (BoostController *)0x0)))) {
    bVar5 = BoostController::BoostController_TryGetActiveBoost
                      (this_01,BoostType__Enum_MovementSpeedFloatMultiplier,apBStackX_8,
                       (MethodInfo *)0x0);
    if (bVar5 == 0) {
      return;
    }
    fVar6 = (this->fields).walkSpeedBase;
    if ((apBStackX_8[0] != (Boost *)0x0) &&
       (pOVar7 = Boost::Boost_get_Value(apBStackX_8[0],(MethodInfo *)0x0), pOVar7 != (Object *)0x0))
    {
      if ((pOVar7->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        (this->fields).walkSpeed =
             ((float)*(int *)&pOVar7[1].klass / _UNK_? + _UNK_?) * fVar6;
        return;
      }
      FUN_?(pOVar7,lRam_?);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

