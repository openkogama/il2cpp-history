
/* Vector3 GetVehicleVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_GetVehicleVelocity
                    (Vector3 *__return_storage_ptr__,HamsterWheelMotor *this,Vector3 *velocity,
                    Vector3 *baseVelocity,MethodInfo *method)

{
  VStack_1.x = baseVelocity->x;
  VStack_1.y = baseVelocity->y;
  VStack_1.z = baseVelocity->z;
  VStack_2.x = velocity->x;
  VStack_2.y = velocity->y;
  VStack_2.z = velocity->z;
  pVVar3 = HamsterWheelMotor_GetVehicleVelocityClassicCam
                     (&VStack_4,this,&VStack_2,&VStack_1,(MethodInfo *)0x0);
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Vector3 GetVehicleVelocityClassicCam(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_GetVehicleVelocityClassicCam
                    (Vector3 *__return_storage_ptr__,HamsterWheelMotor *this,Vector3 *velocity,
                    Vector3 *movableVelocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IVehicleCamera);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Horizontal);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).interactable;
  if (pMVar1 == (MVInteractableBase *)0x0) goto code_?;
  fVar2 = (float)(*(pMVar1->klass->vtable).__unknown_8.methodPtr)
                           (pMVar1,3,(ulonglong)_UNK_?,
                            (pMVar1->klass->vtable).__unknown_8.method);
  auStack_3._0_4_ = velocity->x;
  auStack_3._4_4_ = velocity->y;
  fVar4 = velocity->z;
  fVar5 = (float)auStack_3._4_4_ - (float)auStack_3._4_4_ * _UNK_?;
  fVar6 = velocity->z * _UNK_?;
  fVar7 = (float)auStack_3._0_4_ - (float)auStack_3._0_4_ * _UNK_?;
  pcVar8 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar8 = (code *)swi(3);
    pVVar10 = (Vector3 *)(*pcVar8)();
    return pVVar10;
  }
  pcRam_? = pcVar8;
  fVar11 = (float)(*pcRam_?)();
  fVar12 = _UNK_?;
  fVar11 = fVar11 / _UNK_?;
  auStack_3._0_4_ = velocity->x;
  auStack_3._4_4_ = velocity->y;
  fVar7 = (float)auStack_3._0_4_ - fVar7 * fVar11;
  fVar5 = (float)auStack_3._4_4_ - fVar5 * fVar11;
  fVar4 = velocity->z - (fVar4 - fVar6) * fVar11;
  VStack_13.y = (float)auStack_3._4_4_;
  VStack_13.x = fVar5;
  bVar14 = (this->fields)._.HandleInput;
  velocity->x = fVar7;
  velocity->y = fVar5;
  velocity->z = fVar4;
  if (bVar14 != 0) {
    pSVar15 = (this->fields)._.smoothController;
    if ((pSVar15 == (SmoothCharacterController *)0x0) ||
       (pMVar16 = (pSVar15->fields).controller, pMVar16 == (MvCharacterController *)0x0))
    goto code_?;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pMVar16,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9._0_4_ = (pVVar18->upVector).x;
    uVar9._4_4_ = (pVVar18->upVector).y;
    fVar6 = (pVVar18->upVector).z;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    fVar11 = (float)(*pcRam_?)();
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar19 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                       (StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar17 == (Transform *)0x0) goto code_?;
    fVar11 = fVar11 * _UNK_? * fVar19 * _UNK_?;
    VStack_20._0_8_ = uVar9;
    VStack_20.z = fVar6;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar21 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar21 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar21,&VStack_20,fVar11 * fVar12);
  }
  if ((0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.z & _UNK_?)) ||
     (0.0 < (float)((uint)(this->fields)._.DirectInputMoveMap.x & _UNK_?))) {
    if ((this->fields)._._VehicleCamera_k__BackingField == (IVehicleCamera *)0x0)
    goto code_?;
    fVar6 = (float)FUN_?(0,TypeInfo__IVehicleCamera);
    auStack_3 = (undefined1  [8])((ulonglong)(uint)(fVar6 * fVar12) << 0x20);
    uStack_22 = uStack_22 & 0xffffffff00000000;
    uStack_23 = 0;
    uStack_24 = 0;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(auStack_3);
    pSVar15 = (this->fields)._.smoothController;
    if (((pSVar15 == (SmoothCharacterController *)0x0) ||
        (pMVar16 = (pSVar15->fields).controller, pMVar16 == (MvCharacterController *)0x0)) ||
       (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar16,(MethodInfo *)0x0), pTVar17 == (Transform *)0x0))
    goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_3._0_4_ = 0.0;
    auStack_3._4_4_ = 0.0;
    uStack_22 = 0;
    pvVar21 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar21 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar21,auStack_3);
    fVar12 = (float)uStack_23;
    fVar11 = uStack_23._4_4_;
    uVar25 = auStack_3._0_4_;
    fVar5 = uStack_22._4_4_;
    uVar26 = auStack_3._4_4_;
    fVar6 = (float)uStack_22;
    fVar19 = (float)auStack_3._0_4_ * uStack_23._4_4_;
    uStack_23 = CONCAT44(((float)auStack_3._4_4_ * uStack_24._4_4_ +
                          uStack_22._4_4_ * uStack_23._4_4_ + (float)uStack_22 * (float)uStack_23)
                         - (float)auStack_3._0_4_ * (float)uStack_24,
                         ((float)auStack_3._0_4_ * uStack_24._4_4_ +
                          uStack_22._4_4_ * (float)uStack_23 +
                         (float)auStack_3._4_4_ * (float)uStack_24) -
                         (float)uStack_22 * uStack_23._4_4_);
    uStack_24 = CONCAT44(((uStack_22._4_4_ * uStack_24._4_4_ - (float)auStack_3._0_4_ * fVar12) -
                         (float)auStack_3._4_4_ * fVar11) - (float)uStack_22 * (float)uStack_24,
                         ((float)uStack_22 * uStack_24._4_4_ + uStack_22._4_4_ * (float)uStack_24
                         + fVar19) - (float)auStack_3._4_4_ * fVar12);
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    uStack_27 = uStack_23;
    uStack_28 = uStack_24;
    uStack_23 = 0;
    uStack_24 = 0;
    auStack_29._0_8_ = auStack_3;
    auStack_29._8_8_ = uStack_22;
    fVar11 = (float)(*pcRam_?)();
    fVar12 = _UNK_?;
    fVar11 = fVar11 * _UNK_?;
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(auStack_29,&uStack_27,fVar11,&uStack_23);
    fVar11 = _UNK_?;
    fVar6 = (float)((uint)(uStack_23._4_4_ * (float)uVar26 + (float)uStack_23 * (float)uVar25 +
                            (float)uStack_24 * fVar6 + uStack_24._4_4_ * fVar5) & _UNK_?);
    if (_UNK_? <= fVar6) {
      fVar6 = _UNK_?;
    }
    if (fVar6 <= _UNK_?) {
      fVar6 = (float)func_?(fVar6);
      fVar6 = (fVar6 + fVar6) * _UNK_?;
    }
    else {
      fVar6 = 0.0;
    }
    auStack_3 = (undefined1  [8])uStack_23;
    uStack_22 = uStack_24;
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar21 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar21 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar21,auStack_3);
    pIVar30 = (this->fields)._._VehicleCamera_k__BackingField;
    if (pIVar30 == (IVehicleCamera *)0x0) {
      FUN_?();
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    fVar5 = (float)FUN_?(0,TypeInfo__IVehicleCamera);
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar9 = func_?(&UNK_?);
      FUN_?(uVar9,0);
      pcVar8 = (code *)swi(3);
      pVVar10 = (Vector3 *)(*pcVar8)();
      return pVVar10;
    }
    pcRam_? = pcVar8;
    fVar19 = (float)(*pcRam_?)();
    fVar19 = fVar19 * fVar12;
    if (fVar19 < 0.0) {
      fVar19 = 0.0;
    }
    else if (fVar11 < fVar19) {
      fVar19 = fVar11;
    }
    FUN_?(1,TypeInfo__IVehicleCamera,pIVar30,(fVar6 - fVar5) * fVar19 + fVar5);
    fVar5 = VStack_13.x;
  }
  fVar6 = _UNK_?;
  pVVar31 = (this->fields)._.vehicleEnergyContainer;
  if (pVVar31 != (VehicleEnergyContainer *)0x0) {
    if ((pVVar31->fields)._UsingEnergy_k__BackingField == 0) {
      bVar32 = false;
    }
    else {
      bVar32 = (pVVar31->fields).energyStorage <= 0.0;
    }
    if (0.0 < (this->fields)._.DirectInputMoveMap.z) {
      pfVar33 = &(this->fields).speed;
      if (*pfVar33 <= fVar2 && fVar2 != *pfVar33) {
        fVar12 = (this->fields).speed;
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          pVVar10 = (Vector3 *)(*pcVar8)();
          return pVVar10;
        }
        pcRam_? = pcVar8;
        fVar11 = (float)(*pcRam_?)();
        (this->fields).speed = fVar11 * fVar6 + fVar12;
      }
      if (fVar2 < (this->fields).speed) {
        (this->fields).speed = fVar2;
      }
    }
    fVar2 = _UNK_?;
    pfVar33 = &(this->fields)._.DirectInputMoveMap.z;
    if (*pfVar33 <= 0.0 && *pfVar33 != 0.0) {
      fVar12 = (this->fields).speed;
      if (_UNK_? < fVar12) {
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          pVVar10 = (Vector3 *)(*pcVar8)();
          return pVVar10;
        }
        pcRam_? = pcVar8;
        fVar11 = (float)(*pcRam_?)();
        (this->fields).speed = fVar12 - fVar11 * fVar6;
      }
      pfVar33 = &(this->fields).speed;
      if (*pfVar33 <= fVar2 && fVar2 != *pfVar33) {
        (this->fields).speed = -10.0;
      }
    }
    if ((this->fields)._.DirectInputMoveMap.z == 0.0) {
      (this->fields).speed = 0.0;
    }
    else if (bVar32) {
      fVar2 = (this->fields).speed;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      else if (_UNK_? < fVar2) {
        fVar2 = _UNK_?;
      }
      (this->fields).speed = fVar2;
    }
    else {
      pVVar31 = (this->fields)._.vehicleEnergyContainer;
      if (pVVar31 == (VehicleEnergyContainer *)0x0) goto code_?;
      if (((((pVVar31->fields)._UsingEnergy_k__BackingField != 0) &&
           ((pVVar31->fields).consumingEnergy != 0)) && (0.0 < (pVVar31->fields).energyStorage)) &&
         (fVar2 = (pVVar31->fields).energyStorage - (pVVar31->fields).consumption,
         (pVVar31->fields).energyStorage = fVar2, fVar2 < 0.0)) {
        (pVVar31->fields).energyStorage = 0.0;
      }
    }
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar17 != (Transform *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_20,pTVar17,(MethodInfo *)0x0);
      fVar2 = (this->fields).speed;
      auStack_3._0_4_ = pVVar10->x;
      auStack_3._4_4_ = pVVar10->y;
      fVar6 = pVVar10->z;
      pcVar8 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar8 = (code *)swi(3);
        pVVar10 = (Vector3 *)(*pcVar8)();
        return pVVar10;
      }
      pcRam_? = pcVar8;
      fVar12 = (float)(*pcRam_?)();
      fVar12 = fVar12 * fVar2;
      fVar7 = (float)auStack_3._0_4_ * fVar12 + fVar7;
      fVar5 = (float)auStack_3._4_4_ * fVar12 + fVar5;
      fVar4 = fVar6 * fVar12 + fVar4;
      velocity->x = fVar7;
      velocity->y = fVar5;
      velocity->z = fVar4;
      fVar2 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity
                        ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
      if (_UNK_? < fVar2) {
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar9 = func_?(&UNK_?);
          FUN_?(uVar9,0);
          pcVar8 = (code *)swi(3);
          pVVar10 = (Vector3 *)(*pcVar8)();
          return pVVar10;
        }
        pcRam_? = pcVar8;
        fVar6 = (float)(*pcRam_?)();
        fVar5 = fVar6 * _UNK_? * fVar2 + fVar5;
        if (0.0 < fVar5) {
          if (fVar5 < 0.0) {
            fVar5 = 0.0;
          }
          else if (_UNK_? < fVar5) {
            fVar5 = _UNK_?;
          }
        }
        velocity->x = fVar7;
        velocity->y = fVar5;
        velocity->z = fVar4;
      }
      else {
        auStack_3._0_4_ = (this->fields).curVelocity.x;
        auStack_3._4_4_ = (this->fields).curVelocity.y;
        uStack_22 = CONCAT44(uStack_22._4_4_,(this->fields).curVelocity.z);
        VStack_20.y = fVar5;
        VStack_20.x = fVar7;
        VStack_20.z = fVar4;
        pVVar10 = MVRigidBody::MVRigidBody_ApplyGravity
                            (&VStack_13,(MVRigidBody *)this,&VStack_20,(Vector3 *)auStack_3,
                             (this->fields)._.interactableLocal,(MethodInfo *)0x0);
        fVar2 = pVVar10->y;
        fVar4 = pVVar10->z;
        velocity->x = pVVar10->x;
        velocity->y = fVar2;
        velocity->z = fVar4;
      }
      pHVar34 = (this->fields).bounceState;
      if (pHVar34 != (HamsterWheelBounceState *)0x0) {
        auStack_3._0_4_ = (pHVar34->fields).bounceVelocity.x;
        auStack_3._4_4_ = (pHVar34->fields).bounceVelocity.y;
        fVar4 = velocity->x;
        fVar2 = velocity->y;
        fVar6 = velocity->z;
        fVar5 = (pHVar34->fields).bounceVelocity.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        cVar35 = cRam_?;
        pVVar18 = TypeInfo__UnityEngine__Vector3->static_fields;
        lVar36._0_4_ = (pVVar18->zeroVector).x;
        lVar36._4_4_ = (pVVar18->zeroVector).y;
        fVar5 = fVar5 - (pVVar18->zeroVector).z;
        if (_UNK_? <=
            ((float)auStack_3._4_4_ - (float)lVar36._4_4_) *
            ((float)auStack_3._4_4_ - (float)lVar36._4_4_) +
            ((float)auStack_3._0_4_ - (float)(undefined4)lVar36) *
            ((float)auStack_3._0_4_ - (float)(undefined4)lVar36) + fVar5 * fVar5) {
          uVar37 = (pHVar34->fields).bounceVelocity.x;
          uVar38 = (pHVar34->fields).bounceVelocity.y;
          fVar6 = (pHVar34->fields).bounceVelocity.z;
          fVar4 = (float)uVar37;
          fVar2 = (float)uVar38;
        }
        (pHVar34->fields).bounced = 0;
        auStack_3 = (undefined1  [8])lVar36;
        if (cVar35 == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar39 = TypeInfo__UnityEngine__Vector3;
        velocity->x = fVar4;
        velocity->y = fVar2;
        velocity->z = fVar6;
        pVVar18 = pVVar39->static_fields;
        fVar7 = (pVVar18->zeroVector).y;
        fVar5 = (pVVar18->zeroVector).z;
        (pHVar34->fields).bounceVelocity.x = (pVVar18->zeroVector).x;
        (pHVar34->fields).bounceVelocity.y = fVar7;
        (pHVar34->fields).bounceVelocity.z = fVar5;
        if (!bVar32) {
          this_00 = (this->fields).jumpState;
          if (this_00 == (JumpState *)0x0) goto code_?;
          auStack_3._0_4_ = movableVelocity->x;
          auStack_3._4_4_ = movableVelocity->y;
          uStack_22 = CONCAT44(uStack_22._4_4_,movableVelocity->z);
          VStack_20.y = fVar2;
          VStack_20.x = fVar4;
          VStack_20.z = fVar6;
          pVVar10 = JumpState::JumpState_ApplyJumping
                              (&VStack_13,this_00,(this->fields)._.interactableLocal,
                               (this->fields)._._.groundState,(this->fields)._._.density,0.0,
                               (this->fields)._.Jump,&VStack_20,(Vector3 *)auStack_3,
                               (MethodInfo *)0x0);
          fVar2 = pVVar10->y;
          fVar4 = pVVar10->z;
          velocity->x = pVVar10->x;
          velocity->y = fVar2;
          velocity->z = fVar4;
        }
        auStack_3._0_4_ = velocity->x;
        auStack_3._4_4_ = velocity->y;
        uStack_22 = CONCAT44(uStack_22._4_4_,velocity->z);
        pVVar10 = MVRigidBody::MVRigidBody_GetImpulse
                            (&VStack_20,(MVRigidBody *)this,(Vector3 *)auStack_3,
                             (this->fields)._.interactableLocal,(MethodInfo *)0x0);
        fVar2 = pVVar10->y;
        fVar4 = pVVar10->z;
        __return_storage_ptr__->x = pVVar10->x;
        __return_storage_ptr__->y = fVar2;
        __return_storage_ptr__->z = fVar4;
        return __return_storage_ptr__;
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar8)();
  return pVVar10;
}


/* Void Init(SmoothCharacterController, VehicleInteractable, VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_Init
               (HamsterWheelMotor *this,SmoothCharacterController *smoothCharacterController,
               VehicleInteractable *interactableLocalParam,
               VehicleEnergyContainerConfig *vehicleEnergyContainerConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<GroundChange>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__HamsterWheelBounceState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HamsterWheelBounceState);
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
    cRam_? = '\x01';
  }
  VStack_1.usingEnergy = vehicleEnergyContainerConfig->usingEnergy;
  VStack_1._1_3_ = *(undefined3 *)&vehicleEnergyContainerConfig->field_0x1;
  VStack_1.storage = vehicleEnergyContainerConfig->storage;
  VStack_1.consumption = vehicleEnergyContainerConfig->consumption;
  (this->fields)._._.density = 1.5;
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init
            ((SimpleVehicleMotorBase *)this,smoothCharacterController,interactableLocalParam,
             &VStack_1,(MethodInfo *)0x0);
  pHVar2 = (HamsterWheelBounceState *)FUN_?(TypeInfo__HamsterWheelBounceState);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).z;
  fVar5 = (pVVar3->zeroVector).y;
  (pHVar2->fields).bounceVelocity.x = (pVVar3->zeroVector).x;
  (pHVar2->fields).bounceVelocity.y = fVar5;
  (pHVar2->fields).bounceVelocity.z = fVar4;
  iVar6 = iRam_?;
  (pHVar2->fields).interactable = (MVInteractableBase *)interactableLocalParam;
  if (iVar6 != 0) {
    uVar7 = (uint)((ulonglong)&pHVar2->fields >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
      iVar6 = iRam_?;
    } while (!bVar11);
  }
  (this->fields).bounceState = pHVar2;
  iVar12 = 0;
  if (iVar6 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).bounceState >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
      iVar12 = iRam_?;
    } while (!bVar11);
  }
  (this->fields).interactable = (MVInteractableBase *)interactableLocalParam;
  if (iVar12 != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).interactable >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar11 = uVar9 == *puVar10;
      if (bVar11) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar11);
  }
  if ((smoothCharacterController != (SmoothCharacterController *)0x0) &&
     (pMVar13 = (smoothCharacterController->fields).controller,
     pMVar13 != (MvCharacterController *)0x0)) {
    pAVar14 = (pMVar13->fields).OnControllerColliderHit;
    pHVar2 = (this->fields).bounceState;
    pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
    FUN_?(pDVar15,pHVar2);
    pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pAVar14,pDVar15,(MethodInfo *)0x0);
    pAVar16 = TypeInfo__System__Action<MVControllerColliderHit>;
    if (pDVar15 == (Delegate *)0x0) {
      (pMVar13->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
    }
    else {
      pAVar14 = (Action_1_MVControllerColliderHit_ *)
                FUN_?(pDVar15,TypeInfo__System__Action<MVControllerColliderHit>);
      if (pAVar14 == (Action_1_MVControllerColliderHit_ *)0x0) {
        FUN_?(pDVar15,pAVar16);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      (pMVar13->fields).OnControllerColliderHit = pAVar14;
      pAVar16 = TypeInfo__System__Action<MVControllerColliderHit>;
      lVar18 = FUN_?(pDVar15,TypeInfo__System__Action<MVControllerColliderHit>);
      if (lVar18 == 0) {
        FUN_?(pDVar15,pAVar16);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar13->fields).OnControllerColliderHit >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pJVar19 = (JumpState *)FUN_?(TypeInfo__JumpState);
    JumpState::JumpState__ctor_1(pJVar19,_UNK_?,(MethodInfo *)0x0);
    bVar11 = iRam_? != 0;
    (this->fields).jumpState = pJVar19;
    if (bVar11) {
      uVar7 = (uint)((ulonglong)&(this->fields).jumpState >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pMVar20 = (this->fields)._._.groundState;
    if (pMVar20 != (MVGroundState *)0x0) {
      pAVar21 = (pMVar20->fields).OnGroundChange;
      pJVar19 = (this->fields).jumpState;
      this_00 = (UnityAction_1_System_Int32Enum_ *)
                FUN_?(TypeInfo__System__Action<GroundChange>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (this_00,(Object *)pJVar19,MethodInfo__JumpState__UpdateJumpState_GroundChange_,
                 (MethodInfo *)0x0);
      pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar21,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar22 = TypeInfo__System__Action<GroundChange>;
      if (pDVar15 == (Delegate *)0x0) {
        (pMVar20->fields).OnGroundChange = (Action_1_GroundChange_ *)0x0;
      }
      else {
        pAVar21 = (Action_1_GroundChange_ *)
                  FUN_?(pDVar15,TypeInfo__System__Action<GroundChange>);
        if (pAVar21 == (Action_1_GroundChange_ *)0x0) {
          FUN_?(pDVar15,pAVar22);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
        (pMVar20->fields).OnGroundChange = pAVar21;
        pAVar22 = TypeInfo__System__Action<GroundChange>;
        lVar18 = FUN_?(pDVar15,TypeInfo__System__Action<GroundChange>);
        if (lVar18 == 0) {
          FUN_?(pDVar15,pAVar22);
          pcVar17 = (code *)swi(3);
          (*pcVar17)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar20->fields).OnGroundChange >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pMVar13 = (smoothCharacterController->fields).controller;
      if (pMVar13 != (MvCharacterController *)0x0) {
        pAVar14 = (pMVar13->fields).OnControllerColliderHit;
        pJVar19 = (this->fields).jumpState;
        pDVar15 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
        FUN_?(pDVar15,pJVar19);
        pDVar15 = mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)pAVar14,pDVar15,(MethodInfo *)0x0);
        pAVar16 = TypeInfo__System__Action<MVControllerColliderHit>;
        if (pDVar15 == (Delegate *)0x0) {
          (pMVar13->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
        }
        else {
          pAVar14 = (Action_1_MVControllerColliderHit_ *)
                    FUN_?(pDVar15,TypeInfo__System__Action<MVControllerColliderHit>);
          if (pAVar14 == (Action_1_MVControllerColliderHit_ *)0x0) {
            FUN_?(pDVar15,pAVar16);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
          (pMVar13->fields).OnControllerColliderHit = pAVar14;
          pAVar16 = TypeInfo__System__Action<MVControllerColliderHit>;
          lVar18 = FUN_?(pDVar15,TypeInfo__System__Action<MVControllerColliderHit>);
          if (lVar18 == 0) {
            FUN_?(pDVar15,pAVar16);
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar7 = (uint)((ulonglong)&(pMVar13->fields).OnControllerColliderHit >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar11 = uVar9 == *puVar10;
            if (bVar11) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_Reset
               (HamsterWheelMotor *this,MethodInfo *method)

{
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Reset
            ((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).curVelocity.x = (pVVar2->zeroVector).x;
  (this->fields).curVelocity.y = fVar3;
  (this->fields).curVelocity.z = fVar4;
  pSVar5 = (this->fields)._.smoothController;
  if (pSVar5 != (SmoothCharacterController *)0x0) {
    pMVar6 = (pSVar5->fields).controller;
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    if (pMVar6 != (MvCharacterController *)0x0) {
      fVar3 = (pVVar2->zeroVector).y;
      fVar4 = (pVVar2->zeroVector).z;
      (pMVar6->fields)._Velocity_k__BackingField.x = (pVVar2->zeroVector).x;
      (pMVar6->fields)._Velocity_k__BackingField.y = fVar3;
      (pMVar6->fields)._Velocity_k__BackingField.z = fVar4;
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void VehicleUpdateFunction() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor_VehicleUpdateFunction
               (HamsterWheelMotor *this,MethodInfo *method)

{
  uVar1._0_4_ = (this->fields).curVelocity.x;
  uVar1._4_4_ = (this->fields).curVelocity.y;
  fVar2 = (this->fields).curVelocity.z;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  pSVar4 = (this->fields)._.smoothController;
  VStack_5._0_8_ = uVar1;
  if ((pSVar4 != (SmoothCharacterController *)0x0) &&
     (pMVar6 = (pSVar4->fields).controller, pMVar6 != (MvCharacterController *)0x0)) {
    this_00 = (this->fields)._.movableMotorState;
    if (this_00 != (MVMovableMotorState *)0x0) {
      VStack_7._0_8_ = uVar1;
      VStack_7.z = fVar2;
      bVar8 = MVMovableMotorState::MVMovableMotorState_Move
                        (this_00,&VStack_7,pMVar6,(pMVar6->fields).elipsoidRadius.x,
                         (this->fields)._._.groundState,&VStack_3,(MethodInfo *)0x0);
      fVar9 = VStack_3.z;
      uVar10 = VStack_3._0_8_;
      VStack_7.x = VStack_3.x;
      VStack_7.y = VStack_3.y;
      VStack_7.z = VStack_3.z;
      VStack_11._0_8_ = uVar1;
      VStack_11.z = fVar2;
      pVVar12 = HamsterWheelMotor_GetVehicleVelocityClassicCam
                          (aVStack_13,this,&VStack_11,&VStack_7,(MethodInfo *)0x0);
      uVar1 = VStack_3._0_8_;
      fVar14 = pVVar12->z;
      if (bVar8 == 0) {
        VStack_3.x = (float)uVar10;
        VStack_3.y = SUB84(uVar10,4);
        VStack_7.x = VStack_3.x;
        VStack_7.y = VStack_3.y;
        uVar10._0_4_ = pVVar12->x;
        uVar10._4_4_ = pVVar12->y;
        fVar15 = fVar9;
        VStack_3._0_8_ = uVar1;
      }
      else {
        uVar10._0_4_ = pVVar12->x;
        uVar10._4_4_ = pVVar12->y;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_7.x = (pVVar16->zeroVector).x;
        VStack_7.y = (pVVar16->zeroVector).y;
        fVar15 = (pVVar16->zeroVector).z;
      }
      pcVar17 = pcRam_?;
      VStack_11._0_8_ = uVar10;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
        uVar1 = func_?(&UNK_?);
        FUN_?(uVar1,0);
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      pcRam_? = pcVar17;
      fVar18 = (float)(*pcRam_?)();
      pSVar4 = (this->fields)._.smoothController;
      if ((pSVar4 != (SmoothCharacterController *)0x0) &&
         (pMVar6 = (pSVar4->fields).controller, pMVar6 != (MvCharacterController *)0x0)) {
        VStack_7.y = (VStack_11.y + VStack_7.y) * fVar18;
        VStack_7.x = (VStack_11.x + VStack_7.x) * fVar18;
        VStack_7.z = (fVar14 + fVar15) * fVar18;
        (*(pMVar6->klass->vtable).__unknown_1.methodPtr)
                  (pMVar6,&VStack_7,(pMVar6->klass->vtable).__unknown_1.method);
        pSVar4 = (this->fields)._.smoothController;
        if ((pSVar4 != (SmoothCharacterController *)0x0) &&
           (this_01 = (this->fields)._._.groundState, this_01 != (MVGroundState *)0x0)) {
          VStack_7._0_8_ = uVar10;
          VStack_7.z = fVar14;
          MVGroundState::MVGroundState_Update
                    (this_01,(pSVar4->fields).controller,&VStack_7,0.0,(MethodInfo *)0x0);
          pSVar4 = (this->fields)._.smoothController;
          if ((pSVar4 != (SmoothCharacterController *)0x0) &&
             (pMVar6 = (pSVar4->fields).controller, pMVar6 != (MvCharacterController *)0x0)) {
            VStack_7.x = (pMVar6->fields)._Velocity_k__BackingField.x;
            VStack_7.y = (pMVar6->fields)._Velocity_k__BackingField.y;
            fVar14 = (pMVar6->fields)._Velocity_k__BackingField.z;
            pcVar17 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar17 = (code *)FUN_?(&UNK_?), pcVar17 == (code *)0x0)) {
              uVar1 = func_?(&UNK_?);
              FUN_?(uVar1,0);
              pcVar17 = (code *)swi(3);
              (*pcVar17)();
              return;
            }
            pcRam_? = pcVar17;
            fVar15 = (float)(*pcRam_?)();
            fVar14 = fVar14 / fVar15;
            (this->fields).curVelocity.x = VStack_7.x / fVar15;
            (this->fields).curVelocity.y = VStack_7.y / fVar15;
            (this->fields).curVelocity.z = fVar14;
            if (bVar8 == 0) {
              (this->fields).curVelocity.x = VStack_7.x / fVar15 - VStack_3.x;
              (this->fields).curVelocity.y = VStack_7.y / fVar15 - VStack_3.y;
              (this->fields).curVelocity.z = fVar14 - fVar9;
            }
            uVar19 = (this->fields).curVelocity.x;
            uVar20 = (this->fields).curVelocity.y;
            this_02 = (this->fields)._.impactState;
            uVar21._0_4_ = VStack_5.x * _UNK_?;
            if (this_02 != (ImpactState *)0x0) {
              interactableLocal = (this->fields)._.interactableLocal;
              uVar21._4_4_ = VStack_5.y * _UNK_?;
              VStack_7.y = (float)uVar20 * _UNK_?;
              VStack_7.x = (float)uVar19 * _UNK_?;
              VStack_7.z = (this->fields).curVelocity.z * _UNK_?;
              VStack_5._0_8_ = uVar21;
              VStack_5.z = fVar2 * _UNK_?;
              fVar2 = ImpactState::ImpactState_UpdateImpactState
                                 (this_02,&VStack_7,&VStack_5,interactableLocal,(MethodInfo *)0x0)
              ;
              if (fVar2 != 0.0) {
                pMVar22 = (this->fields)._.interactableLocal;
                if (pMVar22 == (MVInteractableBase *)0x0) goto code_?;
                pIVar23 = (pMVar22->klass->vtable).__unknown.methodPtr;
                (*pIVar23)(pMVar22,pIVar23,0,CONCAT71((int7)((ulonglong)interactableLocal >> 8),5),
                          (pMVar22->klass->vtable).__unknown.method);
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* HamsterWheelMotor() */

