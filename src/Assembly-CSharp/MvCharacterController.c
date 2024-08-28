
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
  if ((this->fields).collisionRecursionDepth < 8) {
    pVVar1 = &(this->fields).elipsoidRadius;
    pVVar2 = MathFunctions::MathFunctions_MultiplyVector(&VStack_3,ePos,pVVar1,(MethodInfo *)0x0)
    ;
    uVar4 = pVVar2->x;
    uVar5 = pVVar2->y;
    ray.m_Origin.y = (float)uVar5;
    ray.m_Origin.x = (float)uVar4;
    fStack_6 = pVVar2->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector(&VStack_7,eVel,pVVar1,(MethodInfo *)0x0)
    ;
    fStack_8 = pVVar1->z;
    uVar9._0_4_ = pVVar1->x;
    uVar9._4_4_ = pVVar1->y;
    puVar10 = &UNK_?;
    VStack_3._0_8_ = uVar9;
    VStack_3.z = fStack_8;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_7,*pVVar1,(MethodInfo *)0x0);
    auStack_11._0_4_ = fStack_6;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_7,*pVVar1,(MethodInfo *)0x0);
    uVar12 = pVVar1->x;
    uVar13 = pVVar1->y;
    auStack_11._12_4_ = pVVar1->z;
    fStack_14 = (this->fields).elipsoidRadius.z;
    VStack_15.x = (this->fields).elipsoidRadius.x;
    VStack_15.y = (this->fields).elipsoidRadius.y;
    auStack_11._4_4_ = uVar12;
    auStack_11._8_4_ = uVar13;
    fVar16 = (float10)func_?();
    ignoreWoIds = (this->fields).IgnoreWoIds;
    pTStack_17 = (Transform *)(float)fVar16;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar18 = 0.0;
    layerMask = (float)TypeInfo__MvCharacterController->static_fields->layerMask;
    voxelHit = (VoxelHit *)&stack0xfffffef4;
    fVar19 = VStack_15.x;
    fVar20 = VStack_15.y;
    puVar21 = &UNK_?;
    ray.m_Origin.z = (float)auStack_11._0_4_;
    ray.m_Direction.x = (float)auStack_11._4_4_;
    ray.m_Direction.y = (float)auStack_11._8_4_;
    ray.m_Direction.z = (float)auStack_11._12_4_;
    radius.z = fStack_14;
    radius.x = VStack_15.x;
    radius.y = VStack_15.y;
    fVar22 = (float)uVar4;
    fVar23 = (float)uVar5;
    fVar24 = (float)auStack_11._0_4_;
    fVar25 = (float)auStack_11._4_4_;
    fVar26 = (float)auStack_11._8_4_;
    fVar27 = (float)auStack_11._12_4_;
    fVar28 = fStack_14;
    pTVar29 = pTStack_17;
    bVar30 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,radius,(float)pTStack_17,voxelHit,ignoreWoIds,(int32_t)layerMask,
                        (MethodInfo *)0x0);
    if (bVar30 != 0) {
      fStack_14 = (this->fields).elipsoidRadius.z;
      VStack_15.x = (this->fields).elipsoidRadius.x;
      VStack_15.y = (this->fields).elipsoidRadius.y;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      puVar31 = &UNK_?;
      R3Dir.z = fStack_8;
      R3Dir.x = (float)uVar9;
      R3Dir.y = uVar9._4_4_;
      R3Radius.z = fStack_14;
      R3Radius.x = VStack_15.x;
      R3Radius.y = VStack_15.y;
      fVar32 = (float)uVar9;
      fVar33 = uVar9._4_4_;
      distance = (Cube *)MvCharacterController_DistanceR3SpaceToESpace
                                   (in_stack_34,R3Dir,R3Radius,(MethodInfo *)0x0);
      vec1 = (Cube *)&(this->fields).elipsoidRadius;
      pVVar2 = (Vector3 *)&stack0xfffffef4;
      pVVar1 = &VStack_3;
      puVar35 = &UNK_?;
      pVVar36 = MathFunctions::MathFunctions_DivideVector
                          (pVVar1,pVVar2,(Vector3 *)vec1,(MethodInfo *)0x0);
      VStack_7.z = pVVar36->z;
      uVar37._0_4_ = pVVar36->x;
      uVar37._4_4_ = pVVar36->y;
      fVar38 = pVVar36->z;
      method_00 = (MethodInfo *)&UNK_?;
      VStack_7._0_8_ = uVar37;
      VStack_15._0_8_ = uVar37;
      pTStack_17 = (Transform *)VStack_7.z;
      fStack_14 = MvCharacterController_GetCollisionAngle
                           (*ePos,*eVel,(float)distance,*pVVar36,(MethodInfo *)0x0);
      if ((fStack_14 <= _UNK_?) || ((float)distance == 0.0)) {
        uVar39 = ePos->x;
        uVar40 = ePos->y;
        uVar41 = eVel->x;
        uVar42 = eVel->y;
        fVar43 = eVel->z;
        VStack_3.y = (float)uVar42 + (float)uVar40;
        VStack_3.x = (float)uVar41 + (float)uVar39;
        VStack_3.z = fVar43 + ePos->z;
        uVar44 = eVel->x;
        uVar45 = eVel->y;
        VStack_15.z = ePos->z;
        fStack_14 = eVel->z;
        uVar46 = ePos->x;
        uVar47 = ePos->y;
        uVar48 = eVel->x;
        uVar49 = eVel->y;
        iStack_50 = uVar48;
        fStack_51 = (float)uVar49;
        fStack_52 = (float)uVar39;
        auStack_53._0_4_ = uVar46;
        auStack_53._4_4_ = uVar47;
        fStack_54 = (float)uVar41;
        fStack_55 = (float)uVar44;
        fStack_56 = (float)uVar45;
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
        uVar57 = 0;
        fVar58 = VStack_15.x;
        pCVar59 = VStack_15.y;
        puVar60 = &UNK_?;
        ePos_00.y = (float)auStack_53._4_4_;
        ePos_00.x = (float)auStack_53._0_4_;
        ePos_00.z = VStack_15.z;
        eDir.y = fStack_51;
        eDir.x = (float)iStack_50;
        eDir.z = fStack_14;
        ePoint.z = (float)pTStack_17;
        ePoint.x = VStack_15.x;
        ePoint.y = VStack_15.y;
        fVar61 = VStack_15.z;
        iVar62 = iStack_50;
        fVar63 = fStack_51;
        fVar64 = fStack_14;
        pCVar65 = distance;
        pTVar66 = pTStack_17;
        fVar67 = MvCharacterController_GetCollisionAngle
                           (ePos_00,eDir,(float)distance,ePoint,(MethodInfo *)0x0);
        dVar68 = (double)(fVar67 * _UNK_?);
        fVar67 = (float)auStack_53._0_4_;
        uVar69 = auStack_53._4_4_;
        auStack_53 = (undefined1  [8])dVar68;
        func_?();
        VStack_15.z = _UNK_? / (float)dVar68 -
                      (_UNK_? / (float)dVar68) * _UNK_?;
        value.y = fStack_56;
        value.x = fStack_55;
        value.z = fVar43;
        pVVar36 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)(auStack_11 + 4),value,(MethodInfo *)0x0);
        uVar70 = pVVar36->x;
        uVar71 = pVVar36->y;
        fStack_51 = pVVar36->z;
        fStack_72 = (float)uVar70;
        iStack_50 = uVar71;
        if (((float)distance - VStack_15.z < 0.0) || (VStack_15.z <= 0.0)) {
          pMStack_73 = this;
          VStack_74.z = 1.12104e-44;
          VStack_74.y = (float)(auStack_11 + 4);
          VStack_74.x = (float)&UNK_?;
          puVar75 = (undefined8 *)func_?();
          VStack_74._0_8_ = (ulonglong)(uint)VStack_74.y << 0x20;
          VStack_3._0_8_ = *puVar75;
          VStack_3.z = *(float *)(puVar75 + 1);
          fVar16 = (float10)func_?();
          uVar9._0_4_ = (float)fVar16;
          VStack_74.z = VStack_3.z * (float)uVar9;
          piVar76 = &(this->fields).collisionRecursionDepth;
          *piVar76 = *piVar76 + 1;
          VStack_74.y = VStack_3.y * (float)uVar9;
          VStack_74.x = VStack_3.x * (float)uVar9;
          VStack_3.z = VStack_74.z;
          pVVar1 = MvCharacterController_CollideWithWorld
                              ((Vector3 *)(auStack_11 + 4),this,ePos,&VStack_74,foundValidPosition,
                               (MethodInfo *)0x0);
          uVar9._4_4_ = pVVar1->y;
          uVar9._0_4_ = pVVar1->z;
          __return_storage_ptr__->x = pVVar1->x;
          __return_storage_ptr__->y = uVar9._4_4_;
          __return_storage_ptr__->z = (float)uVar9;
          return __return_storage_ptr__;
        }
        uVar77 = ePos->x;
        uVar78 = ePos->y;
        auStack_53._4_4_ = ePos->z;
        uVar79 = pVVar36->x;
        uVar80 = pVVar36->y;
        fStack_56 = (float)auStack_53._4_4_ + fStack_51 * ((float)distance - VStack_15.z);
        pMStack_73 = (MvCharacterController *)(VStack_7.x - (float)uVar70 * VStack_15.z);
        VStack_7.z = VStack_7.z - fStack_51 * VStack_15.z;
        VStack_74.z = (float)this;
        VStack_74.y = (float)(auStack_11 + 4);
        VStack_74.x = (float)&UNK_?;
        fStack_52 = (float)uVar77;
        auStack_53._0_4_ = uVar78;
        fStack_54 = (float)uVar79;
        fStack_55 = (float)uVar80;
        (*(code *)(this->klass->vtable).__unknown_2.method)();
        if (SUB41(fVar63,0) != 0) {
          func_?();
          uVar81 = 0;
          uVar82 = 0;
          uVar83 = (this->fields).elipsoidRadius.x;
          uVar84 = (this->fields).elipsoidRadius.y;
          hit.point.y = uVar37._4_4_;
          hit.point.x = (float)uVar37;
          hit.point.z = fVar38;
          hit.normal.x = (float)puVar60;
          hit.normal.y = fVar67;
          hit.normal.z = (float)uVar69;
          hit.cubePos._0_4_ = fVar61;
          hit._28_4_ = iVar62;
          hit.face = (int32_t)fVar63;
          hit._36_4_ = fVar64;
          hit.woId = (int32_t)pCVar65;
          hit.cube = (Cube *)fVar58;
          hit.distance = (float)pCVar59;
          hit.collider = (Collider *)pTVar66;
          hit.transform = (Transform *)uVar57;
          hit._60_4_ = in_stack_85;
          hit.interactionFlags._0_4_ = uStack_86;
          hit.interactionFlags._4_4_ = uVar4;
          position.y = fStack_6;
          position.x = (float)uVar5;
          position.z = (float)uVar83;
          elipsoidRadius.y = (this->fields).elipsoidRadius.z;
          elipsoidRadius.x = (float)uVar84;
          elipsoidRadius.z = (float)uVar9;
          R3Velocity.y = fStack_8;
          R3Velocity.x = uVar9._4_4_;
          R3Velocity.z = 0.0;
          uVar37._0_4_ = fStack_8;
          MVControllerColliderHit::MVControllerColliderHit__ctor
                    ((MVControllerColliderHit *)&stack0xfffffe64,hit,position,elipsoidRadius,
                     R3Velocity,0,unaff_ESI);
          uVar37._4_4_ = 0.0;
          puVar87 = (undefined4 *)&stack0xfffffe64;
          puVar88 = (undefined4 *)&stack0xfffffe44;
          for (iVar89 = 0x24; iVar89 != 0; iVar89 = iVar89 + -1) {
            *puVar88 = *puVar87;
            puVar87 = puVar87 + 1;
            puVar88 = puVar88 + 1;
          }
          controllerColliderHit.positionTouchingHit.y = uVar9._4_4_;
          controllerColliderHit.positionTouchingHit.x = (float)uVar9;
          controllerColliderHit.positionTouchingHit.z = (float)uVar37;
          controllerColliderHit.moveDirection.x = (float)uVar82;
          controllerColliderHit.moveDirection.y = (float)uVar81;
          controllerColliderHit.moveDirection.z = (float)unaff_ESI;
          controllerColliderHit.elipsoidNormal.x = (float)puVar10;
          controllerColliderHit.elipsoidNormal.y = (float)puVar21;
          controllerColliderHit.elipsoidNormal.z = fVar22;
          controllerColliderHit.slopeNormal.x = fVar23;
          controllerColliderHit.slopeNormal.y = fVar24;
          controllerColliderHit.slopeNormal.z = fVar25;
          controllerColliderHit.impactVelocity.x = fVar26;
          controllerColliderHit.impactVelocity.y = fVar27;
          controllerColliderHit.impactVelocity.z = fVar19;
          controllerColliderHit._60_4_ = fVar20;
          controllerColliderHit.hit.point.x = fVar28;
          controllerColliderHit.hit.point.y = (float)pTVar29;
          controllerColliderHit.hit.point.z = (float)voxelHit;
          controllerColliderHit.hit.normal.x = (float)ignoreWoIds;
          controllerColliderHit.hit.normal.y = layerMask;
          controllerColliderHit.hit.normal.z = fVar18;
          uVar90 = in_stack_91._0_6_;
          controllerColliderHit.hit.cubePos.x = (short)uVar90;
          controllerColliderHit.hit.cubePos.y = (short)((uint6)uVar90 >> 0x10);
          controllerColliderHit.hit.cubePos.z = (short)((uint6)uVar90 >> 0x20);
          controllerColliderHit.hit._30_2_ = in_stack_91._6_2_;
          controllerColliderHit.hit.face = in_stack_91._8_4_;
          controllerColliderHit.hit._36_4_ = in_stack_92;
          controllerColliderHit.hit.woId = (int32_t)in_stack_93;
          controllerColliderHit.hit.cube = (Cube *)puVar31;
          controllerColliderHit.hit.distance = in_stack_34;
          controllerColliderHit.hit.collider = (Collider *)fVar32;
          controllerColliderHit.hit.transform = (Transform *)fVar33;
          controllerColliderHit.hit._60_4_ = puVar35;
          controllerColliderHit.hit.interactionFlags._0_4_ = pVVar1;
          controllerColliderHit.hit.interactionFlags._4_4_ = pVVar2;
          controllerColliderHit.material = (MVMaterial *)vec1;
          controllerColliderHit._140_4_ = uVar37._4_4_;
          MvCharacterController_SendCharacterCollision(this,controllerColliderHit,method_00);
        }
        piVar76 = &(this->fields).collisionRecursionDepth;
        *piVar76 = *piVar76 + 1;
        pVVar1 = MvCharacterController_CollideWithWorld
                            ((Vector3 *)(auStack_11 + 4),this,(Vector3 *)&pMStack_73,
                             (Vector3 *)&stack0xffffff54,foundValidPosition,(MethodInfo *)0x0);
      }
      else {
        puVar75 = (undefined8 *)func_?();
        fStack_56 = *(float *)(puVar75 + 1);
        fStack_54 = (float)*puVar75;
        fStack_55 = (float)((ulonglong)*puVar75 >> 0x20);
        fVar16 = (float10)func_?();
        VStack_3.z = fStack_56 * (float)fVar16;
        piVar76 = &(this->fields).collisionRecursionDepth;
        *piVar76 = *piVar76 + 1;
        pVVar1 = MvCharacterController_CollideWithWorld
                            (&VStack_3,this,ePos,(Vector3 *)&stack0xffffff6c,foundValidPosition,
                             (MethodInfo *)0x0);
      }
      uVar9._4_4_ = pVVar1->y;
      uVar9._0_4_ = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = uVar9._4_4_;
      __return_storage_ptr__->z = (float)uVar9;
      return __return_storage_ptr__;
    }
    pMVar94 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)auStack_11,this,*ePos,*eVel,1,
                         (MethodInfo *)0x0);
    uVar95 = *(undefined1 *)&(pMVar94->position).x;
    uVar96 = *(undefined1 *)((int)&(pMVar94->position).x + 1);
    uVar97 = *(undefined1 *)((int)&(pMVar94->position).x + 2);
    uVar98 = *(undefined1 *)((int)&(pMVar94->position).x + 3);
    uVar99 = *(undefined1 *)&(pMVar94->position).y;
    uVar100 = *(undefined1 *)((int)&(pMVar94->position).y + 1);
    uVar101 = *(undefined1 *)((int)&(pMVar94->position).y + 2);
    uVar102 = *(undefined1 *)((int)&(pMVar94->position).y + 3);
    uVar103 = *(undefined1 *)&(pMVar94->position).z;
    uVar104 = *(undefined1 *)((int)&(pMVar94->position).z + 1);
    uVar105 = *(undefined1 *)((int)&(pMVar94->position).z + 2);
    uVar106 = *(undefined1 *)((int)&(pMVar94->position).z + 3);
    if (pMVar94->valid == 0) {
      uVar9._4_4_ = ePos->y;
      uVar9._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar9._4_4_;
      __return_storage_ptr__->z = (float)uVar9;
      return __return_storage_ptr__;
    }
  }
  else {
    pMVar94 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)auStack_11,this,*ePos,*eVel,1,
                         (MethodInfo *)0x0);
    uVar95 = *(undefined1 *)&(pMVar94->position).x;
    uVar96 = *(undefined1 *)((int)&(pMVar94->position).x + 1);
    uVar97 = *(undefined1 *)((int)&(pMVar94->position).x + 2);
    uVar98 = *(undefined1 *)((int)&(pMVar94->position).x + 3);
    uVar99 = *(undefined1 *)&(pMVar94->position).y;
    uVar100 = *(undefined1 *)((int)&(pMVar94->position).y + 1);
    uVar101 = *(undefined1 *)((int)&(pMVar94->position).y + 2);
    uVar102 = *(undefined1 *)((int)&(pMVar94->position).y + 3);
    uVar103 = *(undefined1 *)&(pMVar94->position).z;
    uVar104 = *(undefined1 *)((int)&(pMVar94->position).z + 1);
    uVar105 = *(undefined1 *)((int)&(pMVar94->position).z + 2);
    uVar106 = *(undefined1 *)((int)&(pMVar94->position).z + 3);
    if (pMVar94->valid == 0) {
      *foundValidPosition = 0;
      uVar9._4_4_ = ePos->y;
      uVar9._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar9._4_4_;
      __return_storage_ptr__->z = (float)uVar9;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->x = uVar95;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 1) = uVar96;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 2) = uVar97;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 3) = uVar98;
  *(undefined1 *)&__return_storage_ptr__->y = uVar99;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 1) = uVar100;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 2) = uVar101;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 3) = uVar102;
  *(undefined1 *)&__return_storage_ptr__->z = uVar103;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 1) = uVar104;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 2) = uVar105;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 3) = uVar106;
  return __return_storage_ptr__;
}


