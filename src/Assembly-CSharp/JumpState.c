
/* Vector3 ApplyJumping(MVInteractableBase, MVGroundState, Single, Single, Boolean, Vector3,
   Vector3) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_ApplyJumping
                    (Vector3 *__return_storage_ptr__,JumpState *this,
                    MVInteractableBase *interactableLocal,MVGroundState *groundState,float density,
                    float waterProximity,bool inputJump,Vector3 velocity,Vector3 movableVelocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__System__Math);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
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
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastButtonDownTime = fVar2;
    }
  }
  if (groundState == (MVGroundState *)0x0) goto code_?;
  bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if (((bVar3 == 0) && ((this->fields).jumping != 0)) && ((this->fields).holdingJumpButton != 0)) {
    auStack_4._0_4_ =
         UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    auStack_4._4_4_ = (this->fields).lastStartTime;
    if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
    pMVar5 = (interactableLocal->klass->vtable).__unknown_8.method;
    stack0xffffffb4 = CONCAT44(pMVar5,auStack_4._8_4_);
    fVar6 = (float10)(*(code *)pMVar5)((short)interactableLocal,2,
                                        SUB41((this->fields).accExtraHeight,0),
                                        (interactableLocal->klass->vtable).__unknown_9.methodPtr);
    pMVar5 = (interactableLocal->klass->vtable).__unknown_8.method;
    stack0xffffffb4 = CONCAT44(pMVar5,(float)fVar6);
    fVar6 = (float10)(*(code *)pMVar5)((short)interactableLocal,2,0,
                                        (interactableLocal->klass->vtable).__unknown_9.methodPtr);
    auStack_4._0_4_ = (undefined4)fVar6;
    if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
      func_?((short)TypeInfo__MVPhysics);
    }
    fVar2 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed
                       ((float)auStack_4._0_4_,(MethodInfo *)0x0);
    fVar2 = (float)auStack_4._4_4_ / fVar2 + (float)auStack_4._0_4_;
    stack0xffffffb4 = CONCAT44(pMStack_7,fVar2);
    if (fVar2 <= fStack_8) goto code_?;
    auStack_9._0_4_ = (this->fields).jumpDir.x;
    auStack_9._4_4_ = (this->fields).jumpDir.y;
    stack0xffffffd4 = CONCAT44(fStack_10,(this->fields).jumpDir.z);
    if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
      func_?((char)TypeInfo__MVPhysics);
    }
    if (cRam_? == '\0') {
      func_?(0x1c);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
      func_?((char)TypeInfo__MVPhysics);
    }
    pMVar11 = TypeInfo__MVPhysics->static_fields;
    fStack_12 = (float)(pMVar11->gravity).currentCryptoKey;
    AStack_13 = (pMVar11->gravity).hiddenValue;
    pBVar14 = (pMVar11->gravity).hiddenValueOld;
    fVar15 = (pMVar11->gravity).fakeValue;
    fVar2 = *(float *)&(pMVar11->gravity).inited;
    auStack_4._8_4_ = fVar2;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?((char)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AStack_13;
    value.currentCryptoKey = (int32_t)fStack_12;
    value.hiddenValueOld = pBVar14;
    value.fakeValue._0_2_ = SUB42(fVar15,0);
    value.fakeValue._2_1_ = (char)((uint)fVar15 >> 0x10);
    value.fakeValue._3_1_ = (char)((uint)fVar15 >> 0x18);
    value._16_2_ = (short)auStack_4._8_4_;
    value._18_1_ = SUB41(auStack_4._8_4_,2);
    value._19_1_ = SUB41(auStack_4._8_4_,3);
    fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    groundState = (MVGroundState *)0x0;
    waterProximity = 0.0;
    uStack_16 = CONCAT44(fStack_17 * fVar2,fStack_18 * fVar2);
    pIVar19 = (interactableLocal->klass->vtable).__unknown_9.methodPtr;
    auStack_9._0_4_ = (interactableLocal->klass->vtable).__unknown_8.method;
    fVar2 = 0.0;
    fVar6 = (float10)(*(code *)auStack_9._0_4_)(interactableLocal,0,0);
    auStack_4._4_4_ = (undefined4)fVar6;
    fStack_20 = fStack_20 * (float)auStack_4._4_4_;
    fVar2 = fVar2 * (float)auStack_4._4_4_;
    fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    velocity.z = fVar2 * fVar15 + velocity.z;
    velocity.x = fStack_12 * fVar15 + velocity.x;
    velocity.y = (float)pIVar19 * fVar15 + velocity.y;
    stack0xffffffd4 = CONCAT44(fStack_10,velocity.z);
  }
  else {
    if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
code_?:
  }
  auStack_4._8_4_ = (interactableLocal->klass->vtable).__unknown_8.method;
  fStack_12 = velocity.x;
  AStack_13 = (ACTkByte4)velocity.y;
  fVar6 = (float10)(*(code *)auStack_4._8_4_)
                              (interactableLocal,5,0,
                               (char)(interactableLocal->klass->vtable).__unknown_9.methodPtr);
  stack0xffffffb4 = CONCAT44(pMStack_7,(float)fVar6);
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?((char)TypeInfo__System__Math);
  }
  fVar2 = mscorlib.dll::System::Math::Math_Min_7
                     (1.0,(float)auStack_4._8_4_ * _UNK_?,(MethodInfo *)0x0);
  uStack_16 = CONCAT44(fVar2,(float)uStack_16);
  if (fVar2 <= waterProximity) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    bVar21 = _UNK_? <= fVar2 - (this->fields).lastStartTime;
  }
  else {
    bVar21 = false;
  }
  stack0xffffffb4 = (ulonglong)CONCAT14(bVar21 & inputJump,auStack_4._8_4_);
  pIVar19 = (interactableLocal->klass->vtable).__unknown_9.methodPtr;
  pMVar5 = (interactableLocal->klass->vtable).__unknown_8.method;
  fVar15 = 2.52234e-44;
  uStack_22 = CONCAT44(uStack_22._4_4_,pMVar5);
  cVar23 = '{';
  uVar24 = 0x94;
  bVar25 = 0x2e;
  cVar26 = '\x10';
  pMVar27 = interactableLocal;
  fVar6 = (float10)(*(code *)pMVar5)(interactableLocal,0x12,0,pIVar19,velocity.z);
  bVar28 = (byte)((uint)pMVar27 >> 0x10);
  fVar2 = (float)fVar6;
  if ((_UNK_? < fVar2) || (cVar23 != '\0')) {
    bVar21 = false;
  }
  else {
    bVar21 = (this->fields).airJumpsDone < (this->fields).airJumpsAllowed;
  }
  if ((((inputJump & bVar21) != 0) &&
      (pIVar19 = (Il2CppMethodPointer)
                 UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
      _UNK_? <= (float)pIVar19 - (this->fields).lastStartTime)) &&
     ((this->fields).holdingJumpButton == 0)) {
    bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
    bVar25 = bVar3 ^ 1;
  }
  bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if ((((bVar3 == 0 && bVar25 == 0) && cVar26 == '\0') && SUB41(fVar2,0) == '\0') ||
     (auStack_4._0_4_ =
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fVar29 = (float)auStack_4._0_4_ - (this->fields).lastStartTime,
     pfVar1 = &(this->fields).jumpTimeOut, fVar29 < *pfVar1 || fVar29 == *pfVar1))
  goto code_?;
  fVar29 = (this->fields).regularButtonDownTimeLimit;
  pMVar30 = (groundState->fields).groundMaterial;
  if (pMVar30 == (MVMaterial *)0x0) {
code_?:
    func_?();
    pcVar31 = (code *)swi(3);
    pVVar32 = (Vector3 *)(*pcVar31)();
    return pVVar32;
  }
  VStack_33.z = (pMVar30->fields)._PhysicalProperties_k__BackingField.toughness;
  auStack_4._0_4_ = (interactableLocal->klass->vtable).__unknown_8.method;
  fVar6 = (float10)(*(code *)auStack_4._0_4_)
                              (interactableLocal,0xd,
                               (pMVar30->fields)._PhysicalProperties_k__BackingField.bouncyness,
                               (short)(interactableLocal->klass->vtable).__unknown_9.methodPtr);
  pfVar1 = &(this->fields).bouncinessThresshold;
  if (*pfVar1 <= (float)fVar6 && (float)fVar6 != *pfVar1) {
    pIVar19 = (Il2CppMethodPointer)(this->fields).bouncyMaterialButtonDownTimeLimit;
  }
  (this->fields).holdingJumpButton = 0;
  fVar34 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  cVar35 = (char)pIVar19;
  uVar36 = (uint)pIVar19 & 0xff | (uint)bVar28;
  if (fVar34 - (this->fields).lastButtonDownTime < fVar29) {
    uVar36 = 1;
  }
  if (uVar36 == 0) goto code_?;
  if (bVar28 == 0) {
    auStack_4._0_4_ = movableVelocity.y;
  }
  else {
    piVar37 = &(this->fields).airJumpsDone;
    *piVar37 = *piVar37 + 1;
    auStack_4._0_4_ = 0.0;
    velocity.y = 0.0;
    (this->fields).airJumping = 1;
    fStack_18 = velocity.x;
    fStack_20 = 0.0;
    fStack_12 = 0.0;
    AStack_13 = (ACTkByte4)0x0;
  }
  dVar38 = (double)((groundState->fields).gradientAngle * _UNK_?);
  func_?();
  auStack_4._4_4_ = (undefined4)dVar38;
  pMVar30 = (groundState->fields).groundMaterial;
  if (pMVar30 == (MVMaterial *)0x0) goto code_?;
  VStack_33.z = (pMVar30->fields)._PhysicalProperties_k__BackingField.toughness;
  fVar6 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_8.method)
                              (interactableLocal,0xc,
                               (pMVar30->fields)._PhysicalProperties_k__BackingField.friction,
                               (short)(interactableLocal->klass->vtable).__unknown_9.methodPtr);
  fStack_8 = (float)fVar6;
  fVar15 = (fVar15 - ((float)((uint)(fStack_8 * fStack_8) ^
                             __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                             ) + fStack_8 + fStack_8)) * (float)auStack_4._4_4_;
  if ((fVar15 < (this->fields).sliperyValMin) ||
     (((cVar35 != '\0' && (_UNK_? < waterProximity)) || (bVar28 != 0)))) {
    fVar15 = 0.0;
  }
  cVar35 = (char)((uint)fVar15 >> 0x18);
  (this->fields).jumping = 1;
  fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastButtonDownTime = -100.0;
  (this->fields).lastStartTime = fVar15;
  (this->fields).holdingJumpButton = 1;
  if (cVar35 == '\0') {
    fVar15 = 0.0;
  }
  else {
    fVar15 = (this->fields).jumpTimeOutWallJump;
  }
  (this->fields).jumpTimeOut = fVar15;
  bVar21 = cRam_? == '\0';
  (this->fields).accExtraHeight = (this->fields).extraHeight - fVar2 * (this->fields).extraHeight;
  if (bVar21) {
    func_?(0x2f1c);
    cRam_? = '\x01';
  }
  pIVar19 = (interactableLocal->klass->vtable).__unknown_9.methodPtr;
  cVar35 = (char)((uint)pIVar19 >> 0x10);
  pMVar5 = (interactableLocal->klass->vtable).__unknown_8.method;
  auStack_4._8_4_ = pMVar5;
  fVar6 = (float10)(*(code *)pMVar5)(interactableLocal,2,SUB42((this->fields).jumpHeight,0),
                                      (short)pIVar19);
  fVar15 = (this->fields).jumpVelocityMultiplier;
  fVar29 = (float)fVar6;
  if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVPhysics);
  }
  fVar15 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar15 * fVar29,(MethodInfo *)0x0);
  if (cVar35 == '\0') {
    fVar15 = fVar15 - fVar15 * (float)CONCAT13(cVar26,CONCAT12(bVar25,CONCAT11(uVar24,cVar23)));
  }
  bVar25 = SUB41(fVar15,0);
  bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if ((bVar25 & (bVar3 ^ 1)) == 0) {
    pfVar1 = &(this->fields).sliperyValMax;
    if (*pfVar1 <= fVar29 && fVar29 != *pfVar1) {
      uVar39._0_4_ = (groundState->fields).groundNormal.x;
      uVar39._4_4_ = (groundState->fields).groundNormal.y;
      fVar15 = (groundState->fields).groundNormal.z;
code_?:
      iVar40 = 0;
      (this->fields).jumpDir.x = (float)(int)uVar39;
      (this->fields).jumpDir.y = (float)(int)((ulonglong)uVar39 >> 0x20);
      uVar41 = CONCAT44(fStack_20,fStack_18);
      (this->fields).jumpDir.z = fVar15;
      if (velocity.y < 0.0) {
        uStack_22 = (ulonglong)(uint)fStack_18;
        uVar41 = uStack_22;
        goto code_?;
      }
      uStack_16 = CONCAT44(uStack_16._4_4_,fVar2);
    }
    else {
      bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
      if ((byte)((byte)((uint)fVar2 >> 0x18) & (bVar3 ^ 1)) == 0) {
code_?:
        if (cRam_? == '\0') {
          func_?(0xe8);
          cRam_? = '\x01';
        }
        pVVar42 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar39._0_4_ = (pVVar42->upVector).x;
        uVar39._4_4_ = (pVVar42->upVector).y;
        fVar15 = (pVVar42->upVector).z;
        goto code_?;
      }
      pVVar32 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)auStack_9,(MethodInfo *)0x0);
      uVar43 = (this->fields).latestSlopeDir.x;
      uVar44 = (this->fields).latestSlopeDir.y;
      uVar45 = pVVar32->x;
      uVar46 = pVVar32->y;
      fVar6 = (float10)func_?(uVar45,uVar46,SUB42(pVVar32->z,0),(short)uVar43,(char)uVar44,
                                        (this->fields).latestSlopeDir.z,0);
      pMStack_7 = (MethodInfo *)(float)fVar6;
      pfVar1 = &(this->fields).wallJumpAngleMin;
      if (((float)pMStack_7 < *pfVar1 || (float)pMStack_7 == *pfVar1) ||
         ((this->fields).wallJumpAngleMax <= (float)pMStack_7)) goto code_?;
      uStack_16._0_4_ = (this->fields).latestSlopeDir.x;
      uStack_16._4_4_ = (this->fields).latestSlopeDir.y;
      uStack_22 = CONCAT44(uStack_22._4_4_,(this->fields).latestSlopeDir.z);
      pVVar32 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          (&VStack_33,(MethodInfo *)0x0);
      auStack_9._8_4_ = pVVar32->x;
      fStack_10 = pVVar32->y;
      VStack_33.x = pVVar32->z + (float)auStack_9._0_4_;
      (this->fields).latestSlopeDir.x = (float)auStack_9._8_4_ + (float)uStack_22;
      (this->fields).latestSlopeDir.y = fStack_10 + uStack_22._4_4_;
      (this->fields).latestSlopeDir.z = VStack_33.x;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&(this->fields).latestSlopeDir,(MethodInfo *)0x0);
      uVar47 = auStack_4._8_4_;
      fVar15 = (this->fields).latestSlopeDir.y;
      bVar21 = _UNK_? <= (float)uStack_16;
      fVar2 = (this->fields).latestSlopeDir.z;
      VStack_33.z = (float)auStack_4._8_4_;
      (this->fields).jumpDir.x = (this->fields).latestSlopeDir.x;
      (this->fields).jumpDir.y = fVar15;
      VStack_33._0_8_ = CONCAT44(this,__return_storage_ptr__);
      (this->fields).jumpDir.z = fVar2;
      uVar41 = VStack_33._0_8_;
      if (bVar21) {
code_?:
        uStack_16 = CONCAT44(uStack_16._4_4_,uVar47);
        iVar40 = 1;
      }
      else {
        stack0xffffffd4 = CONCAT44(fStack_10,auStack_4._8_4_);
        auStack_9._0_8_ = VStack_33._0_8_;
        fVar6 = (float10)func_?(&VStack_33,0);
        auStack_4._4_4_ = 0.0;
        fStack_8 = (float)fVar6;
        uStack_16 = uStack_16 & 0xffffffff;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  ((Vector3 *)auStack_4,(MethodInfo *)0x0);
        stack0xffffffb4 =
             CONCAT44((float)pMStack_7 * (float)auStack_4._4_4_,
                      (float)auStack_4._8_4_ * (float)auStack_4._4_4_);
        uStack_16 = CONCAT44(uStack_16._4_4_,(float)uStack_16 * (float)auStack_4._4_4_);
        if (cRam_? == '\0') {
          func_?(0x40c4);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?((short)TypeInfo__System__Math);
        }
        dVar38 = (double)((float)auStack_9._0_4_ * (float)auStack_9._0_4_ +
                         (float)uStack_22 * (float)uStack_22);
        if (dVar38 < 0.0) {
          func_?();
        }
        else {
          dVar38 = SQRT(dVar38);
        }
        uVar41 = uStack_22;
        if ((float)dVar38 <= _UNK_?) goto code_?;
        iVar40 = 1;
        uVar41 = stack0xffffffb4;
      }
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?(0xb9e8);
      cRam_? = '\x01';
    }
    iVar40 = 2;
    pVVar42 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar29 = (pVVar42->upVector).y;
    fVar15 = (pVVar42->upVector).z;
    (this->fields).jumpDir.x = (pVVar42->upVector).x;
    (this->fields).jumpDir.y = fVar29;
    uVar41 = CONCAT44(fStack_20,fStack_18);
    (this->fields).jumpDir.z = fVar15;
code_?:
    uStack_16 = CONCAT44(uStack_16._4_4_,fVar2);
  }
  uStack_22._0_4_ = (this->fields).jumpDir.x;
  uStack_22._4_4_ = (this->fields).jumpDir.y;
  auStack_4._8_4_ = (undefined4)uVar41;
  pMStack_7 = (MethodInfo *)(uVar41 >> 0x20);
  fVar2 = (this->fields).jumpDir.z * fStack_8 + (float)uStack_16 + movableVelocity.z;
  fStack_18 = (float)uStack_22 * fStack_8 + (float)auStack_4._8_4_ + movableVelocity.x;
  fStack_20 = uStack_22._4_4_ * fStack_8 + (float)pMStack_7 + (float)auStack_4._0_4_;
  auStack_9._0_4_ = fVar2;
  fStack_12 = 0.0;
  AStack_13.b1 = 0;
  AStack_13.b2 = 0;
  AStack_13.b3 = 0;
  AStack_13.b4 = 0;
  if ((iVar40 == 1) && ((this->fields).OnWallJump != (JumpState_OnWallJumpDelegate *)0x0)) {
    pJVar48 = (this->fields).OnWallJump;
    unique0x100016e7 = uVar41;
    (*(pJVar48->fields)._._.invoke_impl)
              ((pJVar48->fields)._._.method_code,(short)(pJVar48->fields)._._.method);
  }
code_?:
  __return_storage_ptr__->x = fStack_18;
  __return_storage_ptr__->y = fStack_20;
  __return_storage_ptr__->z = fVar2;
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
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__JumpState__HandleJumpBoost__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_01 != (MVNetworkGame *)0x0) &&
     (pMVar2 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
     pMVar2 != (MVLocalPlayer *)0x0)) {
    this_00 = (pMVar2->fields).boostController;
    this_02 = (NavMesh_OnNavMeshPreUpdate *)func_?();
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_02,unaff_EDI,MethodInfo__JumpState__HandleJumpBoost__,(MethodInfo *)0x0);
    if (this_00 != (BoostController *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                (this_00,BoostType__Enum_JumpPowerFloatMultiplier,(Action *)this_02,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Single GetJumpSpeed(MVInteractableBase, Single, Boolean) */

