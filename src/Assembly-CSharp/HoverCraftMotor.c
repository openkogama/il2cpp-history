
/* Single DragCoefficientXZHullRotationFactor(Vector3, Single) */

float Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_DragCoefficientXZHullRotationFactor(HoverCraftMotor *this,Vector3 *velocity,float hullRotationFactor,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(velocity,(MethodInfo *)velocity);
  pSVar1 = (this->fields)._.smoothController;
  if (((pSVar1 == (SmoothCharacterController *)0x0) || (this_00 = (pSVar1->fields).controller, this_00 == (MvCharacterController *)0x0)) || (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_4 = 0;
  uStack_5 = 0;
  pvVar6 = (obj->fields)._._.m_CachedPtr;
  if (pvVar6 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar2 = (code *)swi(3);
    fVar3 = (float)(*pcVar2)();
    return fVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar6,&uStack_4);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar8 = (float)uStack_5 + (float)uStack_5;
  fVar9 = uStack_4._4_4_ + uStack_4._4_4_;
  fVar10 = (float)uStack_4 * ((float)uStack_4 + (float)uStack_4);
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar12 = (pVVar11->rightVector).x;
  uVar13 = (pVVar11->rightVector).y;
  fVar14 = uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4);
  uVar15 = velocity->x;
  uVar16 = velocity->y;
  fVar3 = (pVVar11->rightVector).z;
  return ABS(((1.0 - ((float)uStack_5 * fVar8 + uStack_4._4_4_ * fVar9)) * (float)uVar12 + ((float)uStack_4 * fVar9 - uStack_5._4_4_ * fVar8) * (float)uVar13 + (uStack_5._4_4_ * fVar9 + (float)uStack_4 * fVar8) * fVar3) * (float)uVar15 + ((1.0 - ((float)uStack_5 * fVar8 + fVar10)) * (float)uVar13 + (uStack_5._4_4_ * fVar8 + (float)uStack_4 * fVar9) * (float)uVar12 + (uStack_4._4_4_ * fVar8 - fVar14) * fVar3) * (float)uVar16 + (((float)uStack_4 * fVar8 - uStack_5._4_4_ * fVar9) * (float)uVar12 + (fVar14 + uStack_4._4_4_ * fVar8) * (float)uVar13 + (1.0 - (uStack_4._4_4_ * fVar9 + fVar10)) * fVar3) * velocity->z) * hullRotationFactor;
}


/* Vector3 GetVehicleInputVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_GetVehicleInputVelocity(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocity,MethodInfo *method)

{
  VStack_1.x = velocity->x;
  VStack_1.y = velocity->y;
  VStack_1.z = velocity->z;
  pVVar2 = HoverCraftMotor_GetVehicleInputVelocityClassicCam(&VStack_3,this,&VStack_1,(MethodInfo *)0x0);
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar4;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Vector3 GetVehicleInputVelocityClassicCam(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_GetVehicleInputVelocityClassicCam(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocity,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftMotor);
    LOCK();
    UNLOCK();
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
  if (*(int *)&(TypeInfo__HoverCraftMotor->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_1._0_8_ = *(undefined8 *)velocity;
  method_00 = (MethodInfo *)0x0;
  auStack_1._8_4_ = velocity->z;
  pVVar2 = HoverCraftMotor_HoverCraftFrictionXZ((Vector3 *)&uStack_3,(Vector3 *)auStack_1,(MethodInfo *)0x0);
  bVar4 = (this->fields)._.HandleInput;
  fVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  velocity->x = pVVar2->x;
  velocity->y = fVar5;
  velocity->z = fVar6;
  if (bVar4 != 0) {
    pSVar7 = (this->fields)._.smoothController;
    if ((pSVar7 == (SmoothCharacterController *)0x0) || (pMVar8 = (pSVar7->fields).controller, pMVar8 == (MvCharacterController *)0x0)) goto code_?;
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pIVar10 = *(Il2CppClass **)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    fVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    fVar13 = (float)(*pcRam_?)();
    fVar5 = (this->fields).angularSpeed;
    fVar14 = (this->fields)._.DirectInputMoveMap.x;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar15 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity(StringLiteral_Horizontal,(MethodInfo *)0x0);
    if (pTVar9 == (Transform *)0x0) goto code_?;
    auStack_1._8_4_ = fVar6;
    auStack_1._0_8_ = pIVar10;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar16 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar16,auStack_1,fVar13 * 57.29578 * fVar5 * fVar14 * ABS(fVar15) * 0.017453292);
  }
  if ((0.0 < ABS((this->fields)._.DirectInputMoveMap.z)) || (0.0 < ABS((this->fields)._.DirectInputMoveMap.x))) {
    if ((this->fields)._._VehicleCamera_k__BackingField == (IVehicleCamera *)0x0) goto code_?;
    fVar6 = (float)FUN_?(0,TypeInfo__IVehicleCamera);
    auStack_1._0_8_ = (ulonglong)(uint)(fVar6 * 0.017453292) << 0x20;
    auStack_1._8_8_ = auStack_1._8_8_ & 0xffffffff00000000;
    uStack_3 = (Il2CppClass *)0x0;
    uStack_17 = (Il2CppType *)0x0;
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(auStack_1);
    pSVar7 = (this->fields)._.smoothController;
    if (((pSVar7 == (SmoothCharacterController *)0x0) || (pMVar8 = (pSVar7->fields).controller, pMVar8 == (MvCharacterController *)0x0)) || (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_18 = (undefined1  [8])0x0;
    uStack_19 = (Il2CppType *)0x0;
    pvVar16 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar16,auStack_18);
    fVar6 = (float)uStack_3;
    fVar5 = uStack_3._4_4_ * (float)auStack_18._0_4_;
    fVar14 = uStack_3._4_4_ * (float)auStack_18._4_4_;
    uStack_3 = (Il2CppClass *)CONCAT44((uStack_3._4_4_ * uStack_19._4_4_ + (float)auStack_18._4_4_ * uStack_17._4_4_ + (float)uStack_3 * (float)uStack_19) - (float)auStack_18._0_4_ * (float)uStack_17,((float)uStack_3 * uStack_19._4_4_ + (float)auStack_18._0_4_ * uStack_17._4_4_ + (float)auStack_18._4_4_ * (float)uStack_17) - uStack_3._4_4_ * (float)uStack_19);
    uStack_17 = (Il2CppType *)CONCAT44(((uStack_19._4_4_ * uStack_17._4_4_ - fVar6 * (float)auStack_18._0_4_) - fVar14) - (float)uStack_19 * (float)uStack_17,((float)uStack_19 * uStack_17._4_4_ + uStack_19._4_4_ * (float)uStack_17 + fVar5) - fVar6 * (float)auStack_18._4_4_);
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    auStack_20 = (undefined1  [8])uStack_3;
    pIStack_21 = (Il2CppMethodPointer)uStack_17;
    uStack_3 = (Il2CppClass *)0x0;
    uStack_17 = (Il2CppType *)0x0;
    auStack_1._0_8_ = auStack_18;
    auStack_1._8_8_ = uStack_19;
    fVar6 = (float)(*pcRam_?)();
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(auStack_1,auStack_20,fVar6 * 1.25);
    pSVar7 = (this->fields)._.smoothController;
    if (((pSVar7 == (SmoothCharacterController *)0x0) || (pMVar8 = (pSVar7->fields).controller, pMVar8 == (MvCharacterController *)0x0)) || (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_18 = (undefined1  [8])0x0;
    uStack_19 = (Il2CppType *)0x0;
    pvVar16 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar16);
    fVar6 = ABS(uStack_3._4_4_ * (float)auStack_18._4_4_ + (float)uStack_3 * (float)auStack_18._0_4_ + (float)uStack_17 * (float)uStack_19 + uStack_17._4_4_ * uStack_19._4_4_);
    if (1.0 <= fVar6) {
      fVar6 = 1.0;
    }
    if (fVar6 <= 0.999999) {
      fVar6 = (float)func_?(fVar6);
      fVar6 = (fVar6 + fVar6) * 57.29578;
    }
    else {
      fVar6 = 0.0;
    }
    pSVar7 = (this->fields)._.smoothController;
    if (((pSVar7 == (SmoothCharacterController *)0x0) || (pMVar8 = (pSVar7->fields).controller, pMVar8 == (MvCharacterController *)0x0)) || (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    auStack_18 = (undefined1  [8])uStack_3;
    uStack_19 = uStack_17;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar16 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar16,auStack_18);
    method_00 = (MethodInfo *)(this->fields)._._VehicleCamera_k__BackingField;
    if (method_00 == (MethodInfo *)0x0) goto code_?;
    fVar5 = (float)FUN_?(0,TypeInfo__IVehicleCamera,method_00);
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    fVar14 = (float)(*pcRam_?)();
    fVar14 = fVar14 * 1.25;
    if (fVar14 < 0.0) {
      fVar14 = 0.0;
    }
    else if (1.0 < fVar14) {
      fVar14 = 1.0;
    }
    FUN_?(1,TypeInfo__IVehicleCamera,method_00,(fVar6 - fVar5) * fVar14 + fVar5);
  }
  fVar6 = (this->fields)._.DirectInputMoveMap.z;
  auStack_1._0_8_ = *(undefined8 *)&(this->fields)._.DirectInputMoveMap;
  if (fVar6 != 0.0) {
    pVVar22 = (this->fields)._.vehicleEnergyContainer;
    if (pVVar22 == (VehicleEnergyContainer *)0x0) goto code_?;
    if (((((pVVar22->fields)._UsingEnergy_k__BackingField != 0) && (0.0 < (pVVar22->fields).energyStorage)) && ((pVVar22->fields).consumingEnergy != 0)) && ((0.0 < (pVVar22->fields).energyStorage && (fVar5 = (pVVar22->fields).energyStorage - (pVVar22->fields).consumption, (pVVar22->fields).energyStorage = fVar5, fVar5 < 0.0)))) {
      (pVVar22->fields).energyStorage = 0.0;
    }
  }
  pSVar7 = (this->fields)._.smoothController;
  if (((pSVar7 != (SmoothCharacterController *)0x0) && (pMVar8 = (pSVar7->fields).controller, pMVar8 != (MvCharacterController *)0x0)) && (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMVar8,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    auStack_18 = (undefined1  [8])0x0;
    uStack_19 = (Il2CppType *)0x0;
    pvVar16 = (pTVar9->fields)._._.m_CachedPtr;
    if (pvVar16 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcVar11 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
      uVar12 = func_?(&UNK_?);
      FUN_?(uVar12,0);
      pcVar11 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar11)();
      return pVVar2;
    }
    pcRam_? = pcVar11;
    (*pcRam_?)(pvVar16);
    fVar13 = (float)uStack_19 + (float)uStack_19;
    fVar15 = (float)auStack_18._4_4_ + (float)auStack_18._4_4_;
    fVar5 = ((float)auStack_18._0_4_ + (float)auStack_18._0_4_) * (float)auStack_18._0_4_;
    fVar23 = ((float)auStack_18._0_4_ + (float)auStack_18._0_4_) * uStack_19._4_4_;
    fVar14 = (1.0 - (fVar13 * (float)uStack_19 + fVar5)) * (float)auStack_1._4_4_ + (fVar13 * uStack_19._4_4_ + fVar15 * (float)auStack_18._0_4_) * 0.0 + (fVar13 * (float)auStack_18._4_4_ - fVar23) * fVar6;
    fVar5 = (fVar23 + fVar13 * (float)auStack_18._4_4_) * (float)auStack_1._4_4_ + (fVar13 * (float)auStack_18._0_4_ - fVar15 * uStack_19._4_4_) * 0.0 + (1.0 - (fVar15 * (float)auStack_18._4_4_ + fVar5)) * fVar6;
    pMVar24 = (this->fields)._._.groundState;
    auStack_1._8_4_ = fVar5;
    fVar6 = (1.0 - (fVar13 * (float)uStack_19 + fVar15 * (float)auStack_18._4_4_)) * 0.0 + (fVar15 * (float)auStack_18._0_4_ - fVar13 * uStack_19._4_4_) * (float)auStack_1._4_4_ + (fVar15 * uStack_19._4_4_ + fVar13 * (float)auStack_18._0_4_) * fVar6;
    auStack_1._4_4_ = fVar14;
    auStack_1._0_4_ = fVar6;
    if (pMVar24 != (MVGroundState *)0x0) {
      bVar4 = MVGroundState::MVGroundState_get_Grounded(pMVar24,(MethodInfo *)0x0);
      if (bVar4 != 0) {
        pMVar24 = (this->fields)._._.groundState;
        if (pMVar24 == (MVGroundState *)0x0) goto code_?;
        auStack_20 = *(undefined1 (*) [8])&(pMVar24->fields).groundNormal;
        method_00 = (MethodInfo *)auStack_20;
        pIStack_21 = (Il2CppMethodPointer)CONCAT44(pIStack_21._4_4_,(pMVar24->fields).groundNormal.z);
        uStack_3 = (Il2CppClass *)auStack_1._0_8_;
        uStack_17 = (Il2CppType *)CONCAT44(uStack_17._4_4_,auStack_1._8_4_);
        pVVar2 = MVRigidBody::MVRigidBody_AdjustGroundVelocityToNormal((Vector3 *)auStack_18,(Vector3 *)&uStack_3,(Vector3 *)method_00,(MethodInfo *)0x0);
        auStack_1._0_8_ = *(undefined8 *)pVVar2;
        fVar5 = pVVar2->z;
        fVar14 = (float)((ulonglong)auStack_1._0_8_ >> 0x20);
        fVar6 = (float)auStack_1._0_4_;
      }
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized((Vector3 *)auStack_18,velocity,method_00);
      uVar25._0_4_ = pVVar2->x;
      uVar25._4_4_ = pVVar2->y;
      fVar23 = velocity->y * velocity->y + 0.0 + 0.0;
      fVar15 = velocity->x * velocity->x + 0.0 + velocity->z * velocity->z;
      fVar13 = (float)uVar25._4_4_;
      if ((0.0 < (float)uVar25._4_4_) && ((this->fields).isVerticalThrusting == 0)) {
        fVar13 = (float)uVar25._4_4_ * (this->fields).dragCoefficentUp;
      }
      if ((fVar13 <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
        fVar13 = fVar13 * (this->fields).dragCoefficentDown;
      }
      fVar26 = (this->fields).dragCoefficientXZ;
      fVar27 = pVVar2->z;
      uStack_3 = (Il2CppClass *)(uVar25 & 0xffffffff);
      uStack_17 = (Il2CppType *)CONCAT44(uStack_17._4_4_,fVar27);
      fVar28 = HoverCraftMotor_DragCoefficientXZHullRotationFactor(this,(Vector3 *)&uStack_3,20.0,(MethodInfo *)0x0);
      fVar28 = -fVar28;
      pMVar29 = (this->fields)._.interactableLocal;
      if (pMVar29 != (MVInteractableBase *)0x0) {
        fVar30 = (float)(*(pMVar29->klass->vtable).__unknown_8.methodPtr)(pMVar29,3,(this->fields).thrustFactor);
        fVar31 = (this->fields).mass;
        pVVar22 = (this->fields)._.vehicleEnergyContainer;
        if (pVVar22 != (VehicleEnergyContainer *)0x0) {
          if ((((pVVar22->fields)._UsingEnergy_k__BackingField == 0) || (0.0 < (pVVar22->fields).energyStorage)) || (fVar15 <= 30.0)) {
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar11 = (code *)swi(3);
              pVVar2 = (Vector3 *)(*pcVar11)();
              return pVVar2;
            }
            pcRam_? = pcVar11;
            fVar32 = (float)(*pcRam_?)();
            auStack_18 = *(undefined1 (*) [8])velocity;
            uStack_3 = (Il2CppClass *)CONCAT44(fVar32 * ((fVar14 * fVar30 + fVar26 * 0.0 * fVar15 + fVar13 * fVar23 + fVar28 * 0.0 * fVar15) / fVar31) + (float)((ulonglong)auStack_18 >> 0x20),fVar32 * ((fVar30 * fVar6 + (float)(undefined4)uVar25 * fVar26 * fVar15 + fVar23 * 0.0 + (float)(undefined4)uVar25 * fVar28 * fVar15) / fVar31) + SUB84(auStack_18,0));
            uStack_17 = (Il2CppType *)CONCAT44(uStack_17._4_4_,fVar32 * ((fVar5 * fVar30 + fVar27 * fVar26 * fVar15 + fVar23 * 0.0 + fVar27 * fVar28 * fVar15) / fVar31) + velocity->z);
            pVVar2 = HoverCraftMotor_HandleVerticalThrust((Vector3 *)auStack_18,this,(Vector3 *)&uStack_3,(MethodInfo *)0x0);
            fVar5 = pVVar2->y;
            fVar6 = pVVar2->z;
            velocity->x = pVVar2->x;
            velocity->y = fVar5;
            velocity->z = fVar6;
          }
          fVar6 = velocity->z;
          fVar5 = velocity->y;
          __return_storage_ptr__->x = velocity->x;
          __return_storage_ptr__->y = fVar5;
          __return_storage_ptr__->z = fVar6;
          return __return_storage_ptr__;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar11)();
  return pVVar2;
}


/* Vector3 GetVehicleVelocity(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_GetVehicleVelocity(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocity,Vector3 *baseVelocity,MethodInfo *method)

{
  VStack_1.x = velocity->x;
  VStack_1.y = velocity->y;
  VStack_1.z = velocity->z;
  pVVar2 = HoverCraftMotor_GetVehicleInputVelocityClassicCam(&VStack_3,this,&VStack_1,(MethodInfo *)0x0);
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  velocity->x = pVVar2->x;
  velocity->y = fVar4;
  velocity->z = fVar5;
  fVar5 = SimpleVehicleMotorBase::SimpleVehicleMotorBase_WaterProximity((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
  if (0.01 < fVar5) {
    VStack_3.x = velocity->x;
    VStack_3.y = velocity->y;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      pVVar2 = (Vector3 *)(*pcVar6)();
      return pVVar2;
    }
    pcRam_? = pcVar6;
    fVar4 = velocity->z;
    fVar8 = (float)(*pcRam_?)();
    fVar5 = fVar8 * 50.0 * fVar5 + VStack_3.y;
    if (0.0 < fVar5) {
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (40.0 < fVar5) {
        fVar5 = 40.0;
      }
    }
    velocity->x = VStack_3.x;
    velocity->y = fVar5;
    velocity->z = fVar4;
  }
  else {
    this_00 = (this->fields)._._.groundState;
    if (this_00 == (MVGroundState *)0x0) goto code_?;
    bVar9 = MVGroundState::MVGroundState_get_Grounded(this_00,(MethodInfo *)0x0);
    if (bVar9 == 0) {
      if ((this->fields).isVerticalThrusting != 0) {
        (this->fields)._._.density = 0.2;
      }
      VStack_1.z = (this->fields).velocityPrevFrame.z;
      VStack_1.x = (this->fields).velocityPrevFrame.x;
      VStack_1.y = (this->fields).velocityPrevFrame.y;
      VStack_3.z = velocity->z;
      VStack_3.x = velocity->x;
      VStack_3.y = velocity->y;
      pVVar2 = MVRigidBody::MVRigidBody_ApplyGravity(aVStack_10,(MVRigidBody *)this,&VStack_3,&VStack_1,(this->fields)._.interactableLocal,(MethodInfo *)0x0);
      fVar4 = pVVar2->y;
      fVar5 = pVVar2->z;
      velocity->x = pVVar2->x;
      velocity->y = fVar4;
      velocity->z = fVar5;
      (this->fields)._._.density = 1.3;
    }
  }
  this_01 = (this->fields).bounceState;
  if (this_01 != (BounceState *)0x0) {
    VStack_3.x = velocity->x;
    VStack_3.y = velocity->y;
    VStack_3.z = velocity->z;
    pVVar2 = BounceState::BounceState_ApplyBounceVelocity(aVStack_10,this_01,&VStack_3,(MethodInfo *)0x0);
    VStack_3.x = pVVar2->x;
    VStack_3.y = pVVar2->y;
    VStack_3.z = pVVar2->z;
    pVVar2 = MVRigidBody::MVRigidBody_GetImpulse(aVStack_10,(MVRigidBody *)this,&VStack_3,(this->fields)._.interactableLocal,(MethodInfo *)0x0);
    VStack_3.x = pVVar2->x;
    VStack_3.y = pVVar2->y;
    VStack_3.z = pVVar2->z;
    pVVar2 = MVRigidBody::MVRigidBody_VelocityDamping(aVStack_10,&VStack_3,1.0,(this->fields)._.interactableLocal,(MethodInfo *)0x0);
    fVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    __return_storage_ptr__->x = pVVar2->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    return __return_storage_ptr__;
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar6)();
  return pVVar2;
}


/* Vector3 HandleVerticalThrust(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HandleVerticalThrust(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocity,MethodInfo *method)

{
  bVar1 = (this->fields)._.Jump;
  (this->fields).isVerticalThrusting = 0;
  if (bVar1 == 0) {
    if ((this->fields).wasJumping != 0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar2)();
        return pVVar4;
      }
      pcRam_? = pcVar2;
      fVar5 = (float)(*pcRam_?)();
      (this->fields).stoppedJumpingTime = fVar5;
      (this->fields).wasJumping = 0;
    }
    pfVar6 = &(this->fields).availableVerticalThrustTime;
    if (*pfVar6 <= 0.6 && *pfVar6 != 0.6) {
      fVar5 = (this->fields).availableVerticalThrustTime;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar2)();
        return pVVar4;
      }
      pcRam_? = pcVar2;
      fVar7 = (float)(*pcRam_?)();
      fVar5 = fVar7 * 0.6 + fVar5;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (0.6 < fVar5) {
        fVar5 = 0.6;
      }
      (this->fields).availableVerticalThrustTime = fVar5;
    }
  }
  else {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar2)();
      return pVVar4;
    }
    pcRam_? = pcVar2;
    fVar5 = (float)(*pcRam_?)();
    if (0.3 <= fVar5 - (this->fields).stoppedJumpingTime) {
      fVar5 = (this->fields).availableVerticalThrustTime;
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar2)();
        return pVVar4;
      }
      pcRam_? = pcVar2;
      fVar7 = (float)(*pcRam_?)();
      fVar5 = fVar5 - fVar7;
      if (fVar5 < 0.0) {
        fVar5 = 0.0;
      }
      else if (0.6 < fVar5) {
        fVar5 = 0.6;
      }
      (this->fields).availableVerticalThrustTime = fVar5;
      if (fVar5 == 0.0) {
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).stoppedJumpingTime = fVar5;
        (this->fields).wasJumping = 0;
      }
      else {
        pVVar8 = (this->fields)._.vehicleEnergyContainer;
        if (pVVar8 == (VehicleEnergyContainer *)0x0) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          pVVar4 = (Vector3 *)(*pcVar2)();
          return pVVar4;
        }
        if (((pVVar8->fields)._UsingEnergy_k__BackingField == 0) || (0.0 < (pVVar8->fields).energyStorage)) {
          (this->fields).isVerticalThrusting = 1;
          if ((this->fields).wasJumping == 0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            fVar5 = (this->fields).jumpForce;
            pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
            uVar10 = (pVVar9->upVector).x;
            uVar11 = (pVVar9->upVector).y;
            uVar12 = velocity->x;
            uVar13 = velocity->y;
            fVar7 = (pVVar9->upVector).z;
            velocity->x = fVar5 * (float)uVar10 + (float)uVar12;
            velocity->y = fVar5 * (float)uVar11 + (float)uVar13;
            velocity->z = fVar5 * fVar7 + velocity->z;
          }
          (this->fields).wasJumping = 1;
        }
      }
    }
  }
  fVar5 = velocity->z;
  fVar7 = velocity->y;
  __return_storage_ptr__->x = velocity->x;
  __return_storage_ptr__->y = fVar7;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Vector3 HoverCraftFrictionXZ(Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HoverCraftFrictionXZ(Vector3 *__return_storage_ptr__,Vector3 *velocity,MethodInfo *method)

{
  uVar1._0_4_ = velocity->x;
  uVar1._4_4_ = velocity->y;
  fVar2 = velocity->z;
  uStack_3 = uVar1 & 0xffffffff;
  fStack_4 = fVar2;
  fVar5 = (float)FUN_?(&uStack_3);
  if (fVar5 < 0.001) {
    velocity->x = 0.0;
    velocity->z = 0.0;
    fVar2 = velocity->y;
    __return_storage_ptr__->x = velocity->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = 0.0;
  }
  else {
    uStack_6 = uStack_3;
    fStack_7 = fVar2;
    fVar8 = (float)FUN_?(&uStack_6);
    fVar9 = (float)uStack_3;
    if (1e-05 < fVar8) {
      fVar10 = fVar2 / fVar8;
      uStack_3 = CONCAT44(0.0 / fVar8,(float)uStack_3 / fVar8);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
      uStack_3._0_4_ = (pVVar11->zeroVector).x;
      uStack_3._4_4_ = (pVVar11->zeroVector).y;
      fVar10 = (pVVar11->zeroVector).z;
    }
    pcVar12 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar12 = (code *)FUN_?(&UNK_?), pcVar12 == (code *)0x0)) {
      uVar13 = func_?(&UNK_?);
      FUN_?(uVar13,0);
      pcVar12 = (code *)swi(3);
      pVVar14 = (Vector3 *)(*pcVar12)();
      return pVVar14;
    }
    pcRam_? = pcVar12;
    fVar8 = (float)(*pcRam_?)();
    fVar8 = fVar8 * (1.0 / (fVar5 * 0.125 + 1.0)) * 10.0;
    fVar5 = fVar8 * (float)uStack_3;
    uStack_3._4_4_ = fVar8 * uStack_3._4_4_;
    fVar8 = fVar8 * fVar10;
    if (fVar9 * fVar9 + 0.0 + fVar2 * fVar2 < uStack_3._4_4_ * uStack_3._4_4_ + fVar5 * fVar5 + fVar8 * fVar8) {
      uStack_3._4_4_ = 0.0;
      fVar8 = fVar2;
      fVar5 = fVar9;
    }
    uVar15 = velocity->x;
    fVar2 = velocity->y;
    fVar9 = velocity->z;
    __return_storage_ptr__->x = (float)uVar15 - fVar5;
    __return_storage_ptr__->y = fVar2 - uStack_3._4_4_;
    __return_storage_ptr__->z = fVar9 - fVar8;
  }
  return __return_storage_ptr__;
}


/* Vector3 HullRotationDrag(Vector3, Single, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_HullRotationDrag(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocityNormal,float velocitySquareMagnitude,float hullRotationFactor,MethodInfo *method)

{
  velocityNormal->y = 0.0;
  uVar1._0_4_ = velocityNormal->x;
  uVar1._4_4_ = velocityNormal->y;
  fVar2 = velocityNormal->z;
  aVStack_3[0]._0_8_ = uVar1;
  aVStack_3[0].z = fVar2;
  fVar4 = HoverCraftMotor_DragCoefficientXZHullRotationFactor(this,aVStack_3,hullRotationFactor,(MethodInfo *)0x0);
  fVar4 = -fVar4;
  __return_storage_ptr__->x = fVar4 * (float)uVar1 * velocitySquareMagnitude;
  __return_storage_ptr__->y = fVar4 * uVar1._4_4_ * velocitySquareMagnitude;
  __return_storage_ptr__->z = fVar4 * fVar2 * velocitySquareMagnitude;
  return __return_storage_ptr__;
}


/* Void Init(SmoothCharacterController, VehicleInteractable, VehicleEnergyContainerConfig) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_Init(HoverCraftMotor *this,SmoothCharacterController *characterController,VehicleInteractable *interactableLocalParam,VehicleEnergyContainerConfig *vehicleEnergyContainerConfig,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__BounceState__HandleMoveHit_MVControllerColliderHit_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__BounceState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_1.usingEnergy = vehicleEnergyContainerConfig->usingEnergy;
  VStack_1._1_3_ = *(undefined3 *)&vehicleEnergyContainerConfig->field_0x1;
  VStack_1.storage = vehicleEnergyContainerConfig->storage;
  VStack_1.consumption = vehicleEnergyContainerConfig->consumption;
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Init((SimpleVehicleMotorBase *)this,characterController,interactableLocalParam,&VStack_1,(MethodInfo *)0x0);
  pBVar2 = (BounceState *)FUN_?(TypeInfo__BounceState);
  BounceState::BounceState__ctor(pBVar2,(MVInteractable *)interactableLocalParam,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).bounceState = pBVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).bounceState >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  if ((characterController == (SmoothCharacterController *)0x0) || (pMVar8 = (characterController->fields).controller, pMVar8 == (MvCharacterController *)0x0)) {
    FUN_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pBVar2 = (this->fields).bounceState;
  pAVar10 = (pMVar8->fields).OnControllerColliderHit;
  pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<MVControllerColliderHit>);
  FUN_?(pDVar11,pBVar2);
  pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
  pAVar12 = TypeInfo__System__Action<MVControllerColliderHit>;
  if (pDVar11 == (Delegate *)0x0) {
    (pMVar8->fields).OnControllerColliderHit = (Action_1_MVControllerColliderHit_ *)0x0;
  }
  else {
    pAVar10 = (Action_1_MVControllerColliderHit_ *)FUN_?(pDVar11,TypeInfo__System__Action<MVControllerColliderHit>);
    if (pAVar10 == (Action_1_MVControllerColliderHit_ *)0x0) {
      FUN_?(pDVar11,pAVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (pMVar8->fields).OnControllerColliderHit = pAVar10;
    pAVar12 = TypeInfo__System__Action<MVControllerColliderHit>;
    lVar13 = FUN_?(pDVar11,TypeInfo__System__Action<MVControllerColliderHit>);
    if (lVar13 == 0) {
      FUN_?(pDVar11,pAVar12);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&(pMVar8->fields).OnControllerColliderHit >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  (this->fields)._._.density = 1.3;
  return;
}


/* Void OnLocalVehicleEnter() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_OnLocalVehicleEnter(HoverCraftMotor *this,MethodInfo *method)

{
  (this->fields).dragCoefficientXZ = (this->fields).dragCoefficientXZFromInit;
  return;
}


/* Void OnLocalVehicleLeave() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_OnLocalVehicleLeave(HoverCraftMotor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftMotor);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).z;
  fVar3 = (pVVar1->zeroVector).y;
  (this->fields)._.DirectInputMoveMap.x = (pVVar1->zeroVector).x;
  (this->fields)._.DirectInputMoveMap.y = fVar3;
  (this->fields)._.DirectInputMoveMap.z = fVar2;
  if (*(int *)&(TypeInfo__HoverCraftMotor->_1).field_0x1c == 0) {
    FUN_?();
  }
  pLVar4 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
  if (pLVar4 != (List_1_System_Single_ *)0x0) {
    if ((uint)(pLVar4->fields)._size < 9) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pSVar6 = (pLVar4->fields)._items;
    if (pSVar6 != (Single__Array *)0x0) {
      if (8 < (uint)pSVar6->max_length) {
        (this->fields).dragCoefficientXZ = pSVar6->vector[8];
        return;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Vector3 PlatformerDriftCorrection(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_PlatformerDriftCorrection(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocity,Vector3 *targetDir,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftMotor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = velocity->x;
  uVar1._4_4_ = velocity->y;
  fVar2 = velocity->z;
  VStack_3._0_8_ = uVar1 & 0xffffffff;
  VStack_3.z = fVar2;
  fVar4 = (float)FUN_?(&VStack_3);
  VStack_5.x = VStack_3.x;
  VStack_5.y = VStack_3.y;
  VStack_5.z = fVar2;
  fVar2 = (float)FUN_?(&VStack_5);
  if (1e-05 < fVar2) {
    uVar6._0_4_ = VStack_3.x / fVar2;
    uVar6._4_4_ = 0.0 / fVar2;
    fVar2 = VStack_3.z / fVar2;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar7 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar6._0_4_ = (pVVar7->zeroVector).x;
    uVar6._4_4_ = (pVVar7->zeroVector).y;
    fVar2 = (pVVar7->zeroVector).z;
    VStack_5._0_8_ = uVar6;
  }
  if (*(int *)&(TypeInfo__HoverCraftMotor->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_5.x = targetDir->x;
  VStack_5.y = targetDir->y;
  VStack_5.z = targetDir->z;
  VStack_3.y = uVar6._4_4_;
  VStack_3.x = (float)uVar6;
  VStack_3.z = fVar2;
  pVVar8 = HoverCraftMotor_RotateTowardsAroundY(aVStack_9,&VStack_3,&VStack_5,10.0,(MethodInfo *)0x0);
  uVar10 = pVVar8->x;
  velocity->z = pVVar8->z * fVar4;
  uVar11 = velocity->y;
  __return_storage_ptr__->x = (float)uVar10 * fVar4;
  __return_storage_ptr__->y = (float)uVar11;
  velocity->x = (float)uVar10 * fVar4;
  velocity->y = (float)uVar11;
  __return_storage_ptr__->z = velocity->z;
  return __return_storage_ptr__;
}


/* Void Reset() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_Reset(HoverCraftMotor *this,MethodInfo *method)

{
  SimpleVehicleMotorBase::SimpleVehicleMotorBase_Reset((SimpleVehicleMotorBase *)this,(MethodInfo *)0x0);
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
  (this->fields).velocityPrevFrame.x = (pVVar2->zeroVector).x;
  (this->fields).velocityPrevFrame.y = fVar3;
  (this->fields).velocityPrevFrame.z = fVar4;
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


/* Vector3 RotateTowardsAroundY(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_RotateTowardsAroundY(Vector3 *__return_storage_ptr__,Vector3 *vec,Vector3 *target,float speedInDegrees,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  lStack_1._0_4_ = target->x;
  lStack_1._4_4_ = target->y;
  uVar2._0_4_ = vec->x;
  uVar2._4_4_ = vec->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->upVector).x;
  uVar5 = (pVVar3->upVector).y;
  uVar6 = CONCAT44(lStack_1._4_4_,(float)lStack_1._4_4_ * (float)uVar2._4_4_ + (float)(undefined4)lStack_1 * (float)(undefined4)uVar2 + target->z * vec->z);
  uStack_7 = uVar2;
  fVar8 = (float)func_?((target->z * (float)uVar2._4_4_ - (float)lStack_1._4_4_ * vec->z) * (float)uVar4 + ((float)(undefined4)lStack_1 * vec->z - target->z * (float)(undefined4)uVar2) * (float)uVar5 + ((float)lStack_1._4_4_ * (float)(undefined4)uVar2 - (float)(undefined4)lStack_1 * (float)uVar2._4_4_) * (pVVar3->upVector).z,uVar6);
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar9 = (code *)swi(3);
    pVVar10 = (Vector3 *)(*pcVar9)();
    return pVVar10;
  }
  pcRam_? = pcVar9;
  fVar11 = (float)(*pcRam_?)();
  fVar12 = fVar11 * speedInDegrees;
  if (ABS(fVar8 * 57.29578) < fVar11 * speedInDegrees) {
    fVar12 = ABS(fVar8 * 57.29578);
  }
  fVar11 = 1.0;
  if (fVar8 * 57.29578 < 0.0) {
    fVar11 = -1.0;
  }
  lStack_1 = (ulonglong)(uint)(fVar11 * fVar12 * 0.017453292) << 0x20;
  uStack_13 = 0;
  uStack_7 = 0;
  uStack_14 = 0;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar9 = (code *)swi(3);
    pVVar10 = (Vector3 *)(*pcVar9)();
    return pVVar10;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(&lStack_1,&uStack_7);
  fVar8 = vec->z;
  fVar12 = (float)uStack_14 + (float)uStack_14;
  fVar11 = uStack_7._4_4_ + uStack_7._4_4_;
  fVar15 = ((float)uStack_7 + (float)uStack_7) * (float)uStack_7;
  fVar16 = ((float)uStack_7 + (float)uStack_7) * uStack_14._4_4_;
  __return_storage_ptr__->x = (1.0 - (fVar12 * (float)uStack_14 + fVar11 * uStack_7._4_4_)) * (float)(undefined4)uVar2 + (fVar11 * (float)uStack_7 - fVar12 * uStack_14._4_4_) * (float)uVar2._4_4_ + (fVar11 * uStack_14._4_4_ + fVar12 * (float)uStack_7) * fVar8;
  __return_storage_ptr__->y = (1.0 - (fVar12 * (float)uStack_14 + fVar15)) * (float)uVar2._4_4_ + (fVar12 * uStack_14._4_4_ + fVar11 * (float)uStack_7) * (float)(undefined4)uVar2 + (fVar12 * uStack_7._4_4_ - fVar16) * fVar8;
  __return_storage_ptr__->z = (fVar12 * (float)uStack_7 - fVar11 * uStack_14._4_4_) * (float)(undefined4)uVar2 + (fVar16 + fVar12 * uStack_7._4_4_) * (float)uVar2._4_4_ + (1.0 - (fVar11 * uStack_7._4_4_ + fVar15)) * fVar8;
  return __return_storage_ptr__;
}


/* Void UpdateConfiguration(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_UpdateConfiguration(HoverCraftMotor *this,Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__HoverCraftMotor);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_speed);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_jumpHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_turningSpeed);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
    return;
  }
  if (*(int *)&(TypeInfo__HoverCraftMotor->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__HoverCraftMotor);
  }
  pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
  if (pLVar1 != (List_1_System_Single_ *)0x0) {
    iVar2 = (pLVar1->fields)._size;
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    iVar2 = Extensions::Extensions_GetClampedInt(data,StringLiteral_speed,1,iVar2,8,(MethodInfo *)0x0);
    pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
    if (pLVar1 != (List_1_System_Single_ *)0x0) {
      if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pSVar4 = (pLVar1->fields)._items;
      if (pSVar4 != (Single__Array *)0x0) {
        if (iVar2 - 1U < (uint)pSVar4->max_length) {
          fVar5 = pSVar4->vector[(longlong)iVar2 + -1];
          pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
          if ((pLVar1->fields)._size == 0) goto code_?;
          pSVar4 = (pLVar1->fields)._items;
          if ((int)pSVar4->max_length != 0) {
            fVar6 = pSVar4->vector[0];
            pLVar1 = TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap;
            if (pLVar1 == (List_1_System_Single_ *)0x0) goto code_?;
            iVar7 = (pLVar1->fields)._size;
            if ((uint)(pLVar1->fields)._size <= iVar7 - 1U) goto code_?;
            pSVar4 = (pLVar1->fields)._items;
            if (iVar7 - 1U < (uint)pSVar4->max_length) {
              if ((fVar5 < fVar6) || (fVar6 = pSVar4->vector[(longlong)iVar7 + -1], fVar6 < fVar5)) {
                fVar5 = fVar6;
              }
              (this->fields).dragCoefficientXZ = fVar5;
              (this->fields).dragCoefficientXZFromInit = fVar5;
              fVar5 = Extensions::Extensions_GetClampedFloat(data,StringLiteral_jumpHeight,0.0,20.0,(this->fields).jumpForce,(MethodInfo *)0x0);
              (this->fields).jumpForce = fVar5;
              fVar5 = Extensions::Extensions_GetClampedFloat(data,StringLiteral_turningSpeed,0.5,6.0,(this->fields).angularSpeed,(MethodInfo *)0x0);
              (this->fields).angularSpeed = fVar5;
              return;
            }
          }
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void VehicleUpdateFunction() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_VehicleUpdateFunction(HoverCraftMotor *this,MethodInfo *method)

{
  fVar1 = (this->fields).velocityPrevFrame.z;
  uVar2._0_4_ = (this->fields).velocityPrevFrame.x;
  uVar2._4_4_ = (this->fields).velocityPrevFrame.y;
  VStack_3.x = 0.0;
  VStack_3.y = 0.0;
  VStack_3.z = 0.0;
  pSVar4 = (this->fields)._.smoothController;
  if ((pSVar4 != (SmoothCharacterController *)0x0) && (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0)) {
    this_00 = (this->fields)._.movableMotorState;
    if (this_00 != (MVMovableMotorState *)0x0) {
      VStack_6._0_8_ = uVar2;
      VStack_6.z = fVar1;
      bVar7 = MVMovableMotorState::MVMovableMotorState_Move(this_00,&VStack_6,pMVar5,(pMVar5->fields).elipsoidRadius.x,(this->fields)._._.groundState,&VStack_3,(MethodInfo *)0x0);
      fVar8 = VStack_3.z;
      uVar9 = VStack_3._0_8_;
      VStack_6.x = VStack_3.x;
      VStack_6.y = VStack_3.y;
      VStack_6.z = VStack_3.z;
      VStack_10._0_8_ = uVar2;
      VStack_10.z = fVar1;
      pVVar11 = HoverCraftMotor_GetVehicleVelocity(aVStack_12,this,&VStack_10,&VStack_6,(MethodInfo *)0x0);
      uVar13 = VStack_3._0_8_;
      fVar14 = pVVar11->z;
      if (bVar7 == 0) {
        VStack_3.x = (float)uVar9;
        VStack_3.y = SUB84(uVar9,4);
        VStack_6.x = VStack_3.x;
        VStack_6.y = VStack_3.y;
        uVar15 = pVVar11->x;
        uVar16 = pVVar11->y;
        fVar17 = (float)uVar15;
        fVar18 = (float)uVar16;
        fVar19 = fVar8;
        VStack_3._0_8_ = uVar13;
      }
      else {
        fVar17 = pVVar11->x;
        fVar18 = pVVar11->y;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar20 = TypeInfo__UnityEngine__Vector3->static_fields;
        VStack_6.x = (pVVar20->zeroVector).x;
        VStack_6.y = (pVVar20->zeroVector).y;
        fVar19 = (pVVar20->zeroVector).z;
      }
      VStack_10.y = fVar18;
      VStack_10.x = fVar17;
      pcVar21 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar21 = (code *)swi(3);
        (*pcVar21)();
        return;
      }
      pcRam_? = pcVar21;
      fVar22 = (float)(*pcRam_?)();
      pSVar4 = (this->fields)._.smoothController;
      if ((pSVar4 != (SmoothCharacterController *)0x0) && (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0)) {
        VStack_6.y = (VStack_10.y + VStack_6.y) * fVar22;
        VStack_6.x = (VStack_10.x + VStack_6.x) * fVar22;
        VStack_6.z = (fVar14 + fVar19) * fVar22;
        (*(pMVar5->klass->vtable).__unknown_1.methodPtr)(pMVar5,&VStack_6,(pMVar5->klass->vtable).__unknown_1.method);
        pSVar4 = (this->fields)._.smoothController;
        if ((pSVar4 != (SmoothCharacterController *)0x0) && (this_01 = (this->fields)._._.groundState, this_01 != (MVGroundState *)0x0)) {
          VStack_6.y = fVar18;
          VStack_6.x = fVar17;
          VStack_6.z = fVar14;
          MVGroundState::MVGroundState_Update(this_01,(pSVar4->fields).controller,&VStack_6,0.0,(MethodInfo *)0x0);
          pSVar4 = (this->fields)._.smoothController;
          if ((pSVar4 != (SmoothCharacterController *)0x0) && (pMVar5 = (pSVar4->fields).controller, pMVar5 != (MvCharacterController *)0x0)) {
            VStack_6.x = (pMVar5->fields)._Velocity_k__BackingField.x;
            VStack_6.y = (pMVar5->fields)._Velocity_k__BackingField.y;
            fVar14 = (pMVar5->fields)._Velocity_k__BackingField.z;
            pcVar21 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar21 = (code *)FUN_?(&UNK_?), pcVar21 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar21 = (code *)swi(3);
              (*pcVar21)();
              return;
            }
            pcRam_? = pcVar21;
            fVar17 = (float)(*pcRam_?)();
            fVar14 = fVar14 / fVar17;
            (this->fields).velocityPrevFrame.x = VStack_6.x / fVar17;
            (this->fields).velocityPrevFrame.y = VStack_6.y / fVar17;
            (this->fields).velocityPrevFrame.z = fVar14;
            if (bVar7 == 0) {
              (this->fields).velocityPrevFrame.x = VStack_6.x / fVar17 - VStack_3.x;
              (this->fields).velocityPrevFrame.y = VStack_6.y / fVar17 - VStack_3.y;
              (this->fields).velocityPrevFrame.z = fVar14 - fVar8;
            }
            this_02 = (this->fields)._.impactState;
            if (this_02 != (ImpactState *)0x0) {
              VStack_10.x = (this->fields).velocityPrevFrame.x;
              VStack_10.y = (this->fields).velocityPrevFrame.y;
              VStack_10.z = (this->fields).velocityPrevFrame.z;
              interactableLocal = (this->fields)._.interactableLocal;
              VStack_6._0_8_ = uVar2;
              VStack_6.z = fVar1;
              fVar1 = ImpactState::ImpactState_UpdateImpactState(this_02,&VStack_10,&VStack_6,interactableLocal,(MethodInfo *)0x0);
              if (fVar1 != 0.0) {
                pMVar23 = (this->fields)._.interactableLocal;
                if (pMVar23 == (MVInteractableBase *)0x0) goto code_?;
                pIVar24 = (pMVar23->klass->vtable).__unknown.methodPtr;
                (*pIVar24)(pMVar23,pIVar24,0,CONCAT71((int7)((ulonglong)interactableLocal >> 8),5),(pMVar23->klass->vtable).__unknown.method);
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
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Vector3 VerticalDrag(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_VerticalDrag(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocityNormal,float velocitySquareMagnitude,MethodInfo *method)

{
  velocityNormal->x = 0.0;
  velocityNormal->z = 0.0;
  if ((0.0 < velocityNormal->y) && ((this->fields).isVerticalThrusting == 0)) {
    velocityNormal->y = (this->fields).dragCoefficentUp * velocityNormal->y;
  }
  if ((velocityNormal->y <= 0.0) && ((this->fields).isVerticalThrusting == 0)) {
    velocityNormal->y = (this->fields).dragCoefficentDown * velocityNormal->y;
  }
  uVar1 = velocityNormal->x;
  fVar2 = velocityNormal->y;
  fVar3 = velocityNormal->z;
  __return_storage_ptr__->x = (float)uVar1 * velocitySquareMagnitude;
  __return_storage_ptr__->y = fVar2 * velocitySquareMagnitude;
  __return_storage_ptr__->z = fVar3 * velocitySquareMagnitude;
  return __return_storage_ptr__;
}


/* Vector3 XZDrag(Vector3, Single) */

Vector3 * Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_XZDrag(Vector3 *__return_storage_ptr__,HoverCraftMotor *this,Vector3 *velocityNormal,float velocitySquareMagnitude,MethodInfo *method)

{
  fVar1 = (this->fields).dragCoefficientXZ;
  velocityNormal->y = 0.0;
  uVar2 = velocityNormal->x;
  uVar3 = velocityNormal->y;
  fVar4 = velocityNormal->z;
  __return_storage_ptr__->x = fVar1 * (float)uVar2 * velocitySquareMagnitude;
  __return_storage_ptr__->y = fVar1 * (float)uVar3 * velocitySquareMagnitude;
  __return_storage_ptr__->z = fVar1 * fVar4 * velocitySquareMagnitude;
  return __return_storage_ptr__;
}


/* HoverCraftMotor() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__HoverCraftMotor);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__Add_float_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<float>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<float>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (List_1_System_Single_ *)FUN_?(TypeInfo__System__Collections__Generic__List<float>);
  FUN_?(this,MethodInfo__System__Collections__Generic__List<float>__List__);
  pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
  if (this != (List_1_System_Single_ *)0x0) {
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -1000.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-1000.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -500.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-500.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -200.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-200.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -65.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-65.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -30.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-30.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -15.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-15.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -6.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-6.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -2.0;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-2.0,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 == (Single__Array *)0x0) goto code_?;
    uVar4 = (this->fields)._size;
    if (uVar4 < (uint)pSVar3->max_length) {
      (this->fields)._size = uVar4 + 1;
      if ((uint)pSVar3->max_length <= uVar4) goto code_?;
      pSVar3->vector[(int)uVar4] = -1.4;
    }
    else {
      mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-1.4,pMVar1->klass->rgctx_data[0xe].method);
    }
    pMVar1 = MethodInfo__System__Collections__Generic__List<float>__Add_float_;
    piVar2 = &(this->fields)._version;
    *piVar2 = *piVar2 + 1;
    pSVar3 = (this->fields)._items;
    if (pSVar3 != (Single__Array *)0x0) {
      uVar4 = (this->fields)._size;
      if (uVar4 < (uint)pSVar3->max_length) {
        (this->fields)._size = uVar4 + 1;
        if ((uint)pSVar3->max_length <= uVar4) {
code_?:
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pSVar3->vector[(int)uVar4] = -1.0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Single]::List_1_System_Single__AddWithResize(this,-1.0,pMVar1->klass->rgctx_data[0xe].method);
      }
      TypeInfo__HoverCraftMotor->static_fields->speedDragXZMap = this;
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)TypeInfo__HoverCraftMotor->static_fields >> 0xc);
        uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
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


/* HoverCraftMotor() */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor__ctor(HoverCraftMotor *this,MethodInfo *method)

{
  (this->fields).thrustFactor = 15000.0;
  (this->fields).dragCoefficientXZFromInit = -2.0;
  (this->fields).dragCoefficientXZ = -2.0;
  (this->fields).dragCoefficentUp = 10.0;
  (this->fields).dragCoefficentDown = -50.0;
  (this->fields).mass = 330.0;
  (this->fields).angularSpeed = 3.4;
  (this->fields).availableVerticalThrustTime = 0.6;
  (this->fields).jumpForce = 4.0;
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
  explosionEvents = (RuntimeEventType__Enum__Array *)FUN_?(TypeInfo__MV__Common__RuntimeEventType,3);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1((Array *)explosionEvents,__831D17CBF55E6A6EBB90B45C3EC4F41A557F6262DCEE4D6EA14D12FBD179E5BD_Field,(MethodInfo *)0x0);
  this_00 = (ImpactState *)FUN_?(TypeInfo__ImpactState);
  ImpactState::ImpactState__ctor(this_00,explosionEvents,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields)._.impactState = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.impactState >> 0xc);
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
  pMVar6 = (MVGroundState *)FUN_?(TypeInfo__MVGroundState);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
  bVar1 = iRam_? != 0;
  (pMVar6->fields).groundMaterial = pMVar7;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&pMVar6->fields >> 0xc);
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
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_8 = (ulonglong)uVar2 << 0x20;
  uVar9 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uStack_11._0_2_ = (ushort)(bVar10 != 0) << 8;
  uStack_11 = (uint)CONCAT12(1,(short)uStack_11);
  bVar1 = cRam_? == '\0';
  (pMVar6->fields).grounded.currentCryptoKey = uVar9;
  *(undefined3 *)&(pMVar6->fields).grounded.field_0x1 = lStack_8._1_3_;
  (pMVar6->fields).grounded.hiddenValue = lStack_8._4_4_;
  (pMVar6->fields).grounded.fakeValue = (undefined1)uStack_11;
  (pMVar6->fields).grounded.fakeValueChanged = uStack_11._1_1_;
  (pMVar6->fields).grounded.inited = uStack_11._2_1_;
  (pMVar6->fields).grounded.field_0xb = uStack_11._3_1_;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar13 = (pVVar12->zeroVector).y;
  fVar14 = (pVVar12->zeroVector).z;
  (pMVar6->fields).groundNormal.x = (pVVar12->zeroVector).x;
  (pMVar6->fields).groundNormal.y = fVar13;
  (pMVar6->fields).groundNormal.z = fVar14;
  (this->fields)._._.groundState = pMVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.groundState >> 0xc);
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
  (this->fields)._._.weight = 1.0;
  (this->fields)._._.density = 1.0;
  (this->fields)._._.isPlayerControlled = 1;
  pLVar15 = (List_1_UnityEngine_Vector3_ *)FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  FUN_?(pLVar15,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  bVar1 = iRam_? != 0;
  (this->fields)._._.impulseVectors = pLVar15;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.impulseVectors >> 0xc);
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
  (this->fields)._._._.findWorldObjectParent = 1;
  if (bVar1) {
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


/* Boolean get_IsMovementLocked() */

bool Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_get_IsMovementLocked(HoverCraftMotor *this,MethodInfo *method)

{
  return (this->fields)._IsMovementLocked_k__BackingField;
}


/* Void set_IsMovementLocked(Boolean) */

void Assembly-CSharp.dll::HoverCraftMotor::HoverCraftMotor_set_IsMovementLocked(HoverCraftMotor *this,bool value,MethodInfo *method)

{
  (this->fields)._IsMovementLocked_k__BackingField = value;
  return;
}

