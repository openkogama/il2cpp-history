
/* Void Awake() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Awake
               (MvCharacterController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    func_?(&StringLiteral_Player);
    func_?(&StringLiteral_Logic);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  if (TypeInfo__MvCharacterController->static_fields->layerMask == -1) {
    uVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Logic,(MethodInfo *)0x0);
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__MvCharacterController->static_fields->layerMask =
         ~(1 << (uVar1 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar2 & 0x1f));
  }
  return;
}


/* Boolean CheckOverLap() */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_CheckOverLap
               (MvCharacterController *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    uVar4 = (this->fields).center.x;
    uVar5 = (this->fields).center.y;
    R3Position.y = (float)uVar3 + (float)uVar5;
    R3Position.x = (float)uVar4 + (float)uVar2;
    R3Position.z = (this->fields).center.z + pVVar1->z;
    bVar6 = MvCharacterController_OverlapCheckCollision(this,R3Position,(MethodInfo *)0x0);
    return bVar6;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar6 = (*pcVar7)();
  return bVar6;
}


/* Vector3 CollideWithWorld(Vector3 ByRef, Vector3 ByRef, Boolean ByRef) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_CollideWithWorld
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,Vector3 *ePos,
                    Vector3 *eVel,bool *foundValidPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  if ((this->fields).collisionRecursionDepth < 8) {
    pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_3,ePos,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    fStack_6 = pVVar2->z;
    puVar7 = &UNK_?;
    pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_8,eVel,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
    uVar9._0_4_ = pVVar2->x;
    uVar9._4_4_ = pVVar2->y;
    fStack_10 = pVVar2->z;
    pVVar2 = &VStack_3;
    pVVar11 = &VStack_8;
    puVar12 = &UNK_?;
    VStack_3._0_8_ = uVar9;
    VStack_3.z = fStack_10;
    pVVar13 = (Vector3 *)func_?();
    VStack_14.y = 0.0;
    VStack_14.z = 0.0;
    auStack_15._0_4_ = 0.0;
    auStack_15._4_4_ = 0.0;
    auStack_15._8_4_ = 0.0;
    VStack_14.x = 0.0;
    this_00 = (Ray *)auStack_15;
    puVar16 = &UNK_?;
    origin.y = (float)uVar5;
    origin.x = (float)uVar4;
    origin.z = fStack_6;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              (this_00,origin,*pVVar13,(MethodInfo *)0x0);
    fStack_17 = (this->fields).elipsoidRadius.z;
    VStack_18.x = (this->fields).elipsoidRadius.x;
    VStack_18.y = (this->fields).elipsoidRadius.y;
    fVar19 = (float10)func_?();
    ignoreWoIds = (this->fields).IgnoreWoIds;
    fStack_20 = (float)fVar19;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar21 = 0.0;
    layerMask = (float)TypeInfo__MvCharacterController->static_fields->layerMask;
    voxelHit = (VoxelHit *)&stack0xfffffef8;
    fVar22 = VStack_14.y;
    fVar23 = VStack_14.z;
    puVar24 = &UNK_?;
    ray.m_Origin.y = (float)auStack_15._4_4_;
    ray.m_Origin.x = (float)auStack_15._0_4_;
    ray.m_Origin.z = (float)auStack_15._8_4_;
    ray.m_Direction.x = VStack_14.x;
    ray.m_Direction.y = fVar22;
    ray.m_Direction.z = fVar23;
    radius.z = fStack_17;
    radius.x = VStack_18.x;
    radius.y = VStack_18.y;
    fVar25 = (float)auStack_15._0_4_;
    fVar26 = (float)auStack_15._4_4_;
    fVar27 = (float)auStack_15._8_4_;
    fVar28 = VStack_14.x;
    uVar29 = VStack_18._0_8_;
    fVar30 = fStack_17;
    fVar31 = fStack_20;
    bVar32 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,radius,fStack_20,voxelHit,ignoreWoIds,(int32_t)layerMask,
                        (MethodInfo *)0x0);
    if (bVar32 != 0) {
      fStack_17 = (this->fields).elipsoidRadius.z;
      VStack_18.x = (this->fields).elipsoidRadius.x;
      VStack_18.y = (this->fields).elipsoidRadius.y;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      puVar33 = &UNK_?;
      R3Dir.y = uVar9._4_4_;
      R3Dir.x = (float)uVar9;
      R3Dir.z = fStack_10;
      R3Radius.z = fStack_17;
      R3Radius.x = VStack_18.x;
      R3Radius.y = VStack_18.y;
      fVar34 = MvCharacterController_DistanceR3SpaceToESpace
                         (in_stack_35,R3Dir,R3Radius,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)&UNK_?;
      pVVar13 = MathFunctions::MathFunctions_DivideVector
                          (&VStack_3,(Vector3 *)&stack0xfffffef8,&(this->fields).elipsoidRadius,
                           (MethodInfo *)0x0);
      VStack_8.z = pVVar13->z;
      VStack_8.x = pVVar13->x;
      VStack_8.y = pVVar13->y;
      uVar9._4_4_ = pVVar13->z;
      VStack_18._0_8_ = VStack_8._0_8_;
      fStack_20 = VStack_8.z;
      fStack_17 = MvCharacterController_GetCollisionAngle
                           (*ePos,*eVel,fVar34,*pVVar13,(MethodInfo *)0x0);
      if ((fStack_17 <= _UNK_?) || (fVar34 == 0.0)) {
        uVar36 = ePos->x;
        uVar37 = ePos->y;
        uVar38 = eVel->x;
        uVar39 = eVel->y;
        VStack_3.y = (float)uVar39 + (float)uVar37;
        VStack_3.x = (float)uVar38 + (float)uVar36;
        VStack_3.z = eVel->z + ePos->z;
        VStack_40.z = ePos->z;
        VStack_40.x = ePos->x;
        VStack_40.y = ePos->y;
        fStack_41 = eVel->z;
        VStack_18.z = ePos->z;
        uStack_42._0_4_ = eVel->x;
        uStack_42._4_4_ = eVel->y;
        fStack_17 = eVel->z;
        uVar43 = ePos->x;
        uVar44 = ePos->y;
        uVar45 = eVel->x;
        uVar46 = eVel->y;
        fStack_47 = (float)uVar45;
        fStack_48 = (float)uVar46;
        fStack_49 = (float)uVar36;
        uStack_50._0_4_ = (float)uVar43;
        uStack_50._4_4_ = (float)uVar44;
        if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        puVar51 = &UNK_?;
        ePos_00.y = uStack_50._4_4_;
        ePos_00.x = (float)uStack_50;
        ePos_00.z = VStack_18.z;
        eDir.y = fStack_48;
        eDir.x = fStack_47;
        eDir.z = fStack_17;
        ePoint.z = fStack_20;
        ePoint.x = VStack_18.x;
        ePoint.y = VStack_18.y;
        fVar52 = VStack_18.z;
        fVar53 = fStack_47;
        fVar54 = fStack_48;
        fVar55 = fStack_17;
        fVar56 = fVar34;
        fVar57 = MvCharacterController_GetCollisionAngle
                           (ePos_00,eDir,fVar34,ePoint,(MethodInfo *)0x0);
        dVar58 = (double)(fVar57 * _UNK_?);
        fVar57 = (float)uStack_50;
        fVar59 = uStack_50._4_4_;
        uStack_50 = dVar58;
        func_?();
        VStack_18.z = _UNK_? / (float)dVar58 -
                      (_UNK_? / (float)dVar58) * _UNK_?;
        puVar60 = &UNK_?;
        puVar61 = (undefined8 *)func_?();
        uStack_42 = *puVar61;
        fStack_41 = *(float *)(puVar61 + 1);
        if ((fVar34 - VStack_18.z < 0.0) || (VStack_18.z <= 0.0)) {
          puVar61 = (undefined8 *)func_?();
          VStack_62._0_8_ = *puVar61;
          VStack_62.z = *(float *)(puVar61 + 1);
          VStack_3._0_8_ = *puVar61;
          VStack_3.z = *(float *)(puVar61 + 1);
          fVar19 = (float10)func_?();
          uVar9._0_4_ = (float)fVar19;
          VStack_62.z = VStack_3.z * (float)uVar9;
          piVar63 = &(this->fields).collisionRecursionDepth;
          *piVar63 = *piVar63 + 1;
          VStack_62.y = VStack_3.y * (float)uVar9;
          VStack_62.x = VStack_3.x * (float)uVar9;
          VStack_3.z = VStack_62.z;
          pVVar2 = MvCharacterController_CollideWithWorld
                              (&VStack_14,this,ePos,&VStack_62,foundValidPosition,(MethodInfo *)0x0)
          ;
          uVar9._4_4_ = pVVar2->y;
          uVar9._0_4_ = pVVar2->z;
          __return_storage_ptr__->x = pVVar2->x;
          __return_storage_ptr__->y = uVar9._4_4_;
          __return_storage_ptr__->z = (float)uVar9;
          return __return_storage_ptr__;
        }
        uVar64 = ePos->x;
        uVar65 = ePos->y;
        fVar34 = fVar34 - VStack_18.z;
        fStack_48 = ePos->z;
        fStack_49 = (float)*puVar61;
        uStack_50._0_4_ = (float)((ulonglong)*puVar61 >> 0x20);
        fVar66 = (float)uVar64 + fStack_49 * fVar34;
        VStack_40.z = fStack_48 + fStack_41 * fVar34;
        uStack_42._4_4_ = (float)((ulonglong)uStack_42 >> 0x20);
        VStack_40.y = (float)uVar65 + (float)uStack_50 * fVar34;
        VStack_40.x = fVar66;
        fVar67 = VStack_8.x - (float)uStack_42 * VStack_18.z;
        fVar68 = VStack_8.y - uStack_42._4_4_ * VStack_18.z;
        fVar34 = VStack_8.z - fStack_41 * VStack_18.z;
        pVVar13 = &VStack_14;
        pCVar69 = (Cube *)&UNK_?;
        pMVar70 = this;
        fStack_71 = (float)uVar64;
        fStack_47 = (float)uVar65;
        VStack_8.z = fVar34;
        uStack_50._4_4_ = VStack_40.z;
        puVar61 = (undefined8 *)(*(this->klass->vtable).__unknown_2.methodPtr)();
        VStack_1._0_8_ = *puVar61;
        VStack_1.z = *(float *)(puVar61 + 1);
        if (SUB41(fVar56,0) != 0) {
          uVar4 = 0x90;
          puVar72 = &stack0xfffffe68;
          fVar73 = 0.0;
          puVar74 = &UNK_?;
          func_?();
          uVar75 = 0;
          uVar5 = 0;
          uVar76 = (this->fields).elipsoidRadius.x;
          uVar77 = (this->fields).elipsoidRadius.y;
          hit.interactionFlags._0_4_ = fVar66;
          hit._60_4_ = fVar34;
          hit.point.y = (float)puVar51;
          hit.point.x = uVar9._4_4_;
          hit.point.z = fVar57;
          hit.normal.x = fVar59;
          hit.normal.y = fVar52;
          hit.normal.z = fVar53;
          hit.cubePos.x = SUB42(fVar54,0);
          hit.cubePos.y = SUB42(fVar54,2);
          hit._28_4_ = fVar55;
          hit.face = (int32_t)fVar56;
          hit._36_4_ = puVar60;
          hit.woId = (int32_t)pCVar69;
          hit.cube = (Cube *)pVVar13;
          hit.distance = (float)pMVar70;
          hit.collider = (Collider *)fVar67;
          hit.transform = (Transform *)fVar68;
          hit.interactionFlags._4_4_ = puVar74;
          position.y = fStack_6;
          position.x = (float)puVar72;
          position.z = (float)uVar76;
          elipsoidRadius.y = (this->fields).elipsoidRadius.z;
          elipsoidRadius.x = (float)uVar77;
          elipsoidRadius.z = fVar73;
          R3Velocity.y = fStack_10;
          R3Velocity.x = (float)uVar4;
          R3Velocity.z = 0.0;
          uVar9._4_4_ = fStack_10;
          MVControllerColliderHit::MVControllerColliderHit__ctor
                    ((MVControllerColliderHit *)&stack0xfffffe68,hit,position,elipsoidRadius,
                     R3Velocity,0,in_stack_78);
          fVar34 = 0.0;
          puVar79 = (undefined4 *)&stack0xfffffe68;
          puVar80 = (undefined4 *)&stack0xfffffe2c;
          for (iVar81 = 0x24; iVar81 != 0; iVar81 = iVar81 + -1) {
            *puVar80 = *puVar79;
            puVar79 = puVar79 + 1;
            puVar80 = puVar80 + 1;
          }
          controllerColliderHit.positionTouchingHit.y = (float)uVar4;
          controllerColliderHit.positionTouchingHit.x = fVar73;
          controllerColliderHit.positionTouchingHit.z = uVar9._4_4_;
          controllerColliderHit.moveDirection.x = (float)uVar5;
          controllerColliderHit.moveDirection.y = (float)uVar75;
          controllerColliderHit.moveDirection.z = (float)in_stack_78;
          controllerColliderHit.elipsoidNormal.x = (float)puVar7;
          controllerColliderHit.elipsoidNormal.y = (float)puVar12;
          controllerColliderHit.elipsoidNormal.z = (float)pVVar11;
          controllerColliderHit.slopeNormal.x = (float)pVVar2;
          controllerColliderHit.slopeNormal.y = (float)puVar16;
          controllerColliderHit.slopeNormal.z = (float)this_00;
          controllerColliderHit.impactVelocity.x = (float)puVar24;
          controllerColliderHit.impactVelocity.y = fVar25;
          controllerColliderHit.impactVelocity.z = fVar26;
          controllerColliderHit._60_4_ = fVar27;
          controllerColliderHit.hit.point.x = fVar28;
          controllerColliderHit.hit.point.y = fVar22;
          controllerColliderHit.hit.point.z = fVar23;
          controllerColliderHit.hit.normal.x = (float)uVar29;
          controllerColliderHit.hit.normal.y = SUB84(uVar29,4);
          controllerColliderHit.hit.normal.z = fVar30;
          controllerColliderHit.hit.cubePos._0_4_ = fVar31;
          controllerColliderHit.hit._28_4_ = voxelHit;
          controllerColliderHit.hit.face = (int32_t)ignoreWoIds;
          controllerColliderHit.hit._36_4_ = layerMask;
          controllerColliderHit.hit.woId = (int32_t)fVar21;
          controllerColliderHit.hit.cube = (Cube *)in_stack_82._0_4_;
          controllerColliderHit.hit.distance = (float)in_stack_82._4_4_;
          controllerColliderHit.hit.collider = (Collider *)in_stack_82._8_4_;
          controllerColliderHit.hit.transform = (Transform *)in_stack_83;
          controllerColliderHit.hit._60_4_ = in_stack_84;
          controllerColliderHit.hit.interactionFlags._0_4_ = puVar33;
          controllerColliderHit.hit.interactionFlags._4_4_ = in_stack_35;
          controllerColliderHit.material = (MVMaterial *)(float)uVar9;
          controllerColliderHit._140_4_ = fVar34;
          MvCharacterController_SendCharacterCollision(this,controllerColliderHit,method_00);
        }
        piVar63 = &(this->fields).collisionRecursionDepth;
        *piVar63 = *piVar63 + 1;
        pVVar2 = MvCharacterController_CollideWithWorld
                            (&VStack_14,this,&VStack_40,&VStack_1,foundValidPosition,
                             (MethodInfo *)0x0);
      }
      else {
        puVar61 = (undefined8 *)func_?();
        VStack_85._0_8_ = *puVar61;
        VStack_85.z = *(float *)(puVar61 + 1);
        uStack_42 = *puVar61;
        fStack_41 = *(float *)(puVar61 + 1);
        fVar19 = (float10)func_?();
        uVar9._0_4_ = (float)fVar19;
        VStack_85.z = fStack_41 * (float)uVar9;
        piVar63 = &(this->fields).collisionRecursionDepth;
        *piVar63 = *piVar63 + 1;
        VStack_85.y = uStack_42._4_4_ * (float)uVar9;
        VStack_85.x = (float)uStack_42 * (float)uVar9;
        VStack_3.z = VStack_85.z;
        pVVar2 = MvCharacterController_CollideWithWorld
                            (&VStack_3,this,ePos,&VStack_85,foundValidPosition,(MethodInfo *)0x0);
      }
      uVar9._4_4_ = pVVar2->y;
      uVar9._0_4_ = pVVar2->z;
      __return_storage_ptr__->x = pVVar2->x;
      __return_storage_ptr__->y = uVar9._4_4_;
      __return_storage_ptr__->z = (float)uVar9;
      return __return_storage_ptr__;
    }
    pMVar86 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)(auStack_15 + 8),this,*ePos,*eVel,
                         1,(MethodInfo *)0x0);
    uVar87 = *(undefined1 *)&(pMVar86->position).x;
    uVar88 = *(undefined1 *)((int)&(pMVar86->position).x + 1);
    uVar89 = *(undefined1 *)((int)&(pMVar86->position).x + 2);
    uVar90 = *(undefined1 *)((int)&(pMVar86->position).x + 3);
    uVar91 = *(undefined1 *)&(pMVar86->position).y;
    uVar92 = *(undefined1 *)((int)&(pMVar86->position).y + 1);
    uVar93 = *(undefined1 *)((int)&(pMVar86->position).y + 2);
    uVar94 = *(undefined1 *)((int)&(pMVar86->position).y + 3);
    uVar95 = *(undefined1 *)&(pMVar86->position).z;
    uVar96 = *(undefined1 *)((int)&(pMVar86->position).z + 1);
    uVar97 = *(undefined1 *)((int)&(pMVar86->position).z + 2);
    uVar98 = *(undefined1 *)((int)&(pMVar86->position).z + 3);
    if (pMVar86->valid == 0) {
      uVar9._4_4_ = ePos->y;
      uVar9._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar9._4_4_;
      __return_storage_ptr__->z = (float)uVar9;
      return __return_storage_ptr__;
    }
  }
  else {
    pMVar86 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)(auStack_15 + 8),this,*ePos,*eVel,
                         1,(MethodInfo *)0x0);
    uVar87 = *(undefined1 *)&(pMVar86->position).x;
    uVar88 = *(undefined1 *)((int)&(pMVar86->position).x + 1);
    uVar89 = *(undefined1 *)((int)&(pMVar86->position).x + 2);
    uVar90 = *(undefined1 *)((int)&(pMVar86->position).x + 3);
    uVar91 = *(undefined1 *)&(pMVar86->position).y;
    uVar92 = *(undefined1 *)((int)&(pMVar86->position).y + 1);
    uVar93 = *(undefined1 *)((int)&(pMVar86->position).y + 2);
    uVar94 = *(undefined1 *)((int)&(pMVar86->position).y + 3);
    uVar95 = *(undefined1 *)&(pMVar86->position).z;
    uVar96 = *(undefined1 *)((int)&(pMVar86->position).z + 1);
    uVar97 = *(undefined1 *)((int)&(pMVar86->position).z + 2);
    uVar98 = *(undefined1 *)((int)&(pMVar86->position).z + 3);
    if (pMVar86->valid == 0) {
      *foundValidPosition = 0;
      uVar9._4_4_ = ePos->y;
      uVar9._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar9._4_4_;
      __return_storage_ptr__->z = (float)uVar9;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->x = uVar87;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 1) = uVar88;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 2) = uVar89;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 3) = uVar90;
  *(undefined1 *)&__return_storage_ptr__->y = uVar91;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 1) = uVar92;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 2) = uVar93;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 3) = uVar94;
  *(undefined1 *)&__return_storage_ptr__->z = uVar95;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 1) = uVar96;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 2) = uVar97;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 3) = uVar98;
  return __return_storage_ptr__;
}


/* Single DistanceESpaceToR3Space(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceESpaceToR3Space
                (float eDistance,Vector3 eDir,Vector3 R3Radius,MethodInfo *method)

{
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  puVar2 = (undefined8 *)func_?(&uStack_3,&eDir,0);
  VStack_1.x = (float)*puVar2;
  VStack_1.y = (float)((ulonglong)*puVar2 >> 0x20);
  VStack_1.y = VStack_1.y * eDistance;
  VStack_1.x = VStack_1.x * eDistance;
  VStack_1.z = *(float *)(puVar2 + 1) * eDistance;
  pVVar4 = MathFunctions::MathFunctions_MultiplyVector
                     (&VStack_5,&VStack_1,&R3Radius,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar4->x;
  uStack_3._4_4_ = pVVar4->y;
  fStack_6 = pVVar4->z;
  fVar7 = (float10)func_?(&uStack_3,0);
  return (float)fVar7;
}


/* Single DistanceR3SpaceToESpace(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceR3SpaceToESpace
                (float distance,Vector3 R3Dir,Vector3 R3Radius,MethodInfo *method)

{
  VStack_1.z = 0.0;
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  puVar2 = (undefined8 *)func_?(&uStack_3,&R3Dir,0);
  VStack_1.x = (float)*puVar2;
  VStack_1.y = (float)((ulonglong)*puVar2 >> 0x20);
  VStack_1.y = VStack_1.y * distance;
  VStack_1.x = VStack_1.x * distance;
  VStack_1.z = *(float *)(puVar2 + 1) * distance;
  pVVar4 = MathFunctions::MathFunctions_DivideVector
                     (&VStack_5,&VStack_1,&R3Radius,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar4->x;
  uStack_3._4_4_ = pVVar4->y;
  fStack_6 = pVVar4->z;
  fVar7 = (float10)func_?(&uStack_3,0);
  return (float)fVar7;
}


/* Single GetCollisionAngle(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetCollisionAngle
                (Vector3 ePos,Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  VStack_1.x = eDir.x;
  VStack_1.y = eDir.y;
  VStack_1.z = eDir.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&VStack_1,(MethodInfo *)0x0);
  ePos.x = ePoint.x - (ePos.x + VStack_1.x * distance);
  ePos.y = ePoint.y - (ePos.y + VStack_1.y * distance);
  ePos.z = ePoint.z - (ePos.z + VStack_1.z * distance);
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&ePos,(MethodInfo *)0x0);
  VStack_1.z = 0.0;
  VStack_1.x = ePos.y;
  VStack_1.y = ePos.z;
  fVar2 = (float10)func_?(eDir._0_8_,eDir.z,ePos.x);
  return (float)fVar2;
}


/* Vector3 GetGradientDirection(VoxelHit) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetGradientDirection
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,
                    VoxelHit elipsoidHit,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 == (Transform *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                     ((Vector3 *)&fStack_3,this_00,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = (this->fields).center.x;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar6 = (TypeInfo__UnityEngine__Vector3->static_fields->downVector).x;
  MathFunctions::MathFunctions_DivideVector
            ((Vector3 *)&fStack_3,&elipsoidHit.point,&(this->fields).elipsoidRadius,
             (MethodInfo *)(elipsoidHit.distance * (float)uVar6 + (float)uVar5 + (float)uVar4));
  MathFunctions::MathFunctions_DivideVector
            ((Vector3 *)&fStack_3,(Vector3 *)&stack0xffffffb4,&(this->fields).elipsoidRadius,
             (MethodInfo *)0x0);
  puVar7 = (undefined8 *)func_?();
  ppVVar8 = *(Vector3__Class ***)(puVar7 + 1);
  fStack_9 = (float)((ulonglong)*puVar7 >> 0x20);
  if (fStack_9 != _UNK_?) {
    uVar10 = *puVar7;
    if (cRam_? == '\0') {
      ppVVar8 = &TypeInfo__UnityEngine__Vector3;
      uVar10 = CONCAT44(&UNK_?,(int)uVar10);
      func_?();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    fStack_3 = (pVVar11->upVector).x;
    puStack_12 = (undefined *)(pVVar11->upVector).y;
    fVar13 = (float)uVar10 - fStack_3;
    fVar14 = (float)((ulonglong)uVar10 >> 0x20) - (float)puStack_12;
    fVar15 = (float)ppVVar8 - (pVVar11->upVector).z;
    if (_UNK_? <= fVar14 * fVar14 + fVar13 * fVar13 + fVar15 * fVar15) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uVar16 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
      fStack_3 = (float)uVar16;
      MathFunctions::MathFunctions_MultiplyVector
                ((Vector3 *)&fStack_3,(Vector3 *)&stack0xffffffa8,&(this->fields).elipsoidRadius,
                 (MethodInfo *)0x0);
      puVar7 = (undefined8 *)func_?();
      fStack_3 = (float)*puVar7;
      puStack_12 = (undefined *)((ulonglong)*puVar7 >> 0x20);
      uVar17 = (uint)puStack_12 ^
               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
      fVar15 = (float)(*(uint *)(puVar7 + 1) ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      __return_storage_ptr__->x =
           (float)((uint)fStack_3 ^
                  __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field);
      __return_storage_ptr__->y = (float)uVar17;
      __return_storage_ptr__->z = fVar15;
      return __return_storage_ptr__;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar13 = (pVVar11->zeroVector).y;
    fVar15 = (pVVar11->zeroVector).z;
    __return_storage_ptr__->x = (pVVar11->zeroVector).x;
    __return_storage_ptr__->y = fVar13;
    __return_storage_ptr__->z = fVar15;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar13 = (pVVar11->downVector).y;
  fVar15 = (pVVar11->downVector).z;
  __return_storage_ptr__->x = (pVVar11->downVector).x;
  __return_storage_ptr__->y = fVar13;
  __return_storage_ptr__->z = fVar15;
  return __return_storage_ptr__;
}


/* Single GetMoveBackDistance(Vector3, Vector3, Single, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetMoveBackDistance
                (Vector3 ePos,Vector3 eDir,float distance,Vector3 ePoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  fVar1 = MvCharacterController_GetCollisionAngle(ePos,eDir,distance,ePoint,(MethodInfo *)0x0);
  dVar2 = (double)(fVar1 * _UNK_?);
  func_?();
  return _UNK_? / (float)dVar2 - (_UNK_? / (float)dVar2) * _UNK_?;
}


/* Vector3 GetNormal(Vector3, Vector3, Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormal
                    (Vector3 *__return_storage_ptr__,Vector3 ePos,Vector3 eDir,float distance,
                    Vector3 ePoint,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1(&eDir,(MethodInfo *)0x0);
  eDir.z = ePoint.z - (ePos.z + eDir.z * distance);
  __return_storage_ptr__->x = ePoint.x - (ePos.x + eDir.x * distance);
  __return_storage_ptr__->y = ePoint.y - (ePos.y + eDir.y * distance);
  __return_storage_ptr__->z = eDir.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (__return_storage_ptr__,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Vector3 GetNormalizedVector(Vector3) */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetNormalizedVector
                    (Vector3 *__return_storage_ptr__,Vector3 InpVec,MethodInfo *method)

