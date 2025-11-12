
/* Vector3 ApplyJumping(MVInteractableBase, MVGroundState, Single, Single, Boolean, Vector3,
   Vector3) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_ApplyJumping
                    (Vector3 *__return_storage_ptr__,JumpState *this,
                    MVInteractableBase *interactableLocal,MVGroundState *groundState,float density,
                    float waterProximity,bool inputJump,Vector3 *velocity,Vector3 *movableVelocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Math);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  JumpState_UpdateWallJumpValues(this,(MethodInfo *)0x0);
  if (inputJump == 0) {
    (this->fields).holdingJumpButton = 0;
    (this->fields).lastButtonDownTime = -100.0;
  }
  else {
    pfVar1 = &(this->fields).lastButtonDownTime;
    if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        pVVar4 = (Vector3 *)(*pcVar2)();
        return pVVar4;
      }
      pcRam_? = pcVar2;
      fVar5 = (float)(*pcRam_?)();
      (this->fields).lastButtonDownTime = fVar5;
    }
  }
  if (groundState == (MVGroundState *)0x0) goto code_?;
  bVar6 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  fVar5 = _UNK_?;
  if (((bVar6 == 0) && ((this->fields).jumping != 0)) && ((this->fields).holdingJumpButton != 0)) {
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar8 = (this->fields).lastStartTime;
    if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
    fVar9 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)(interactableLocal,2)
    ;
    fVar10 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)(interactableLocal);
    if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar10 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar10,(MethodInfo *)0x0);
    if (fVar7 < fVar9 / fVar10 + fVar8) {
      auStack_11 = *(undefined1 (*) [8])&(this->fields).jumpDir;
      fVar8 = (this->fields).jumpDir.z;
      if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
        FUN_?();
      }
      puVar12 = (undefined8 *)FUN_?(auStack_13);
      auStack_13 = (undefined1  [8])*puVar12;
      pBStack_14 = (Byte__Array *)puVar12[1];
      pIStack_15 = (Il2CppClass *)puVar12[2];
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_13,(MethodInfo *)0x0);
      fVar10 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                                (interactableLocal,0);
      fVar16 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      auStack_13 = *(undefined1 (*) [8])velocity;
      fVar7 = velocity->z;
      velocity->x = (float)auStack_11._0_4_ * fVar9 * fVar10 * fVar16 + SUB84(auStack_13,0);
      velocity->y = (float)auStack_11._4_4_ * fVar9 * fVar10 * fVar16 +
                    (float)((ulonglong)auStack_13 >> 0x20);
      velocity->z = fVar8 * fVar9 * fVar10 * fVar16 + fVar7;
    }
  }
  else if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
  fVar8 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)(interactableLocal,5);
  if (*(int *)&(TypeInfo__System__Math->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar7 = _UNK_?;
  if ((fVar5 < fVar8 * _UNK_?) ||
     (fVar8 = fVar8 * _UNK_?, 0x7f800000 < (uint)ABS(fVar5))) {
    fVar8 = fVar5;
  }
  if (fVar8 <= waterProximity) {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar2)();
      return pVVar4;
    }
    pcRam_? = pcVar2;
    fVar8 = (float)(*pcRam_?)();
    bVar17 = fVar7 <= fVar8 - (this->fields).lastStartTime;
  }
  else {
    bVar17 = false;
  }
  bVar18 = bVar17 & inputJump;
  fVar8 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)();
  bVar17 = 0.0 < fVar8;
  if ((bVar17) || (bVar18 != 0)) {
    bVar19 = false;
  }
  else {
    bVar19 = (this->fields).airJumpsDone < (this->fields).airJumpsAllowed;
  }
  if ((bVar19 & inputJump) == 0) {
code_?:
    bVar20 = 0;
  }
  else {
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar2)();
      return pVVar4;
    }
    pcRam_? = pcVar2;
    fVar8 = (float)(*pcRam_?)();
    if ((fVar8 - (this->fields).lastStartTime < _UNK_?) ||
       ((this->fields).holdingJumpButton != 0)) goto code_?;
    bVar6 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
    bVar20 = bVar6 ^ 1;
  }
  bVar6 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if (((bVar6 == 0 && bVar20 == 0) && !bVar17) && bVar18 == 0) goto code_?;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar2)();
    return pVVar4;
  }
  pcRam_? = pcVar2;
  fVar8 = (float)(*pcRam_?)();
  fVar8 = fVar8 - (this->fields).lastStartTime;
  pfVar1 = &(this->fields).jumpTimeOut;
  if (fVar8 < *pfVar1 || fVar8 == *pfVar1) goto code_?;
  pMVar21 = (groundState->fields).groundMaterial;
  fVar8 = (this->fields).regularButtonDownTimeLimit;
  if (pMVar21 == (MVMaterial *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar2)();
    return pVVar4;
  }
  pIStack_15 = (Il2CppClass *)
               CONCAT44(pIStack_15._4_4_,
                        (pMVar21->fields)._PhysicalProperties_k__BackingField.toughness);
  fVar9 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)(interactableLocal,0xd)
  ;
  pcVar2 = pcRam_?;
  pfVar1 = &(this->fields).bouncinessThresshold;
  if (*pfVar1 <= fVar9 && fVar9 != *pfVar1) {
    fVar8 = (this->fields).bouncyMaterialButtonDownTimeLimit;
  }
  (this->fields).holdingJumpButton = 0;
  pcVar22 = pcRam_?;
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar22 = pcVar2, pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar2)();
    return pVVar4;
  }
  pcRam_? = pcVar22;
  fVar9 = (float)(*pcVar2)();
  bVar23 = bVar18 | bVar20;
  iVar24 = 1;
  if (fVar9 - (this->fields).lastButtonDownTime < fVar8) {
    bVar23 = 1;
  }
  if (bVar23 == 0) goto code_?;
  if (bVar20 != 0) {
    piVar25 = &(this->fields).airJumpsDone;
    *piVar25 = *piVar25 + 1;
    velocity->y = 0.0;
    (this->fields).airJumping = 1;
    movableVelocity->y = 0.0;
  }
  fVar8 = (float)FUN_?((groundState->fields).gradientAngle * _UNK_?);
  pMVar21 = (groundState->fields).groundMaterial;
  if (pMVar21 == (MVMaterial *)0x0) goto code_?;
  pIStack_15 = (Il2CppClass *)
               CONCAT44(pIStack_15._4_4_,
                        (pMVar21->fields)._PhysicalProperties_k__BackingField.toughness);
  fVar9 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)(interactableLocal,0xc)
  ;
  pcVar2 = pcRam_?;
  fVar8 = (fVar5 - ((float)((uint)(fVar9 * fVar9) ^ _UNK_?) + fVar9 + fVar9)) * fVar8
  ;
  if ((fVar8 < (this->fields).sliperyValMin) ||
     (((bVar18 != 0 && (fVar7 < waterProximity)) || (bVar20 != 0)))) {
    fVar8 = 0.0;
  }
  (this->fields).jumping = 1;
  pcVar22 = pcRam_?;
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar22 = pcVar2, pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar2)();
    return pVVar4;
  }
  pcRam_? = pcVar22;
  fVar5 = (float)(*pcVar2)();
  (this->fields).lastStartTime = fVar5;
  (this->fields).lastButtonDownTime = -100.0;
  (this->fields).holdingJumpButton = 1;
  if (bVar17) {
    fVar5 = (this->fields).jumpTimeOutWallJump;
  }
  else {
    fVar5 = 0.0;
  }
  (this->fields).jumpTimeOut = fVar5;
  bVar19 = cRam_? == '\0';
  (this->fields).accExtraHeight = (this->fields).extraHeight - fVar8 * (this->fields).extraHeight;
  if (bVar19) {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar7 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)(interactableLocal);
  fVar5 = (this->fields).jumpVelocityMultiplier;
  if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
    FUN_?();
  }
  fVar5 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar5 * fVar7,(MethodInfo *)0x0);
  if (bVar20 == 0) {
    fVar5 = fVar5 - fVar5 * fVar8;
  }
  bVar6 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if ((bVar18 & (bVar6 ^ 1)) == 0) {
    pfVar1 = &(this->fields).sliperyValMax;
    if (*pfVar1 <= fVar8 && fVar8 != *pfVar1) {
      fVar8 = (groundState->fields).groundNormal.z;
      uVar3._0_4_ = (groundState->fields).groundNormal.x;
      uVar3._4_4_ = (groundState->fields).groundNormal.y;
code_?:
      iVar24 = 0;
      (this->fields).jumpDir.x = (float)(int)uVar3;
      (this->fields).jumpDir.y = (float)(int)((ulonglong)uVar3 >> 0x20);
      uVar26._0_4_ = velocity->x;
      uVar26._4_4_ = velocity->y;
      (this->fields).jumpDir.z = fVar8;
      fVar8 = velocity->z;
      if (0.0 <= (float)uVar26._4_4_) goto code_?;
      auStack_11 = (undefined1  [8])(uVar26 & 0xffffffff);
    }
    else {
      bVar6 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
      if ((bVar17 & (bVar6 ^ 1)) == 0) {
DAT_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar8 = (pVVar27->upVector).z;
        uVar3._0_4_ = (pVVar27->upVector).x;
        uVar3._4_4_ = (pVVar27->upVector).y;
        goto code_?;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fStack_28 = (this->fields).latestSlopeDir.z;
      method_00 = (MethodInfo *)auStack_11;
      auStack_11 = *(undefined1 (*) [8])&(this->fields).latestSlopeDir;
      auStack_13 = *(undefined1 (*) [8])&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      pBStack_14 = (Byte__Array *)
                   CONCAT44(pBStack_14._4_4_,
                            (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z);
      fVar8 = (float)FUN_?(auStack_13);
      pfVar1 = &(this->fields).wallJumpAngleMin;
      if ((fVar8 < *pfVar1 || fVar8 == *pfVar1) || ((this->fields).wallJumpAngleMax <= fVar8))
      goto DAT_?;
      auStack_13 = *(undefined1 (*) [8])&(this->fields).latestSlopeDir;
      fVar8 = (this->fields).latestSlopeDir.z;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_11 = *(undefined1 (*) [8])&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      fVar7 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
      (this->fields).latestSlopeDir.x = SUB84(auStack_11,0) + (float)auStack_13._0_4_;
      (this->fields).latestSlopeDir.y =
           (float)((ulonglong)auStack_11 >> 0x20) + (float)auStack_13._4_4_;
      (this->fields).latestSlopeDir.z = fVar7 + fVar8;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&(this->fields).latestSlopeDir,method_00);
      pIVar29 = *(InvokerMethod *)velocity;
      fVar10 = SUB84(pIVar29,0);
      fVar9 = (this->fields).latestSlopeDir.y;
      fVar8 = velocity->z;
      fVar7 = (this->fields).latestSlopeDir.z;
      auStack_13._4_4_ = (undefined4)((ulonglong)pIVar29 >> 0x20);
      bVar17 = (float)auStack_13._4_4_ < 0.0;
      (this->fields).jumpDir.x = (this->fields).latestSlopeDir.x;
      (this->fields).jumpDir.y = fVar9;
      (this->fields).jumpDir.z = fVar7;
      AVar30 = (ACTkByte4)auStack_13._4_4_;
      fStack_28 = fVar8;
      auStack_13 = (undefined1  [8])pIVar29;
      if (bVar17) {
        auStack_11 = (undefined1  [8])pIVar29;
        fVar9 = (float)FUN_?(auStack_11);
        pBStack_14 = (Byte__Array *)CONCAT44(pBStack_14._4_4_,fVar8);
        auStack_13 = (undefined1  [8])((ulonglong)pIVar29 & 0xffffffff);
        AVar30.b1 = 0;
        AVar30.b2 = 0;
        AVar30.b3 = 0;
        AVar30.b4 = 0;
        fVar7 = (float)FUN_?(auStack_13);
        if (_UNK_? < fVar7) {
          fVar16 = fVar10 / fVar7;
          fVar31 = 0.0 / fVar7;
          fVar7 = fVar8 / fVar7;
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
          fVar16 = (pVVar27->zeroVector).x;
          fVar31 = (pVVar27->zeroVector).y;
          fVar7 = (pVVar27->zeroVector).z;
        }
        auStack_11 = (undefined1  [8])CONCAT44(fVar8,fVar10);
        fVar32 = (float)FUN_?(auStack_11);
        if (_UNK_? < fVar32) {
          fVar10 = fVar16 * fVar9;
          fVar8 = fVar7 * fVar9;
          AVar30 = (ACTkByte4)(fVar31 * fVar9);
        }
      }
      auStack_11 = (undefined1  [8])CONCAT44(AVar30,fVar10);
    }
  }
  else {
    iVar24 = 2;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar7 = (pVVar27->upVector).y;
    fVar8 = (pVVar27->upVector).z;
    (this->fields).jumpDir.x = (pVVar27->upVector).x;
    (this->fields).jumpDir.y = fVar7;
    (this->fields).jumpDir.z = fVar8;
code_?:
    auStack_11 = *(undefined1 (*) [8])velocity;
    fVar8 = velocity->z;
  }
  uVar33 = (this->fields).jumpDir.x;
  fVar7 = (this->fields).jumpDir.y;
  fVar9 = (this->fields).jumpDir.z;
  uVar34 = movableVelocity->x;
  uVar35 = movableVelocity->y;
  fVar10 = movableVelocity->z;
  velocity->x = (float)uVar33 * fVar5 + (float)auStack_11._0_4_ + (float)uVar34;
  velocity->y = fVar7 * fVar5 + (float)auStack_11._4_4_ + (float)uVar35;
  velocity->z = fVar9 * fVar5 + fVar8 + fVar10;
  if ((iVar24 == 1) && ((this->fields).OnWallJump != (JumpState_OnWallJumpDelegate *)0x0)) {
    pJVar36 = (this->fields).OnWallJump;
    (*(pJVar36->fields)._._.invoke_impl)
              ((pJVar36->fields)._._.method_code,(pJVar36->fields)._._.method);
  }
code_?:
  fVar5 = velocity->z;
  fVar8 = velocity->y;
  __return_storage_ptr__->x = velocity->x;
  __return_storage_ptr__->y = fVar8;
  __return_storage_ptr__->z = fVar5;
  return __return_storage_ptr__;
}


/* Boolean CanAirJump() */