float Assembly-CSharp.dll::JumpState::JumpState_GetJumpSpeed
                (JumpState *this,MVInteractableBase *interactableLocal,float sliperyFactor,
                bool isDoingAirJump,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVPhysics);
    cRam_? = '\x01';
  }
  if (interactableLocal != (MVInteractableBase *)0x0) {
    fVar1 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_8.method)
                               (interactableLocal,2,(this->fields).jumpHeight,
                                (interactableLocal->klass->vtable).__unknown_9.methodPtr);
    fVar2 = (this->fields).jumpVelocityMultiplier;
    if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVPhysics);
    }
    interactableLocal =
         (MVInteractableBase *)
         MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar2 * (float)fVar1,(MethodInfo *)0x0);
    if (isDoingAirJump == 0) {
      interactableLocal =
           (MVInteractableBase *)
           ((float)interactableLocal - (float)interactableLocal * sliperyFactor);
    }
    return (float)interactableLocal;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  fVar1 = (float10)(*pcVar3)();
  return (float)fVar1;
}


/* Vector3 GetJumpTypeVelocity(Vector3, JumpState+JumpType) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_GetJumpTypeVelocity
                    (Vector3 *__return_storage_ptr__,JumpState *this,Vector3 velocity,
                    JumpState_JumpType__Enum jumpType,MethodInfo *method)

{
  if (jumpType != JumpState_JumpType__Enum_Wall) {
    if ((jumpType != JumpState_JumpType__Enum_Water) && (velocity.y < 0.0)) {
      velocity.y = 0.0;
    }
    __return_storage_ptr__->x = velocity.x;
    __return_storage_ptr__->y = velocity.y;
    __return_storage_ptr__->z = velocity.z;
    return __return_storage_ptr__;
  }
  fStack_1 = velocity.z;
  VStack_2._0_8_ = velocity._0_8_;
  if (velocity.y < 0.0) {
    VStack_2.z = velocity.z;
    uStack_3 = VStack_2._0_8_;
    func_?(&uStack_3,0);
    VStack_2._0_8_ = VStack_2._0_8_ & 0xffffffff;
    uStack_3 = uStack_3 & 0xffffffff;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
              (&VStack_2,(MethodInfo *)0x0);
    VStack_2.z = VStack_2.z * VStack_2.y;
    fStack_4 = fStack_4 * VStack_2.y;
    fStack_5 = fStack_5 * VStack_2.y;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    dVar6 = (double)(unaff_EBP * unaff_EBP + fStack_1 * fStack_1);
    if (dVar6 < 0.0) {
      func_?();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if (_UNK_? < (float)dVar6) {
      __return_storage_ptr__->x = VStack_2.z;
      __return_storage_ptr__->y = fStack_4;
      __return_storage_ptr__->z = fStack_5;
      return __return_storage_ptr__;
    }
    VStack_2._0_8_ = CONCAT44(uStack_7,fStack_1);
  }
  __return_storage_ptr__->x = (float)(int)VStack_2._0_8_;
  __return_storage_ptr__->y = (float)(int)((ulonglong)VStack_2._0_8_ >> 0x20);
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Single GetSliperyFactor(MVInteractableBase, MVGroundState, Single, Boolean, Boolean) */

