
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
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_2,ePos,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fStack_5 = pVVar1->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_6,eVel,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
    fStack_7 = pVVar1->z;
    uVar8._0_4_ = pVVar1->x;
    uVar8._4_4_ = pVVar1->y;
    puVar9 = &UNK_?;
    VStack_2._0_8_ = uVar8;
    VStack_2.z = fStack_7;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_6,*pVVar1,(MethodInfo *)0x0);
    auStack_10._4_4_ = 0.0;
    auStack_10._8_4_ = 0.0;
    uStack_11 = CONCAT44(uVar4,uVar3);
    auStack_10._0_4_ = fStack_5;
    uStack_12._0_1_ = 0;
    uStack_12._1_3_ = 0;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_6,*pVVar1,(MethodInfo *)0x0);
    uVar13 = pVVar1->x;
    uVar14 = pVVar1->y;
    uStack_12 = pVVar1->z;
    fStack_15 = (this->fields).elipsoidRadius.z;
    VStack_16.x = (this->fields).elipsoidRadius.x;
    VStack_16.y = (this->fields).elipsoidRadius.y;
    auStack_10._4_4_ = uVar13;
    auStack_10._8_4_ = uVar14;
    fVar17 = (float10)func_?();
    ignoreWoIds = (this->fields).IgnoreWoIds;
    pTStack_18 = (Transform *)(float)fVar17;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar19 = 0.0;
    layerMask = (float)TypeInfo__MvCharacterController->static_fields->layerMask;
    voxelHit = (VoxelHit *)&stack0xfffffef4;
    fVar20 = VStack_16.x;
    fVar21 = VStack_16.y;
    fVar22 = (float)uStack_11;
    fVar23 = uStack_11._4_4_;
    puVar24 = &UNK_?;
    ray.m_Origin.z = (float)auStack_10._0_4_;
    ray.m_Origin.x = (float)uStack_11;
    ray.m_Origin.y = uStack_11._4_4_;
    ray.m_Direction.x = (float)auStack_10._4_4_;
    ray.m_Direction.y = (float)auStack_10._8_4_;
    ray.m_Direction.z = uStack_12;
    radius.z = fStack_15;
    radius.x = VStack_16.x;
    radius.y = VStack_16.y;
    fVar25 = (float)auStack_10._0_4_;
    fVar26 = (float)auStack_10._4_4_;
    fVar27 = (float)auStack_10._8_4_;
    fVar28 = uStack_12;
    fVar29 = fStack_15;
    pTVar30 = pTStack_18;
    bVar31 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,radius,(float)pTStack_18,voxelHit,ignoreWoIds,(int32_t)layerMask,
                        (MethodInfo *)0x0);
    if (bVar31 != 0) {
      fStack_15 = (this->fields).elipsoidRadius.z;
      VStack_16.x = (this->fields).elipsoidRadius.x;
      VStack_16.y = (this->fields).elipsoidRadius.y;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      puVar32 = &UNK_?;
      R3Dir.y = uVar8._4_4_;
      R3Dir.x = (float)uVar8;
      R3Dir.z = fStack_7;
      R3Radius.z = fStack_15;
      R3Radius.x = VStack_16.x;
      R3Radius.y = VStack_16.y;
      distance = (Cube *)MvCharacterController_DistanceR3SpaceToESpace
                                   (in_stack_33,R3Dir,R3Radius,(MethodInfo *)0x0);
      vec1 = (Cube *)&(this->fields).elipsoidRadius;
      vec0 = (Vector3 *)&stack0xfffffef4;
      pVVar1 = &VStack_2;
      puVar34 = &UNK_?;
      pVVar35 = MathFunctions::MathFunctions_DivideVector
                          (pVVar1,vec0,(Vector3 *)vec1,(MethodInfo *)0x0);
      VStack_6.z = pVVar35->z;
      uVar36._0_4_ = pVVar35->x;
      uVar36._4_4_ = pVVar35->y;
      fVar37 = pVVar35->z;
      method_00 = (MethodInfo *)&UNK_?;
      VStack_6._0_8_ = uVar36;
      VStack_16._0_8_ = uVar36;
      pTStack_18 = (Transform *)VStack_6.z;
      fStack_15 = MvCharacterController_GetCollisionAngle
                           (*ePos,*eVel,(float)distance,*pVVar35,(MethodInfo *)0x0);
      if ((fStack_15 <= _UNK_?) || ((float)distance == 0.0)) {
        uVar38 = ePos->x;
        uVar39 = ePos->y;
        uVar40 = eVel->x;
        uVar41 = eVel->y;
        VStack_2.y = (float)uVar41 + (float)uVar39;
        VStack_2.x = (float)uVar40 + (float)uVar38;
        VStack_2.z = eVel->z + ePos->z;
        fStack_42 = eVel->z;
        VStack_16.z = ePos->z;
        uVar43 = eVel->x;
        uVar44 = eVel->y;
        fStack_15 = eVel->z;
        uVar45 = ePos->x;
        uVar46 = ePos->y;
        uVar47 = eVel->x;
        uVar48 = eVel->y;
        fStack_49 = (float)uVar47;
        fStack_50 = (float)uVar48;
        fStack_51 = (float)uVar38;
        auStack_52._0_4_ = uVar45;
        auStack_52._4_4_ = uVar46;
        fStack_53 = (float)uVar40;
        fStack_54 = (float)uVar43;
        fStack_55 = (float)uVar44;
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
        uVar56 = 0;
        fVar57 = VStack_16.x;
        pCVar58 = VStack_16.y;
        puVar59 = &UNK_?;
        ePos_00.y = (float)auStack_52._4_4_;
        ePos_00.x = (float)auStack_52._0_4_;
        ePos_00.z = VStack_16.z;
        eDir.y = fStack_50;
        eDir.x = fStack_49;
        eDir.z = fStack_15;
        ePoint.z = (float)pTStack_18;
        ePoint.x = VStack_16.x;
        ePoint.y = VStack_16.y;
        fVar60 = VStack_16.z;
        fVar61 = fStack_49;
        fVar62 = fStack_50;
        fVar63 = fStack_15;
        pCVar64 = distance;
        pTVar65 = pTStack_18;
        fVar66 = MvCharacterController_GetCollisionAngle
                           (ePos_00,eDir,(float)distance,ePoint,(MethodInfo *)0x0);
        dVar67 = (double)(fVar66 * _UNK_?);
        fVar66 = (float)auStack_52._0_4_;
        uVar4 = auStack_52._4_4_;
        auStack_52 = (undefined1  [8])dVar67;
        func_?();
        VStack_16.z = _UNK_? / (float)dVar67 -
                      (_UNK_? / (float)dVar67) * _UNK_?;
        value.y = fStack_55;
        value.x = fStack_54;
        value.z = fStack_42;
        pVVar35 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)(auStack_10 + 4),value,(MethodInfo *)0x0);
        uVar68 = pVVar35->x;
        uVar69 = pVVar35->y;
        fStack_50 = pVVar35->z;
        fStack_70 = (float)uVar68;
        fStack_49 = (float)uVar69;
        if (((float)distance - VStack_16.z < 0.0) || (VStack_16.z <= 0.0)) {
          puVar71 = (undefined8 *)func_?();
          VStack_2._0_8_ = *puVar71;
          VStack_2.z = *(float *)(puVar71 + 1);
          fVar17 = (float10)func_?();
          VStack_2.z = VStack_2.z * (float)fVar17;
          piVar72 = &(this->fields).collisionRecursionDepth;
          *piVar72 = *piVar72 + 1;
          pVVar1 = MvCharacterController_CollideWithWorld
                              ((Vector3 *)(auStack_10 + 4),this,ePos,(Vector3 *)&stack0xffffff58,
                               foundValidPosition,(MethodInfo *)0x0);
          uVar8._4_4_ = pVVar1->y;
          uVar8._0_4_ = pVVar1->z;
          __return_storage_ptr__->x = pVVar1->x;
          __return_storage_ptr__->y = uVar8._4_4_;
          __return_storage_ptr__->z = (float)uVar8;
          return __return_storage_ptr__;
        }
        uVar73 = ePos->x;
        uVar74 = ePos->y;
        auStack_52._4_4_ = ePos->z;
        uVar75 = pVVar35->x;
        uVar76 = pVVar35->y;
        fVar77 = (float)uVar73 + (float)uVar75 * ((float)distance - VStack_16.z);
        fStack_55 = (float)auStack_52._4_4_ + fStack_50 * ((float)distance - VStack_16.z);
        fVar78 = VStack_6.x - (float)uVar68 * VStack_16.z;
        fVar79 = VStack_6.y - (float)uVar69 * VStack_16.z;
        fVar80 = VStack_6.z - fStack_50 * VStack_16.z;
        VStack_6.z = fVar80;
        fStack_51 = (float)uVar73;
        auStack_52._0_4_ = uVar74;
        fStack_53 = (float)uVar75;
        fStack_54 = (float)uVar76;
        (*(code *)(this->klass->vtable).__unknown_2.method)();
        if (SUB41(fVar62,0) != 0) {
          func_?();
          uVar81 = 0;
          uVar82 = 0;
          uVar83 = (this->fields).elipsoidRadius.x;
          uVar84 = (this->fields).elipsoidRadius.y;
          hit.point.y = uVar36._4_4_;
          hit.point.x = (float)uVar36;
          hit.point.z = fVar37;
          hit.normal.x = (float)puVar59;
          hit.normal.y = fVar66;
          hit.normal.z = (float)uVar4;
          hit.cubePos._0_4_ = fVar60;
          hit._28_4_ = fVar61;
          hit.face = (int32_t)fVar62;
          hit._36_4_ = fVar63;
          hit.woId = (int32_t)pCVar64;
          hit.cube = (Cube *)fVar57;
          hit.distance = (float)pCVar58;
          hit.collider = (Collider *)pTVar65;
          hit.transform = (Transform *)uVar56;
          hit._60_4_ = in_stack_85;
          hit.interactionFlags._0_4_ = uStack_86;
          hit.interactionFlags._4_4_ = fVar78;
          position.y = fStack_5;
          position.x = fVar79;
          position.z = (float)uVar83;
          elipsoidRadius.y = (this->fields).elipsoidRadius.z;
          elipsoidRadius.x = (float)uVar84;
          elipsoidRadius.z = fVar80;
          R3Velocity.y = fStack_7;
          R3Velocity.x = fVar77;
          R3Velocity.z = 0.0;
          uVar36._0_4_ = fStack_7;
          MVControllerColliderHit::MVControllerColliderHit__ctor
                    ((MVControllerColliderHit *)&stack0xfffffe64,hit,position,elipsoidRadius,
                     R3Velocity,0,unaff_ESI);
          uVar36._4_4_ = 0.0;
          puVar87 = (undefined4 *)&stack0xfffffe64;
          puVar88 = (undefined4 *)&stack0xfffffe44;
          for (iVar89 = 0x24; iVar89 != 0; iVar89 = iVar89 + -1) {
            *puVar88 = *puVar87;
            puVar87 = puVar87 + 1;
            puVar88 = puVar88 + 1;
          }
          controllerColliderHit.positionTouchingHit.y = fVar77;
          controllerColliderHit.positionTouchingHit.x = fVar80;
          controllerColliderHit.positionTouchingHit.z = (float)uVar36;
          controllerColliderHit.moveDirection.x = (float)uVar82;
          controllerColliderHit.moveDirection.y = (float)uVar81;
          controllerColliderHit.moveDirection.z = (float)unaff_ESI;
          controllerColliderHit.elipsoidNormal.x = (float)puVar9;
          controllerColliderHit.elipsoidNormal.y = (float)puVar24;
          controllerColliderHit.elipsoidNormal.z = fVar22;
          controllerColliderHit.slopeNormal.x = fVar23;
          controllerColliderHit.slopeNormal.y = fVar25;
          controllerColliderHit.slopeNormal.z = fVar26;
          controllerColliderHit.impactVelocity.x = fVar27;
          controllerColliderHit.impactVelocity.y = fVar28;
          controllerColliderHit.impactVelocity.z = fVar20;
          controllerColliderHit._60_4_ = fVar21;
          controllerColliderHit.hit.point.x = fVar29;
          controllerColliderHit.hit.point.y = (float)pTVar30;
          controllerColliderHit.hit.point.z = (float)voxelHit;
          controllerColliderHit.hit.normal.x = (float)ignoreWoIds;
          controllerColliderHit.hit.normal.y = layerMask;
          controllerColliderHit.hit.normal.z = fVar19;
          uVar90 = in_stack_91._0_6_;
          controllerColliderHit.hit.cubePos.x = (short)uVar90;
          controllerColliderHit.hit.cubePos.y = (short)((uint6)uVar90 >> 0x10);
          controllerColliderHit.hit.cubePos.z = (short)((uint6)uVar90 >> 0x20);
          controllerColliderHit.hit._30_2_ = in_stack_91._6_2_;
          controllerColliderHit.hit.face = in_stack_91._8_4_;
          controllerColliderHit.hit._36_4_ = in_stack_92;
          controllerColliderHit.hit.woId = (int32_t)in_stack_93;
          controllerColliderHit.hit.cube = (Cube *)puVar32;
          controllerColliderHit.hit.distance = in_stack_33;
          controllerColliderHit.hit.collider = (Collider *)(float)uVar8;
          controllerColliderHit.hit.transform = (Transform *)uVar8._4_4_;
          controllerColliderHit.hit._60_4_ = puVar34;
          controllerColliderHit.hit.interactionFlags._0_4_ = pVVar1;
          controllerColliderHit.hit.interactionFlags._4_4_ = vec0;
          controllerColliderHit.material = (MVMaterial *)vec1;
          controllerColliderHit._140_4_ = uVar36._4_4_;
          MvCharacterController_SendCharacterCollision(this,controllerColliderHit,method_00);
        }
        piVar72 = &(this->fields).collisionRecursionDepth;
        *piVar72 = *piVar72 + 1;
        pVVar1 = MvCharacterController_CollideWithWorld
                            ((Vector3 *)(auStack_10 + 4),this,(Vector3 *)&stack0xffffff64,
                             (Vector3 *)&stack0xffffff70,foundValidPosition,(MethodInfo *)0x0);
      }
      else {
        puVar71 = (undefined8 *)func_?();
        VStack_94._0_8_ = *puVar71;
        VStack_94.z = *(float *)(puVar71 + 1);
        fStack_55 = *(float *)(puVar71 + 1);
        fStack_53 = (float)*puVar71;
        fStack_54 = (float)((ulonglong)*puVar71 >> 0x20);
        fVar17 = (float10)func_?();
        uVar8._0_4_ = (float)fVar17;
        VStack_94.z = fStack_55 * (float)uVar8;
        piVar72 = &(this->fields).collisionRecursionDepth;
        *piVar72 = *piVar72 + 1;
        VStack_94.y = fStack_54 * (float)uVar8;
        VStack_94.x = fStack_53 * (float)uVar8;
        VStack_2.z = VStack_94.z;
        pVVar1 = MvCharacterController_CollideWithWorld
                            (&VStack_2,this,ePos,&VStack_94,foundValidPosition,(MethodInfo *)0x0);
      }
      uVar8._4_4_ = pVVar1->y;
      uVar8._0_4_ = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = uVar8._4_4_;
      __return_storage_ptr__->z = (float)uVar8;
      return __return_storage_ptr__;
    }
    pMVar95 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)auStack_10,this,*ePos,*eVel,1,
                         (MethodInfo *)0x0);
    uVar96 = *(undefined1 *)&(pMVar95->position).x;
    uVar97 = *(undefined1 *)((int)&(pMVar95->position).x + 1);
    uVar98 = *(undefined1 *)((int)&(pMVar95->position).x + 2);
    uVar99 = *(undefined1 *)((int)&(pMVar95->position).x + 3);
    uVar100 = *(undefined1 *)&(pMVar95->position).y;
    uVar101 = *(undefined1 *)((int)&(pMVar95->position).y + 1);
    uVar102 = *(undefined1 *)((int)&(pMVar95->position).y + 2);
    uVar103 = *(undefined1 *)((int)&(pMVar95->position).y + 3);
    uVar104 = *(undefined1 *)&(pMVar95->position).z;
    uVar105 = *(undefined1 *)((int)&(pMVar95->position).z + 1);
    uVar106 = *(undefined1 *)((int)&(pMVar95->position).z + 2);
    uVar107 = *(undefined1 *)((int)&(pMVar95->position).z + 3);
    if (pMVar95->valid == 0) {
      uVar8._4_4_ = ePos->y;
      uVar8._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar8._4_4_;
      __return_storage_ptr__->z = (float)uVar8;
      return __return_storage_ptr__;
    }
  }
  else {
    pMVar95 = MvCharacterController_HandleNoCollision
                        ((MvCharacterController_NoCollisionData *)auStack_10,this,*ePos,*eVel,1,
                         (MethodInfo *)0x0);
    uVar96 = *(undefined1 *)&(pMVar95->position).x;
    uVar97 = *(undefined1 *)((int)&(pMVar95->position).x + 1);
    uVar98 = *(undefined1 *)((int)&(pMVar95->position).x + 2);
    uVar99 = *(undefined1 *)((int)&(pMVar95->position).x + 3);
    uVar100 = *(undefined1 *)&(pMVar95->position).y;
    uVar101 = *(undefined1 *)((int)&(pMVar95->position).y + 1);
    uVar102 = *(undefined1 *)((int)&(pMVar95->position).y + 2);
    uVar103 = *(undefined1 *)((int)&(pMVar95->position).y + 3);
    uVar104 = *(undefined1 *)&(pMVar95->position).z;
    uVar105 = *(undefined1 *)((int)&(pMVar95->position).z + 1);
    uVar106 = *(undefined1 *)((int)&(pMVar95->position).z + 2);
    uVar107 = *(undefined1 *)((int)&(pMVar95->position).z + 3);
    if (pMVar95->valid == 0) {
      *foundValidPosition = 0;
      uVar8._4_4_ = ePos->y;
      uVar8._0_4_ = ePos->z;
      __return_storage_ptr__->x = ePos->x;
      __return_storage_ptr__->y = uVar8._4_4_;
      __return_storage_ptr__->z = (float)uVar8;
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->x = uVar96;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 1) = uVar97;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 2) = uVar98;
  *(undefined1 *)((int)&__return_storage_ptr__->x + 3) = uVar99;
  *(undefined1 *)&__return_storage_ptr__->y = uVar100;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 1) = uVar101;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 2) = uVar102;
  *(undefined1 *)((int)&__return_storage_ptr__->y + 3) = uVar103;
  *(undefined1 *)&__return_storage_ptr__->z = uVar104;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 1) = uVar105;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 2) = uVar106;
  *(undefined1 *)((int)&__return_storage_ptr__->z + 3) = uVar107;
  return __return_storage_ptr__;
}