{
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  puVar1 = (undefined8 *)func_?(auStack_2,&InpVec,0);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar3;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
  __return_storage_ptr__->z = fVar4;
  if (__return_storage_ptr__->x * __return_storage_ptr__->x +
      __return_storage_ptr__->y * __return_storage_ptr__->y +
      __return_storage_ptr__->z * __return_storage_ptr__->z == _UNK_?) {
    fStack_5 = InpVec.z * _UNK_?;
    uStack_6 = CONCAT44(InpVec.y * _UNK_?,InpVec.x * _UNK_?);
    fStack_7 = fStack_5;
    puVar1 = (undefined8 *)func_?(auStack_2,&uStack_6,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    __return_storage_ptr__->x = (float)(int)uVar3;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar3 >> 0x20);
    __return_storage_ptr__->z = fVar4;
  }
  return __return_storage_ptr__;
}


/* List`1[MVOverlapResult] GetOverlappingObjects() */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_GetOverlappingObjects
          (MvCharacterController *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffd4,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->z;
    fVar3 = (this->fields).center.z;
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    radius = (this->fields).elipsoidRadius;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    ignoreWoIds = (this->fields).IgnoreWoIds;
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    position.y = 0.0;
    position.x = (float)ignoreWoIds;
    position.z = fVar3 + fVar2;
    pLVar4 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                       (radius,position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
    return pLVar4;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar4 = (List_1_MVOverlapResult_ *)(*pcVar5)();
  return pLVar4;
}


/* MvCharacterController+NoCollisionData HandleNoCollision(Vector3, Vector3, Boolean) */

MvCharacterController_NoCollisionData *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_HandleNoCollision
          (MvCharacterController_NoCollisionData *__return_storage_ptr__,MvCharacterController *this
          ,Vector3 ePos,Vector3 eVel,bool adjustVerticalOnly,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->position).x = 0.0;
  (__return_storage_ptr__->position).y = 0.0;
  (__return_storage_ptr__->position).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->valid = 0;
  func_?(&stack0xffffff10,0,0x48);
  func_?(&stack0xfffffec8,0,0x48);
  uVar1._0_4_ = MathFunctions::MathFunctions_MultiplyVector
                           ((Vector3 *)&stack0xffffffe0,&ePos,&(this->fields).elipsoidRadius,
                            (MethodInfo *)0x0);
  uVar2._0_4_ = ((Vector3 *)uVar1)->x;
  uVar2._4_4_ = ((Vector3 *)uVar1)->y;
  fVar3 = ((Vector3 *)uVar1)->z;
  uVar4 = uVar2;
  fVar5 = fVar3;
  uVar1._0_4_ = MathFunctions::MathFunctions_MultiplyVector
                           ((Vector3 *)&stack0xffffffe0,&eVel,&(this->fields).elipsoidRadius,
                            (MethodInfo *)0x0);
  fVar6 = ((Vector3 *)uVar1)->z;
  uVar7._0_4_ = ((Vector3 *)uVar1)->x;
  uVar7._4_4_ = ((Vector3 *)uVar1)->y;
  uVar1 = uVar7;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  InpVec.z = fVar6;
  InpVec.x = (float)(int)uVar1;
  InpVec.y = (float)(int)((ulonglong)uVar1 >> 0x20);
  uVar1._0_4_ = MvCharacterController_GetNormalizedVector
                           ((Vector3 *)&stack0xffffffe0,InpVec,(MethodInfo *)0x0);
  uVar8 = ((Vector3 *)uVar1)->x;
  uVar9 = ((Vector3 *)uVar1)->y;
  fStack_10 = ((Vector3 *)uVar1)->z;
  InpVec_00.y = eVel.y;
  InpVec_00.x = eVel.x;
  InpVec_00.z = eVel.z;
  pVVar11 = MvCharacterController_GetNormalizedVector
                      ((Vector3 *)&stack0xffffffe0,InpVec_00,(MethodInfo *)0x0);
  uVar1._0_4_ = (Vector3 *)pVVar11->x;
  uVar1._4_4_ = pVVar11->y;
  fStack_12 = pVVar11->z;
  bVar13 = cRam_? == '\0';
  (__return_storage_ptr__->position).x = ePos.x + eVel.x;
  (__return_storage_ptr__->position).y = ePos.y + eVel.y;
  (__return_storage_ptr__->position).z = ePos.z + eVel.z;
  __return_storage_ptr__->valid = 1;
  uVar14 = uVar8;
  uVar15 = uVar9;
  uVar16 = uVar1;
  if (bVar13) {
    func_?();
    cRam_? = '\x01';
    uVar14 = uVar8;
    uVar15 = uVar9;
  }
  pVVar11 = &(this->fields).elipsoidRadius;
  fVar17 = pVVar11->x;
  distance = MvCharacterController_DistanceESpaceToR3Space
                       (0.005,TypeInfo__UnityEngine__Vector3->static_fields->downVector,*pVVar11,
                        (MethodInfo *)0x0);
  fVar18 = (float)uVar2 + (float)(undefined4)uVar7;
  fVar19 = uVar2._4_4_ + (float)uVar7._4_4_;
  fVar20 = fVar3 + fVar6;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar21 = 0.0;
  fVar22 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  origin_00.y = fVar19;
  origin_00.x = fVar18;
  origin_00.z = fVar20;
  UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
            ((Ray *)&stack0xffffff70,origin_00,
             TypeInfo__UnityEngine__Vector3->static_fields->downVector,(MethodInfo *)0x0);
  fVar18 = (float)TypeInfo__MvCharacterController->static_fields->layerMask;
  ray_00.m_Origin.y = fVar22;
  ray_00.m_Origin.x = fVar21;
  ray_00.m_Origin.z = fVar23;
  ray_00.m_Direction.x = fVar24;
  ray_00.m_Direction.y = fVar25;
  ray_00.m_Direction.z = fVar26;
  bVar27 = CollisionDetection::CollisionDetection_MVElipsoidCast
                     (ray_00,(this->fields).elipsoidRadius,distance,(VoxelHit *)&stack0xffffff10,
                      (this->fields).IgnoreWoIds,(int32_t)fVar18,(MethodInfo *)0x0);
  if (bVar27 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar28._0_4_ = (this->fields).elipsoidRadius.x;
    uVar28._4_4_ = (this->fields).elipsoidRadius.y;
    pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar30._0_4_ = (pVVar29->downVector).x;
    uVar30._4_4_ = (pVVar29->downVector).y;
    fVar17 = (pVVar29->downVector).z;
    fVar19 = (this->fields).elipsoidRadius.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    R3Dir.z = fVar17;
    R3Dir.x = (float)(int)uVar30;
    R3Dir.y = (float)(int)((ulonglong)uVar30 >> 0x20);
    R3Radius.z = fVar19;
    R3Radius.x = (float)(int)uVar28;
    R3Radius.y = (float)(int)((ulonglong)uVar28 >> 0x20);
    fVar18 = MvCharacterController_DistanceR3SpaceToESpace(fVar18,R3Dir,R3Radius,(MethodInfo *)0x0);
    uVar2._0_4_ = (float)uVar2 + (float)(undefined4)uVar7;
    uVar2._4_4_ = uVar2._4_4_ + (float)uVar7._4_4_;
    fVar3 = fVar3 + fVar6;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar6 = 0.0;
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    origin.y = uVar2._4_4_;
    origin.x = (float)uVar2;
    origin.z = fVar3;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              ((Ray *)&stack0xffffff70,origin,
               TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    fVar17 = (this->fields).elipsoidRadius.z;
    ray.m_Origin.y = fVar19;
    ray.m_Origin.x = fVar6;
    ray.m_Origin.z = fVar20;
    ray.m_Direction.x = fVar21;
    ray.m_Direction.y = fVar22;
    ray.m_Direction.z = fVar23;
    bVar27 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,(this->fields).elipsoidRadius,distance,(VoxelHit *)&stack0xffffff10,
                        (this->fields).IgnoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    uVar2._0_4_ = ePos.x + eVel.x;
    uVar2._4_4_ = ePos.y + eVel.y;
    fVar3 = ePos.z + eVel.z;
    if (bVar27 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      __return_storage_ptr__->valid = 1;
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      __return_storage_ptr__->valid = 0;
    }
    pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar31 = (pVVar29->upVector).x;
    uVar32 = (pVVar29->upVector).y;
    fVar18 = _UNK_? - fVar18;
    fVar3 = (pVVar29->upVector).z * fVar18 + fVar3;
    (__return_storage_ptr__->position).x = (float)uVar31 * fVar18 + (float)uVar2;
    (__return_storage_ptr__->position).y = (float)uVar32 * fVar18 + uVar2._4_4_;
    (__return_storage_ptr__->position).z = fVar3;
    uVar33 = (__return_storage_ptr__->position).x;
    uVar34 = (__return_storage_ptr__->position).y;
    uVar2._4_4_ = (float)uVar33 - ePos.x;
    uVar2._0_4_ = (float)uVar34 - ePos.y;
    fVar3 = fVar3 - ePos.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    InpVec_01.y = (float)uVar2;
    InpVec_01.x = uVar2._4_4_;
    InpVec_01.z = fVar3;
    uVar1._0_4_ = MvCharacterController_GetNormalizedVector
                             ((Vector3 *)&stack0xffffffe0,InpVec_01,(MethodInfo *)0x0);
    uVar16._0_4_ = ((Vector3 *)uVar1)->x;
    uVar16._4_4_ = ((Vector3 *)uVar1)->y;
    fStack_12 = ((Vector3 *)uVar1)->z;
    pVVar11 = MathFunctions::MathFunctions_MultiplyVector
                        ((Vector3 *)&stack0xffffffe0,(Vector3 *)&stack0xffffff64,
                         &(this->fields).elipsoidRadius,(MethodInfo *)0x0);
    uVar1._0_4_ = (Vector3 *)&stack0xffffffe0;
    pVVar11 = MvCharacterController_GetNormalizedVector
                        ((Vector3 *)uVar1,*pVVar11,(MethodInfo *)0x0);
    uVar14 = pVVar11->x;
    uVar15 = pVVar11->y;
    fStack_10 = pVVar11->z;
  }
  if (adjustVerticalOnly == 0) {
    uVar2._0_4_ = (this->fields).elipsoidRadius.z;
    uVar35 = (this->fields).elipsoidRadius.x;
    uVar36 = (this->fields).elipsoidRadius.y;
    R3Radius_00.y = (float)uVar36;
    R3Radius_00.x = (float)uVar35;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar3 = 0.005;
    puVar37 = &UNK_?;
    eDir.z = fStack_12;
    eDir.x = (float)(int)uVar16;
    eDir.y = (float)(int)((ulonglong)uVar16 >> 0x20);
    R3Radius_00.z = (float)uVar2;
    uVar2._4_4_ = MvCharacterController_DistanceESpaceToR3Space
                            (0.005,eDir,R3Radius_00,(MethodInfo *)0x0);
    fVar6 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    fVar20 = (float)uVar4;
    this_00 = (Ray *)&stack0xffffff70;
    puVar38 = &UNK_?;
    origin_01.z = fVar5;
    origin_01.x = (float)(int)uVar4;
    origin_01.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    direction.y = (float)uVar15;
    direction.x = (float)uVar14;
    direction.z = fStack_10;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              (this_00,origin_01,direction,(MethodInfo *)0x0);
    uVar4._0_4_ = (this->fields).elipsoidRadius.x;
    uVar4._4_4_ = (this->fields).elipsoidRadius.y;
    uVar2._0_4_ = (this->fields).elipsoidRadius.z;
    fVar39 = (float10)func_?();
    uVar2._4_4_ = (float)fVar39 + uVar2._4_4_;
    ray_01.m_Origin.y = fVar18;
    ray_01.m_Origin.x = fVar6;
    ray_01.m_Origin.z = fVar19;
    ray_01.m_Direction.x = (float)puVar38;
    ray_01.m_Direction.y = (float)this_00;
    ray_01.m_Direction.z = fVar20;
    radius.z = (float)uVar2;
    radius.x = (float)(int)uVar4;
    radius.y = (float)(int)((ulonglong)uVar4 >> 0x20);
    bVar27 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray_01,radius,uVar2._4_4_,(VoxelHit *)&stack0xfffffec8,
                        (this->fields).IgnoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    if (bVar27 != 0) {
      uVar40._0_4_ = (this->fields).elipsoidRadius.x;
      uVar40._4_4_ = (this->fields).elipsoidRadius.y;
      fVar6 = (this->fields).elipsoidRadius.z;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      R3Dir_00.y = uVar2._4_4_;
      R3Dir_00.x = (float)uVar2;
      R3Dir_00.z = fStack_10;
      R3Radius_01.z = fVar6;
      R3Radius_01.x = (float)(int)uVar40;
      R3Radius_01.y = (float)(int)((ulonglong)uVar40 >> 0x20);
      uVar2._4_4_ = MvCharacterController_DistanceR3SpaceToESpace
                              (fVar17,R3Dir_00,R3Radius_01,(MethodInfo *)0x0);
      fVar39 = (float10)func_?();
      puVar41 = &stack0xffffff64;
      uVar2._0_4_ = (float)fVar39;
      puVar38 = &UNK_?;
      fVar39 = (float10)func_?();
      uVar2._0_4_ = (float)(fVar39 - (float10)(((float)uVar2 + _UNK_?) - uVar2._4_4_));
      (__return_storage_ptr__->position).x = ePos.x + (float)(Vector3 *)uVar1 * (float)uVar2;
      (__return_storage_ptr__->position).y = (float)puVar38 + (float)puVar37 * (float)uVar2;
      (__return_storage_ptr__->position).z = (float)puVar41 + fVar3 * (float)uVar2;
      __return_storage_ptr__->valid = 1;
    }
  }
  return __return_storage_ptr__;
}


/* Void Init(Single, Single, Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Init
               (MvCharacterController *this,float radius,float height,Vector3 center,
               MethodInfo *method)

{
  fVar1 = height * _UNK_?;
  (this->fields).center.x = center.x;
  (this->fields).center.y = center.y;
  (this->fields).centerBase.x = center.x;
  (this->fields).centerBase.y = center.y;
  (this->fields).elipsoidRadius.x = radius;
  (this->fields).elipsoidRadius.y = fVar1;
  (this->fields).elipsoidRadius.z = radius;
  (this->fields).center.z = center.z;
  (this->fields).centerBase.z = center.z;
  fVar2 = (this->fields).elipsoidRadius.y;
  fVar1 = (this->fields).elipsoidRadius.z;
  (this->fields).radiusBase.x = (this->fields).elipsoidRadius.x;
  (this->fields).radiusBase.y = fVar2;
  (this->fields).radiusBase.z = fVar1;
  return;
}


/* Void Move(Vector3, Boolean) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_Move
               (MvCharacterController *this,Vector3 motion,bool sendCollisionData,MethodInfo *method
               )

{
  pMVar1 = this->klass;
  (this->fields).sendCollisionData = sendCollisionData;
  (*(pMVar1->vtable).__unknown_1.methodPtr)
            (this,motion._0_8_,motion.z,(pMVar1->vtable).__unknown_1.method);
  (this->fields).sendCollisionData = 1;
  return;
}


/* Boolean OverlapCheckCollision(Vector3) */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_OverlapCheckCollision
               (MvCharacterController *this,Vector3 R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  radius = (this->fields).elipsoidRadius;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  bVar1 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckBool
                    (radius,R3Position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return bVar1 != 0;
}


/* List`1[MVOverlapResult] OverlappingObjects(Vector3) */

List_1_MVOverlapResult_ *
Assembly-CSharp.dll::MvCharacterController::MvCharacterController_OverlappingObjects
          (MvCharacterController *this,Vector3 R3Position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVElipsoidOverlapCheck);
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  radius = (this->fields).elipsoidRadius;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  rotation = TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MvCharacterController);
  }
  ignoreWoIds = (this->fields).IgnoreWoIds;
  layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
  if ((TypeInfo__MVElipsoidOverlapCheck->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVElipsoidOverlapCheck);
  }
  pLVar1 = MVElipsoidOverlapCheck::MVElipsoidOverlapCheck_ElipsoidOverlapCheckSector
                     (radius,R3Position,rotation,layerMask,ignoreWoIds,(MethodInfo *)0x0);
  return pLVar1;
}