bool Assembly-CSharp.dll::JumpState::JumpState_CanAirJump(JumpState *this,MethodInfo *method)

{
  return (this->fields).airJumpsDone < (this->fields).airJumpsAllowed;
}


/* Void Destroy() */

void Assembly-CSharp.dll::JumpState::JumpState_Destroy(JumpState *this,MethodInfo *method)

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
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar2 != (MVGameControllerBase *)0x0) &&
       (pMVar3 = (pMVar2->fields).game, pMVar3 != (MVNetworkGame *)0x0)) &&
      (this_00 = (pMVar3->fields).playerContainer, this_00 != (MVPlayerContainer *)0x0)) &&
     (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     pMVar4 != (MVLocalPlayer *)0x0)) {
    this_01 = (pMVar4->fields).boostController;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,(Object *)this,MethodInfo__JumpState__HandleJumpBoost__,(MethodInfo *)0x0);
    if (this_01 != (BoostController *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                (this_01,BoostType__Enum_JumpPowerFloatMultiplier,(Action *)this_02,
                 (MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Single GetJumpSpeed(MVInteractableBase, Single, Boolean) */

float Assembly-CSharp.dll::JumpState::JumpState_GetJumpSpeed
                (JumpState *this,MVInteractableBase *interactableLocal,float sliperyFactor,
                bool isDoingAirJump,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (interactableLocal != (MVInteractableBase *)0x0) {
    fVar1 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                             (interactableLocal,2,(this->fields).jumpHeight,
                              (interactableLocal->klass->vtable).__unknown_8.method);
    fVar2 = (this->fields).jumpVelocityMultiplier;
    if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
      FUN_?();
    }
    fVar2 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar2 * fVar1,(MethodInfo *)0x0);
    if (isDoingAirJump == 0) {
      fVar2 = fVar2 - fVar2 * sliperyFactor;
    }
    return fVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  fVar2 = (float)(*pcVar3)();
  return fVar2;
}


/* Vector3 GetJumpTypeVelocity(Vector3, JumpState+JumpType) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_GetJumpTypeVelocity
                    (Vector3 *__return_storage_ptr__,JumpState *this,Vector3 *velocity,
                    JumpState_JumpType__Enum jumpType,MethodInfo *method)

{
  if (jumpType == JumpState_JumpType__Enum_Wall) {
    uVar1._0_4_ = velocity->x;
    uVar1._4_4_ = velocity->y;
    fVar2 = velocity->z;
    fVar3 = (float)(undefined4)uVar1;
    fVar4 = (float)uVar1._4_4_;
    if ((float)uVar1._4_4_ < 0.0) {
      fVar5 = velocity->z;
      uStack_6 = uVar1;
      fStack_7 = fVar2;
      uStack_8 = uVar1;
      fVar9 = (float)FUN_?(&uStack_6);
      uStack_8 = uVar1 & 0xffffffff;
      fStack_10 = fVar5;
      fVar3 = (float)FUN_?(&uStack_8);
      if (_UNK_? < fVar3) {
        fVar11 = 0.0 / fVar3;
        fVar12 = (float)(undefined4)uVar1 / fVar3;
        fVar5 = fVar5 / fVar3;
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
        fVar12 = (pVVar13->zeroVector).x;
        fVar11 = (pVVar13->zeroVector).y;
        fVar5 = (pVVar13->zeroVector).z;
      }
      fVar3 = (float)uStack_6;
      fStackX_8 = (float)uStack_6;
      fStackX_c = fVar2;
      fVar14 = (float)FUN_?(&fStackX_8);
      fVar4 = 0.0;
      if (_UNK_? < fVar14) {
        fVar3 = fVar12 * fVar9;
        fVar4 = fVar11 * fVar9;
        fVar2 = fVar5 * fVar9;
      }
    }
    __return_storage_ptr__->x = fVar3;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  if ((jumpType != JumpState_JumpType__Enum_Water) && (velocity->y <= 0.0 && velocity->y != 0.0)) {
    velocity->y = 0.0;
  }
  fVar2 = velocity->z;
  fVar3 = velocity->y;
  __return_storage_ptr__->x = velocity->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Single GetSliperyFactor(MVInteractableBase, MVGroundState, Single, Boolean, Boolean) */

float Assembly-CSharp.dll::JumpState::JumpState_GetSliperyFactor
                (JumpState *this,MVInteractableBase *interactableLocal,MVGroundState *groundState,
                float waterProximity,bool canWaterJump,bool isDoingAirJump,MethodInfo *method)

{
  if (groundState != (MVGroundState *)0x0) {
    fVar1 = (float)FUN_?((groundState->fields).gradientAngle * _UNK_?);
    pMVar2 = (groundState->fields).groundMaterial;
    if ((pMVar2 != (MVMaterial *)0x0) && (interactableLocal != (MVInteractableBase *)0x0)) {
      fVar3 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                               (interactableLocal,0xc,
                                (pMVar2->fields)._PhysicalProperties_k__BackingField.friction,
                                (interactableLocal->klass->vtable).__unknown_8.method);
      fVar1 = (_UNK_? - ((float)((uint)(fVar3 * fVar3) ^ _UNK_?) + fVar3 + fVar3)) *
              fVar1;
      if ((fVar1 < (this->fields).sliperyValMin) ||
         (((canWaterJump != 0 && (_UNK_? < waterProximity)) || (isDoingAirJump != 0)))) {
        fVar1 = 0.0;
      }
      return fVar1;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  fVar1 = (float)(*pcVar4)();
  return fVar1;
}


/* Vector3 GetWallJumpVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_GetWallJumpVelocity
                    (Vector3 *__return_storage_ptr__,JumpState *this,Vector3 *velocity,
                    MethodInfo *method)

{
  if (velocity->y < 0.0) {
    uVar1._0_4_ = velocity->x;
    uVar1._4_4_ = velocity->y;
    fVar2 = velocity->z;
    fVar3 = (float)FUN_?(velocity);
    velocity->y = 0.0;
    uStack_4 = uVar1 & 0xffffffff;
    fStack_5 = fVar2;
    fVar6 = (float)FUN_?(&uStack_4);
    if (_UNK_? < fVar6) {
      fVar7 = (float)(undefined4)uVar1 / fVar6;
      fVar8 = 0.0 / fVar6;
      fVar2 = fVar2 / fVar6;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar7 = (pVVar9->zeroVector).x;
      fVar8 = (pVVar9->zeroVector).y;
      fVar2 = (pVVar9->zeroVector).z;
    }
    fStackX_8 = velocity->x;
    fStackX_c = velocity->z;
    fVar6 = (float)FUN_?(&fStackX_8);
    if (_UNK_? < fVar6) {
      velocity->x = fVar7 * fVar3;
      velocity->y = fVar8 * fVar3;
      velocity->z = fVar2 * fVar3;
    }
  }
  fVar2 = velocity->z;
  fVar3 = velocity->y;
  __return_storage_ptr__->x = velocity->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void HandleJumpBoost() */

void Assembly-CSharp.dll::JumpState::JumpState_HandleJumpBoost(JumpState *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  apBStackX_8[0] = (Boost *)0x0;
  (this->fields).jumpHeight = 1.0;
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
                      (this_01,BoostType__Enum_JumpPowerFloatMultiplier,apBStackX_8,
                       (MethodInfo *)0x0);
    if (bVar5 == 0) {
      return;
    }
    if ((apBStackX_8[0] != (Boost *)0x0) &&
       (pOVar6 = Boost::Boost_get_Value(apBStackX_8[0],(MethodInfo *)0x0), pOVar6 != (Object *)0x0))
    {
      if ((pOVar6->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        (this->fields).jumpHeight =
             (float)*(int *)&pOVar6[1].klass / _UNK_? + _UNK_?;
        return;
      }
      FUN_?(pOVar6,lRam_?);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::JumpState::JumpState_HandleMoveHit
               (JumpState *this,MVControllerColliderHit *moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1._0_4_ = (moveHit->positionTouchingHit).x;
  uStack_1._4_4_ = (moveHit->positionTouchingHit).y;
  uStack_2 = *(undefined8 *)&(moveHit->positionTouchingHit).z;
  uStack_3 = *(undefined8 *)&moveHit->testWithOutMoving;
  uStack_4._0_4_ = (moveHit->moveDirection).y;
  uStack_4._4_4_ = (moveHit->moveDirection).z;
  uStack_5._0_4_ = (moveHit->elipsoidNormal).x;
  uStack_5._4_4_ = (moveHit->elipsoidNormal).y;
  uStack_6 = *(undefined8 *)&(moveHit->elipsoidNormal).z;
  uStack_7._0_4_ = (moveHit->slopeNormal).y;
  uStack_7._4_4_ = (moveHit->slopeNormal).z;
  uStack_8._0_4_ = (moveHit->impactVelocity).x;
  uStack_8._4_4_ = (moveHit->impactVelocity).y;
  uStack_9 = *(undefined8 *)&(moveHit->impactVelocity).z;
  uStack_10._0_4_ = (moveHit->hit).point.x;
  uStack_10._4_4_ = (moveHit->hit).point.y;
  uStack_11 = *(undefined8 *)&(moveHit->hit).point.z;
  uStack_12._0_4_ = (moveHit->hit).normal.y;
  uStack_12._4_4_ = (moveHit->hit).normal.z;
  uStack_13 = *(undefined8 *)&(moveHit->hit).cubePos;
  uStack_14._0_4_ = (moveHit->hit).face;
  uStack_14._4_1_ = (moveHit->hit).isCubeHit;
  uStack_14._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
  uStack_15 = *(undefined8 *)&(moveHit->hit).woId;
  uStack_16 = *(undefined4 *)&(moveHit->hit).collider;
  uStack_17 = *(undefined4 *)((longlong)&(moveHit->hit).collider + 4);
  uStack_18 = *(undefined4 *)&(moveHit->hit).transform;
  uStack_19 = *(undefined4 *)((longlong)&(moveHit->hit).transform + 4);
  pCStack_20 = (moveHit->hit).cube;
  uStack_21 = *(undefined8 *)&(moveHit->hit).distance;
  uStack_22 = (undefined4)(moveHit->hit).interactionFlags;
  uStack_23 = *(undefined4 *)((longlong)&(moveHit->hit).interactionFlags + 4);
  uStack_24 = *(undefined4 *)&moveHit->material;
  uStack_25 = *(undefined4 *)((longlong)&moveHit->material + 4);
  pMVar26 = moveHit->material;
  if (pMVar26 != (MVMaterial *)0x0) {
    if (((pMVar26->fields)._ModifierPackageType_k__BackingField == 5) ||
       ((this->fields).canWallJumpAnySurface != 0)) {
      pLVar27 = (this->fields).wallJumpHits;
      if (pLVar27 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      uStack_1._0_4_ = (moveHit->positionTouchingHit).x;
      uStack_1._4_4_ = (moveHit->positionTouchingHit).y;
      uStack_2 = *(undefined8 *)&(moveHit->positionTouchingHit).z;
      uStack_3 = *(undefined8 *)&moveHit->testWithOutMoving;
      uStack_4._0_4_ = (moveHit->moveDirection).y;
      uStack_4._4_4_ = (moveHit->moveDirection).z;
      uStack_5._0_4_ = (moveHit->elipsoidNormal).x;
      uStack_5._4_4_ = (moveHit->elipsoidNormal).y;
      uStack_6 = *(undefined8 *)&(moveHit->elipsoidNormal).z;
      uStack_7._0_4_ = (moveHit->slopeNormal).y;
      uStack_7._4_4_ = (moveHit->slopeNormal).z;
      uStack_8._0_4_ = (moveHit->impactVelocity).x;
      uStack_8._4_4_ = (moveHit->impactVelocity).y;
      uStack_9 = *(undefined8 *)&(moveHit->impactVelocity).z;
      uStack_10._0_4_ = (moveHit->hit).point.x;
      uStack_10._4_4_ = (moveHit->hit).point.y;
      uStack_11 = *(undefined8 *)&(moveHit->hit).point.z;
      uStack_12._0_4_ = (moveHit->hit).normal.y;
      uStack_12._4_4_ = (moveHit->hit).normal.z;
      uStack_13 = *(undefined8 *)&(moveHit->hit).cubePos;
      uStack_14._0_4_ = (moveHit->hit).face;
      uStack_14._4_1_ = (moveHit->hit).isCubeHit;
      uStack_14._5_3_ = *(undefined3 *)&(moveHit->hit).field_0x25;
      uStack_15 = *(undefined8 *)&(moveHit->hit).woId;
      pCStack_20 = (moveHit->hit).cube;
      uStack_21 = *(undefined8 *)&(moveHit->hit).distance;
      uStack_16 = *(undefined4 *)&(moveHit->hit).collider;
      uStack_17 = *(undefined4 *)((longlong)&(moveHit->hit).collider + 4);
      uStack_18 = *(undefined4 *)&(moveHit->hit).transform;
      uStack_19 = *(undefined4 *)((longlong)&(moveHit->hit).transform + 4);
      uStack_22 = (undefined4)(moveHit->hit).interactionFlags;
      uStack_23 = *(undefined4 *)((longlong)&(moveHit->hit).interactionFlags + 4);
      uStack_24 = *(undefined4 *)&moveHit->material;
      uStack_25 = *(undefined4 *)((longlong)&moveHit->material + 4);
      FUN_?(pLVar27,&uStack_1,
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
                   );
    }
    return;
  }
code_?:
  FUN_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Vector3 JumpDir(JumpState+JumpType ByRef, MVGroundState, Single, Boolean, Boolean) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_JumpDir
                    (Vector3 *__return_storage_ptr__,JumpState *this,
                    JumpState_JumpType__Enum *jumpType,MVGroundState *groundState,
                    float sliperyFactor,bool wallJumpPossible,bool canWaterJump,MethodInfo *method)

{
  if (groundState == (MVGroundState *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if ((canWaterJump & (bVar3 ^ 1)) == 0) {
    pfVar4 = &(this->fields).sliperyValMax;
    if (*pfVar4 <= sliperyFactor && sliperyFactor != *pfVar4) {
      *jumpType = JumpState_JumpType__Enum_Regular;
      uVar5._0_4_ = (groundState->fields).groundNormal.x;
      uVar5._4_4_ = (groundState->fields).groundNormal.y;
      fVar6 = (groundState->fields).groundNormal.z;
      goto code_?;
    }
    bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
    if ((wallJumpPossible & (bVar3 ^ 1)) != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_7._8_4_ = (this->fields).latestSlopeDir.z;
      method_00 = (MethodInfo *)auStack_7;
      auStack_7._0_8_ = *(undefined8 *)&(this->fields).latestSlopeDir;
      uStack_8 = *(InvokerMethod *)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      fStack_9 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
      fVar6 = (float)FUN_?(&uStack_8);
      pfVar4 = &(this->fields).wallJumpAngleMin;
      if ((*pfVar4 <= fVar6 && fVar6 != *pfVar4) && (fVar6 < (this->fields).wallJumpAngleMax)) {
        uStack_8 = *(InvokerMethod *)&(this->fields).latestSlopeDir;
        fVar6 = (this->fields).latestSlopeDir.z;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar11 = (pVVar10->upVector).x;
        uVar12 = (pVVar10->upVector).y;
        fVar13 = (pVVar10->upVector).z;
        (this->fields).latestSlopeDir.x = (float)uStack_8 + (float)uVar11;
        (this->fields).latestSlopeDir.y = uStack_8._4_4_ + (float)uVar12;
        (this->fields).latestSlopeDir.z = fVar6 + fVar13;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&(this->fields).latestSlopeDir,method_00);
        *jumpType = JumpState_JumpType__Enum_Wall;
        uVar5._0_4_ = (this->fields).latestSlopeDir.x;
        uVar5._4_4_ = (this->fields).latestSlopeDir.y;
        fVar6 = (this->fields).latestSlopeDir.z;
        goto code_?;
      }
    }
    *jumpType = JumpState_JumpType__Enum_Regular;
  }
  else {
    *jumpType = JumpState_JumpType__Enum_Water;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar5._0_4_ = (pVVar10->upVector).x;
  uVar5._4_4_ = (pVVar10->upVector).y;
  fVar6 = (pVVar10->upVector).z;
code_?:
  __return_storage_ptr__->x = (float)(int)uVar5;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Void SetJumpState(Boolean, Single) */

void Assembly-CSharp.dll::JumpState::JumpState_SetJumpState
               (JumpState *this,bool wallJumpPossible,float sliperyFactor,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  (this->fields).jumping = 1;
  pcVar2 = pcRam_?;
  if ((pcVar1 == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcVar1)();
  (this->fields).lastStartTime = fVar4;
  (this->fields).lastButtonDownTime = -100.0;
  (this->fields).holdingJumpButton = 1;
  if (wallJumpPossible == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (this->fields).jumpTimeOutWallJump;
  }
  (this->fields).jumpTimeOut = fVar4;
  (this->fields).accExtraHeight =
       (this->fields).extraHeight - sliperyFactor * (this->fields).extraHeight;
  return;
}


/* Single SpreadFunction(Single) */

float Assembly-CSharp.dll::JumpState::JumpState_SpreadFunction
                (JumpState *this,float x,MethodInfo *method)

{
  return (float)((uint)(x * x) ^ _UNK_?) + x + x;
}


/* Void UpdateJumpState(GroundChange) */

void Assembly-CSharp.dll::JumpState::JumpState_UpdateJumpState
               (JumpState *this,GroundChange__Enum groundChange,MethodInfo *method)

{
  if (groundChange == GroundChange__Enum_FromAirToGrounded) {
    (this->fields).jumping = 0;
    (this->fields).airJumpsDone = 0;
  }
  return;
}


/* Void UpdateWallJumpValues() */

void Assembly-CSharp.dll::JumpState::JumpState_UpdateWallJumpValues
               (JumpState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Clear__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  FUN_?(&pLStack_1,0,0xb8);
  pLVar2 = (this->fields).wallJumpHits;
  if (pLVar2 != (List_1_MVControllerColliderHit_ *)0x0) {
    if (0 < (pLVar2->fields)._size) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar4 = (pVVar3->zeroVector).z;
      fVar5 = (pVVar3->zeroVector).y;
      (this->fields).latestSlopeDir.x = (pVVar3->zeroVector).x;
      (this->fields).latestSlopeDir.y = fVar5;
      (this->fields).latestSlopeDir.z = fVar4;
      pLVar2 = (this->fields).wallJumpHits;
      if (pLVar2 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      FUN_?(&uStack_6,0,0xb0);
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&pLStack_8 >> 0xc);
        uVar9 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
          puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
          LOCK();
          bVar12 = uVar10 == *puVar11;
          if (bVar12) {
            *puVar11 = uVar10 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar12);
      }
      uStack_6 = 0;
      iStack_13 = (pLVar2->fields)._version;
      pLStack_8 = pLVar2;
      FUN_?(&uStack_14,0,0xa8);
      uStack_15 = CONCAT44(iStack_13,uStack_6);
      pLStack_1 = pLStack_8;
      uStack_16 = uStack_14;
      uStack_17 = uStack_18;
      uStack_19 = uStack_20;
      uStack_21 = uStack_22;
      uStack_23 = uStack_24;
      uStack_25 = uStack_26;
      uStack_27 = uStack_28;
      uStack_29 = uStack_30;
      uStack_31 = uStack_32;
      uStack_33 = uStack_34;
      uStack_35 = uStack_36;
      uStack_37 = uStack_38;
      uStack_39 = uStack_40;
      uStack_41 = uStack_42;
      uStack_43 = uStack_44;
      uStack_45 = uStack_46;
      uStack_47 = uStack_48;
      uStack_49 = uStack_50;
      uStack_51 = uStack_52;
      uStack_53 = uStack_54;
      uStack_55 = uStack_56;
      uStack_57 = uStack_58;
      uStack_59 = uStack_60;
      uStack_61 = uStack_62;
      uStack_63 = uStack_64;
      while (method_00 = 
             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
            , cVar65 = FUN_?(&pLStack_1), cVar65 != '\0') {
        uVar66 = (this->fields).latestSlopeDir.x;
        uVar67 = (this->fields).latestSlopeDir.y;
        fVar4 = (this->fields).latestSlopeDir.z;
        (this->fields).latestSlopeDir.x = uStack_23._4_4_ + (float)uVar66;
        (this->fields).latestSlopeDir.y = (float)uStack_25 + (float)uVar67;
        (this->fields).latestSlopeDir.z = uStack_25._4_4_ + fVar4;
      }
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&(this->fields).latestSlopeDir,method_00);
    }
    pLVar2 = (this->fields).wallJumpHits;
    if (pLVar2 != (List_1_MVControllerColliderHit_ *)0x0) {
      piVar68 = &(pLVar2->fields)._version;
      *piVar68 = *piVar68 + 1;
      length = (pLVar2->fields)._size;
      (pLVar2->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar69 = (code *)swi(3);
  (*pcVar69)();
  return;
}


/* JumpState(Single, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::JumpState::JumpState__ctor
               (JumpState *this,float regularButtonDownTimeLimit,
               WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__JumpState__HandleJumpBoost__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_JumpHeight);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DoubleJump);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_CanWallJumpAnySurface);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  JumpState__ctor_1(this,regularButtonDownTimeLimit,(MethodInfo *)0x0);
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_JumpHeight,(MethodInfo *)0x0);
    fVar2 = _UNK_?;
    fVar3 = _UNK_?;
    if (bVar1 != 0) {
      iVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_JumpHeight,(MethodInfo *)0x0);
      fVar3 = (float)iVar4 / _UNK_?;
    }
    if (this != (JumpState *)0x0) {
      bVar5 = cRam_? == '\0';
      (this->fields).jumpVelocityMultiplier = fVar3;
      if (bVar5) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar6 != (MVGameControllerBase *)0x0) &&
           (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
          (pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0)) &&
         (pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(pMVar8,(MethodInfo *)0x0),
         pMVar9 != (MVLocalPlayer *)0x0)) {
        pBVar10 = (pMVar9->fields).boostController;
        this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  (this_00,(Object *)this,MethodInfo__JumpState__HandleJumpBoost__,(MethodInfo *)0x0
                  );
        if (pBVar10 != (BoostController *)0x0) {
          BoostController::BoostController_SubscribeToBoostChanged
                    (pBVar10,BoostType__Enum_JumpPowerFloatMultiplier,(Action *)this_00,
                     (MethodInfo *)0x0);
          bVar5 = cRam_? == '\0';
          pBStackX_18 = (Boost *)0x0;
          (this->fields).jumpHeight = 1.0;
          if (bVar5) {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar6 != (MVGameControllerBase *)0x0) &&
              (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
             ((pMVar8 = (pMVar7->fields).playerContainer, pMVar8 != (MVPlayerContainer *)0x0 &&
              ((pMVar9 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer
                                   (pMVar8,(MethodInfo *)0x0), pMVar9 != (MVLocalPlayer *)0x0 &&
               (pBVar10 = (pMVar9->fields).boostController, pBVar10 != (BoostController *)0x0)))))) {
            bVar1 = BoostController::BoostController_TryGetActiveBoost
                              (pBVar10,BoostType__Enum_JumpPowerFloatMultiplier,&pBStackX_18,
                               (MethodInfo *)0x0);
            if (bVar1 != 0) {
              if ((pBStackX_18 == (Boost *)0x0) ||
                 (pOVar11 = Boost::Boost_get_Value(pBStackX_18,(MethodInfo *)0x0),
                 pOVar11 == (Object *)0x0)) goto code_?;
              if ((pOVar11->klass->_0).element_class !=
                  *(Il2CppClass **)(lRam_? + 0x40)) {
                FUN_?(pOVar11,lRam_?);
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              (this->fields).jumpHeight = (float)*(int *)&pOVar11[1].klass / _UNK_? + fVar2;
            }
            bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                              (skillDataManager,StringLiteral_DoubleJump,(MethodInfo *)0x0);
            (this->fields).airJumpsAllowed = (uint)bVar1;
            bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                              (skillDataManager,StringLiteral_CanWallJumpAnySurface,
                               (MethodInfo *)0x0);
            (this->fields).canWallJumpAnySurface = bVar1;
            return;
          }
code_?:
          FUN_?();
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* JumpState(Single) */

void Assembly-CSharp.dll::JumpState::JumpState__ctor_1
               (JumpState *this,float regularButtonDownTimeLimit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).extraHeight = 4.1;
  (this->fields).jumpHeight = 1.0;
  (this->fields).sliperyValMin = 0.3;
  (this->fields).sliperyValMax = 0.6;
  (this->fields).regularButtonDownTimeLimit = 0.2;
  (this->fields).bouncyMaterialButtonDownTimeLimit = 3.0;
  (this->fields).bouncinessThresshold = 0.3;
  (this->fields).wallJumpAngleMin = 70.0;
  (this->fields).wallJumpAngleMax = 92.0;
  (this->fields).jumpTimeOutWallJump = 0.25;
  (this->fields).jumpVelocityMultiplier = 1.0;
  (this->fields).lastButtonDownTime = -100.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->upVector).y;
  fVar4 = (pVVar2->upVector).z;
  (this->fields).jumpDir.x = (pVVar2->upVector).x;
  (this->fields).jumpDir.y = fVar3;
  (this->fields).jumpDir.z = fVar4;
  pLVar5 = (List_1_MVControllerColliderHit_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
  FUN_?(pLVar5,
                MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).wallJumpHits = pLVar5;
  if (bVar1) {
    uVar6 = (uint)((ulonglong)&(this->fields).wallJumpHits >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar8 == *puVar9;
      if (bVar1) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  (this->fields).regularButtonDownTimeLimit = regularButtonDownTimeLimit;
  return;
}


/* Boolean get_AirJumping() */

bool Assembly-CSharp.dll::JumpState::JumpState_get_AirJumping(JumpState *this,MethodInfo *method)

{
  if ((this->fields).airJumping == 0) {
    return 0;
  }
  (this->fields).airJumping = 0;
  return 1;
}

