
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
  if (R3Vel.y * R3Vel.y + R3Vel.x * R3Vel.x + R3Vel.z * R3Vel.z != 0.0) {
    bStack_1 = 1;
    pVVar2 = &(this->fields)._.elipsoidRadius;
    pVVar3 = MathFunctions::MathFunctions_DivideVector
                       ((Vector3 *)&stack0xffffffec,&R3Position,pVVar2,(MethodInfo *)0x0);
    fVar4 = pVVar3->x;
    fVar5 = pVVar3->y;
    VStack_6.z = pVVar3->z;
    pVVar3 = MathFunctions::MathFunctions_DivideVector
                       ((Vector3 *)&stack0xffffffec,&R3Vel,pVVar2,(MethodInfo *)0x0);
    VStack_7.x = pVVar3->x;
    VStack_7.y = pVVar3->y;
    VStack_7.z = pVVar3->z;
    VStack_6.y = fVar5;
    VStack_6.x = fVar4;
    (this->fields)._.collisionRecursionDepth = 0;
    pVVar3 = MvCharacterController::MvCharacterController_CollideWithWorld
                       ((Vector3 *)&stack0xffffffec,(MvCharacterController *)this,
                        (Vector3 *)&stack0xffffffd4,&VStack_7,&bStack_1,(MethodInfo *)0x0);
    puStack_8 = (undefined *)pVVar3->x;
    unique0x0000a404 = pVVar3->y;
    pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_9,(Vector3 *)&puStack_8,pVVar2,(MethodInfo *)0x0);
    pMVar10 = (MVCharacterController3D *)pVVar2->x;
    stack0xffffffcc = (float)this;
    bVar11 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                      ((MvCharacterController *)this,*pVVar2,(MethodInfo *)0x0);
    if (bVar11 != 0) {
      stack0xffffffcc = (float)&UNK_?;
      pMVar10 = this;
      cVar12 = (*(code *)(this->klass->vtable).NoOverlapPosition.method)();
      if (cVar12 != '\0') {
        bVar11 = 0;
      }
    }
    if ((bStack_1 != 0) && (bVar11 == 0)) {
      VStack_6.x = (float)puStack_8;
      VStack_6.y = stack0xffffffcc;
      VStack_6.z = (float)pMVar10;
    }
    pVVar2 = &VStack_6;
    pVVar3 = &VStack_9;
    pVVar13 = MathFunctions::MathFunctions_MultiplyVector
                        (pVVar3,pVVar2,&(this->fields)._.elipsoidRadius,(MethodInfo *)0x0);
    uVar14 = pVVar13->x;
    uVar15 = pVVar13->y;
    fVar4 = pVVar13->z + (float)pVVar2;
    (this->fields)._._Velocity_k__BackingField.x =
         ((float)uVar14 + 3.315839e-29) - (R3Position.x + 3.315839e-29);
    (this->fields)._._Velocity_k__BackingField.y =
         ((float)uVar15 + (float)pVVar3) - (R3Position.y + (float)pVVar3);
    (this->fields)._._Velocity_k__BackingField.z = fVar4 - (R3Position.z + (float)pVVar2);
    __return_storage_ptr__->x = (float)uVar14 + 3.315839e-29;
    __return_storage_ptr__->y = (float)uVar15 + (float)pVVar3;
    __return_storage_ptr__->z = fVar4;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar16 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar16->zeroVector).y;
  fVar4 = (pVVar16->zeroVector).z;
  (this->fields)._._Velocity_k__BackingField.x = (pVVar16->zeroVector).x;
  (this->fields)._._Velocity_k__BackingField.y = fVar5;
  (this->fields)._._Velocity_k__BackingField.z = fVar4;
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
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_3,*slidePlaneNormal,(MethodInfo *)0x0);
  uStack_4._0_4_ = pVVar2->x;
  uStack_4._4_4_ = pVVar2->y;
  fStack_5 = pVVar2->z;
  dVar6 = MathFunctions::MathFunctions_SignedDistanceTo
                    ((Plane *)&stack0xffffffc8,&VStack_1,&eDestinationPoint,(MethodInfo *)0x0);
  uVar7 = slidePlaneNormal->x;
  uVar8 = slidePlaneNormal->y;
  fVar9 = slidePlaneNormal->z;
  fVar10 = (float)dVar6;
  __return_storage_ptr__->x = (eDestinationPoint.x - (float)uVar7 * fVar10) - ePoint.x;
  __return_storage_ptr__->y = (eDestinationPoint.y - (float)uVar8 * fVar10) - ePoint.y;
  __return_storage_ptr__->z = (eDestinationPoint.z - fVar9 * fVar10) - ePoint.z;
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
    VStack_2.x = (float)this->klass[1]._0.image;
    puVar4 = (undefined8 *)
             (*(code *)(this->klass->vtable).CollideAndSlide.method)
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
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar1->upVector).x;
  fVar6 = (pVVar1->upVector).y;
  fVar7 = (pVVar1->upVector).z;
  if ((_UNK_? < fVar4) || (fVar4 < _UNK_?)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar8 = (pVVar1->rightVector).x;
    uVar9 = (pVVar1->rightVector).y;
    fVar7 = (pVVar1->rightVector).z;
    fVar5 = (float)uVar8;
    fVar6 = (float)uVar9;
  }
  VVar10.y = fVar7 * R3Direction.x - fVar5 * R3Direction.z;
  VVar10.x = fVar6 * R3Direction.z - fVar7 * R3Direction.y;
  VVar10.z = fVar5 * R3Direction.y - fVar6 * R3Direction.x;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xfffffff0,VVar10,(MethodInfo *)0x0);
  uVar12 = pVVar11->x;
  uVar13 = pVVar11->y;
  value.y = R3Direction.x * pVVar11->z - R3Direction.z * (float)uVar12;
  value.x = R3Direction.z * (float)uVar13 - R3Direction.y * pVVar11->z;
  value.z = R3Direction.y * (float)uVar12 - R3Direction.x * (float)uVar13;
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&this,value,(MethodInfo *)0x0);
  fVar6 = R3Direction.x * _UNK_?;
  fVar4 = R3Position.y * _UNK_?;
  fVar5 = R3Position.z * _UNK_?;
  uVar14 = pVVar11->x;
  uVar15 = pVVar11->y;
  puVar16 = (undefined8 *)(pVVar11->z * _UNK_?);
  *puVar16 = CONCAT44(fVar5,fVar4);
  *(float *)(puVar16 + 1) = fVar6;
  uVar17 = 0;
  this = (MVCharacterController3D *)0x0;
  R3Direction.x = (float)uVar15 + fVar6;
  R3Position_04.y = (float)uVar14 + fVar5;
  R3Position_04.x = R3Position.x + fVar4;
  R3Position_04.z = R3Direction.x;
  R3Position.y = (float)uVar14;
  R3Position.z = (float)uVar15;
  bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                     ((MvCharacterController *)0x0,R3Position_04,(MethodInfo *)0x0);
  if (bVar18 != 0) {
    fVar6 = (float)((uint)this ^
                   (uint)__0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    fVar4 = (float)(uVar17 ^ (uint)
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                    );
    fVar5 = R3Position.y + __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    *puVar16 = CONCAT44(__0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field,
                        fVar4);
    fStack19 = R3Position.z + fVar6;
    *(float *)(puVar16 + 1) = fVar6;
    R3Position_05.y = fVar5;
    R3Position_05.x = R3Position.y + fVar4;
    R3Position_05.z = fStack19;
    bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                       ((MvCharacterController *)0x0,R3Position_05,(MethodInfo *)0x0);
    if (bVar18 != 0) {
      *puVar16 = CONCAT44(R3Position.x,this);
      fVar4 = R3Position.z + R3Position.y;
      *(undefined4 *)(puVar16 + 1) = in_stack_20;
      R3Position_06.y = R3Position.y + R3Position.x;
      R3Position_06.x = (float)puVar16 + (float)this;
      R3Position_06.z = fVar4;
      bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                         ((MvCharacterController *)0x0,R3Position_06,(MethodInfo *)0x0);
      if (bVar18 != 0) {
        fVar7 = (float)((uint)puVar16 ^
                        (uint)
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar5 = (float)((uint)R3Direction.y ^
                       (uint)
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar6 = (float)((uint)R3Direction.z ^
                       (uint)
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        *puVar16 = CONCAT44(fVar6,fVar5);
        this = (MVCharacterController3D *)(R3Position.z + fVar7);
        *(float *)(puVar16 + 1) = fVar7;
        R3Position.x = 0.0;
        fVar21 = R3Position.y + fVar6;
        fVar22 = in_stack_23 + fVar5;
        VVar10 = (Vector3)CONCAT84(VVar10._0_8_,fVar22);
        pMStack24 = this;
        bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                           ((MvCharacterController *)0x0,VVar10,(MethodInfo *)0x0);
        if (bVar18 != 0) {
          fVar7 = (in_stack_23 + in_stack_25) / in_stack_26;
          fVar5 = (in_stack_27 + in_stack_28) / in_stack_26;
          fVar6 = (in_stack_29 + in_stack_30) / in_stack_26;
          fVar4 = fVar4 + fVar5;
          R3Direction.x = R3Position.y + fVar6;
          *puVar16 = CONCAT44(fVar6,fVar5);
          R3Direction.y = R3Position.z + fVar7;
          *(float *)(puVar16 + 1) = fVar7;
          R3Direction.z = 0.0;
          R3Position.y = 0.0;
          R3Position.x = (float)&UNK_?;
          R3Position_00.y = R3Direction.x;
          R3Position_00.x = fVar4;
          R3Position_00.z = R3Direction.y;
          R3Position.z = fVar4;
          bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                             ((MvCharacterController *)0x0,R3Position_00,(MethodInfo *)0x0);
          if (bVar18 != 0) {
            uStack31 = *(uint *)(puVar16 + 1);
            method_00 = (MethodInfo *)*puVar16;
            uStack32 = (uint)((ulonglong)*puVar16 >> 0x20);
            fVar4 = (float)((uint)method_00 ^
                            (uint)
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            fVar5 = (float)(uStack31 ^
                           (uint)
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
            ;
            fStack19 =
                 R3Position.y +
                 (float)(uStack32 ^
                        (uint)
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            *puVar16 = CONCAT44(uStack32 ^
                                (uint)
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ,fVar4);
            fStack33 = R3Position.z + fVar5;
            *(float *)(puVar16 + 1) = fVar5;
            R3Direction.z = (float)&UNK_?;
            R3Position_01.y = fStack19;
            R3Position_01.x = (float)pMStack24 + fVar4;
            R3Position_01.z = fStack33;
            bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                               ((MvCharacterController *)0x0,R3Position_01,(MethodInfo *)0x0);
            if (bVar18 != 0) {
              fVar6 = (in_stack_34 - (float)pMStack24) / in_stack_35;
              fVar4 = (in_stack_36 - in_stack_37) / in_stack_35;
              fVar5 = (in_stack_38 - in_stack_39) / in_stack_35;
              *puVar16 = CONCAT44(fVar5,fVar4);
              *(float *)(puVar16 + 1) = fVar6;
              R3Position_02.y = R3Position.y + fVar5;
              R3Position_02.x = (float)method_00 + fVar4;
              R3Position_02.z = R3Position.z + fVar6;
              bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                 ((MvCharacterController *)0x0,R3Position_02,(MethodInfo *)0x0);
              if (bVar18 != 0) {
                uStack40 = *(uint *)(puVar16 + 1);
                uStack41 = (uint)*puVar16;
                uStack42 = (uint)((ulonglong)*puVar16 >> 0x20);
                fVar4 = (float)(uStack41 ^
                                (uint)
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                );
                fVar5 = (float)(uStack42 ^
                               (uint)
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               );
                fStack43 =
                     (float)(uStack40 ^
                            (uint)
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
                *puVar16 = CONCAT44(fVar5,fVar4);
                *(float *)(puVar16 + 1) = fStack43;
                fStack43 = R3Position.z + fStack43;
                R3Position_03.y = R3Position.y + fVar5;
                R3Position_03.x = fStack33 + fVar4;
                R3Position_03.z = fStack43;
                bVar18 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                   ((MvCharacterController *)0x0,R3Position_03,(MethodInfo *)0x0);
                if (bVar18 != 0) {
                  pVVar11 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                            MVWorldObject_get_WorldPosition
                                      ((Vector3 *)&stack0x000000b8,(MVWorldObject *)0x0,method_00);
                  fVar4 = pVVar11->z;
                  *puVar16 = *(undefined8 *)pVVar11;
                  *(float *)(puVar16 + 1) = fVar4;
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
  fVar2 = ePos.z + eDir.z * distance;
  eDir.z = ePos.y + eDir.y * distance;
  value.y = eDir.z - ePoint.y;
  value.x = fVar1 - ePoint.x;
  value.z = fVar2 - ePoint.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffec,value,(MethodInfo *)0x0);
  uVar4 = pVVar3->x;
  uVar5 = pVVar3->y;
  ePos.z = (pVVar3->z * _UNK_? + fVar2) - ePos.z;
  value_00.y = ((float)uVar5 * _UNK_? + eDir.z) - ePos.y;
  value_00.x = ((float)uVar4 * _UNK_? + fVar1) - ePos.x;
  value_00.z = ePos.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&ePos,value_00,(MethodInfo *)0x0);
  uRam_?._0_4_ = pVVar3->x;
  uRam_?._4_4_ = pVVar3->y;
  fRam00000008 = pVVar3->z;
  return (Vector3 *)0x0;
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

