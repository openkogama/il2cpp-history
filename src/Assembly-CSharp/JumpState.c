
/* Vector3 ApplyJumping(MVInteractableBase, MVGroundState, Single, Single, Boolean, Vector3,
   Vector3) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_ApplyJumping
                    (Vector3 *__return_storage_ptr__,JumpState *this,
                    MVInteractableBase *interactableLocal,MVGroundState *groundState,float density,
                    float waterProximity,bool inputJump,Vector3 velocity,Vector3 movableVelocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).lastStartTime;
    if (interactableLocal == (MVInteractableBase *)0x0) goto code_?;
    fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
    fVar6 = (float)fVar5;
    fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
    fVar7 = (float)fVar5;
    if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVPhysics);
    }
    fVar7 = MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar7,(MethodInfo *)0x0);
    if (fVar6 / fVar7 + fVar2 <= fVar4) goto code_?;
    fVar6 = (this->fields).jumpDir.z;
    fVar2 = (this->fields).jumpDir.x;
    fVar4 = (this->fields).jumpDir.y;
    if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar8 = MVPhysics::MVPhysics_get_Gravity((ObscuredFloat *)&stack0xffffffc0,(MethodInfo *)0x0);
    puVar9 = (undefined *)pOVar8->currentCryptoKey;
    AVar10 = pOVar8->hiddenValue;
    uVar11._0_4_ = pOVar8->hiddenValueOld;
    fVar7 = pOVar8->fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      puVar9 = &UNK_?;
      AVar10 = (ACTkByte4)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
      func_?();
    }
    value.hiddenValue = AVar10;
    value.currentCryptoKey = (int32_t)puVar9;
    value.hiddenValueOld = (Byte__Array *)uVar11;
    value.fakeValue = fVar7;
    value.inited = pOVar8->inited;
    value._17_3_ = *(undefined3 *)&pOVar8->field_0x11;
    fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a_02.y = fVar4;
    a_02.x = fVar2;
    a_02.z = fVar6;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffb4,a_02,fVar7,(MethodInfo *)0x0);
    fVar2 = pVVar12->z;
    fVar4 = 0.0;
    pMVar13 = interactableLocal;
    fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
    a.y = fVar4;
    a.x = (float)pMVar13;
    a.z = fVar2;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffb4,a,(float)fVar5,(MethodInfo *)0x0);
    fVar6 = pVVar12->x;
    fVar7 = pVVar12->y;
    fVar2 = pVVar12->z;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    a_00.y = fVar7;
    a_00.x = fVar6;
    a_00.z = fVar2;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        ((Vector3 *)&stack0xffffffb4,a_00,fVar4,(MethodInfo *)0x0);
    a_01.y = velocity.y;
    a_01.x = velocity.x;
    a_01.z = velocity.z;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        ((Vector3 *)&stack0xffffffb4,a_01,*pVVar12,(MethodInfo *)0x0);
    uVar14._0_4_ = pVVar12->x;
    uVar14._4_4_ = pVVar12->y;
    pVVar12 = (Vector3 *)pVVar12->z;
    velocity.x = (float)(undefined4)uVar14;
    velocity.y = (float)uVar14._4_4_;
  }
  else {
code_?:
    uVar14 = CONCAT44(velocity.y,velocity.x);
    pVVar12 = (Vector3 *)velocity.z;
  }
  uVar11._0_4_ = (Byte__Array *)uVar14;
  uVar11._4_4_ = (float)((ulonglong)uVar14 >> 0x20);
  if (interactableLocal == (MVInteractableBase *)0x0) {
code_?:
    func_?();
    pcVar15 = (code *)swi(3);
    pVVar12 = (Vector3 *)(*pcVar15)();
    return pVVar12;
  }
  fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)
                              (interactableLocal,5,0x3f800000);
  fVar2 = mscorlib.dll::System::Math::Math_Min_1
                    (1.0,(float)fVar5 * _UNK_?,(MethodInfo *)0x0);
  if ((waterProximity < fVar2) ||
     (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fVar2 - (this->fields).lastStartTime < _UNK_?)) {
    bVar3 = 0;
  }
  else {
    bVar3 = SUB41(_inputJump,0);
  }
  canWaterJump = bVar3;
  fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
  wallJumpPossible = _UNK_? < (float)fVar5;
  if ((((((bool)wallJumpPossible) || (bVar3 != 0)) ||
       ((this->fields).airJumpsAllowed <= (this->fields).airJumpsDone)) ||
      ((inputJump == 0 ||
       (_inputJump = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                               ((MethodInfo *)0x0),
       _inputJump - (this->fields).lastStartTime < _UNK_?)))) ||
     ((this->fields).holdingJumpButton != 0)) {
    _inputJump = 0.0;
  }
  else {
    bVar16 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
    _inputJump = (float)(uint)(bVar16 == 0);
  }
  bVar16 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if ((((bVar16 != 0) || (wallJumpPossible != 0)) || ((bVar3 != 0 || (inputJump != 0)))) &&
     (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fVar2 = fVar2 - (this->fields).lastStartTime, pfVar1 = &(this->fields).jumpTimeOut,
     *pfVar1 <= fVar2 && fVar2 != *pfVar1)) {
    fVar2 = (this->fields).regularButtonDownTimeLimit;
    pMVar17 = (MVMaterial *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)groundState,(MethodInfo *)0x0);
    if (pMVar17 == (MVMaterial *)0x0) goto code_?;
    MVMaterial::MVMaterial_get_PhysicalProperties
              ((PhysicalProperties *)&stack0xffffffac,pMVar17,(MethodInfo *)0x0);
    fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
    pfVar1 = &(this->fields).bouncinessThresshold;
    if (*pfVar1 <= (float)fVar5 && (float)fVar5 != *pfVar1) {
      fVar2 = (this->fields).bouncyMaterialButtonDownTimeLimit;
    }
    (this->fields).holdingJumpButton = 0;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (((fVar4 - (this->fields).lastButtonDownTime < fVar2) || (bVar3 != 0)) ||
       (SUB41(_inputJump,0) != '\0')) {
      if (SUB41(_inputJump,0) != '\0') {
        piVar18 = &(this->fields).airJumpsDone;
        *piVar18 = *piVar18 + 1;
        velocity.y = 0.0;
        movableVelocity.y = 0.0;
        (this->fields).airJumping = 1;
        uVar11._4_4_ = 0.0;
        uVar11._0_4_ = (Byte__Array *)velocity.x;
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      fVar2 = ThemeAttributes::FloatAttribute::FloatAttribute_get_Max
                        ((FloatAttribute *)groundState,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      pMVar17 = (MVMaterial *)
                mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)groundState,(MethodInfo *)0x0);
      if (pMVar17 == (MVMaterial *)0x0) goto code_?;
      MVMaterial::MVMaterial_get_PhysicalProperties
                ((PhysicalProperties *)&stack0xffffffac,pMVar17,(MethodInfo *)0x0);
      fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
      fVar4 = (float)fVar5;
      dVar19 = (double)(fVar2 * _UNK_?);
      func_?();
      fVar2 = (float)dVar19 *
              (_UNK_? -
              ((float)((uint)(fVar4 * fVar4) ^ _UNK_?) + fVar4 * _UNK_?));
      if (((fVar2 < (this->fields).sliperyValMin) ||
          ((bVar3 != 0 && (_UNK_? < waterProximity)))) || (inputJump != 0)) {
        fVar2 = 0.0;
      }
      (this->fields).jumping = 1;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).lastButtonDownTime = -100.0;
      (this->fields).lastStartTime = fVar4;
      (this->fields).holdingJumpButton = 1;
      if (wallJumpPossible == 0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = (this->fields).jumpTimeOutWallJump;
      }
      (this->fields).jumpTimeOut = fVar4;
      bVar20 = cRam_? == '\0';
      fVar4 = (this->fields).extraHeight;
      (this->fields).accExtraHeight = fVar4 - fVar2 * fVar4;
      if (bVar20) {
        func_?();
        cRam_? = '\x01';
      }
      fVar5 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
      fVar4 = (this->fields).jumpVelocityMultiplier;
      fVar6 = (float)fVar5;
      if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar21 = (Vector3 *)
                MVPhysics::MVPhysics_CalculateJumpVerticalSpeed(fVar4 * fVar6,(MethodInfo *)0x0);
      if (inputJump == 0) {
        pVVar21 = (Vector3 *)((float)pVVar21 - (float)pVVar21 * fVar2);
      }
      _inputJump = 0.0;
      pVVar22 = JumpState_JumpDir((Vector3 *)&stack0xffffffb4,this,
                                  (JumpState_JumpType__Enum *)&inputJump,groundState,fVar2,
                                  wallJumpPossible,canWaterJump,(MethodInfo *)0x0);
      fVar4 = pVVar22->y;
      fVar2 = pVVar22->z;
      (this->fields).jumpDir.x = pVVar22->x;
      (this->fields).jumpDir.y = fVar4;
      (this->fields).jumpDir.z = fVar2;
      if (_inputJump == 1.4013e-45) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (uVar11._4_4_ < _UNK_?) {
          fVar5 = (float10)func_?();
          fVar2 = 0.0;
          func_?();
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          pVVar22 = (Vector3 *)&stack0xffffffd4;
          a_03.y = fVar2;
          a_03.x = (float)(Byte__Array *)uVar11;
          a_03.z = (float)pVVar12;
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              (pVVar22,a_03,(float)fVar5,(MethodInfo *)0x0);
          pVVar23 = (Vector3 *)pVVar12->z;
          pVVar21 = pVVar22;
          func_?();
          pVVar12 = pVVar22;
          fVar5 = (float10)func_?();
          if (_UNK_? < (float)fVar5) {
            pVVar12 = pVVar23;
          }
        }
      }
      fVar2 = (this->fields).jumpDir.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      fVar4 = 0.0;
      a_04.y = 0.0;
      a_04.x = (float)pVVar21;
      a_04.z = fVar2;
      pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffffb4,a_04,(float)pVVar21,(MethodInfo *)0x0);
      a_05.y = fVar2;
      a_05.x = fVar4;
      a_05.z = (float)pVVar12;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffb4,a_05,*pVVar21,(MethodInfo *)0x0);
      _inputJump = 0.0;
      uVar24 = pVVar12->x;
      b.y = movableVelocity.y;
      b.x = movableVelocity.x;
      b.z = movableVelocity.z;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          ((Vector3 *)&stack0xffffffb4,*pVVar12,b,(MethodInfo *)0x0);
      uVar11._0_4_ = (Byte__Array *)pVVar12->x;
      uVar11._4_4_ = pVVar12->y;
      pVVar12 = (Vector3 *)pVVar12->z;
      __return_storage_ptr__ = (Vector3 *)uVar24;
      if ((_inputJump != 1.4013e-45) ||
         (this_00 = (this->fields).OnWallJump, this_00 == (JumpState_OnWallJumpDelegate *)0x0))
      goto code_?;
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    }
  }
code_?:
  __return_storage_ptr__->x = (float)(int)uVar11;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar11 >> 0x20);
  __return_storage_ptr__->z = (float)pVVar12;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((this_00 != (MVNetworkGame *)0x0) &&
     (this_01 = (PrefabPool *)
                MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
     this_01 != (PrefabPool *)0x0)) {
    this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab(this_01,(MethodInfo *)0x0)
    ;
    this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_03,unaff_EDI,MethodInfo__JumpState__HandleJumpBoost__,(MethodInfo *)0x0);
    if (this_02 != (ObjectiveArrow *)0x0) {
      BoostController::BoostController_UnSubscribeToBoostChanged
                ((BoostController *)this_02,BoostType__Enum_JumpPowerFloatMultiplier,
                 (Action *)this_03,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Single GetJumpSpeed(MVInteractableBase, Single, Boolean) */