/* Void SendCharacterCollision(MVControllerColliderHit) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SendCharacterCollision
               (MvCharacterController *this,MVControllerColliderHit controllerColliderHit,
               MethodInfo *method)

{
  if ((this->fields).sendCollisionData != 0) {
    pAVar1 = (this->fields).OnControllerColliderHit;
    if (pAVar1 == (Action_1_MVControllerColliderHit_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puStack_3 = (pAVar1->fields)._._.method;
    puVar4 = (undefined4 *)&stack0x00000008;
    puVar5 = auStack_6;
    for (iVar7 = 0x24; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code);
  }
  return;
}


/* Void SetScale(Single) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_SetScale
               (MvCharacterController *this,float scale,MethodInfo *method)

{
  uVar1 = (this->fields).centerBase.x;
  uVar2 = (this->fields).centerBase.y;
  fVar3 = (this->fields).centerBase.z;
  (this->fields).center.x = (float)uVar1 * scale;
  (this->fields).center.y = (float)uVar2 * scale;
  fVar4 = (this->fields).offsetBase;
  (this->fields).center.z = fVar3 * scale;
  fVar3 = (this->fields).radiusBase.y;
  fVar5 = (this->fields).radiusBase.z;
  (this->fields).elipsoidRadius.x = scale * (this->fields).radiusBase.x;
  (this->fields).elipsoidRadius.y = scale * fVar3;
  (this->fields).elipsoidRadius.z = scale * fVar5;
  (this->fields).offsetFactor = scale * fVar4;
  return;
}


/* Boolean TestWithOutSliding(Single, Vector3, Vector3, MVControllerColliderHit ByRef) */