float Assembly-CSharp.dll::JumpState::JumpState_GetSliperyFactor
                (JumpState *this,MVInteractableBase *interactableLocal,MVGroundState *groundState,
                float waterProximity,bool canWaterJump,bool isDoingAirJump,MethodInfo *method)

{
  if (groundState != (MVGroundState *)0x0) {
    dVar1 = (double)((groundState->fields).gradientAngle * _UNK_?);
    func_?();
    pMVar2 = (groundState->fields).groundMaterial;
    if (pMVar2 != (MVMaterial *)0x0) {
      if (interactableLocal != (MVInteractableBase *)0x0) {
        fVar3 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_8.method)
                                   (interactableLocal,0xc,
                                    (pMVar2->fields)._PhysicalProperties_k__BackingField.friction,
                                    (interactableLocal->klass->vtable).__unknown_9.methodPtr);
        fVar4 = (float)fVar3;
        groundState = (MVGroundState *)
                      ((_UNK_? -
                       ((float)((uint)(fVar4 * fVar4) ^
                               __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                               ) + fVar4 + fVar4)) * (float)dVar1);
        if (((float)groundState < (this->fields).sliperyValMin) ||
           (((canWaterJump != 0 && (_UNK_? < waterProximity)) || (isDoingAirJump != 0)))) {
          groundState = (MVGroundState *)0x0;
        }
        return (float)groundState;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  fVar3 = (float10)(*pcVar5)();
  return (float)fVar3;
}


/* Vector3 GetWallJumpVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_GetWallJumpVelocity
                    (Vector3 *__return_storage_ptr__,JumpState *this,Vector3 velocity,
                    MethodInfo *method)

{
  fVar1 = velocity.z;
  VStack_2._0_8_ = velocity._0_8_;
  if (0.0 <= velocity.y) {
    __return_storage_ptr__->x = (float)(int)VStack_2._0_8_;
    __return_storage_ptr__->y = (float)(int)((ulonglong)VStack_2._0_8_ >> 0x20);
    __return_storage_ptr__->z = velocity.z;
    return __return_storage_ptr__;
  }
  VStack_2.z = velocity.z;
  func_?(&velocity,0);
  VStack_2._0_8_ = VStack_2._0_8_ & 0xffffffff;
  velocity.y = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&VStack_2,(MethodInfo *)0x0);
  VStack_2.z = VStack_2.z * VStack_2.y;
  fStack_3 = fStack_3 * VStack_2.y;
  fStack_4 = fStack_4 * VStack_2.y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar5 = (double)(velocity.z * velocity.z + velocity.x * velocity.x);
  if (dVar5 < 0.0) {
    func_?();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  if (_UNK_? < (float)dVar5) {
    __return_storage_ptr__->x = VStack_2.z;
    __return_storage_ptr__->y = fStack_3;
    __return_storage_ptr__->z = fStack_4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = fVar1;
  return __return_storage_ptr__;
}


/* Void HandleJumpBoost() */

void Assembly-CSharp.dll::JumpState::JumpState_HandleJumpBoost(JumpState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  (this->fields).jumpHeight = 1.0;
  this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_01 != (MVNetworkGame *)0x0) &&
      (pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
      pMVar1 != (MVLocalPlayer *)0x0)) &&
     (this_00 = (pMVar1->fields).boostController, this_00 != (BoostController *)0x0)) {
    this_02 = (Boost__Class *)&stack0xfffffff8;
    bVar2 = BoostController::BoostController_TryGetActiveBoost
                      (this_00,BoostType__Enum_JumpPowerFloatMultiplier,(Boost **)this_02,
                       (MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (this_02 != (Boost__Class *)0x0) {
      pOStack3 = Boost::Boost_get_Value((Boost *)this_02,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__System__Int32,pOStack3);
      if (pOStack3 != (Object *)0x0) {
        if ((pOStack3->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar5 = (int *)func_?();
          (this->fields).jumpHeight = (float)*piVar5 / _UNK_? + _UNK_?;
          return;
        }
        goto code_?;
      }
    }
  }
  uVar4 = func_?();
code_?:
  _puStack00000010 = uVar4;
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::JumpState::JumpState_HandleMoveHit
               (JumpState *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    in_stack_1 = &UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = 
  MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
  ;
  if (moveHit.hit.interactionFlags._4_4_ != 0) {
    if ((*(int *)(moveHit.hit.interactionFlags._4_4_ + 0x30) != 5) &&
       ((this->fields).canWallJumpAnySurface == 0)) {
      return;
    }
    this_00 = (this->fields).wallJumpHits;
    if (this_00 != (List_1_MVControllerColliderHit_ *)0x0) {
      pMVar3 = (this_00->fields)._items;
      piVar4 = &(this_00->fields)._version;
      *piVar4 = *piVar4 + 1;
      if (pMVar3 != (MVControllerColliderHit__Array *)0x0) {
        uVar5 = (this_00->fields)._size;
        if (pMVar3->max_length <= uVar5) {
          pvVar6 = pMVar2->klass->rgctx_data[0xe].rgctxDataDummy;
          puVar7 = (undefined4 *)&stack0x00000008;
          puVar8 = &uStack_9;
          for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          item.hit.interactionFlags._4_4_ = in_stack_11;
          item._0_132_ = in_stack_12;
          item.material = (MVMaterial *)in_stack_1;
          item._140_4_ = pvVar6;
          mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
          List_1_MVControllerColliderHit__AddWithResize(this_00,item,unaff_EDI);
          return;
        }
        (this_00->fields)._size = uVar5 + 1;
        if (uVar5 < pMVar3->max_length) {
          pfVar13 = (float *)&stack0x00000008;
          pMVar14 = pMVar3->vector + uVar5;
          for (iVar10 = 0x24; iVar10 != 0; iVar10 = iVar10 + -1) {
            (pMVar14->positionTouchingHit).x = *pfVar13;
            pfVar13 = pfVar13 + 1;
            pMVar14 = (MVControllerColliderHit *)&(pMVar14->positionTouchingHit).y;
          }
          func_?();
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Vector3 JumpDir(JumpState+JumpType ByRef, MVGroundState, Single, Boolean, Boolean) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_JumpDir
                    (Vector3 *__return_storage_ptr__,JumpState *this,
                    JumpState_JumpType__Enum *jumpType,MVGroundState *groundState,
                    float sliperyFactor,bool wallJumpPossible,bool canWaterJump,MethodInfo *method)

{
  if (groundState == (MVGroundState *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if ((canWaterJump & (bVar3 ^ 1)) == 0) {
    pfVar4 = &(this->fields).sliperyValMax;
    if (*pfVar4 <= sliperyFactor && sliperyFactor != *pfVar4) {
      *jumpType = JumpState_JumpType__Enum_Regular;
      fVar5 = (groundState->fields).groundNormal.y;
      fVar6 = (groundState->fields).groundNormal.z;
      __return_storage_ptr__->x = (groundState->fields).groundNormal.x;
      __return_storage_ptr__->y = fVar5;
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
    bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
    if ((wallJumpPossible & (bVar3 ^ 1)) != 0) {
      pVVar2 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_7,(MethodInfo *)0x0)
      ;
      uVar8._0_4_ = pVVar2->x;
      uVar8._4_4_ = pVVar2->y;
      VStack_7._0_8_ = VStack_7._0_8_ & 0xffffffff00000000;
      fVar9 = (float10)func_?(uVar8,pVVar2->z);
      fVar6 = (float)fVar9;
      pfVar4 = &(this->fields).wallJumpAngleMin;
      if ((*pfVar4 <= fVar6 && fVar6 != *pfVar4) && (fVar6 < (this->fields).wallJumpAngleMax)) {
        VStack_7.z = (this->fields).latestSlopeDir.z;
        VStack_7.x = (this->fields).latestSlopeDir.x;
        VStack_7.y = (this->fields).latestSlopeDir.y;
        pVVar2 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                           ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar2->x;
        uStack_10._4_4_ = pVVar2->y;
        fStack_11 = pVVar2->z;
        VStack_7.z = fStack_11 + VStack_7.z;
        (this->fields).latestSlopeDir.x = VStack_7.x + (float)(undefined4)uStack_10;
        (this->fields).latestSlopeDir.y = (float)uStack_10._4_4_ + VStack_7.y;
        (this->fields).latestSlopeDir.z = VStack_7.z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&(this->fields).latestSlopeDir,(MethodInfo *)0x0);
        *jumpType = JumpState_JumpType__Enum_Wall;
        fVar5 = (this->fields).latestSlopeDir.y;
        fVar6 = (this->fields).latestSlopeDir.z;
        __return_storage_ptr__->x = (this->fields).latestSlopeDir.x;
        __return_storage_ptr__->y = fVar5;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
    }
    *jumpType = JumpState_JumpType__Enum_Regular;
  }
  else {
    *jumpType = JumpState_JumpType__Enum_Water;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar12->upVector).y;
  fVar6 = (pVVar12->upVector).z;
  __return_storage_ptr__->x = (pVVar12->upVector).x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Void SetJumpState(Boolean, Single) */

void Assembly-CSharp.dll::JumpState::JumpState_SetJumpState
               (JumpState *this,bool wallJumpPossible,float sliperyFactor,MethodInfo *method)

{
  (this->fields).jumping = 1;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).lastButtonDownTime = -100.0;
  (this->fields).lastStartTime = fVar1;
  (this->fields).holdingJumpButton = 1;
  if (wallJumpPossible == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (this->fields).jumpTimeOutWallJump;
  }
  (this->fields).jumpTimeOut = fVar1;
  (this->fields).accExtraHeight =
       (this->fields).extraHeight - sliperyFactor * (this->fields).extraHeight;
  return;
}


/* Single SpreadFunction(Single) */

float Assembly-CSharp.dll::JumpState::JumpState_SpreadFunction
                (JumpState *this,float x,MethodInfo *method)

{
  return x + x + (float)((uint)(x * x) ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xfffffe7c;
  puVar5 = &stack0xfffffe7c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__get_Count__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(&LStack_6,0,0xa0);
  pLVar7 = (this->fields).wallJumpHits;
  if (pLVar7 != (List_1_MVControllerColliderHit_ *)0x0) {
    if (0 < (pLVar7->fields)._size) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar8 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar9 = (pVVar8->zeroVector).y;
      fVar10 = (pVVar8->zeroVector).z;
      (this->fields).latestSlopeDir.x = (pVVar8->zeroVector).x;
      (this->fields).latestSlopeDir.y = fVar9;
      (this->fields).latestSlopeDir.z = fVar10;
      pLVar7 = (this->fields).wallJumpHits;
      if (pLVar7 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      method_00 = (MethodInfo *)&UNK_?;
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
               List_1_MVControllerColliderHit__GetEnumerator
                         (&LStack_12,pLVar7,
                          MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                         );
      uStack_13 = 0;
      pLVar14 = &LStack_6;
      for (iVar15 = 0x28; iVar15 != 0; iVar15 = iVar15 + -1) {
        pLVar14->_list = pLVar11->_list;
        pLVar11 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar11->_index;
        pLVar14 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar14->_index;
      }
      uStack_1 = 1;
      pLStack_16 = &LStack_6;
      while( true ) {
        bVar17 = mscorlib.dll::System::Collections::Generic::
                List`1[T]+Enumerator[MVControllerColliderHit]::
                List_1_T_Enumerator_MVControllerColliderHit__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__MoveNext__
                          );
        if (bVar17 == 0) break;
        uStack_18._0_4_ = (this->fields).latestSlopeDir.x;
        uStack_18._4_4_ = (this->fields).latestSlopeDir.y;
        fStack_19 = (this->fields).latestSlopeDir.z;
        fStack_20 = LStack_6._current.slopeNormal.z + fStack_19;
        (this->fields).latestSlopeDir.x =
             LStack_6._current.slopeNormal.x + (float)(undefined4)uStack_18;
        (this->fields).latestSlopeDir.y = LStack_6._current.slopeNormal.y + (float)uStack_18._4_4_;
        (this->fields).latestSlopeDir.z = fStack_20;
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVControllerColliderHit>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                (&(this->fields).latestSlopeDir,(MethodInfo *)0x0);
    }
    pLVar7 = (this->fields).wallJumpHits;
    if (pLVar7 != (List_1_MVControllerColliderHit_ *)0x0) {
      iVar15 = (pLVar7->fields)._size;
      piVar21 = &(pLVar7->fields)._version;
      *piVar21 = *piVar21 + 1;
      (pLVar7->fields)._size = 0;
      if (0 < iVar15) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar7->fields)._items,0,iVar15,(MethodInfo *)0x0);
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar22 = func_?();
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* JumpState(Single, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::JumpState::JumpState__ctor
               (JumpState *this,float regularButtonDownTimeLimit,
               WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__JumpState__HandleJumpBoost__);
    func_?(&StringLiteral_JumpHeight);
    func_?(&StringLiteral_DoubleJump);
    func_?(&StringLiteral_CanWallJumpAnySurface);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
    cRam_? = '\x01';
  }
  value = this;
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  (value->fields).jumpDir.x = (pVVar1->upVector).x;
  (value->fields).jumpDir.y = fVar2;
  (value->fields).jumpDir.z = fVar3;
  this_01 = (List_1_MVControllerColliderHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  method_00 = (MethodInfo *)&(value->fields).wallJumpHits;
  (value->fields).wallJumpHits = this_01;
  func_?(method_00,this_01);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,method_00);
  this_00 = skillDataManager;
  (value->fields).regularButtonDownTimeLimit = regularButtonDownTimeLimit;
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_JumpHeight,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    if (bVar4 != 0) {
      skillDataManager = (WorldObjectSkillDataManager *)0x0;
      regularButtonDownTimeLimit = (float)StringLiteral_JumpHeight;
      this = (JumpState *)this_00;
      iVar5 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (this_00,StringLiteral_JumpHeight,(MethodInfo *)0x0);
      fVar3 = (float)iVar5 / _UNK_?;
    }
    (value->fields).jumpVelocityMultiplier = fVar3;
    in_stack_6 = &UNK_?;
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar7 != (MVNetworkGame *)0x0) {
      in_stack_6 = &UNK_?;
      pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
      if (pMVar8 != (MVLocalPlayer *)0x0) {
        pBVar9 = (pMVar8->fields).boostController;
        this = (JumpState *)func_?();
        UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
        NavMesh_OnNavMeshPreUpdate__ctor
                  ((NavMesh_OnNavMeshPreUpdate *)this,(Object *)value,
                   MethodInfo__JumpState__HandleJumpBoost__,(MethodInfo *)0x0);
        if (pBVar9 != (BoostController *)0x0) {
          BoostController::BoostController_SubscribeToBoostChanged
                    (pBVar9,BoostType__Enum_JumpPowerFloatMultiplier,(Action *)this,
                     (MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this = (JumpState *)0x0;
          (value->fields).jumpHeight = 1.0;
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            this = (JumpState *)0x0;
            pMVar8 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
            if ((pMVar8 != (MVLocalPlayer *)0x0) &&
               (pBVar9 = (pMVar8->fields).boostController, pBVar9 != (BoostController *)0x0)) {
              skillDataManager = (WorldObjectSkillDataManager *)0x0;
              regularButtonDownTimeLimit = (float)&this;
              this = (JumpState *)0x5;
              bVar4 = BoostController::BoostController_TryGetActiveBoost
                                (pBVar9,BoostType__Enum_JumpPowerFloatMultiplier,
                                 (Boost **)regularButtonDownTimeLimit,(MethodInfo *)0x0);
              if (bVar4 == 0) {
code_?:
                bVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                  (this_00,StringLiteral_DoubleJump,(MethodInfo *)0x0);
                (value->fields).airJumpsAllowed = (uint)bVar4;
                bVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                  (this_00,StringLiteral_CanWallJumpAnySurface,(MethodInfo *)0x0);
                (value->fields).canWallJumpAnySurface = bVar4;
                return;
              }
              if (this != (JumpState *)0x0) {
                in_stack_6 = &UNK_?;
                pOVar10 = Boost::Boost_get_Value((Boost *)this,(MethodInfo *)0x0);
                if (pOVar10 != (Object *)0x0) {
                  if ((pOVar10->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar11 = (int *)func_?();
                    (value->fields).jumpHeight = (float)*piVar11 / _UNK_? + _UNK_?;
                    goto code_?;
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* JumpState(Single) */

void Assembly-CSharp.dll::JumpState::JumpState__ctor_1
               (JumpState *this,float regularButtonDownTimeLimit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
    cRam_? = '\x01';
  }
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
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->upVector).y;
  fVar3 = (pVVar1->upVector).z;
  (this->fields).jumpDir.x = (pVVar1->upVector).x;
  (this->fields).jumpDir.y = fVar2;
  (this->fields).jumpDir.z = fVar3;
  this_00 = (List_1_MVControllerColliderHit_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  method_00 = (MethodInfo *)&(this->fields).wallJumpHits;
  (this->fields).wallJumpHits = this_00;
  func_?(method_00,this_00);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
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

