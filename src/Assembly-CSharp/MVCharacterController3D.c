
/* MvCharacterController CloneToGameObject(GameObject, GameObject) */

MvCharacterController *
Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_CloneToGameObject
          (MVCharacterController3D *this,GameObject *targetGameObject,GameObject *seat,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                   );
    cRam_? = '\x01';
  }
  if (targetGameObject != (GameObject *)0x0) {
    pMVar1 = (MvCharacterController *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                       (targetGameObject,
                        MVCharacterController3D_MethodInfo__UnityEngine__GameObject__AddComponent<MVCharacterController3D>__
                       );
    fVar2 = (this->fields)._.elipsoidRadius.x;
    fStack_3 = (this->fields)._.elipsoidRadius.y;
    if (seat != (GameObject *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (seat,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localPosition
                           (&VStack_5,this_00,(MethodInfo *)0x0);
        uVar6 = pVVar4->x;
        uVar7 = pVVar4->y;
        fVar8 = pVVar4->z;
        if (pMVar1 != (MvCharacterController *)0x0) {
          (pMVar1->fields).center.x = (float)uVar6;
          (pMVar1->fields).center.y = (float)uVar7;
          (pMVar1->fields).centerBase.x = (float)uVar6;
          (pMVar1->fields).centerBase.y = (float)uVar7;
          fVar9 = (fStack_3 + fStack_3) * _UNK_?;
          (pMVar1->fields).center.z = fVar8;
          (pMVar1->fields).centerBase.z = fVar8;
          (pMVar1->fields).elipsoidRadius.x = fVar2;
          (pMVar1->fields).elipsoidRadius.y = fVar9;
          (pMVar1->fields).elipsoidRadius.z = fVar2;
          fVar8 = (pMVar1->fields).elipsoidRadius.y;
          fVar2 = (pMVar1->fields).elipsoidRadius.z;
          (pMVar1->fields).radiusBase.x = (pMVar1->fields).elipsoidRadius.x;
          (pMVar1->fields).radiusBase.y = fVar8;
          (pMVar1->fields).radiusBase.z = fVar2;
          return pMVar1;
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  pMVar1 = (MvCharacterController *)(*pcVar10)();
  return pMVar1;
}


/* Vector3 CollideAndSlide(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_CollideAndSlide
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 R3Vel,
                    Vector3 R3Position,MethodInfo *method)

{
  puStack_1 = (undefined *)0x0;
  stack0xffffffe4 = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  if (R3Vel.y * R3Vel.y + R3Vel.x * R3Vel.x + R3Vel.z * R3Vel.z != 0.0) {
    bStack_3 = 1;
    pVVar4 = MathFunctions::MathFunctions_DivideVector
                       ((Vector3 *)&stack0xffffffec,&R3Position,&(this->fields)._.elipsoidRadius,
                        (MethodInfo *)0x0);
    puStack_1 = (undefined *)pVVar4->x;
    unique0x0000a404 = pVVar4->y;
    VStack_5.z = pVVar4->z;
    pVVar4 = MathFunctions::MathFunctions_DivideVector
                       ((Vector3 *)&stack0xffffffec,&R3Vel,&(this->fields)._.elipsoidRadius,
                        (MethodInfo *)0x0);
    VStack_2.x = pVVar4->x;
    VStack_2.y = pVVar4->y;
    VStack_2.z = pVVar4->z;
    VStack_5.x = (float)puStack_1;
    VStack_5.y = stack0xffffffe4;
    (this->fields)._.collisionRecursionDepth = 0;
    MvCharacterController::MvCharacterController_CollideWithWorld
              ((Vector3 *)&stack0xffffffec,(MvCharacterController *)this,(Vector3 *)&puStack_1,
               &VStack_2,&bStack_3,(MethodInfo *)0x0);
    pVVar4 = MathFunctions::MathFunctions_MultiplyVector
                       (&VStack_6,(Vector3 *)&stack0xffffffd4,&(this->fields)._.elipsoidRadius,
                        (MethodInfo *)0x0);
    pMVar7 = (MethodInfo *)pVVar4->y;
    pMVar8 = (MethodInfo *)pVVar4->z;
    pMVar9 = (MethodInfo *)0x0;
    pMVar10 = pMVar7;
    pMVar11 = pMVar8;
    bVar12 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                      ((MvCharacterController *)this,*pVVar4,(MethodInfo *)0x0);
    puStack_13 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    pMVar15 = (MVCharacterController3D *)0x0;
    if (bVar12 != 0) {
      unique0x1000022a = R3Vel.y;
      puStack_1 = (undefined *)R3Vel.x;
      pMVar10 = (this->klass->vtable).NoOverlapPosition.method;
      puVar14 = &UNK_?;
      pMVar15 = this;
      cVar16 = (*(this->klass->vtable).NoOverlapPosition.methodPtr)();
      pMVar11 = pMVar7;
      pMVar9 = pMVar8;
      if (cVar16 != '\0') {
        bVar12 = 0;
      }
    }
    if ((bStack_3 != 0) && (bVar12 == 0)) {
      VStack_5.y = (float)pMVar11;
      VStack_5.x = (float)pMVar10;
      VStack_5.z = (float)pMVar9;
    }
    stack0xffffffe4 = (float)&VStack_6;
    pVVar4 = MathFunctions::MathFunctions_MultiplyVector
                       (&VStack_6,&VStack_5,&(this->fields)._.elipsoidRadius,(MethodInfo *)0x0);
    uVar17 = pVVar4->x;
    uVar18 = pVVar4->y;
    register0x00001300 = pVVar4->z + (float)pMVar15;
    (this->fields)._._Velocity_k__BackingField.x =
         ((float)uVar17 + (float)puStack_13) - (R3Position.x + (float)puStack_13);
    (this->fields)._._Velocity_k__BackingField.y =
         ((float)uVar18 + (float)puVar14) - (R3Position.y + (float)puVar14);
    (this->fields)._._Velocity_k__BackingField.z =
         register0x00001300 - (R3Position.z + (float)pMVar15);
    __return_storage_ptr__->x = (float)uVar17 + (float)puStack_13;
    __return_storage_ptr__->y = (float)uVar18 + (float)puVar14;
    __return_storage_ptr__->z = register0x00001300;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar19 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar20 = (pVVar19->zeroVector).y;
  unique0x00017200 = (pVVar19->zeroVector).z;
  (this->fields)._._Velocity_k__BackingField.x = (pVVar19->zeroVector).x;
  (this->fields)._._Velocity_k__BackingField.y = fVar20;
  (this->fields)._._Velocity_k__BackingField.z = unique0x00017200;
  __return_storage_ptr__->x = R3Position.x;
  __return_storage_ptr__->y = R3Position.y;
  __return_storage_ptr__->z = R3Position.z;
  return __return_storage_ptr__;
}


/* Vector3 GetNextVelocity(Vector3, Vector3, Vector3, Vector3 ByRef) */

Vector3 * Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_GetNextVelocity
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 ePoint,
                    Vector3 eNewBasePoint,Vector3 eDestinationPoint,Vector3 *slidePlaneNormal,
                    MethodInfo *method)

{
  VStack_1._0_8_ = ePoint._0_8_;
  VStack_1.z = ePoint.z;
  slidePlaneNormal->x = eNewBasePoint.x - ePoint.x;
  slidePlaneNormal->y = eNewBasePoint.y - ePoint.y;
  slidePlaneNormal->z = eNewBasePoint.z - ePoint.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (slidePlaneNormal,(MethodInfo *)0x0);
  inPoint.z = VStack_1.z;
  inPoint.x = VStack_1.x;
  inPoint.y = VStack_1.y;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor
            ((Plane *)&stack0xffffffe0,*slidePlaneNormal,inPoint,(MethodInfo *)0x0);
  dVar2 = MathFunctions::MathFunctions_SignedDistanceTo
                    ((Plane *)&stack0xffffffe0,&VStack_1,&eDestinationPoint,(MethodInfo *)0x0);
  uVar3 = slidePlaneNormal->x;
  uVar4 = slidePlaneNormal->y;
  fVar5 = slidePlaneNormal->z;
  fVar6 = (float)dVar2;
  __return_storage_ptr__->x = (eDestinationPoint.x - (float)uVar3 * fVar6) - ePoint.x;
  __return_storage_ptr__->y = (eDestinationPoint.y - (float)uVar4 * fVar6) - ePoint.y;
  __return_storage_ptr__->z = (eDestinationPoint.z - fVar5 * fVar6) - ePoint.z;
  return __return_storage_ptr__;
}


/* Void Move(Vector3) */

void Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_Move
               (MVCharacterController3D *this,Vector3 motion,MethodInfo *method)

{
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              (&VStack_2,pTVar1,(MethodInfo *)0x0);
    uVar3 = (this->fields)._.center.y;
    VStack_2.z = (this->fields)._.center.z;
    VStack_2.y = (float)uVar3;
    VStack_2.x = (float)(this->klass->vtable).CollideAndSlide.method;
    puVar4 = (undefined8 *)
             (*(this->klass->vtable).CollideAndSlide.methodPtr)
                       (&stack0xffffffe4,this,motion.x,motion.y,motion.z);
    fVar5 = *(float *)(puVar4 + 1);
    motion.x = (float)*puVar4;
    motion.y = (float)((ulonglong)*puVar4 >> 0x20);
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    uVar6 = (this->fields)._.center.x;
    uVar7 = (this->fields)._.center.y;
    VStack_2.y = motion.y - (float)uVar7;
    VStack_2.x = motion.x - (float)uVar6;
    VStack_2.z = fVar5 - (this->fields)._.center.z;
    if (pTVar1 != (Transform *)0x0) {
      value.y = motion.y - (float)uVar7;
      value.x = motion.x - (float)uVar6;
      value.z = VStack_2.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean NoOverlapPosition(Vector3, Vector3, Vector3 ByRef) */

bool Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D_NoOverlapPosition
               (MVCharacterController3D *this,Vector3 R3Position,Vector3 R3Direction,Vector3 *offset
               ,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&R3Direction,(MethodInfo *)0x0);
  if (_UNK_? < 0.0) {
    func_?();
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->upVector).x;
  uVar3 = (pVVar1->upVector).y;
  fVar4 = R3Direction.y * (float)uVar3 + R3Direction.x * (float)uVar2 +
          R3Direction.z * (pVVar1->upVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (((_UNK_? < fVar4) || (fVar4 < _UNK_?)) && (cRam_? == '\0')) {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  puVar5 = (undefined8 *)func_?(&stack0xffffffe0,&stack0xffffffbc,0);
  fVar4 = *(float *)(puVar5 + 1);
  fVar6 = (float)*puVar5;
  fVar7 = (float)((ulonglong)*puVar5 >> 0x20);
  fVar8 = fVar6;
  fVar9 = fVar7;
  puVar5 = (undefined8 *)func_?(&stack0xffffffe0,&stack0xffffffbc,0);
  fVar4 = fVar4 * _UNK_?;
  fVar8 = fVar8 * _UNK_?;
  fVar9 = fVar9 * _UNK_?;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = (float)*puVar5;
  fVar14 = *(float *)(puVar5 + 1) * _UNK_?;
  offset->x = fVar8;
  offset->y = fVar9;
  offset->z = fVar4;
  R3Position_02.y = fVar9 + R3Position.y;
  R3Position_02.x = fVar8 + R3Position.x;
  R3Position_02.z = fVar4 + R3Position.z;
  bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                    ((MvCharacterController *)this,R3Position_02,(MethodInfo *)0x0);
  if (bVar15 != 0) {
    fVar6 = (float)((uint)fVar6 ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    fVar8 = (float)((uint)this ^
                    __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    fVar14 = (float)((uint)fVar14 ^
                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
    offset->x = fVar8;
    offset->y = fVar14;
    offset->z = fVar6;
    R3Position_03.y = fVar14 + R3Position.y;
    R3Position_03.x = fVar8 + R3Position.x;
    R3Position_03.z = fVar6 + R3Position.z;
    bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                      ((MvCharacterController *)this,R3Position_03,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      offset->x = fVar7;
      offset->y = fVar4;
      offset->z = in_stack_16;
      R3Position_04.y = fVar4 + R3Position.y;
      R3Position_04.x = fVar7 + R3Position.x;
      R3Position_04.z = fVar13 + R3Position.z;
      bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                        ((MvCharacterController *)this,R3Position_04,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        fVar4 = (float)(in_stack_17 ^
                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
        fVar9 = (float)(in_stack_18 ^
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
        fVar8 = (float)(in_stack_19 ^
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
        R3Direction.y = fVar4 + R3Position.z;
        offset->x = fVar9;
        offset->y = fVar8;
        offset->z = fVar4;
        R3Position_05.y = fVar8 + R3Position.y;
        R3Position_05.x = fVar9 + R3Position.x;
        R3Position_05.z = R3Direction.y;
        bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                          ((MvCharacterController *)this,R3Position_05,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          fVar4 = (fVar12 + fVar13 + R3Position.z) / R3Position.x;
          fVar9 = (fVar10 + in_stack_20) / R3Position.x;
          fVar8 = (fVar11 + unaff_retaddr) / R3Position.x;
          puStack21 = (undefined *)(fVar4 + R3Position.z);
          offset->x = fVar9;
          offset->y = fVar8;
          offset->z = fVar4;
          R3Position_06.y = fVar8 + R3Position.y;
          R3Position_06.x = fVar9 + R3Position.x;
          R3Position_06.z = (float)puStack21;
          bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                            ((MvCharacterController *)this,R3Position_06,(MethodInfo *)0x0);
          if (bVar15 != 0) {
            uVar22._0_4_ = offset->x;
            uVar22._4_4_ = offset->y;
            fVar9 = (float)((undefined4)uVar22 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            );
            fVar8 = (float)(uVar22._4_4_ ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            );
            fVar4 = (float)((uint)offset->z ^
                           __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field)
            ;
            offset->x = fVar9;
            offset->y = fVar8;
            offset->z = fVar4;
            R3Position_07.y = fVar8 + R3Position.y;
            R3Position_07.x = fVar9 + R3Position.x;
            R3Position_07.z = fVar4 + R3Position.z;
            bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                              ((MvCharacterController *)this,R3Position_07,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)uVar22;
            if (bVar15 != 0) {
              fVar8 = ((float)puStack21 - (float)method) / in_stack_23;
              fVar4 = (in_stack_24 - R3Direction.z) / in_stack_23;
              fVar14 = (in_stack_25 - (float)offset) / in_stack_23;
              fVar9 = fVar8 + R3Position.z;
              offset->x = fVar4;
              offset->y = fVar14;
              offset->z = fVar8;
              R3Position_00.y = fVar14 + R3Position.y;
              R3Position_00.x = fVar4 + R3Position.x;
              R3Position_00.z = fVar9;
              fStack26 = fVar9;
              bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                ((MvCharacterController *)this,R3Position_00,(MethodInfo *)0x0);
              if (bVar15 != 0) {
                uStack27._0_4_ = offset->x;
                uStack27._4_4_ = offset->y;
                fVar8 = (float)(uStack27._4_4_ ^
                                __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                );
                fVar4 = (float)((uint)offset->z ^
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                               );
                R3Direction.z = fVar4 + R3Position.z;
                R3Direction.x =
                     (float)((undefined4)uStack27 ^
                            __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                            ) + fVar9;
                R3Direction.y = fVar8 + 0.0;
                offset->x = (float)((undefined4)uStack27 ^
                                   __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                   );
                offset->y = fVar8;
                offset->z = fVar4;
                R3Position_01.y = R3Direction.y;
                R3Position_01.x = R3Direction.x;
                R3Position_01.z = R3Direction.z;
                bVar15 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                  ((MvCharacterController *)this,R3Position_01,(MethodInfo *)0x0);
                if (bVar15 != 0) {
                  pVVar28 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                           MVWorldObject_get_WorldPosition
                                     ((Vector3 *)&stack0x00000080,(MVWorldObject *)0x0,method_00);
                  fVar8 = pVVar28->y;
                  fVar4 = pVVar28->z;
                  offset->x = pVVar28->x;
                  offset->y = fVar8;
                  offset->z = fVar4;
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
                    (Vector3 *__return_storage_ptr__,MVCharacterController3D *this,Vector3 ePos,
                    Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&eDir,(MethodInfo *)0x0);
  fVar1 = ePos.x + eDir.x * distance;
  fStack_2 = ePos.z + eDir.z * distance;
  eDir.z = ePos.y + eDir.y * distance;
  ePoint.z = fStack_2 - ePoint.z;
  ePoint.y = eDir.z - ePoint.y;
  ePoint.x = fVar1 - ePoint.x;
  fStack_3 = ePoint.z;
  puVar4 = (undefined8 *)func_?(auStack_5,&ePoint,0);
  uVar6 = *puVar4;
  fStack_3 = *(float *)(puVar4 + 1);
  uStack_7._0_4_ = (float)uVar6;
  uStack_7._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
  ePos.z = (fStack_3 * _UNK_? + fStack_2) - ePos.z;
  ePoint.x = ((float)uStack_7 * _UNK_? + fVar1) - ePos.x;
  ePoint.y = (uStack_7._4_4_ * _UNK_? + eDir.z) - ePos.y;
  ePoint.z = ePos.z;
  uStack_7 = uVar6;
  puVar4 = (undefined8 *)func_?(&ePos,&ePoint,0);
  uVar6 = *puVar4;
  fVar1 = *(float *)(puVar4 + 1);
  __return_storage_ptr__->x = (float)(int)uVar6;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* MVCharacterController3D() */

void Assembly-CSharp.dll::MVCharacterController3D::MVCharacterController3D__ctor
               (MVCharacterController3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  (this->fields)._.sendCollisionData = 1;
  (this->fields)._.offsetFactor = 0.1;
  (this->fields)._.offsetBase = 0.1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

