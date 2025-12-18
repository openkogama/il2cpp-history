
/* MvCharacterController CloneToGameObject(GameObject, GameObject) */

MvCharacterController *
Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_CloneToGameObject
          (MVCharacterController3D *this,GameObject *targetGameObject,GameObject *seat,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (targetGameObject != (GameObject *)0x0) {
    pMVar1 = (MvCharacterController *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (targetGameObject,
                        MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                       );
    fVar2 = (this->fields)._.elipsoidRadius.x;
    fVar3 = (this->fields)._.elipsoidRadius.y;
    if ((seat != (GameObject *)0x0) &&
       (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (seat,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMStack_4 = (MonitorData *)0x0;
      fStack_5 = 0.0;
      pvVar6 = (obj->fields)._._.m_CachedPtr;
      if (pvVar6 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pMVar1 = (MvCharacterController *)(*pcVar7)();
        return pMVar1;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar8 = func_?(&UNK_?);
        FUN_?(uVar8,0);
        pcVar7 = (code *)swi(3);
        pMVar1 = (MvCharacterController *)(*pcVar7)();
        return pMVar1;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pvVar6,&pMStack_4);
      if (pMVar1 != (MvCharacterController *)0x0) {
        fVar3 = (fVar3 + fVar3) * _UNK_?;
        *(MonitorData **)&(pMVar1->fields).center = pMStack_4;
        (pMVar1->fields).center.z = fStack_5;
        (pMVar1->fields).elipsoidRadius.x = fVar2;
        (pMVar1->fields).elipsoidRadius.y = fVar3;
        *(MonitorData **)&(pMVar1->fields).centerBase = pMStack_4;
        (pMVar1->fields).elipsoidRadius.z = fVar2;
        (pMVar1->fields).centerBase.z = fStack_5;
        fVar3 = (pMVar1->fields).elipsoidRadius.y;
        (pMVar1->fields).radiusBase.x = (pMVar1->fields).elipsoidRadius.x;
        (pMVar1->fields).radiusBase.y = fVar3;
        (pMVar1->fields).radiusBase.z = fVar2;
        return pMVar1;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pMVar1 = (MvCharacterController *)(*pcVar7)();
  return pMVar1;
}


/* Vector3 CollideAndSlide(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_CollideAndSlide
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 *R3Vel,
                    Vector3 *R3Position,MethodInfo *method)

{
  uStack_1 = 0;
  fStack_2 = 0.0;
  if (R3Vel->x * R3Vel->x + R3Vel->y * R3Vel->y + R3Vel->z * R3Vel->z == 0.0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar4 = (pVVar3->zeroVector).y;
    fVar5 = (pVVar3->zeroVector).z;
    (this->fields)._._Velocity_k__BackingField.x = (pVVar3->zeroVector).x;
    (this->fields)._._Velocity_k__BackingField.y = fVar4;
    fVar4 = R3Position->x;
    fVar6 = R3Position->y;
    (this->fields)._._Velocity_k__BackingField.z = fVar5;
    fVar5 = R3Position->z;
    __return_storage_ptr__->x = fVar4;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar5;
  }
  else {
    fVar6 = R3Position->x / (this->fields)._.elipsoidRadius.x;
    abStackX_8[0] = 1;
    fVar7 = R3Position->y / (this->fields)._.elipsoidRadius.y;
    fVar5 = R3Vel->y;
    fVar4 = (this->fields)._.elipsoidRadius.y;
    fVar8 = R3Position->z / (this->fields)._.elipsoidRadius.z;
    VStack_9.z = R3Vel->z / (this->fields)._.elipsoidRadius.z;
    VStack_10.y = fVar7;
    VStack_10.x = fVar6;
    VStack_9.x = R3Vel->x / (this->fields)._.elipsoidRadius.x;
    (this->fields)._.collisionRecursionDepth = 0;
    VStack_9.y = fVar5 / fVar4;
    VStack_10.z = fVar8;
    pVVar11 = MvCharacterController::MvCharacterController_CollideWithWorld
                       (&VStack_12,(MvCharacterController *)this,&VStack_10,&VStack_9,abStackX_8,
                        (MethodInfo *)0x0);
    uVar13._0_4_ = pVVar11->x;
    uVar13._4_4_ = pVVar11->y;
    fVar5 = pVVar11->z;
    fVar14 = (float)(undefined4)uVar13 * (this->fields)._.elipsoidRadius.x;
    fVar15 = fVar5 * (this->fields)._.elipsoidRadius.z;
    fVar16 = (float)uVar13._4_4_ * (this->fields)._.elipsoidRadius.y;
    VStack_17.y = fVar16;
    VStack_17.x = fVar14;
    VStack_17.z = fVar15;
    uStack_18 = uVar13;
    bVar19 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                      ((MvCharacterController *)this,&VStack_17,(MethodInfo *)0x0);
    uStack_1._4_4_ = 0.0;
    uStack_1 = 0;
    fStack_2 = 0.0;
    fVar4 = 0.0;
    uStack_1._0_4_ = 0.0;
    if (bVar19 != 0) {
      VStack_17.x = R3Vel->x;
      VStack_17.y = R3Vel->y;
      VStack_17.z = R3Vel->z;
      VStack_12.y = fVar16;
      VStack_12.x = fVar14;
      VStack_12.z = fVar15;
      cVar20 = (*(this->klass->vtable).NoOverlapPosition.methodPtr)
                        (this,&VStack_12,&VStack_17,&uStack_1,
                         (this->klass->vtable).NoOverlapPosition.method);
      fVar4 = fStack_2;
      if (cVar20 != '\0') {
        bVar19 = 0;
      }
    }
    if ((abStackX_8[0] != 0) && (bVar19 == 0)) {
      fVar6 = (float)(undefined4)uVar13;
      fVar7 = uStack_18._4_4_;
      fVar8 = fVar5;
    }
    fVar6 = fVar6 * (this->fields)._.elipsoidRadius.x + (float)uStack_1;
    fVar7 = fVar7 * (this->fields)._.elipsoidRadius.y + uStack_1._4_4_;
    fVar8 = fVar8 * (this->fields)._.elipsoidRadius.z + fVar4;
    R3Position->x = (float)uStack_1 + R3Position->x;
    R3Position->y = uStack_1._4_4_ + R3Position->y;
    R3Position->z = fVar4 + R3Position->z;
    fVar5 = R3Position->y;
    fVar4 = R3Position->z;
    (this->fields)._._Velocity_k__BackingField.x = fVar6 - R3Position->x;
    (this->fields)._._Velocity_k__BackingField.y = fVar7 - fVar5;
    __return_storage_ptr__->x = fVar6;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    (this->fields)._._Velocity_k__BackingField.z = fVar8 - fVar4;
  }
  return __return_storage_ptr__;
}


/* Vector3 GetNextVelocity(Vector3, Vector3, Vector3, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_GetNextVelocity
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 *ePoint,
                    Vector3 *eNewBasePoint,Vector3 *eDestinationPoint,Vector3 *slidePlaneNormal,
                    MethodInfo *method)

{
  uStack_1._0_4_ = ePoint->x;
  uStack_1._4_4_ = ePoint->y;
  fVar2 = eNewBasePoint->z;
  fVar3 = ePoint->z;
  uVar4 = eNewBasePoint->x;
  uVar5 = eNewBasePoint->y;
  slidePlaneNormal->x = (float)uVar4 - (float)uStack_1;
  slidePlaneNormal->y = (float)uVar5 - uStack_1._4_4_;
  slidePlaneNormal->z = fVar2 - fVar3;
  uStack_6 = uStack_1;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (slidePlaneNormal,(MethodInfo *)this);
  uStack_7._0_4_ = slidePlaneNormal->x;
  uStack_7._4_4_ = slidePlaneNormal->y;
  fVar2 = slidePlaneNormal->z;
  fStack_8 = fVar2;
  uStack_1 = uStack_7;
  fVar3 = (float)FUN_?(&uStack_7);
  if (_UNK_? < fVar3) {
    fVar2 = fVar2 / fVar3;
    uVar9 = CONCAT44(uStack_1._4_4_ / fVar3,(float)uStack_1 / fVar3);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar9._0_4_ = (pVVar10->zeroVector).x;
    uVar9._4_4_ = (pVVar10->zeroVector).y;
    fVar2 = (pVVar10->zeroVector).z;
  }
  uVar11 = eDestinationPoint->x;
  uVar12 = eDestinationPoint->y;
  uStack_7._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
  uStack_7._0_4_ = (float)uVar9;
  fVar13 = (float)((uint)(uStack_7._4_4_ * uStack_6._4_4_ + (float)uStack_7 * (float)uStack_6 +
                         fVar2 * ePoint->z) ^ _UNK_?) +
           uStack_7._4_4_ * (float)uVar12 + (float)uStack_7 * (float)uVar11 +
           fVar2 * eDestinationPoint->z;
  uVar14 = ePoint->x;
  uVar15 = ePoint->y;
  uVar16 = slidePlaneNormal->x;
  fVar2 = slidePlaneNormal->z;
  fVar3 = slidePlaneNormal->y;
  fVar17 = eDestinationPoint->z;
  fVar18 = ePoint->z;
  __return_storage_ptr__->x = ((float)uVar11 - (float)uVar16 * fVar13) - (float)uVar14;
  __return_storage_ptr__->y = ((float)uVar12 - fVar3 * fVar13) - (float)uVar15;
  __return_storage_ptr__->z = (fVar17 - fVar2 * fVar13) - fVar18;
  return __return_storage_ptr__;
}


/* Void Move(Vector3) */

void Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_Move
               (MVCharacterController3D *this,Vector3 *motion,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
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
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar5,&uStack_3);
  uVar7 = (this->fields)._.center.x;
  uVar8 = (this->fields)._.center.y;
  fStack_9 = motion->z;
  fStack_4 = fStack_4 + (this->fields)._.center.z;
  uStack_10._0_4_ = motion->x;
  uStack_10._4_4_ = motion->y;
  uStack_3 = CONCAT44(uStack_3._4_4_ + (float)uVar8,(float)uStack_3 + (float)uVar7);
  puVar11 = (undefined8 *)
           (*(this->klass->vtable).CollideAndSlide.methodPtr)
                     (auStack_12,this,&uStack_10,&uStack_3,
                      (this->klass->vtable).CollideAndSlide.method);
  uVar6 = *puVar11;
  fVar13 = *(float *)(puVar11 + 1);
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  auStack_12[0]._0_4_ = (this->fields)._.center.x;
  auStack_12[0]._4_4_ = (this->fields)._.center.y;
  fVar13 = fVar13 - (this->fields)._.center.z;
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack_10 = CONCAT44((float)((ulonglong)uVar6 >> 0x20) - (float)auStack_12[0]._4_4_,
                       (float)uVar6 - (float)(undefined4)auStack_12[0]);
  fStack_9 = fVar13;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar5 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
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
  (*pcRam_?)(pvVar5,&uStack_10);
  return;
}


/* Boolean NoOverlapPosition(Vector3, Vector3, Vector3 ByRef) */

bool Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_NoOverlapPosition
               (MVCharacterController3D *this,Vector3 *R3Position,Vector3 *R3Direction,
               Vector3 *offset,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (R3Direction,(MethodInfo *)R3Position);
  if (TypeRef__System__Activator__T._0_4_ < 0.0) {
    fVar1 = (float)FUN_?(TypeRef__System__Activator__T._0_4_);
  }
  else {
    fVar1 = SQRT(TypeRef__System__Activator__T._0_4_);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_2._0_4_ = R3Direction->x;
  uStack_2._4_4_ = R3Direction->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4 = (pVVar3->upVector).x;
  uVar5 = (pVVar3->upVector).y;
  fVar6 = (float)uVar5 * (float)uStack_2._4_4_ + (float)uVar4 * (float)(undefined4)uStack_2 +
           (pVVar3->upVector).z * R3Direction->z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar7 = (pVVar3->upVector).z;
  VStack_8.x = (pVVar3->upVector).x;
  VStack_8.y = (pVVar3->upVector).y;
  if ((_UNK_? < fVar6) || (fVar6 < _UNK_?)) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_8.x = (pVVar3->rightVector).x;
    VStack_8.y = (pVVar3->rightVector).y;
    fVar7 = (pVVar3->rightVector).z;
  }
  uStack_2._0_4_ = R3Direction->x;
  uStack_2._4_4_ = R3Direction->y;
  fVar9 = VStack_8.y * R3Direction->z - fVar7 * (float)uStack_2._4_4_;
  fVar6 = VStack_8.x * (float)uStack_2._4_4_ - VStack_8.y * (float)(undefined4)uStack_2;
  fVar10 = fVar7 * (float)(undefined4)uStack_2 - VStack_8.x * R3Direction->z;
  VStack_8.y = fVar10;
  VStack_8.x = fVar9;
  VStack_8.z = fVar6;
  fVar11 = (float)FUN_?(&VStack_8);
  fVar7 = _UNK_?;
  if (_UNK_? < fVar11) {
    fVar6 = fVar6 / fVar11;
    VStack_8.y = fVar10 / fVar11;
    VStack_8.x = fVar9 / fVar11;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_8.x = (pVVar3->zeroVector).x;
    VStack_8.y = (pVVar3->zeroVector).y;
    fVar6 = (pVVar3->zeroVector).z;
  }
  uStack_2._0_4_ = R3Direction->x;
  uStack_2._4_4_ = R3Direction->y;
  fVar9 = VStack_8.y;
  fVar10 = VStack_8.x;
  fVar12 = VStack_8.y * R3Direction->z - fVar6 * (float)uStack_2._4_4_;
  fVar13 = fVar6 * (float)(undefined4)uStack_2 - VStack_8.x * R3Direction->z;
  fVar11 = VStack_8.x * (float)uStack_2._4_4_ - VStack_8.y * (float)(undefined4)uStack_2;
  VStack_8.y = fVar13;
  VStack_8.x = fVar12;
  VStack_8.z = fVar11;
  fVar14 = (float)FUN_?(&VStack_8);
  if (fVar7 < fVar14) {
    VStack_8.x = fVar12 / fVar14;
    fVar11 = fVar11 / fVar14;
    VStack_8.y = fVar13 / fVar14;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_8.x = (pVVar3->zeroVector).x;
    VStack_8.y = (pVVar3->zeroVector).y;
    fVar11 = (pVVar3->zeroVector).z;
  }
  fVar10 = fVar10 * _UNK_?;
  fVar9 = fVar9 * _UNK_?;
  fVar6 = fVar6 * _UNK_?;
  fVar7 = VStack_8.x * _UNK_?;
  fVar14 = VStack_8.y * _UNK_?;
  fVar11 = fVar11 * _UNK_?;
  uVar15 = R3Position->x;
  uVar16 = R3Position->y;
  offset->x = fVar10;
  offset->y = fVar9;
  VStack_8.x = fVar10 + (float)uVar15;
  offset->z = fVar6;
  VStack_8.z = fVar6 + R3Position->z;
  VStack_8.y = fVar9 + (float)uVar16;
  bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                     ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
  uVar18 = _UNK_?;
  if (bVar17 != 0) {
    fVar13 = (float)((uint)fVar9 ^ _UNK_?);
    fVar19 = (float)((uint)fVar6 ^ _UNK_?);
    uVar20 = R3Position->x;
    VStack_8.x = (float)uVar20 + (float)((uint)fVar10 ^ _UNK_?);
    fVar12 = R3Position->y;
    VStack_8.z = R3Position->z + fVar19;
    offset->x = (float)((uint)fVar10 ^ _UNK_?);
    offset->y = fVar13;
    offset->z = fVar19;
    VStack_8.y = fVar12 + fVar13;
    bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                       ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
    if (bVar17 != 0) {
      uVar21 = R3Position->x;
      uVar22 = R3Position->y;
      offset->x = fVar7;
      offset->y = fVar14;
      VStack_8.x = fVar7 + (float)uVar21;
      offset->z = fVar11;
      VStack_8.z = fVar11 + R3Position->z;
      VStack_8.y = fVar14 + (float)uVar22;
      bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                         ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
      if (bVar17 != 0) {
        uVar23 = R3Position->x;
        VStack_8.x = (float)uVar23 + (float)((uint)fVar7 ^ uVar18);
        fVar12 = R3Position->y;
        VStack_8.z = R3Position->z + (float)((uint)fVar11 ^ uVar18);
        offset->x = (float)((uint)fVar7 ^ uVar18);
        offset->y = (float)((uint)fVar14 ^ uVar18);
        offset->z = (float)((uint)fVar11 ^ uVar18);
        VStack_8.y = fVar12 + (float)((uint)fVar14 ^ uVar18);
        bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                           ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
        if (bVar17 != 0) {
          fVar13 = (fVar7 + fVar10) / fVar1;
          fVar24 = (fVar14 + fVar9) / fVar1;
          fVar19 = (fVar11 + fVar6) / fVar1;
          uVar25 = R3Position->x;
          VStack_8.x = (float)uVar25 + fVar13;
          fVar12 = R3Position->y;
          VStack_8.z = R3Position->z + fVar19;
          offset->x = fVar13;
          offset->y = fVar24;
          offset->z = fVar19;
          VStack_8.y = fVar12 + fVar24;
          bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                             ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
          if (bVar17 != 0) {
            uVar26 = offset->x;
            fVar19 = (float)((uint)offset->y ^ uVar18);
            fVar13 = (float)((uint)offset->z ^ uVar18);
            uVar27 = R3Position->x;
            VStack_8.x = (float)uVar27 + (float)(uVar26 ^ uVar18);
            fVar12 = R3Position->y;
            VStack_8.z = R3Position->z + fVar13;
            offset->x = (float)(uVar26 ^ uVar18);
            offset->y = fVar19;
            offset->z = fVar13;
            VStack_8.y = fVar12 + fVar19;
            bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                               ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
            if (bVar17 != 0) {
              fVar7 = (fVar10 - fVar7) / fVar1;
              fVar10 = (fVar9 - fVar14) / fVar1;
              fVar1 = (fVar6 - fVar11) / fVar1;
              uVar28 = R3Position->x;
              fVar6 = R3Position->y;
              VStack_8.x = (float)uVar28 + fVar7;
              VStack_8.z = R3Position->z + fVar1;
              offset->x = fVar7;
              offset->y = fVar10;
              offset->z = fVar1;
              VStack_8.y = fVar6 + fVar10;
              bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                 ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
              if (bVar17 != 0) {
                uVar29 = offset->x;
                fVar7 = (float)((uint)offset->y ^ uVar18);
                fVar6 = (float)((uint)offset->z ^ uVar18);
                uVar30 = R3Position->x;
                VStack_8.x = (float)uVar30 + (float)(uVar29 ^ uVar18);
                fVar1 = R3Position->y;
                VStack_8.z = R3Position->z + fVar6;
                offset->x = (float)(uVar29 ^ uVar18);
                offset->y = fVar7;
                offset->z = fVar6;
                VStack_8.y = fVar1 + fVar7;
                bVar17 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                   ((MvCharacterController *)this,&VStack_8,(MethodInfo *)0x0);
                if (bVar17 != 0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Vector3);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
                  fVar1 = (pVVar3->zeroVector).z;
                  fVar6 = (pVVar3->zeroVector).y;
                  offset->x = (pVVar3->zeroVector).x;
                  offset->y = fVar6;
                  offset->z = fVar1;
                  return 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


/* Vector3 RecalcDirectionMoveAway(Vector3, Vector3, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::
          MVCharacterController3D_RecalcDirectionMoveAway
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 *ePos,
                    Vector3 *eDir,float distance,Vector3 *ePoint,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(eDir,(MethodInfo *)this);
  uVar1 = eDir->x;
  uVar2 = eDir->y;
  uVar3 = ePos->x;
  uVar4 = ePos->y;
  fVar5 = (float)uVar1 * distance + (float)uVar3;
  fVar6 = (float)uVar2 * distance + (float)uVar4;
  fVar7 = eDir->z * distance + ePos->z;
  uVar8 = ePoint->x;
  uVar9 = ePoint->y;
  fVar10 = fVar7 - ePoint->z;
  fVar11 = fVar5 - (float)uVar8;
  fVar12 = fVar6 - (float)uVar9;
  uStack_13 = CONCAT44(fVar12,fVar11);
  fStack_14 = fVar10;
  fVar15 = (float)FUN_?(&uStack_13);
  if (_UNK_? < fVar15) {
    fVar10 = fVar10 / fVar15;
    uStack_13 = CONCAT44(fVar12 / fVar15,fVar11 / fVar15);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_13._0_4_ = (pVVar16->zeroVector).x;
    uStack_13._4_4_ = (pVVar16->zeroVector).y;
    fVar10 = (pVVar16->zeroVector).z;
  }
  uVar17 = ePos->x;
  uVar18 = ePos->y;
  fVar11 = ((float)uStack_13 * _UNK_? + fVar5) - (float)uVar17;
  fVar12 = (uStack_13._4_4_ * _UNK_? + fVar6) - (float)uVar18;
  fVar10 = (fVar10 * _UNK_? + fVar7) - ePos->z;
  uStack_13 = CONCAT44(fVar12,fVar11);
  fStack_14 = fVar10;
  fVar15 = (float)FUN_?(&uStack_13);
  if (_UNK_? < fVar15) {
    fVar10 = fVar10 / fVar15;
    uVar19 = CONCAT44(fVar12 / fVar15,fVar11 / fVar15);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar19._0_4_ = (pVVar16->zeroVector).x;
    uVar19._4_4_ = (pVVar16->zeroVector).y;
    fVar10 = (pVVar16->zeroVector).z;
  }
  __return_storage_ptr__->x = (float)(int)uVar19;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar19 >> 0x20);
  __return_storage_ptr__->z = fVar10;
  return __return_storage_ptr__;
}


/* MVCharacterController3D() */

void Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D__ctor
               (MVCharacterController3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MvCharacterController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MvCharacterController->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._.sendCollisionData = 1;
  (this->fields)._.offsetFactor = 0.1;
  (this->fields)._.offsetBase = 0.1;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    alStackX_10[0] = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x3052af3c,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,alStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (alStackX_10[0] == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = alStackX_10[0];
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