float Assembly-CSharp.dll::JumpState::JumpState_GetJumpSpeed
                (JumpState *this,MVInteractableBase *interactableLocal,float sliperyFactor,
                bool isDoingAirJump,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (interactableLocal != (MVInteractableBase *)0x0) {
    fVar1 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)
                               (interactableLocal,2,(this->fields).jumpHeight,
                                (interactableLocal->klass->vtable).__unknown_6.methodPtr);
    fVar2 = (this->fields).jumpVelocityMultiplier;
    if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
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
  func_?(0);
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
  uStack_1 = velocity._0_8_;
  fStack_2 = velocity.z;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  if (uStack_1._4_4_ < 0.0) {
    uStack_4 = uStack_1;
    fStack_5 = fStack_2;
    fVar6 = (float10)func_?(&uStack_1,0);
    uStack_4 = uStack_4 & 0xffffffff;
    uStack_1 = uStack_1 & 0xffffffff;
    func_?(&uStack_4,0);
    fVar7 = fStack_5;
    VStack_8.y = (float)(undefined *)uStack_4;
    VStack_8.z = (float)uStack_4._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar7;
    a.x = VStack_8.y;
    a.y = VStack_8.z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
              (&VStack_8,a,(float)fVar6,(MethodInfo *)0x0);
    uStack_4._4_4_ = &uStack_3;
    uStack_1 = (ulonglong)(uint)fStack_2;
    fStack_5 = fStack_2;
    uStack_4._0_4_ = &UNK_?;
    func_?();
    uStack_4 = ZEXT48(uStack_4._4_4_) << 0x20;
    fVar6 = (float10)func_?(&uStack_3);
    if (_UNK_? < (float)fVar6) {
      __return_storage_ptr__->x = (float)(undefined *)uStack_4;
      __return_storage_ptr__->y = (float)uStack_4._4_4_;
      __return_storage_ptr__->z = fStack_5;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->x = (float)(int)uStack_1;
  __return_storage_ptr__->y = (float)(int)(uStack_1 >> 0x20);
  __return_storage_ptr__->z = fStack_2;
  return __return_storage_ptr__;
}


/* Single GetSliperyFactor(MVInteractableBase, MVGroundState, Single, Boolean, Boolean) */

float Assembly-CSharp.dll::JumpState::JumpState_GetSliperyFactor
                (JumpState *this,MVInteractableBase *interactableLocal,MVGroundState *groundState,
                float waterProximity,bool canWaterJump,bool isDoingAirJump,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (groundState != (MVGroundState *)0x0) {
    fVar1 = ThemeAttributes::FloatAttribute::FloatAttribute_get_Max
                      ((FloatAttribute *)groundState,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?();
    }
    this_00 = (MVMaterial *)
              mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
              Collection_1_VoxelHit__get_Items
                        ((Collection_1_VoxelHit_ *)groundState,(MethodInfo *)0x0);
    if (this_00 != (MVMaterial *)0x0) {
      MVMaterial::MVMaterial_get_PhysicalProperties
                ((PhysicalProperties *)&stack0xffffffd0,this_00,(MethodInfo *)0x0);
      if (interactableLocal != (MVInteractableBase *)0x0) {
        fVar2 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
        fVar3 = (float)fVar2;
        dVar4 = (double)(fVar1 * _UNK_?);
        func_?();
        groundState = (MVGroundState *)
                      ((float)dVar4 *
                      (_UNK_? -
                      ((float)((uint)(fVar3 * fVar3) ^ _UNK_?) + fVar3 * _UNK_?)));
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
  fVar2 = (float10)(*pcVar5)();
  return (float)fVar2;
}


/* Vector3 GetWallJumpVelocity(Vector3) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_GetWallJumpVelocity
                    (Vector3 *__return_storage_ptr__,JumpState *this,Vector3 velocity,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (velocity.y < 0.0) {
    uStack_2 = CONCAT44(velocity.y,velocity.x);
    fStack_3 = velocity.z;
    fVar4 = (float10)func_?(&velocity,0);
    uStack_2 = uStack_2 & 0xffffffff;
    fStack_5 = (float)fVar4;
    velocity.y = 0.0;
    func_?(&uStack_2,0);
    fVar6 = fStack_3;
    VStack_7.y = (float)(undefined *)uStack_2;
    VStack_7.z = (float)uStack_2._4_4_;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar6;
    a.x = VStack_7.y;
    a.y = VStack_7.z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
              (&VStack_7,a,fStack_5,(MethodInfo *)0x0);
    VStack_7._4_8_ = VStack_7._4_8_ & 0xffffffff00000000;
    uStack_2._4_4_ = &uStack_1;
    VStack_7.x = velocity.z;
    fStack_3 = velocity.x;
    uStack_2._0_4_ = &UNK_?;
    func_?();
    uStack_2 = ZEXT48(uStack_2._4_4_) << 0x20;
    fVar4 = (float10)func_?(&uStack_1);
    if (_UNK_? < (float)fVar4) {
      __return_storage_ptr__->x = (float)(undefined *)uStack_2;
      __return_storage_ptr__->y = (float)uStack_2._4_4_;
      __return_storage_ptr__->z = fStack_3;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->x = velocity.x;
  __return_storage_ptr__->y = velocity.y;
  __return_storage_ptr__->z = velocity.z;
  return __return_storage_ptr__;
}


/* Void HandleJumpBoost() */

void Assembly-CSharp.dll::JumpState::JumpState_HandleJumpBoost(JumpState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).jumpHeight = 1.0;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (((this_00 != (MVNetworkGame *)0x0) &&
      (this_01 = (PrefabPool *)
                 MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_00,(MethodInfo *)0x0),
      this_01 != (PrefabPool *)0x0)) &&
     (this_02 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                          (this_01,(MethodInfo *)0x0), this_02 != (ObjectiveArrow *)0x0)) {
    bVar1 = BoostController::BoostController_TryGetActiveBoost
                      ((BoostController *)this_02,BoostType__Enum_JumpPowerFloatMultiplier,
                       (Boost **)&stack0xfffffff8,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    if (this_02 != (ObjectiveArrow *)0x0) {
      pOStack2 = Boost::Boost_get_Value((Boost *)this_02,(MethodInfo *)0x0);
      uVar3 = CONCAT44(TypeInfo__System__Int32,pOStack2);
      if (pOStack2 != (Object *)0x0) {
        if ((pOStack2->klass->_0).element_class ==
            (TypeInfo__System__Int32->_0).element_class) {
          piVar4 = (int *)func_?();
          (this->fields).jumpHeight = (float)*piVar4 / _UNK_? + _UNK_?;
          return;
        }
        goto code_?;
      }
    }
  }
  pOStack2 = (Object *)0x0;
  uVar3 = func_?();
code_?:
  _puStack00000018 = uVar3;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void HandleMoveHit(MVControllerColliderHit) */

void Assembly-CSharp.dll::JumpState::JumpState_HandleMoveHit
               (JumpState *this,MVControllerColliderHit moveHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (moveHit.hit.interactionFlags._4_4_ != (AddDotsToTruncatedText_Start_c_Iterator0 *)0x0) {
    uVar1 = 0;
    puVar2 = &UNK_?;
    pAVar3 = moveHit.hit.interactionFlags._4_4_;
    pOVar4 = AddDotsToTruncatedText+<Start>c__Iterator0::
             AddDotsToTruncatedText_Start_c_Iterator0_System_Collections_IEnumerator_get_Current
                       (moveHit.hit.interactionFlags._4_4_,(MethodInfo *)0x0);
    if ((pOVar4 == (Object *)0x5) || ((this->fields).canWallJumpAnySurface != 0)) {
      this_00 = (this->fields).wallJumpHits;
      if (this_00 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      puVar5 = (undefined4 *)&stack0x00000008;
      puVar6 = &uStack_7;
      pMVar8 = 
      MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Add_MVControllerColliderHit_
      ;
      for (iVar9 = 0x24; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      item.hit._60_4_ = puVar2;
      auVar10 = in_stack_11._0_12_;
      auVar12 = in_stack_11._12_12_;
      auVar13 = in_stack_11._24_12_;
      auVar14 = in_stack_11._36_12_;
      auVar15 = in_stack_11._48_12_;
      auVar16 = in_stack_11._64_12_;
      auVar17 = in_stack_11._76_12_;
      uVar18 = in_stack_11._88_6_;
      item.positionTouchingHit.x = (float)auVar10._0_4_;
      item.positionTouchingHit.y = (float)auVar10._4_4_;
      item.positionTouchingHit.z = (float)auVar10._8_4_;
      item.moveDirection.x = (float)auVar12._0_4_;
      item.moveDirection.y = (float)auVar12._4_4_;
      item.moveDirection.z = (float)auVar12._8_4_;
      item.elipsoidNormal.x = (float)auVar13._0_4_;
      item.elipsoidNormal.y = (float)auVar13._4_4_;
      item.elipsoidNormal.z = (float)auVar13._8_4_;
      item.slopeNormal.x = (float)auVar14._0_4_;
      item.slopeNormal.y = (float)auVar14._4_4_;
      item.slopeNormal.z = (float)auVar14._8_4_;
      item.impactVelocity.x = (float)auVar15._0_4_;
      item.impactVelocity.y = (float)auVar15._4_4_;
      item.impactVelocity.z = (float)auVar15._8_4_;
      item._60_4_ = in_stack_11._60_4_;
      item.hit.point.x = (float)auVar16._0_4_;
      item.hit.point.y = (float)auVar16._4_4_;
      item.hit.point.z = (float)auVar16._8_4_;
      item.hit.normal.x = (float)auVar17._0_4_;
      item.hit.normal.y = (float)auVar17._4_4_;
      item.hit.normal.z = (float)auVar17._8_4_;
      item.hit.cubePos.x = (short)uVar18;
      item.hit.cubePos.y = (short)((uint6)uVar18 >> 0x10);
      item.hit.cubePos.z = (short)((uint6)uVar18 >> 0x20);
      item.hit._30_2_ = in_stack_11._94_2_;
      item.hit.face = in_stack_11._96_4_;
      item.hit.isCubeHit = in_stack_11[100];
      item.hit._37_3_ = in_stack_11._101_3_;
      item.hit.woId = in_stack_11._104_4_;
      item.hit.cube = (Cube *)in_stack_11._108_4_;
      item.hit.distance = (float)in_stack_11._112_4_;
      item.hit.collider = (Collider *)in_stack_11._116_4_;
      item.hit.transform = (Transform *)in_stack_11._120_4_;
      item.hit.interactionFlags._0_4_ = pAVar3;
      item.hit.interactionFlags._4_4_ = uVar1;
      item.material = (MVMaterial *)unaff_EDI;
      item._140_4_ = pMVar8;
      mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
      List_1_MVControllerColliderHit__Add(this_00,item,unaff_EBP);
    }
    return;
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Vector3 JumpDir(JumpState+JumpType ByRef, MVGroundState, Single, Boolean, Boolean) */

Vector3 * Assembly-CSharp.dll::JumpState::JumpState_JumpDir
                    (Vector3 *__return_storage_ptr__,JumpState *this,
                    JumpState_JumpType__Enum *jumpType,MVGroundState *groundState,
                    float sliperyFactor,bool wallJumpPossible,bool canWaterJump,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (groundState == (MVGroundState *)0x0) {
    func_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
  if ((bVar3 == 0) && (canWaterJump != 0)) {
    *jumpType = JumpState_JumpType__Enum_Water;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar2 = (Vector3 *)&stack0xfffffff0;
  }
  else {
    pfVar4 = &(this->fields).sliperyValMax;
    if (*pfVar4 <= sliperyFactor && sliperyFactor != *pfVar4) {
      *jumpType = JumpState_JumpType__Enum_Regular;
      pVVar2 = SentryGunBeam::SentryGunBeam_get_StartPosition
                         ((Vector3 *)&stack0xffffffe4,(SentryGunBeam *)groundState,(MethodInfo *)0x0
                         );
      goto code_?;
    }
    bVar3 = MVGroundState::MVGroundState_get_Grounded(groundState,(MethodInfo *)0x0);
    if ((bVar3 == 0) && (wallJumpPossible != 0)) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
      pVVar2 = &(this->fields).latestSlopeDir;
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                        (*pVVar5,(this->fields).latestSlopeDir,(MethodInfo *)0x0);
      pfVar4 = &(this->fields).wallJumpAngleMin;
      if ((*pfVar4 <= fVar6 && fVar6 != *pfVar4) && (fVar6 < (this->fields).wallJumpAngleMax)) {
        a = *pVVar2;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          jumpType = (JumpState_JumpType__Enum *)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                           ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffffe4,a,*pVVar5,(MethodInfo *)0x0);
        fVar7 = pVVar5->y;
        fVar6 = pVVar5->z;
        pVVar2->x = pVVar5->x;
        pVVar2->y = fVar7;
        (this->fields).latestSlopeDir.z = fVar6;
        func_?();
        *jumpType = JumpState_JumpType__Enum_Wall;
        fVar7 = pVVar2->y;
        fVar6 = (this->fields).latestSlopeDir.z;
        __return_storage_ptr__->x = pVVar2->x;
        __return_storage_ptr__->y = fVar7;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
    }
    *jumpType = JumpState_JumpType__Enum_Regular;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar2 = (Vector3 *)&stack0xffffffe4;
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     (pVVar2,(MethodInfo *)0x0);
code_?:
  fVar7 = pVVar2->y;
  fVar6 = pVVar2->z;
  __return_storage_ptr__->x = pVVar2->x;
  __return_storage_ptr__->y = fVar7;
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
  fVar1 = (this->fields).extraHeight;
  (this->fields).accExtraHeight = fVar1 - fVar1 * sliperyFactor;
  return;
}


/* Single SpreadFunction(Single) */

float Assembly-CSharp.dll::JumpState::JumpState_SpreadFunction
                (JumpState *this,float x,MethodInfo *method)

{
  return x + x + (float)((uint)(x * x) ^ _UNK_?);
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
  puStack_4 = &stack0xfffffdec;
  puVar5 = &stack0xfffffdec;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  func_?(auStack_6,0,0xa0);
  func_?();
  pLVar7 = (this->fields).wallJumpHits;
  puStack_8 = (undefined4 *)&stack0xfffffdec;
  puStack_4 = &stack0xfffffdec;
  if (pLVar7 != (List_1_MVControllerColliderHit_ *)0x0) {
    puStack_8 = (undefined4 *)&stack0xfffffdec;
    puStack_4 = &stack0xfffffdec;
    pOVar9 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar7,
                        MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__get_Count__
                       );
    if (0 < (int)pOVar9) {
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         (&VStack_11,(MethodInfo *)0x0);
      pVVar12 = &(this->fields).latestSlopeDir;
      fVar13 = pVVar10->y;
      fVar14 = pVVar10->z;
      pVVar12->x = pVVar10->x;
      pVVar12->y = fVar13;
      (this->fields).latestSlopeDir.z = fVar14;
      pLVar7 = (this->fields).wallJumpHits;
      pVStack_15 = pVVar12;
      if (pLVar7 == (List_1_MVControllerColliderHit_ *)0x0) goto code_?;
      pLVar16 = mscorlib.dll::System::Collections::Generic::List`1[MVControllerColliderHit]::
                List_1_MVControllerColliderHit__GetEnumerator
                          (&LStack_17,pLVar7,
                           MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__GetEnumerator__
                          );
      puVar18 = auStack_6;
      for (iVar19 = 0x28; iVar19 != 0; iVar19 = iVar19 + -1) {
        *puVar18 = pLVar16->l;
        pLVar16 = (List_1_T_Enumerator_MVControllerColliderHit_ *)&pLVar16->next;
        puVar18 = puVar18 + 1;
      }
      uStack_1 = 0;
      while (cVar20 = func_?(), cVar20 != '\0') {
        puVar18 = (undefined4 *)func_?();
        VStack_11.y = pVVar12->x;
        VStack_11.z = pVVar12->y;
        puVar21 = auStack_22;
        for (iVar19 = 0x24; iVar19 != 0; iVar19 = iVar19 + -1) {
          *puVar21 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar21 = puVar21 + 1;
        }
        fVar14 = (this->fields).latestSlopeDir.z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar14;
        a.x = VStack_11.y;
        a.y = VStack_11.z;
        b.z = fStack_23;
        b.x = (float)(undefined4)uStack_24;
        b.y = (float)uStack_24._4_4_;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (&VStack_25,a,b,(MethodInfo *)0x0);
        fVar13 = pVVar10->y;
        fVar14 = pVVar10->z;
        pVVar12->x = pVVar10->x;
        pVVar12->y = fVar13;
        (this->fields).latestSlopeDir.z = fVar14;
      }
      *puStack_8 = 0x6c;
      uStack_1 = 0xffffffff;
      func_?();
      func_?();
    }
    pLVar7 = (this->fields).wallJumpHits;
    if (pLVar7 != (List_1_MVControllerColliderHit_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIVertex]::
      List_1_UnityEngine_UIVertex__Clear
                ((List_1_UnityEngine_UIVertex_ *)pLVar7,
                 MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__Clear__);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?(0);
  func_?();
  pcVar26 = (code *)swi(3);
  (*pcVar26)();
  return;
}


/* JumpState(Single, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::JumpState::JumpState__ctor
               (JumpState *this,float regularButtonDownTimeLimit,
               WorldObjectSkillDataManager *skillDataManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = this;
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
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&puStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this_00->fields).jumpDir.x = pVVar1->x;
  (this_00->fields).jumpDir.y = fVar3;
  (this_00->fields).jumpDir.z = fVar4;
  method_00 = TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>;
  this_02 = (List_1_MVControllerColliderHit_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_02,
             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  (this_00->fields).wallJumpHits = this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this_00,0.0,(MethodInfo *)method_00);
  this_01 = skillDataManager;
  (this_00->fields).regularButtonDownTimeLimit = regularButtonDownTimeLimit;
  if (skillDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar5 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillDataManager,StringLiteral_JumpHeight,(MethodInfo *)0x0);
    fVar4 = _UNK_?;
    if (bVar5 != 0) {
      regularButtonDownTimeLimit = 0.0;
      this = (JumpState *)StringLiteral_JumpHeight;
      iVar6 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_GetSkillIntValue
                        (this_01,StringLiteral_JumpHeight,(MethodInfo *)0x0);
      fVar4 = (float)iVar6 / _UNK_?;
    }
    (this_00->fields).jumpVelocityMultiplier = fVar4;
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      method = (MethodInfo *)&UNK_?;
      func_?();
    }
    method = (MethodInfo *)&UNK_?;
    pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar7 != (MVNetworkGame *)0x0) {
      method = (MethodInfo *)&UNK_?;
      pPVar8 = (PrefabPool *)MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
      if (pPVar8 != (PrefabPool *)0x0) {
        pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                           (pPVar8,(MethodInfo *)0x0);
        this = (JumpState *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  ((UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)this,(Object *)this_00,MethodInfo__JumpState__HandleJumpBoost__,
                   (MethodInfo *)0x0);
        if (pOVar9 != (ObjectiveArrow *)0x0) {
          BoostController::BoostController_SubscribeToBoostChanged
                    ((BoostController *)pOVar9,BoostType__Enum_JumpPowerFloatMultiplier,
                     (Action *)this,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          (this_00->fields).jumpHeight = 1.0;
          this = (JumpState *)0x0;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          pMVar7 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar7 != (MVNetworkGame *)0x0) {
            pPVar8 = (PrefabPool *)
                     MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar7,(MethodInfo *)0x0);
            if ((pPVar8 != (PrefabPool *)0x0) &&
               (pOVar9 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                   (pPVar8,(MethodInfo *)0x0), pOVar9 != (ObjectiveArrow *)0x0)) {
              regularButtonDownTimeLimit = 0.0;
              this = (JumpState *)&this;
              bVar5 = BoostController::BoostController_TryGetActiveBoost
                                ((BoostController *)pOVar9,BoostType__Enum_JumpPowerFloatMultiplier,
                                 (Boost **)this,(MethodInfo *)0x0);
              if (bVar5 == 0) {
code_?:
                bVar5 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                  (this_01,StringLiteral_DoubleJump,(MethodInfo *)0x0);
                (this_00->fields).airJumpsAllowed = (uint)(bVar5 != 0);
                bVar5 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                                  (this_01,StringLiteral_CanWallJumpAnySurface,(MethodInfo *)0x0);
                (this_00->fields).canWallJumpAnySurface = bVar5;
                return;
              }
              if (this != (JumpState *)0x0) {
                method = (MethodInfo *)&UNK_?;
                pOVar10 = Boost::Boost_get_Value((Boost *)this,(MethodInfo *)0x0);
                if (pOVar10 != (Object *)0x0) {
                  if ((pOVar10->klass->_0).element_class ==
                      (TypeInfo__System__Int32->_0).element_class) {
                    piVar11 = (int *)func_?();
                    (this_00->fields).jumpHeight = (float)*piVar11 / _UNK_? + _UNK_?;
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
    func_?(_UNK_?);
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
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).jumpDir.x = pVVar1->x;
  (this->fields).jumpDir.y = fVar3;
  (this->fields).jumpDir.z = fVar4;
  method_00 = TypeInfo__System__Collections__Generic__List<MVControllerColliderHit>;
  this_00 = (List_1_MVControllerColliderHit_ *)func_?();
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            ((List_1_UnityEngine_Vector4_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVControllerColliderHit>__List__);
  (this->fields).wallJumpHits = this_00;
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,(MethodInfo *)method_00);
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


/* Boolean get_Jumping() */

bool Assembly-CSharp.dll::JumpState::JumpState_get_Jumping(JumpState *this,MethodInfo *method)

{
  return (this->fields).jumping;
}