void Assembly-CSharp.dll::HamsterWheelMotor::HamsterWheelMotor__ctor
               (HamsterWheelMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).curVelocity.x = (pVVar1->zeroVector).x;
  (this->fields).curVelocity.y = fVar2;
  (this->fields).curVelocity.z = fVar3;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ImpactState,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__RuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&_831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  explosionEvents =
       (RuntimeEventType__Enum__Array *)FUN_?(TypeInfo__MV__Common__RuntimeEventType,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)explosionEvents,
             __831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field,
             (MethodInfo *)0x0);
  this_00 = (ImpactState *)FUN_?(TypeInfo__ImpactState);
  ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
  bVar4 = iRam_? != 0;
  (this->fields)._.impactState = this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.impactState >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
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
  pMVar9 = (MVGroundState *)FUN_?(TypeInfo__MVGroundState);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar10 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
  bVar4 = iRam_? != 0;
  (pMVar9->fields).groundMaterial = pMVar10;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&pMVar9->fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_11 = (ulonglong)uVar5 << 0x20;
  uVar12 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar13 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uStack_14._0_2_ = (ushort)(bVar13 != 0) << 8;
  uStack_14 = (uint)CONCAT12(1,(short)uStack_14);
  bVar4 = cRam_? == '\0';
  (pMVar9->fields).grounded.currentCryptoKey = uVar12;
  *(undefined3 *)&(pMVar9->fields).grounded.field_0x1 = lStack_11._1_3_;
  (pMVar9->fields).grounded.hiddenValue = lStack_11._4_4_;
  (pMVar9->fields).grounded.fakeValue = (undefined1)uStack_14;
  (pMVar9->fields).grounded.fakeValueChanged = uStack_14._1_1_;
  (pMVar9->fields).grounded.inited = uStack_14._2_1_;
  (pMVar9->fields).grounded.field_0xb = uStack_14._3_1_;
  if (bVar4) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar4 = iRam_? != 0;
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (pMVar9->fields).groundNormal.x = (pVVar1->zeroVector).x;
  (pMVar9->fields).groundNormal.y = fVar2;
  (pMVar9->fields).groundNormal.z = fVar3;
  (this->fields)._._.groundState = pMVar9;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._.groundState >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  (this->fields)._._.weight = 1.0;
  (this->fields)._._.density = 1.0;
  (this->fields)._._.isPlayerControlled = 1;
  pLVar15 = (List_1_UnityEngine_Vector3_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(pLVar15,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__
               );
  bVar4 = iRam_? != 0;
  (this->fields)._._.impulseVectors = pLVar15;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._._.impulseVectors >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  bVar4 = cRam_? == '\0';
  (this->fields)._._._.findWorldObjectParent = 1;
  if (bVar4) {
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