/* Single DistanceESpaceToR3Space(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceESpaceToR3Space
                (float eDistance,Vector3 eDir,Vector3 R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_2,eDir,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  eDir.x = (float)(undefined4)uStack_3 * eDistance;
  eDir.y = (float)uStack_3._4_4_ * eDistance;
  eDir.z = pVVar1->z * eDistance;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector(&VStack_2,&eDir,&R3Radius,(MethodInfo *)0x0)
  ;
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  fVar5 = (float10)func_?(&uStack_3,0);
  return (float)fVar5;
}


/* Single DistanceR3SpaceToESpace(Single, Vector3, Vector3) */

float Assembly-CSharp.dll::MvCharacterController::MvCharacterController_DistanceR3SpaceToESpace
                (float distance,Vector3 R3Dir,Vector3 R3Radius,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_2,R3Dir,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  R3Dir.x = (float)(undefined4)uStack_3 * distance;
  R3Dir.y = (float)uStack_3._4_4_ * distance;
  R3Dir.z = pVVar1->z * distance;
  pVVar1 = MathFunctions::MathFunctions_DivideVector(&VStack_2,&R3Dir,&R3Radius,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  fVar5 = (float10)func_?(&uStack_3,0);
  return (float)fVar5;
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
  pVVar2 = MathFunctions::MathFunctions_DivideVector
                      ((Vector3 *)&puStack_3,&elipsoidHit.point,&(this->fields).elipsoidRadius,
                       (MethodInfo *)(elipsoidHit.distance * (float)uVar7 + fVar6));
  uVar8 = pVVar2->x;
  uVar9 = pVVar2->y;
  fVar6 = pVVar2->z;
  pVVar2 = MathFunctions::MathFunctions_DivideVector
                      ((Vector3 *)&puStack_3,(Vector3 *)&stack0xffffffc0,
                       &(this->fields).elipsoidRadius,(MethodInfo *)0x0);
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
                          ((Vector3 *)&puStack_3,(Vector3 *)&stack0xffffffb4,
                           &(this->fields).elipsoidRadius,(MethodInfo *)0x0);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                          ((Vector3 *)&stack0xffffffd8,*pVVar2,(MethodInfo *)0x0);
      uVar16 = pVVar2->x;
      uVar17 = pVVar2->y;
      uRam_? = CONCAT44(uVar17 ^ 
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              ,uVar16 ^ 
                               __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                             );
      uRam_? = (uint)pVVar2->z ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field;
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
  func_?(&stack0xffffff00,0,0x48);
  func_?(&stack0xfffffeb8,0,0x48);
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                      (&VStack_2,&ePos,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
  fVar3 = pVVar1->x;
  fVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  fVar6 = fVar5;
  fVar7 = fVar3;
  fVar8 = fVar4;
  pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                      (&VStack_2,&eVel,&(this->fields).elipsoidRadius,(MethodInfo *)0x0);
  fVar9 = pVVar1->z;
  uVar10._0_4_ = pVVar1->x;
  uVar10._4_4_ = pVVar1->y;
  uVar11 = uVar10;
  if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  InpVec.z = fVar9;
  InpVec.x = (float)(int)uVar11;
  InpVec.y = (float)(int)((ulonglong)uVar11 >> 0x20);
  pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,InpVec,(MethodInfo *)0x0);
  uVar12 = pVVar1->y;
  fStack_13 = pVVar1->z;
  InpVec_00.y = eVel.y;
  InpVec_00.x = eVel.x;
  InpVec_00.z = eVel.z;
  pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,InpVec_00,(MethodInfo *)0x0);
  uVar11._0_4_ = pVVar1->x;
  uVar11._4_4_ = pVVar1->y;
  fStack_14 = pVVar1->z;
  VStack_2.z = ePos.z + eVel.z;
  bVar15 = cRam_? == '\0';
  (__return_storage_ptr__->position).x = ePos.x + eVel.x;
  (__return_storage_ptr__->position).y = ePos.y + eVel.y;
  (__return_storage_ptr__->position).z = VStack_2.z;
  __return_storage_ptr__->valid = 1;
  uVar16 = uVar12;
  if (bVar15) {
    func_?();
    cRam_? = '\x01';
    uVar16 = uVar12;
  }
  pVVar1 = &(this->fields).elipsoidRadius;
  ignoreWoIds = (HashSet_1_System_Int32_ *)pVVar1->x;
  fVar17 = MvCharacterController_DistanceESpaceToR3Space
                     (0.005,TypeInfo__UnityEngine__Vector3->static_fields->downVector,*pVVar1,
                      (MethodInfo *)0x0);
  VStack_2.y = fVar4 + (float)uVar10._4_4_;
  VStack_2.x = fVar3 + (float)(undefined4)uVar10;
  VStack_2.z = fVar6 + fVar9;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar18 = VStack_2.z;
  uVar19 = VStack_2._0_8_;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      (&VStack_2,TypeInfo__UnityEngine__Vector3->static_fields->downVector,
                       (MethodInfo *)0x0);
  uVar20 = VStack_2._0_8_;
  uVar21 = pVVar1->x;
  uVar22 = pVVar1->y;
  ray_00.m_Origin.z = fVar18;
  VStack_2.x = (float)uVar19;
  VStack_2.y = SUB84(uVar19,4);
  ray_00.m_Origin.x = VStack_2.x;
  ray_00.m_Origin.y = VStack_2.y;
  ray_00.m_Direction.x = (float)uVar21;
  ray_00.m_Direction.y = (float)uVar22;
  ray_00.m_Direction.z = pVVar1->z;
  VStack_2._0_8_ = uVar20;
  bVar23 = CollisionDetection::CollisionDetection_MVElipsoidCast
                     (ray_00,(this->fields).elipsoidRadius,fVar17,(VoxelHit *)&stack0xffffff00,
                      (this->fields).IgnoreWoIds,
                      TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0);
  if (bVar23 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    uVar19._0_4_ = (this->fields).elipsoidRadius.x;
    uVar19._4_4_ = (this->fields).elipsoidRadius.y;
    pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar20._0_4_ = (pVVar24->downVector).x;
    uVar20._4_4_ = (pVVar24->downVector).y;
    fVar18 = (pVVar24->downVector).z;
    fVar25 = (this->fields).elipsoidRadius.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    R3Dir.z = fVar18;
    R3Dir.x = (float)(int)uVar20;
    R3Dir.y = (float)(int)((ulonglong)uVar20 >> 0x20);
    R3Radius.z = fVar25;
    R3Radius.x = (float)(int)uVar19;
    R3Radius.y = (float)(int)((ulonglong)uVar19 >> 0x20);
    fVar18 = MvCharacterController_DistanceR3SpaceToESpace
                       (fStack_26,R3Dir,R3Radius,(MethodInfo *)0x0);
    VStack_2.y = fVar4 + (float)uVar10._4_4_;
    VStack_2.x = fVar3 + (float)(undefined4)uVar10;
    VStack_2.z = fVar6 + fVar9;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar3 = VStack_2.z;
    uVar10 = VStack_2._0_8_;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_2,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                         (MethodInfo *)0x0);
    uVar11 = VStack_2._0_8_;
    uVar27 = pVVar1->x;
    uVar28 = pVVar1->y;
    ignoreWoIds = (this->fields).IgnoreWoIds;
    ray.m_Origin.z = fVar3;
    VStack_2.x = (float)uVar10;
    VStack_2.y = SUB84(uVar10,4);
    ray.m_Origin.x = VStack_2.x;
    ray.m_Origin.y = VStack_2.y;
    ray.m_Direction.x = (float)uVar27;
    ray.m_Direction.y = (float)uVar28;
    ray.m_Direction.z = pVVar1->z;
    VStack_2._0_8_ = uVar11;
    bVar23 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray,(this->fields).elipsoidRadius,fVar17,(VoxelHit *)&stack0xffffff00,
                        ignoreWoIds,TypeInfo__MvCharacterController->static_fields->layerMask,
                        (MethodInfo *)0x0);
    fVar3 = ePos.x + eVel.x;
    fVar4 = ePos.y + eVel.y;
    fVar9 = ePos.z + eVel.z;
    if (bVar23 == 0) {
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
    pVVar24 = TypeInfo__UnityEngine__Vector3->static_fields;
    uVar29 = (pVVar24->upVector).x;
    uVar30 = (pVVar24->upVector).y;
    fVar18 = _UNK_? - fVar18;
    fVar9 = (pVVar24->upVector).z * fVar18 + fVar9;
    (__return_storage_ptr__->position).x = (float)uVar29 * fVar18 + fVar3;
    (__return_storage_ptr__->position).y = (float)uVar30 * fVar18 + fVar4;
    (__return_storage_ptr__->position).z = fVar9;
    VStack_2.x = (__return_storage_ptr__->position).x;
    VStack_2.y = (__return_storage_ptr__->position).y;
    fVar4 = VStack_2.x - ePos.x;
    fVar3 = VStack_2.y - ePos.y;
    VStack_2.z = fVar9 - ePos.z;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    InpVec_01.y = fVar3;
    InpVec_01.x = fVar4;
    InpVec_01.z = VStack_2.z;
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,InpVec_01,(MethodInfo *)0x0);
    uVar11._0_4_ = pVVar1->x;
    uVar11._4_4_ = pVVar1->y;
    fStack_14 = pVVar1->z;
    pVVar1 = MathFunctions::MathFunctions_MultiplyVector
                        (&VStack_2,(Vector3 *)&stack0xffffff54,&(this->fields).elipsoidRadius,
                         (MethodInfo *)0x0);
    pVVar1 = MvCharacterController_GetNormalizedVector(&VStack_2,*pVVar1,(MethodInfo *)0x0);
    uVar16 = pVVar1->y;
    fStack_13 = pVVar1->z;
  }
  if (adjustVerticalOnly == 0) {
    fVar3 = (this->fields).elipsoidRadius.z;
    uVar31._0_4_ = (this->fields).elipsoidRadius.x;
    uVar31._4_4_ = (this->fields).elipsoidRadius.y;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar6 = (float)uVar11;
    fVar17 = (float)((ulonglong)uVar11 >> 0x20);
    eDir.z = fStack_14;
    eDir.x = (float)(int)uVar11;
    eDir.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    R3Radius_00.z = fVar3;
    R3Radius_00.x = (float)(int)uVar31;
    R3Radius_00.y = (float)(int)((ulonglong)uVar31 >> 0x20);
    fVar9 = MvCharacterController_DistanceESpaceToR3Space(0.005,eDir,R3Radius_00,(MethodInfo *)0x0)
    ;
    auVar32._4_4_ = fStack_13;
    auVar32._0_4_ = uVar16;
    auVar32._8_4_ = 0;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&VStack_2,(Vector3)(auVar32 << 0x20),(MethodInfo *)0x0);
    uVar33 = pVVar1->x;
    uVar34 = pVVar1->y;
    fVar3 = pVVar1->z;
    uVar35 = (this->fields).elipsoidRadius.y;
    fVar4 = (this->fields).elipsoidRadius.z;
    puVar36 = &UNK_?;
    fVar37 = (float10)func_?();
    fVar9 = (float)fVar37 + fVar9;
    ray_01.m_Origin.y = fVar8;
    ray_01.m_Origin.x = fVar7;
    ray_01.m_Origin.z = fVar5;
    ray_01.m_Direction.x = (float)uVar33;
    ray_01.m_Direction.y = (float)uVar34;
    ray_01.m_Direction.z = fVar3;
    radius.y = (float)uVar35;
    radius.x = (float)puVar36;
    radius.z = fVar4;
    bVar23 = CollisionDetection::CollisionDetection_MVElipsoidCast
                       (ray_01,radius,fVar9,(VoxelHit *)&stack0xfffffeb8,(this->fields).IgnoreWoIds
                        ,TypeInfo__MvCharacterController->static_fields->layerMask,(MethodInfo *)0x0
                       );
    if (bVar23 != 0) {
      uVar38._0_4_ = (this->fields).elipsoidRadius.x;
      uVar38._4_4_ = (this->fields).elipsoidRadius.y;
      fVar3 = (this->fields).elipsoidRadius.z;
      if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      R3Dir_00.y = fVar9;
      R3Dir_00.x = fVar4;
      R3Dir_00.z = fStack_13;
      R3Radius_01.z = fVar3;
      R3Radius_01.x = (float)(int)uVar38;
      R3Radius_01.y = (float)(int)((ulonglong)uVar38 >> 0x20);
      fVar3 = MvCharacterController_DistanceR3SpaceToESpace
                        ((float)ignoreWoIds,R3Dir_00,R3Radius_01,(MethodInfo *)0x0);
      fVar37 = (float10)func_?();
      VStack_2.x = ePos.x;
      VStack_2.y = ePos.y;
      VStack_2.z = ePos.z;
      fVar39 = (float10)func_?();
      fVar3 = (float)(fVar39 - (float10)(((float)fVar37 + _UNK_?) - fVar3));
      (__return_storage_ptr__->position).x = VStack_2.x + fVar6 * fVar3;
      (__return_storage_ptr__->position).y = VStack_2.y + fVar17 * fVar3;
      (__return_storage_ptr__->position).z = VStack_2.z + fStack_14 * fVar3;
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
    VStack_6.x = pVVar4->x;
    VStack_6.y = pVVar4->y;
    uVar7 = (this->fields).center.x;
    uVar8 = (this->fields).center.y;
    VStack_5.x = (float)uVar7 + VStack_6.x;
    VStack_5.y = (float)uVar8 + VStack_6.y;
    fVar9 = (this->fields).center.z + pVVar4->z;
    uStack_10 = 0;
    uStack_11 = 0;
    fStack_12 = 0.0;
    VStack_5.z = 0.0;
    uStack_13 = 0;
    uStack_14 = CONCAT44(VStack_5.y,VStack_5.x);
    value.z = direction.z;
    value.x = direction.x;
    value.y = direction.y;
    fStack_15 = fVar9;
    VStack_6.z = fVar9;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_6,value,(MethodInfo *)0x0);
    uVar16 = pVVar4->x;
    uVar17 = pVVar4->y;
    fStack_12 = pVVar4->z;
    fStack_18 = (this->fields).offsetFactor;
    ignoreWoIds = (this->fields).IgnoreWoIds;
    uStack_10 = uVar16;
    uStack_11 = uVar17;
    if ((TypeInfo__MvCharacterController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar19 = fStack_3;
    ray.m_Origin.z = fStack_15;
    ray.m_Origin.x = (float)(undefined4)uStack_14;
    ray.m_Origin.y = (float)uStack_14._4_4_;
    ray.m_Direction.x = (float)uStack_10;
    ray.m_Direction.y = (float)uStack_11;
    ray.m_Direction.z = fStack_12;
    radius.y = fStack_2;
    radius.x = fStack_1;
    radius.z = fStack_3;
    bVar20 = CollisionDetection::CollisionDetection_MVElipsoidCast
                      (ray,radius,fStack_18 + distance,&VStack_21,ignoreWoIds,
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