bool Assembly-CSharp.dll::MvCharacterController::MvCharacterController_TestWithOutSliding
               (MvCharacterController *this,float distance,Vector3 direction,Vector3 motion,
               MVControllerColliderHit *colliderHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  func_?();
  fStack_1 = (this->fields).elipsoidRadius.x;
  fStack_2 = (this->fields).elipsoidRadius.y - (this->fields).offsetFactor;
  fStack_3 = (this->fields).elipsoidRadius.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&direction,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_5,this_00,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    uVar7 = (this->fields).center.x;
    uVar8 = (this->fields).center.y;
    VStack_5.x = (float)uVar7 + (float)(undefined4)uStack_6;
    VStack_5.y = (float)uVar8 + (float)uStack_6._4_4_;
    fVar9 = (this->fields).center.z + pVVar4->z;
    RStack_10.m_Origin.x = 0.0;
    RStack_10.m_Origin.y = 0.0;
    RStack_10.m_Origin.z = 0.0;
    RStack_10.m_Direction.x = 0.0;
    RStack_10.m_Direction.y = 0.0;
    RStack_10.m_Direction.z = 0.0;
    VStack_5.z = 0.0;
    uStack_11 = 0;
    origin.y = VStack_5.y;
    origin.x = VStack_5.x;
    origin.z = fVar9;
    direction_00.z = direction.z;
    direction_00.x = direction.x;
    direction_00.y = direction.y;
    fStack_12 = fVar9;
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
              (&RStack_10,origin,direction_00,(MethodInfo *)0x0);
    fStack_13 = (this->fields).offsetFactor;
    ignoreWoIds = (this->fields).IgnoreWoIds;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar14 = fStack_3;
    ray.m_Origin.y = RStack_10.m_Origin.y;
    ray.m_Origin.x = RStack_10.m_Origin.x;
    ray.m_Origin.z = RStack_10.m_Origin.z;
    ray.m_Direction.x = RStack_10.m_Direction.x;
    ray.m_Direction.y = RStack_10.m_Direction.y;
    ray.m_Direction.z = RStack_10.m_Direction.z;
    radius.y = fStack_2;
    radius.x = fStack_1;
    radius.z = fStack_3;
    bVar15 = CollisionDetection::CollisionDetection_MVElipsoidCast
                      (ray,radius,fStack_13 + distance,&VStack_16,ignoreWoIds,
                       TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
    if (bVar15 == 0) {
      return 0;
    }
    func_?();
    hit.point.y = VStack_16.point.z;
    hit.point.x = VStack_16.point.y;
    hit.point.z = VStack_16.normal.x;
    hit.normal.x = VStack_16.normal.y;
    hit.normal.y = VStack_16.normal.z;
    hit.normal.z = (float)VStack_16.cubePos._0_4_;
    hit.cubePos.x = VStack_16.cubePos.z;
    hit.cubePos.y = VStack_16._30_2_;
    hit._28_4_ = VStack_16.face;
    hit.face = VStack_16._36_4_;
    hit._36_4_ = VStack_16.woId;
    hit.woId = (int32_t)VStack_16.cube;
    hit.cube = (Cube *)VStack_16.distance;
    hit.distance = (float)VStack_16.collider;
    hit.collider = (Collider *)VStack_16.transform;
    hit.transform = (Transform *)VStack_16._60_4_;
    hit._60_8_ = VStack_16.interactionFlags;
    hit.interactionFlags._4_4_ = VStack_5.x;
    position.y = fVar9;
    position.x = VStack_5.y;
    position.z = fStack_1;
    elipsoidRadius.y = fVar14;
    elipsoidRadius.x = fStack_2;
    elipsoidRadius.z = motion.x;
    R3Velocity.z = 1.4013e-45;
    R3Velocity.x = (float)(int)motion._4_8_;
    R3Velocity.y = (float)(int)((ulonglong)motion._4_8_ >> 0x20);
    MVControllerColliderHit::MVControllerColliderHit__ctor
              ((MVControllerColliderHit *)&stack0xfffffec0,hit,position,elipsoidRadius,R3Velocity,0,
               in_stack_17);
    pfVar18 = (float *)&stack0xfffffec0;
    pMVar19 = colliderHit;
    for (iVar20 = 0x24; iVar20 != 0; iVar20 = iVar20 + -1) {
      (pMVar19->positionTouchingHit).x = *pfVar18;
      pfVar18 = pfVar18 + 1;
      pMVar19 = (MVControllerColliderHit *)&(pMVar19->positionTouchingHit).y;
    }
    func_?();
    if ((this->fields).sendCollisionData != 0) {
      pAVar21 = (this->fields).OnControllerColliderHit;
      if (pAVar21 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      pfVar18 = afStack_22;
      for (iVar20 = 0x24; iVar20 != 0; iVar20 = iVar20 + -1) {
        *pfVar18 = (colliderHit->positionTouchingHit).x;
        colliderHit = (MVControllerColliderHit *)&(colliderHit->positionTouchingHit).y;
        pfVar18 = pfVar18 + 1;
      }
      (*(pAVar21->fields)._._.invoke_impl)((pAVar21->fields)._._.method_code);
    }
    return 1;
  }
code_?:
  func_?();
  pcVar23 = (code *)swi(3);
  bVar15 = (*pcVar23)();
  return bVar15;
}


/* MvCharacterController() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MvCharacterController);
    cRam_? = '\x01';
  }
  TypeInfo__MvCharacterController->static_fields->layerMask = -1;
  return;
}


/* MvCharacterController() */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController__ctor
               (MvCharacterController *this,MethodInfo *method)

{
  (this->fields).sendCollisionData = 1;
  (this->fields).offsetFactor = 0.1;
  (this->fields).offsetBase = 0.1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Single get_Height() */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_get_Height
                (MvCharacterController *this,MethodInfo *method)

{
  fVar1 = (this->fields).elipsoidRadius.y;
  return fVar1 + fVar1;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::MvCharacterController::MvCharacterController_get_Velocity
                    (Vector3 *__return_storage_ptr__,MvCharacterController *this,MethodInfo *method)

{
  fVar1 = (this->fields)._Velocity_k__BackingField.y;
  fVar2 = (this->fields)._Velocity_k__BackingField.z;
  __return_storage_ptr__->x = (this->fields)._Velocity_k__BackingField.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void set_Velocity(Vector3) */

void Assembly-CSharp.dll::MvCharacterController::MvCharacterController_set_Velocity
               (MvCharacterController *this,Vector3 value,MethodInfo *method)

{
  (this->fields)._Velocity_k__BackingField.x = value.x;
  (this->fields)._Velocity_k__BackingField.y = value.y;
  (this->fields)._Velocity_k__BackingField.z = value.z;
  return;
}

