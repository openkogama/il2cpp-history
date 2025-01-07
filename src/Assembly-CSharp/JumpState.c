
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
  if (groundState == (MVGroundState *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar3)();
    return pVVar4;
  }
  bVar5 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if (((bVar5 == 0) && ((this->fields).jumping != 0)) && ((this->fields).holdingJumpButton != 0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    auStack_6._0_4_ = (this->fields).lastStartTime;
    if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
    pMVar7 = (interactableLocal->klass->vtable).__unknown_8.method;
    auStack_6._8_4_ = pMVar7;
    fVar8 = (float10)(*(code *)pMVar7)();
    auStack_6._4_4_ = (undefined4)fVar8;
    pMVar7 = (interactableLocal->klass->vtable).__unknown_8.method;
    stack0xffffffcc = CONCAT44(fStack_9,pMVar7);
    fVar8 = (float10)(*(code *)pMVar7)();
    if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    fVar2 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed((float)fVar8,(MethodInfo *)0x0);
    auStack_6._4_4_ = (float)auStack_6._0_4_ / fVar2 + (float)fVar8;
    if (fStack_10 < (float)auStack_6._4_4_) {
      fStack_11 = (this->fields).jumpDir.z;
      uStack_12._0_4_ = (this->fields).jumpDir.x;
      uStack_12._4_4_ = (this->fields).jumpDir.y;
      if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pMVar13 = TypeInfo__MVPhysics->static_fields;
      fStack_14 = (float)(pMVar13->gravity).currentCryptoKey;
      AStack_15 = (pMVar13->gravity).hiddenValue;
      pBStack_16 = (pMVar13->gravity).hiddenValueOld;
      pMStack_17 = (MethodInfo *)(pMVar13->gravity).fakeValue;
      auStack_6._4_4_ = *(undefined4 *)&(pMVar13->gravity).inited;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      value.hiddenValue = AStack_15;
      value.currentCryptoKey = (int32_t)fStack_14;
      value.hiddenValueOld = pBStack_16;
      value.fakeValue = (float)pMStack_17;
      value._16_4_ = auStack_6._4_4_;
      fStack_14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      stack0xffffffcc = CONCAT44((float)__return_storage_ptr__ * fStack_14,(float)this * fStack_14);
      fStack_14 = (float)interactableLocal * fStack_14;
      pIVar18 = (interactableLocal->klass->vtable).__unknown_9.methodPtr;
      pMStack_17 = (interactableLocal->klass->vtable).__unknown_8.method;
      fVar8 = (float10)(*(code *)pMStack_17)();
      auStack_6._0_4_ = (undefined4)fVar8;
      fVar2 = density * (float)auStack_6._0_4_;
      fVar19 = (float)pIVar18 * (float)auStack_6._0_4_;
      fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                         ((MethodInfo *)0x0);
      velocity.x = velocity.x + fVar20 * fVar19;
      velocity.y = velocity.y + fVar20 * fVar2;
      fStack_11 = velocity.z + fVar20 * fStack_10;
    }
  }
  else if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
  pMStack_17 = (MethodInfo *)0x0;
  pBStack_16 = (Byte__Array *)0x0;
  auStack_6._4_4_ = (interactableLocal->klass->vtable).__unknown_8.method;
  fStack_14 = velocity.x;
  AStack_15 = (ACTkByte4)velocity.y;
  fVar8 = (float10)(*(code *)auStack_6._4_4_)();
  auStack_6._4_4_ = (undefined4)fVar8;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  fStack_14 = mscorlib.dll::System::Math::Math_Min_7
                        (1.0,(float)auStack_6._4_4_ * _UNK_?,(MethodInfo *)0x0);
  if (fStack_14 <= waterProximity) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    bVar21 = _UNK_? <= fVar2 - (this->fields).lastStartTime;
  }
  else {
    bVar21 = false;
  }
  auStack_6._4_4_ = ZEXT14(bVar21 & inputJump);
  pMStack_17 = (MethodInfo *)CONCAT31(pMStack_17._1_3_,bVar21 & inputJump);
  AStack_15 = (ACTkByte4)(interactableLocal->klass->vtable).__unknown_8.method;
  fVar19 = 0.0;
  puVar22 = &UNK_?;
  fVar8 = (float10)(*(code *)AStack_15)();
  fVar2 = (float)fVar8;
  if ((_UNK_? < fVar2) || ((char)puVar22 != '\0')) {
    bVar21 = false;
  }
  else {
    bVar21 = (this->fields).airJumpsDone < (this->fields).airJumpsAllowed;
  }
  if ((((inputJump & bVar21) == 0) ||
      (fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
      fVar20 - (this->fields).lastStartTime < _UNK_?)) ||
     ((this->fields).holdingJumpButton != 0)) {
    bVar23 = (byte)((uint)puVar22 >> 0x18);
  }
  else {
    bVar5 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
    bVar23 = bVar5 ^ 1;
  }
  bVar5 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  cStack_24 = SUB41(fVar2,0);
  if ((((bVar5 != 0 || bVar23 != 0) || cStack_24 != '\0') || SUB41(fVar19,0) != '\0') &&
     (fVar20 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fVar20 = fVar20 - (this->fields).lastStartTime, pfVar1 = &(this->fields).jumpTimeOut,
     *pfVar1 <= fVar20 && fVar20 != *pfVar1)) {
    fVar20 = (this->fields).regularButtonDownTimeLimit;
    pMVar25 = (groundState->fields).groundMaterial;
    if (pMVar25 == (MVMaterial *)0x0) goto code_?;
    fStack_11 = (pMVar25->fields)._PhysicalProperties_k__BackingField.toughness;
    (*(code *)(interactableLocal->klass->vtable).__unknown_8.method)(interactableLocal);
    (this->fields).holdingJumpButton = 0;
    fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    bStack_27 = (byte)((uint)interactableLocal >> 0x18);
    uVar28 = (uint)fVar2 & 0xff | (uint)bStack_27;
    if (fVar26 - (this->fields).lastButtonDownTime < fVar20) {
      uVar28 = 1;
    }
    if (uVar28 != 0) {
      if (bStack_27 == 0) {
        fStack_29 = movableVelocity.y;
        fStack_30 = velocity.y;
      }
      else {
        piVar31 = &(this->fields).airJumpsDone;
        *piVar31 = *piVar31 + 1;
        fStack_29 = 0.0;
        fStack_30 = 0.0;
        (this->fields).airJumping = 1;
        stack0xffffffcc = (ulonglong)(uint)velocity.x;
        fStack_14 = 0.0;
        AStack_15 = (ACTkByte4)0x0;
      }
      dVar32 = (double)((groundState->fields).gradientAngle * _UNK_?);
      func_?();
      auStack_6._0_4_ = (undefined4)dVar32;
      pMVar25 = (groundState->fields).groundMaterial;
      if (pMVar25 == (MVMaterial *)0x0) goto code_?;
      fStack_11 = (pMVar25->fields)._PhysicalProperties_k__BackingField.toughness;
      puVar22 = &UNK_?;
      fVar8 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_8.method)
                                  (interactableLocal);
      fVar20 = (float)fVar8;
      fStack_33 = (2.52234e-44 -
                  ((float)((uint)(fVar20 * fVar20) ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
                  + fVar20 + fVar20)) * (float)auStack_6._0_4_;
      if ((fStack_33 < (this->fields).sliperyValMin) ||
         (((cStack_24 != '\0' && (_UNK_? < waterProximity)) || (bStack_27 != 0)))) {
        fStack_33 = 0.0;
      }
      (this->fields).jumping = 1;
      fVar26 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastButtonDownTime = -100.0;
      (this->fields).lastStartTime = fVar26;
      (this->fields).holdingJumpButton = 1;
      if (fStack_30._0_1_ == '\0') {
        fVar26 = 0.0;
      }
      else {
        fVar26 = (this->fields).jumpTimeOutWallJump;
      }
      (this->fields).jumpTimeOut = fVar26;
      bVar21 = cRam_? == '\0';
      (this->fields).accExtraHeight =
           (this->fields).extraHeight - fVar19 * (this->fields).extraHeight;
      if (bVar21) {
        func_?();
        cRam_? = '\x01';
      }
      auStack_6._4_4_ = (interactableLocal->klass->vtable).__unknown_8.method;
      fVar8 = (float10)(*(code *)auStack_6._4_4_)();
      fVar26 = (this->fields).jumpVelocityMultiplier;
      fVar34 = (float)fVar8;
      if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MVPhysics);
      }
      MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar26 * fVar34,(MethodInfo *)0x0);
      pVVar4 = JumpState_JumpDir((Vector3 *)auStack_6,this,
                                 (JumpState_JumpType__Enum *)&stack0xffffff90,groundState,
                                 (float)puVar22,SUB41(fVar34,0),SUB41(fStack_33,0),(MethodInfo *)0x0
                                );
      fVar34 = pVVar4->y;
      fVar26 = pVVar4->z;
      (this->fields).jumpDir.x = pVVar4->x;
      (this->fields).jumpDir.y = fVar34;
      (this->fields).jumpDir.z = fVar26;
      uVar35 = stack0xffffffcc;
      if (fVar2 == 1.4013e-45) {
        uStack_12 = CONCAT44(uStack_12._4_4_,fVar19);
        uStack_36 = stack0xffffffcc;
        if (fStack_30 < _UNK_?) {
          fStack_14 = fVar19;
          fVar8 = (float10)func_?();
          auStack_6._4_4_ = (MethodInfo *)0x0;
          fStack_29 = (float)fVar8;
          pMStack_17 = (MethodInfo *)0x0;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                    ((Vector3 *)auStack_6,(MethodInfo *)0x0);
          fStack_14 = fStack_14 * (float)auStack_6._4_4_;
          stack0xffffffcc =
               CONCAT44(fStack_9 * (float)auStack_6._4_4_,
                        (float)auStack_6._8_4_ * (float)auStack_6._4_4_);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          dVar32 = (double)((float)uStack_12 * (float)uStack_12 +
                           (float)uStack_36 * (float)uStack_36);
          if (dVar32 < 0.0) {
            func_?();
          }
          else {
            dVar32 = SQRT(dVar32);
          }
          uVar35 = uStack_36;
          if (_UNK_? < (float)dVar32) {
            uVar35 = stack0xffffffcc;
            fVar19 = fStack_14;
          }
        }
      }
      else if ((fVar2 != 2.8026e-45) && (fStack_30 < 0.0)) {
        uStack_36 = stack0xffffffcc & 0xffffffff;
        uVar35 = uStack_36;
      }
      fStack_14 = fVar19;
      uStack_36._0_4_ = (this->fields).jumpDir.x;
      uStack_36._4_4_ = (this->fields).jumpDir.y;
      fStack_9 = (float)(uVar35 >> 0x20);
      auStack_6._8_4_ = (undefined4)uVar35;
      fVar19 = movableVelocity.z + fStack_14 + (this->fields).jumpDir.z * fVar20;
      fStack_9 = fStack_9 + (float)uStack_36._4_4_ * fVar20 + fStack_29;
      auStack_6._8_4_ = movableVelocity.x + (float)auStack_6._8_4_ + (float)uStack_36 * fVar20;
      uStack_12 = CONCAT44(uStack_12._4_4_,fVar19);
      fStack_14 = 0.0;
      AStack_15.b1 = 0;
      AStack_15.b2 = 0;
      AStack_15.b3 = 0;
      AStack_15.b4 = 0;
      if ((fVar2 != 1.4013e-45) ||
         ((this->fields).OnWallJump == (JumpState_OnWallJumpDelegate *)0x0)) goto code_?;
      (*(((this->fields).OnWallJump)->fields)._._.invoke_impl)();
    }
  }
