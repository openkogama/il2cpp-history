
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
    pIVar7 = (Il2CppMethodPointer)pVVar4->y;
    pIVar8 = (Il2CppMethodPointer)pVVar4->z;
    pIVar9 = (Il2CppMethodPointer)0x0;
    pIVar10 = pIVar7;
    pIVar11 = pIVar8;
    bVar12 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                      ((MvCharacterController *)this,*pVVar4,(MethodInfo *)0x0);
    puStack_13 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    pMVar15 = (MVCharacterController3D *)0x0;
    if (bVar12 != 0) {
      unique0x1000022a = R3Vel.y;
      puStack_1 = (undefined *)R3Vel.x;
      pIVar10 = (this->klass->vtable).RecalcDirectionMoveAway.methodPtr;
      puVar14 = &UNK_?;
      pMVar15 = this;
      cVar16 = (*(code *)(this->klass->vtable).NoOverlapPosition.method)();
      pIVar11 = pIVar7;
      pIVar9 = pIVar8;
      if (cVar16 != '\0') {
        bVar12 = 0;
      }
    }
    if ((bStack_3 != 0) && (bVar12 == 0)) {
      VStack_5.y = (float)pIVar11;
      VStack_5.x = (float)pIVar10;
      VStack_5.z = (float)pIVar9;
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
    if (pTVar1 != (Transform *)0x0) {
      value.y = motion.y - (float)uVar7;
      value.x = motion.x - (float)uVar6;
      value.z = fVar5 - (this->fields)._.center.z;
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
  uVar5._0_4_ = (pVVar1->upVector).x;
  uVar5._4_4_ = (pVVar1->upVector).y;
  fVar6 = (pVVar1->upVector).z;
  if ((_UNK_? < fVar4) || (fVar4 < _UNK_?)) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar5._0_4_ = (pVVar1->rightVector).x;
    uVar5._4_4_ = (pVVar1->rightVector).y;
    fVar6 = (pVVar1->rightVector).z;
  }
  fVar4 = (float)((ulonglong)uVar5 >> 0x20);
  value.y = fVar6 * R3Direction.x - (float)uVar5 * R3Direction.z;
  value.x = fVar4 * R3Direction.z - fVar6 * R3Direction.y;
  value.z = (float)uVar5 * R3Direction.y - fVar4 * R3Direction.x;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xfffffff0,value,(MethodInfo *)0x0);
  uVar8 = pVVar7->x;
  uVar9 = pVVar7->y;
  fVar10 = R3Direction.y * (float)uVar8 - R3Direction.x * (float)uVar9;
  value_00.y = R3Direction.x * pVVar7->z - R3Direction.z * (float)uVar8;
  value_00.x = R3Direction.z * (float)uVar9 - R3Direction.y * pVVar7->z;
  value_00.z = fVar10;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&this,value_00,(MethodInfo *)0x0);
  this_00 = this;
  unaff_retaddr = unaff_retaddr * _UNK_?;
  in_stack_11 = in_stack_11 * _UNK_?;
  fVar10 = fVar10 * _UNK_?;
  fVar4 = pVVar7->x;
  fVar6 = pVVar7->y;
  fVar12 = pVVar7->z * _UNK_?;
  offset->x = in_stack_11;
  offset->y = fVar10;
  offset->z = unaff_retaddr;
  R3Direction.y = R3Position.x;
  R3Direction.z = 0.0;
  R3Position.z = unaff_retaddr + unaff_retaddr;
  R3Position_04.y = R3Position.y + fVar10;
  R3Position_04.x = R3Position.x + in_stack_11;
  R3Position_04.z = R3Position.z;
  bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                     ((MvCharacterController *)this,R3Position_04,(MethodInfo *)0x0);
  if (bVar13 != 0) {
    fVar14 = (float)((uint)fVar4 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    in_stack_15 =
         (float)((uint)in_stack_15 ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    in_stack_16 =
         (float)((uint)in_stack_16 ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    offset->x = in_stack_15;
    offset->y = in_stack_16;
    fVar10 = R3Position.z + fVar14;
    offset->z = fVar14;
    R3Position_05.y = R3Position.y + in_stack_16;
    R3Position_05.x = in_stack_17 + in_stack_15;
    R3Position_05.z = fVar10;
    bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                       ((MvCharacterController *)this_00,R3Position_05,(MethodInfo *)0x0);
    if (bVar13 != 0) {
      offset->x = fVar4;
      offset->y = fVar6;
      fVar12 = R3Position.z + fVar12;
      offset->z = in_stack_18;
      R3Position_06.y = R3Position.y + fVar6;
      R3Position_06.x = in_stack_19 + fVar4;
      R3Position_06.z = fVar12;
      bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                         ((MvCharacterController *)this_00,R3Position_06,(MethodInfo *)0x0);
      if (bVar13 != 0) {
        fVar20 = (float)((uint)R3Direction.x ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar6 = (float)((uint)R3Position.y ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        fVar14 = (float)((uint)R3Position.z ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
        offset->x = fVar6;
        offset->y = fVar14;
        fVar4 = R3Position.z + fVar20;
        offset->z = fVar20;
        R3Position_07.y = R3Position.y + fVar14;
        R3Position_07.x = in_stack_21 + fVar6;
        R3Position_07.z = fVar4;
        bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                           ((MvCharacterController *)this_00,R3Position_07,(MethodInfo *)0x0);
        if (bVar13 != 0) {
          fVar14 = (in_stack_18 + in_stack_22) / fVar12;
          fVar6 = (in_stack_17 + 0.0) / fVar12;
          fVar12 = (fVar10 + in_stack_23) / fVar12;
          R3Position.x = (float)in_stack_24 + fVar6;
          R3Position.y = R3Position.y + fVar12;
          offset->x = fVar6;
          offset->y = fVar12;
          R3Position.z = R3Position.z + fVar14;
          offset->z = fVar14;
          R3Direction.x = 0.0;
          R3Position_00.y = R3Position.y;
          R3Position_00.x = R3Position.x;
          R3Position_00.z = R3Position.z;
          this = this_00;
          bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                             ((MvCharacterController *)this_00,R3Position_00,(MethodInfo *)0x0);
          if (bVar13 != 0) {
            uVar25 = offset->x;
            uVar26 = offset->y;
            fVar6 = (float)(uVar26 ^ 
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
            ;
            fVar12 = (float)((uint)offset->z ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
            R3Direction.z =
                 in_stack_27 +
                 (float)(uVar25 ^ 
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
            offset->x = (float)(uVar25 ^ 
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               );
            offset->y = fVar6;
            fStack28 = R3Position.z + fVar12;
            offset->z = fVar12;
            R3Direction.y = (float)this_00;
            R3Direction.x = (float)&UNK_?;
            R3Position_01.y = R3Position.y + fVar6;
            R3Position_01.x = R3Direction.z;
            R3Position_01.z = fStack28;
            bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                               ((MvCharacterController *)this_00,R3Position_01,(MethodInfo *)0x0);
            if (bVar13 != 0) {
              fVar12 = ((float)uVar25 - in_stack_29) / (float)uVar26;
              fVar6 = (in_stack_21 - in_stack_30) / (float)uVar26;
              fVar4 = (in_stack_31 - fVar4) / (float)uVar26;
              offset->x = fVar6;
              offset->y = fVar4;
              offset->z = fVar12;
              R3Position_02.y = R3Position.y + fVar4;
              R3Position_02.x = in_stack_32 + fVar6;
              R3Position_02.z = R3Position.z + fVar12;
              bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                 ((MvCharacterController *)this_00,R3Position_02,(MethodInfo *)0x0);
              if (bVar13 != 0) {
                uVar33 = offset->x;
                uVar34 = offset->y;
                fStack35 = offset->z;
                fVar4 = (float)(uVar33 ^ 
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               );
                fVar6 = (float)(uVar34 ^ 
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                               );
                fStack36 =
                     (float)((uint)fStack35 ^
                            __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                            );
                offset->x = fVar4;
                offset->y = fVar6;
                offset->z = fStack36;
                fStack36 = R3Position.z + fStack36;
                R3Position_03.y = R3Position.y + fVar6;
                R3Position_03.x = in_stack_37 + fVar4;
                R3Position_03.z = fStack36;
                bVar13 = MvCharacterController::MvCharacterController_OverlapCheckCollision
                                   ((MvCharacterController *)this_00,R3Position_03,(MethodInfo *)0x0
                                   );
                if (bVar13 != 0) {
                  pVVar7 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::
                            MVWorldObject_get_WorldPosition
                                      ((Vector3 *)&stack0x000000b8,(MVWorldObject *)0x0,
                                       in_stack_24);
                  fVar6 = pVVar7->y;
                  fVar4 = pVVar7->z;
                  offset->x = pVVar7->x;
                  offset->y = fVar6;
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
  fVar1 = ePos.z + eDir.z * distance;
  fVar2 = ePos.y + eDir.y * distance;
  fVar3 = fVar1 - ePoint.z;
  value.y = fVar2 - ePoint.y;
  value.x = (ePos.x + eDir.x * distance) - ePoint.x;
  value.z = fVar3;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffc0,value,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  value_00.y = (fVar2 + (float)uVar6 * _UNK_?) - ePos.y;
  value_00.x = (fVar3 + (float)uVar5 * _UNK_?) - ePos.x;
  value_00.z = (fVar1 + pVVar4->z * _UNK_?) - ePos.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffc0,value_00,(MethodInfo *)0x0);
  fVar3 = pVVar4->y;
  fVar1 = pVVar4->z;
  __return_storage_ptr__->x = pVVar4->x;
  __return_storage_ptr__->y = fVar3;
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