/* Single DistanceESpaceToR3Space(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceESpaceToR3Space
                (float eDistance,Vector3 eDir,Vector3 R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)(auStack_2 + 8),eDir,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  auStack_2._4_4_ = (float)uStack_3._4_4_ * eDistance;
  auStack_2._0_4_ = (float)(undefined4)uStack_3 * eDistance;
  auStack_2._8_4_ = pVVar1->z * eDistance;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                     ((Vector3 *)&stack0xfffffffc,(Vector3 *)auStack_2,&R3Radius,(MethodInfo *)0x0)
  ;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = pVVar1->z;
  if (cRam_? == '\0') {
    auStack_2._8_4_ = &TypeInfo__System__Math;
    auStack_2._4_4_ = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    auStack_2._8_4_ = TypeInfo__System__Math;
    auStack_2._4_4_ = &UNK_?;
    func_?();
  }
  dVar7 = (double)((float)uVar4 * (float)uVar4 + (float)uVar5 * (float)uVar5 + fVar6 * fVar6);
  if (0.0 <= dVar7) {
    return (float)SQRT(dVar7);
  }
  auStack_2._8_4_ = &UNK_?;
  func_?();
  return (float)dVar7;
}


/* Single DistanceR3SpaceToESpace(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceR3SpaceToESpace
                (float distance,Vector3 R3Dir,Vector3 R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)(auStack_2 + 8),R3Dir,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  auStack_2._4_4_ = (float)uStack_3._4_4_ * distance;
  auStack_2._0_4_ = (float)(undefined4)uStack_3 * distance;
  auStack_2._8_4_ = pVVar1->z * distance;
  pVVar1 = MathFunctions::MathFunctions_DivideVector
                     ((Vector3 *)&stack0xfffffffc,(Vector3 *)auStack_2,&R3Radius,(MethodInfo *)0x0)
  ;
  uVar4 = pVVar1->x;
  uVar5 = pVVar1->y;
  fVar6 = pVVar1->z;
  if (cRam_? == '\0') {
    auStack_2._8_4_ = &TypeInfo__System__Math;
    auStack_2._4_4_ = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    auStack_2._8_4_ = TypeInfo__System__Math;
    auStack_2._4_4_ = &UNK_?;
    func_?();
  }
  dVar7 = (double)((float)uVar4 * (float)uVar4 + (float)uVar5 * (float)uVar5 + fVar6 * fVar6);
  if (0.0 <= dVar7) {
    return (float)SQRT(dVar7);
  }
  auStack_2._8_4_ = &UNK_?;
  func_?();
  return (float)dVar7;
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
                      ((Vector3 *)&puStack_3,this_00,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = (this->fields).center.x;
  fVar6 = (float)uVar5 + (float)uVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->downVector).x;
  vec1 = &(this->fields).elipsoidRadius;
  pVVar2 = MathFunctions::MathFunctions_DivideVector
                      ((Vector3 *)&puStack_3,&elipsoidHit.point,vec1,
                       (MethodInfo *)(elipsoidHit.distance * (float)uVar7 + fVar6));
  uVar8 = pVVar2->x;
  uVar9 = pVVar2->y;
  fVar6 = pVVar2->z;
  pVVar2 = MathFunctions::MathFunctions_DivideVector
                      ((Vector3 *)&puStack_3,(Vector3 *)&stack0xffffffc0,vec1,(MethodInfo *)0x0);
  uVar10 = pVVar2->x;
  uVar11 = pVVar2->y;
  stack0xffffffd0 = (float)&puStack_3;
  value.y = (float)uVar11 - (float)uVar9;
  value.x = (float)uVar10 - (float)uVar8;
  value.z = pVVar2->z - fVar6;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&puStack_3,value,(MethodInfo *)0x0);
  uVar12 = pVVar2->y;
  fVar6 = pVVar2->z;
  if ((float)uVar12 != _UNK_?) {
    fVar13 = pVVar2->x;
    fVar14 = pVVar2->y;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
    puStack_3 = (undefined *)(pVVar15->upVector).x;
    unique0x0000a404 = (pVVar15->upVector).y;
    fVar6 = fVar6 - (pVVar15->upVector).z;
    if (_UNK_? <=
        (fVar14 - unique0x0000a404) * (fVar14 - unique0x0000a404) +
        (fVar13 - (float)puStack_3) * (fVar13 - (float)puStack_3) + fVar6 * fVar6) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      puStack_3 = (undefined *)(TypeInfo__UnityEngine__Vector3->static_fields->upVector).x;
      unique0x0000a404 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).y;
      pVVar2 = MathFunctions::MathFunctions_MultiplyVector
                          ((Vector3 *)&puStack_3,(Vector3 *)&stack0xffffffb4,vec1,(MethodInfo *)0x0
                          );
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffd8,*pVVar2,(MethodInfo *)0x0);
      uVar16 = pVVar2->x;
      uVar17 = pVVar2->y;
      uRam_? = CONCAT44(uVar17 ^ 
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ,uVar16 ^ 
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                             );
      uRam_? = (uint)pVVar2->z ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
      return (Vector3 *)0x0;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar13 = (pVVar15->zeroVector).y;
    fVar6 = (pVVar15->zeroVector).z;
    __return_storage_ptr__->x = (pVVar15->zeroVector).x;
    __return_storage_ptr__->y = fVar13;
    __return_storage_ptr__->z = fVar6;
    return __return_storage_ptr__;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar13 = (pVVar15->downVector).y;
  fVar6 = (pVVar15->downVector).z;
  __return_storage_ptr__->x = (pVVar15->downVector).x;
  __return_storage_ptr__->y = fVar13;
  __return_storage_ptr__->z = fVar6;
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
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xfffffff0,InpVec,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  if (__return_storage_ptr__->x * __return_storage_ptr__->x +
      __return_storage_ptr__->y * __return_storage_ptr__->y +
      __return_storage_ptr__->z * __return_storage_ptr__->z == _UNK_?) {
    InpVec.z = InpVec.z * _UNK_?;
    value.y = InpVec.y * _UNK_?;
    value.x = InpVec.x * _UNK_?;
    value.z = InpVec.z;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&InpVec,value,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
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
  vec1 = &(this->fields).elipsoidRadius;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector(&VStack_2,&ePos,vec1,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = fVar5;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector(&VStack_2,&eVel,vec1,(MethodInfo *)0x0);
  fVar7 = pVVar1->z;
  uVar8._0_4_ = pVVar1->x;
  uVar8._4_4_ = pVVar1->y;
  fVar9 = (float)(undefined4)uVar8;
  fVar10 = (float)uVar8._4_4_;
  fVar11 = fVar7;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  VVar12.z = fVar11;
  VVar12.x = (float)(int)uVar8;
  VVar12.y = (float)(int)((ulonglong)uVar8 >> 0x20);
  pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,VVar12,(MethodInfo *)0x0);
  uVar13 = pVVar1->x;
  uVar14 = pVVar1->y;
  fVar15 = pVVar1->z;
  InpVec.y = eVel.y;
  InpVec.x = eVel.x;
  InpVec.z = eVel.z;
  pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,InpVec,(MethodInfo *)0x0);
  uVar16._0_4_ = pVVar1->x;
  uVar16._4_4_ = pVVar1->y;
  fVar11 = pVVar1->z;
  VStack_2.z = ePos.z + eVel.z;
  bVar17 = cRam_? == '\0';
  (__return_storage_ptr__->position).x = ePos.x + eVel.x;
  (__return_storage_ptr__->position).y = ePos.y + eVel.y;
  (__return_storage_ptr__->position).z = VStack_2.z;
  __return_storage_ptr__->valid = 1;
  uVar18 = uVar13;
  uVar19 = uVar14;
  if (bVar17) {
    func_?();
    cRam_? = '\x01';
    uVar18 = uVar13;
    uVar19 = uVar14;
  }
  ignoreWoIds = (MvCharacterController__Class *)vec1->x;
  fVar20 = MvCharacterController_DistanceESpaceToR3Space
                     (0.005,TypeInfo__UnityEngine__Vector3->static_fields->downVector,*vec1,
                      (MethodInfo *)0x0);
  fVar9 = (float)uVar3 + fVar9;
  fVar10 = (float)uVar4 + fVar10;
  VStack_2.y = fVar10;
  VStack_2.x = fVar9;
  fVar5 = fVar5 + fVar7;
  VStack_2.z = fVar5;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar7 = VStack_2.z;
  uVar8 = VStack_2._0_8_;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_2,TypeInfo__UnityEngine__Vector3->static_fields->downVector,
                       (MethodInfo *)0x0);
  uVar21 = pVVar1->x;
  uVar22 = pVVar1->y;
  ray_00.m_Origin.z = fVar7;
  ray_00.m_Origin.x = (float)uVar8;
  ray_00.m_Origin.y = SUB84(uVar8,4);
  ray_00.m_Direction.x = (float)uVar21;
  ray_00.m_Direction.y = (float)uVar22;
  ray_00.m_Direction.z = pVVar1->z;
  bVar23 = CollisionDetection::CollisionDetection_MVElipsoidCast
                     (ray_00,*vec1,fVar20,(VoxelHit *)&stack0xffffff10,(this->fields).IgnoreWoIds,
                      TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
  if (bVar23 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar24 = vec1->x;
    uVar25 = vec1->y;
    R3Radius.y = (float)uVar25;
    R3Radius.x = (float)uVar24;
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar27._0_4_ = (pVVar26->downVector).x;
    uVar27._4_4_ = (pVVar26->downVector).y;
    fVar7 = (pVVar26->downVector).z;
    fVar11 = (this->fields).elipsoidRadius.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    R3Dir.z = fVar7;
    R3Dir.x = (float)(int)uVar27;
    R3Dir.y = (float)(int)((ulonglong)uVar27 >> 0x20);
    R3Radius.z = fVar11;
    fVar7 = MvCharacterController_DistanceR3SpaceToESpace
                       (fStack_28,R3Dir,R3Radius,(MethodInfo *)0x0);
    VStack_2.z = fVar5;
    VStack_2.x = fVar9;
    VStack_2.y = fVar10;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar5 = VStack_2.z;
    fVar9 = VStack_2.x;
    fVar10 = VStack_2.y;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                         (MethodInfo *)0x0);
    uVar29 = pVVar1->x;
    uVar30 = pVVar1->y;
    ignoreWoIds = (MvCharacterController__Class *)(this->fields).IgnoreWoIds;
    ray.m_Origin.y = fVar10;
    ray.m_Origin.x = fVar9;
    ray.m_Origin.z = fVar5;
    ray.m_Direction.x = (float)uVar29;
    ray.m_Direction.y = (float)uVar30;
    ray.m_Direction.z = pVVar1->z;
    bVar23 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,*vec1,fVar20,(VoxelHit *)&stack0xffffff10,
                        (HashSet_1_System_Int32_ *)ignoreWoIds,
                        TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0)
    ;
    fVar5 = ePos.x + eVel.x;
    fVar9 = ePos.y + eVel.y;
    fVar10 = ePos.z + eVel.z;
    if (bVar23 == 0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar31 = (pVVar26->upVector).x;
      uVar32 = (pVVar26->upVector).y;
      fVar11 = (pVVar26->upVector).z;
      fVar7 = _UNK_? - fVar7;
      (__return_storage_ptr__->position).x = (float)uVar31 * fVar7 + fVar5;
      (__return_storage_ptr__->position).y = (float)uVar32 * fVar7 + fVar9;
      (__return_storage_ptr__->position).z = fVar11 * fVar7 + fVar10;
      bVar23 = 1;
    }
    else {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
      uVar33 = (pVVar26->upVector).x;
      uVar34 = (pVVar26->upVector).y;
      fVar11 = (pVVar26->upVector).z;
      fVar7 = _UNK_? - fVar7;
      (__return_storage_ptr__->position).x = (float)uVar33 * fVar7 + fVar5;
      (__return_storage_ptr__->position).y = (float)uVar34 * fVar7 + fVar9;
      (__return_storage_ptr__->position).z = fVar11 * fVar7 + fVar10;
      bVar23 = 0;
    }
    __return_storage_ptr__->valid = bVar23;
    VStack_2.x = (__return_storage_ptr__->position).x;
    VStack_2.y = (__return_storage_ptr__->position).y;
    fVar7 = VStack_2.x - ePos.x;
    fVar5 = VStack_2.y - ePos.y;
    VStack_2.z = (__return_storage_ptr__->position).z - ePos.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    InpVec_00.y = fVar5;
    InpVec_00.x = fVar7;
    InpVec_00.z = VStack_2.z;
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,InpVec_00,(MethodInfo *)0x0);
    uVar16._0_4_ = pVVar1->x;
    uVar16._4_4_ = pVVar1->y;
    fVar11 = pVVar1->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_2,(Vector3 *)&stack0xffffff68,vec1,(MethodInfo *)0x0);
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,*pVVar1,(MethodInfo *)0x0);
    uVar18 = pVVar1->x;
    uVar19 = pVVar1->y;
    fVar15 = pVVar1->z;
  }
  if (adjustVerticalOnly == 0) {
    fVar5 = vec1->x;
    VVar12 = *vec1;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar20 = (float)((ulonglong)uVar16 >> 0x20);
    eDir.z = fVar11;
    eDir.x = (float)(int)uVar16;
    eDir.y = (float)(int)((ulonglong)uVar16 >> 0x20);
    fVar10 = MvCharacterController_DistanceESpaceToR3Space(0.005,eDir,VVar12,(MethodInfo *)0x0);
    value.y = (float)uVar19;
    value.x = (float)uVar18;
    value.z = fVar15;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_2,value,(MethodInfo *)0x0);
    uVar35 = pVVar1->x;
    uVar36 = pVVar1->y;
    fVar7 = pVVar1->z;
    fVar9 = (this->fields).elipsoidRadius.z;
    uVar37 = vec1->x;
    uVar38 = vec1->y;
    fVar39 = (float10)func_?();
    layerMask = TypeInfo__MvCharacterController->static_fields->layerMask;
    ray_01.m_Origin.y = 0.0;
    ray_01.m_Origin.x = (float)layerMask;
    ray_01.m_Origin.z = fVar6;
    ray_01.m_Direction.x = (float)uVar35;
    ray_01.m_Direction.y = (float)uVar36;
    ray_01.m_Direction.z = fVar7;
    radius.y = (float)uVar38;
    radius.x = (float)uVar37;
    radius.z = fVar9;
    bVar23 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray_01,radius,(float)fVar39 + fVar10,(VoxelHit *)&stack0xfffffec8,
                        (this->fields).IgnoreWoIds,layerMask,(MethodInfo *)0x0);
    if (bVar23 != 0) {
      uVar40._0_4_ = vec1->x;
      uVar40._4_4_ = vec1->y;
      fVar7 = (this->fields).elipsoidRadius.z;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        ignoreWoIds = TypeInfo__MvCharacterController;
        func_?();
      }
      R3Dir_00.y = (float)uVar38;
      R3Dir_00.x = (float)uVar37;
      R3Dir_00.z = fVar15;
      R3Radius_00.z = fVar7;
      R3Radius_00.x = (float)(int)uVar40;
      R3Radius_00.y = (float)(int)((ulonglong)uVar40 >> 0x20);
      MvCharacterController_DistanceR3SpaceToESpace
                ((float)ignoreWoIds,R3Dir_00,R3Radius_00,(MethodInfo *)0x0);
      puVar41 = &stack0xffffff68;
      fVar39 = (float10)func_?();
      VStack_2.x = ePos.x;
      VStack_2.y = ePos.y;
      VStack_2.z = ePos.z;
      fVar7 = (float)fVar39;
      fVar39 = (float10)func_?();
      fVar7 = (float)(fVar39 - (float10)((fVar7 + _UNK_?) - (float)puVar41));
      (__return_storage_ptr__->position).x = VStack_2.x + fVar20 * fVar7;
      (__return_storage_ptr__->position).y = VStack_2.y + fVar11 * fVar7;
      (__return_storage_ptr__->position).z = VStack_2.z + fVar5 * fVar7;
      __return_storage_ptr__->valid = 1;
      return __return_storage_ptr__;
    }
    return __return_storage_ptr__;
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
  (*(code *)(pMVar1->vtable).__unknown_1.method)
            (this,motion._0_8_,motion.z,(pMVar1->vtable).__unknown_2.methodPtr);
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
  (this->fields).center.z = fVar3 * scale;
  fVar3 = (this->fields).radiusBase.z;
  fVar4 = (this->fields).radiusBase.y;
  fVar5 = (this->fields).offsetBase;
  (this->fields).elipsoidRadius.x = (this->fields).radiusBase.x * scale;
  (this->fields).elipsoidRadius.y = fVar4 * scale;
  (this->fields).elipsoidRadius.z = fVar3 * scale;
  (this->fields).offsetFactor = fVar5 * scale;
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
    VStack_6.x = pVVar4->x;
    VStack_6.y = pVVar4->y;
    uVar7 = (this->fields).center.x;
    uVar8 = (this->fields).center.y;
    VStack_5.x = (float)uVar7 + VStack_6.x;
    VStack_5.y = (float)uVar8 + VStack_6.y;
    fVar9 = (this->fields).center.z + pVVar4->z;
    uStack_10 = CONCAT44(VStack_5.y,VStack_5.x);
    VStack_5.z = 0.0;
    uStack_11 = 0;
    value.z = direction.z;
    value.x = direction.x;
    value.y = direction.y;
    fStack_12 = fVar9;
    VStack_6.z = fVar9;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_6,value,(MethodInfo *)0x0);
    uVar13 = pVVar4->x;
    uVar14 = pVVar4->y;
    fStack_15 = pVVar4->z;
    fStack_16 = (this->fields).offsetFactor;
    ignoreWoIds = (this->fields).IgnoreWoIds;
    uStack_17 = uVar13;
    uStack_18 = uVar14;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar19 = fStack_3;
    ray.m_Origin.z = fStack_12;
    ray.m_Origin.x = (float)(undefined4)uStack_10;
    ray.m_Origin.y = (float)uStack_10._4_4_;
    ray.m_Direction.x = (float)uStack_17;
    ray.m_Direction.y = (float)uStack_18;
    ray.m_Direction.z = fStack_15;
    radius.y = fStack_2;
    radius.x = fStack_1;
    radius.z = fStack_3;
    bVar20 = CollisionDetection::CollisionDetection_MVElipsoidCast
                      (ray,radius,fStack_16 + distance,&VStack_21,ignoreWoIds,
                       TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
    if (bVar20 == 0) {
      return 0;
    }
    func_?();
    hit.point.y = VStack_21.point.z;
    hit.point.x = VStack_21.point.y;
    hit.point.z = VStack_21.normal.x;
    hit.normal.x = VStack_21.normal.y;
    hit.normal.y = VStack_21.normal.z;
    hit.normal.z = (float)VStack_21.cubePos._0_4_;
    hit.cubePos.x = VStack_21.cubePos.z;
    hit.cubePos.y = VStack_21._30_2_;
    hit._28_4_ = VStack_21.face;
    hit.face = VStack_21._36_4_;
    hit._36_4_ = VStack_21.woId;
    hit.woId = (int32_t)VStack_21.cube;
    hit.cube = (Cube *)VStack_21.distance;
    hit.distance = (float)VStack_21.collider;
    hit.collider = (Collider *)VStack_21.transform;
    hit.transform = (Transform *)VStack_21._60_4_;
    hit._60_8_ = VStack_21.interactionFlags;
    hit.interactionFlags._4_4_ = VStack_5.x;
    position.y = fVar9;
    position.x = VStack_5.y;
    position.z = fStack_1;
    elipsoidRadius.y = fVar19;
    elipsoidRadius.x = fStack_2;
    elipsoidRadius.z = motion.x;
    R3Velocity.z = 1.4013e-45;
    R3Velocity.x = (float)(int)motion._4_8_;
    R3Velocity.y = (float)(int)((ulonglong)motion._4_8_ >> 0x20);
    MVControllerColliderHit::MVControllerColliderHit__ctor
              ((MVControllerColliderHit *)&stack0xfffffec0,hit,position,elipsoidRadius,R3Velocity,0,
               in_stack_22);
    pfVar23 = (float *)&stack0xfffffec0;
    pMVar24 = colliderHit;
    for (iVar25 = 0x24; iVar25 != 0; iVar25 = iVar25 + -1) {
      (pMVar24->positionTouchingHit).x = *pfVar23;
      pfVar23 = pfVar23 + 1;
      pMVar24 = (MVControllerColliderHit *)&(pMVar24->positionTouchingHit).y;
    }
    func_?();
    if ((this->fields).sendCollisionData != 0) {
      pAVar26 = (this->fields).OnControllerColliderHit;
      if (pAVar26 == (Action_1_MVControllerColliderHit_ *)0x0) goto code_?;
      pfVar23 = afStack_27;
      for (iVar25 = 0x24; iVar25 != 0; iVar25 = iVar25 + -1) {
        *pfVar23 = (colliderHit->positionTouchingHit).x;
        colliderHit = (MVControllerColliderHit *)&(colliderHit->positionTouchingHit).y;
        pfVar23 = pfVar23 + 1;
      }
      (*(pAVar26->fields)._._.invoke_impl)((pAVar26->fields)._._.method_code);
    }
    return 1;
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  bVar20 = (*pcVar28)();
  return bVar20;
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