code_?:
  __return_storage_ptr__->x = (float)auStack_6._8_4_;
  __return_storage_ptr__->y = fStack_9;
  __return_storage_ptr__->z = fVar19;
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
                               __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    pMVar1 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0);
    if ((pMVar1 != (MVLocalPlayer *)0x0) &&
       (pBVar2 = (pMVar1->fields).boostController, pBVar2 != (BoostController *)0x0)) {
      if (cRam_? == '\0') {
        func_?();
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                       );
        cRam_? = '\x01';
      }
      pDVar3 = (pBVar2->fields).activeBoosts;
      if (pDVar3 != (Dictionary_2_BoostType_Boost_ *)0x0) {
        bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                          ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar3,5,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                          );
        if (bVar4 == 0) {
          func_?();
          return;
        }
        pDVar3 = (pBVar2->fields).activeBoosts;
        if (pDVar3 != (Dictionary_2_BoostType_Boost_ *)0x0) {
          this_01 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32Enum,System::Object]::
                             Dictionary_2_System_Int32Enum_System_Object__get_Item
                                       ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,5,
                                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                       );
          func_?();
          if (this_01 != (Boost *)0x0) {
            pOVar5 = Boost::Boost_get_Value(this_01,(MethodInfo *)0x0);
            if (pOVar5 != (Object *)0x0) {
              if ((pOVar5->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class)
              {
                piVar6 = (int *)func_?();
                (this->fields).jumpHeight = (float)*piVar6 / _UNK_? + _UNK_?;
                return;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  pOVar5 = (Object *)func_?();
code_?:
  func_?(pOVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
      pVVar2 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&fStack_7,(MethodInfo *)0x0);
      uVar8 = (this->fields).latestSlopeDir.x;
      uVar9 = (this->fields).latestSlopeDir.y;
      fStack_7 = (this->fields).latestSlopeDir.z;
      uVar10 = pVVar2->x;
      uVar11 = pVVar2->y;
      fVar6 = pVVar2->z;
      if (cRam_? == '\0') {
        func_?(&TypeInfo__System__Math);
        cRam_? = '\x01';
      }
      fVar5 = fStack_7 * fStack_7;
      if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Math);
      }
      pMVar12 = TypeInfo__System__Math;
      dVar13 = (double)(((float)uVar8 * (float)uVar8 + (float)uVar9 * (float)uVar9 + fVar5) *
                       ((float)uVar11 * (float)uVar11 + (float)uVar10 * (float)uVar10 + fVar6 * fVar6)
                       );
      if (dVar13 < 0.0) {
        func_?();
      }
      else {
        dVar13 = SQRT(dVar13);
      }
      if ((float)dVar13 < _UNK_?) {
        fVar6 = 0.0;
      }
      else {
        fStack_14 = ((float)uVar9 * (float)uVar11 + (float)uVar8 * (float)uVar10 + fVar6 * fStack_7)
                    / (float)dVar13;
        fVar6 = _UNK_?;
        if ((fStack_14 < _UNK_?) || (fVar6 = _UNK_?, _UNK_? < fStack_14)) {
          fStack_14 = fVar6;
        }
        if ((pMVar12->_1).cctor_finished_or_no_cctor == 0) {
          func_?(pMVar12);
        }
        dVar13 = (double)fStack_14;
        func_?();
        fVar6 = (float)dVar13 * _UNK_?;
      }
      pfVar4 = &(this->fields).wallJumpAngleMin;
      if ((*pfVar4 <= fVar6 && fVar6 != *pfVar4) && (fVar6 < (this->fields).wallJumpAngleMax)) {
        fVar6 = (this->fields).latestSlopeDir.z;
        pVVar2 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                            ((Vector3 *)&stack0x00000000,(MethodInfo *)0x0);
        fStack_7 = pVVar2->x;
        unique0x0000a404 = pVVar2->y;
        fVar5 = pVVar2->z;
        (this->fields).latestSlopeDir.x = fStack_7 + fVar6;
        (this->fields).latestSlopeDir.y = unique0x0000a404 + (float)uVar8;
        (this->fields).latestSlopeDir.z = fVar5 + (float)uVar9;
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
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar5 = (pVVar15->upVector).y;
  fVar6 = (pVVar15->upVector).z;
  __return_storage_ptr__->x = (pVVar15->upVector).x;
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
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
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
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_JumpHeight,(MethodInfo *)0x0);
    fVar3 = _UNK_?;
    if (bVar4 != 0) {
      iVar5 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (skillDataManager,StringLiteral_JumpHeight,(MethodInfo *)0x0);
      fVar3 = (float)iVar5 / _UNK_?;
    }
    (this->fields).jumpVelocityMultiplier = fVar3;
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar6 != (MVNetworkGame *)0x0) &&
       (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
       pMVar7 != (MVLocalPlayer *)0x0)) {
      pBVar8 = (pMVar7->fields).boostController;
      this_01 = (NavMesh_OnNavMeshPreUpdate *)func_?();
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_01,(Object *)this,MethodInfo__JumpState__HandleJumpBoost__,(MethodInfo *)0x0);
      if (pBVar8 != (BoostController *)0x0) {
        BoostController::BoostController_SubscribeToBoostChanged
                  (pBVar8,BoostType__Enum_JumpPowerFloatMultiplier,(Action *)0x0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        (this->fields).jumpHeight = 1.0;
        pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar6 != (MVNetworkGame *)0x0) &&
            (pMVar7 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
            pMVar7 != (MVLocalPlayer *)0x0)) &&
           (pBVar8 = (pMVar7->fields).boostController, pBVar8 != (BoostController *)0x0)) {
          if (cRam_? == '\0') {
            func_?();
            func_?();
            cRam_? = '\x01';
          }
          pDVar9 = (pBVar8->fields).activeBoosts;
          if (pDVar9 != (Dictionary_2_BoostType_Boost_ *)0x0) {
            bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Int32Enum,System::Single]::
                    Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                              ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar9,5,
                               MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__ContainsKey_BoostType_
                              );
            if (bVar4 == 0) {
              func_?();
code_?:
              bVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                (skillDataManager,StringLiteral_DoubleJump,(MethodInfo *)0x0);
              (this->fields).airJumpsAllowed = (uint)bVar4;
              bVar4 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                (skillDataManager,StringLiteral_CanWallJumpAnySurface,
                                 (MethodInfo *)0x0);
              (this->fields).canWallJumpAnySurface = bVar4;
              return;
            }
            pDVar9 = (pBVar8->fields).activeBoosts;
            if (pDVar9 != (Dictionary_2_BoostType_Boost_ *)0x0) {
              this_02 = (Boost *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32Enum,System::Object]::
                                 Dictionary_2_System_Int32Enum_System_Object__get_Item
                                           ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar9,5
                                            ,
                                            MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Item_BoostType_
                                           );
              func_?();
              if ((this_02 != (Boost *)0x0) &&
                 (pOVar10 = Boost::Boost_get_Value(this_02,(MethodInfo *)0x0),
                 pOVar10 != (Object *)0x0)) {
                if ((pOVar10->klass->_0).element_class ==
                    (TypeInfo__System__Int32->_0).element_class) {
                  piVar11 = (int *)func_?();
                  (this->fields).jumpHeight = (float)*piVar11 / _UNK_? + _UNK_?;
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

