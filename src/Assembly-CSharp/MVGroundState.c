
/* Vector3 ApplySlidingVelocity(Vector3, Single, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVGroundState::MVGroundState_ApplySlidingVelocity
                    (Vector3 *__return_storage_ptr__,MVGroundState *this,Vector3 velocity,
                    float density,MVInteractableBase *interactableLocal,MethodInfo *method)

{
  lVar1 = ZEXT48(__return_storage_ptr__) << 0x20;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar2 = *(undefined8 *)&(this->fields).grounded;
  uVar3 = (this->fields).grounded.fakeValue;
  uVar4 = (this->fields).grounded.fakeValueChanged;
  uVar5 = (this->fields).grounded.inited;
  uVar6 = (this->fields).grounded.field_0xb;
  value._11_1_ = uVar6;
  value.inited = uVar5;
  value.fakeValueChanged = uVar4;
  value.fakeValue = uVar3;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  value._0_8_ = uVar2;
  bVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  if (bVar7 == 0) {
code_?:
    __return_storage_ptr__ = (Vector3 *)((ulonglong)lVar1 >> 0x20);
    __return_storage_ptr__->x = velocity.x;
    __return_storage_ptr__->y = velocity.y;
    __return_storage_ptr__->z = velocity.z;
    return __return_storage_ptr__;
  }
  uVar2._0_4_ = (this->fields).gradientDirection.x;
  uVar2._4_4_ = (this->fields).gradientDirection.y;
  fVar8 = (this->fields).gradientDirection.z;
  fVar9 = (this->fields).gradientAngle;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  auVar10._0_8_ = (double)(fVar9 * _UNK_?);
  auVar10._8_8_ = 0;
  func_?();
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a_00.z = fVar8;
  a_00.x = (float)uVar2;
  a_00.y = SUB84(uVar2,4);
  pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffe4,a_00,(float)auVar10._0_8_,(MethodInfo *)0x0);
  uVar12._0_4_ = pVVar11->x;
  uVar12._4_4_ = pVVar11->y;
  fVar9 = pVVar11->z;
  pMVar13 = (this->fields).groundMaterial;
  if (pMVar13 != (MVMaterial *)0x0) {
    MVMaterial::MVMaterial_get_PhysicalProperties
              ((PhysicalProperties *)&stack0xffffffdc,pMVar13,(MethodInfo *)0x0);
    if (interactableLocal != (MVInteractableBase *)0x0) {
      fVar14 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
      fVar8 = MathFunctions::MathFunctions_Pow2((float)fVar14,(MethodInfo *)0x0);
      a_01.z = fVar9;
      a_01.x = (float)uVar12;
      a_01.y = SUB84(uVar12,4);
      pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xfffffff0,a_01,_UNK_? - fVar8,(MethodInfo *)0x0
                          );
      pVVar11 = (Vector3 *)pVVar11->z;
      if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
        func_?();
      }
      pOVar15 = MVPhysics::MVPhysics_get_Gravity
                          ((ObscuredFloat *)&stack0xffffffa8,(MethodInfo *)0x0);
      iVar16 = pOVar15->currentCryptoKey;
      AVar17 = pOVar15->hiddenValue;
      pBVar18 = pOVar15->hiddenValueOld;
      fVar9 = pOVar15->fakeValue;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
        func_?();
      }
      value_00.hiddenValue = AVar17;
      value_00.currentCryptoKey = iVar16;
      value_00.hiddenValueOld = pBVar18;
      value_00.fakeValue = fVar9;
      value_00.inited = pOVar15->inited;
      value_00._17_3_ = *(undefined3 *)&pOVar15->field_0x11;
      fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
      lVar1 = CONCAT44(pVVar11,fVar9);
      pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xfffffff0,(Vector3)CONCAT84(lVar1,(float)pBVar18),
                           fVar8,(MethodInfo *)0x0);
      uVar20 = pVVar19->x;
      fVar9 = pVVar19->y;
      fVar8 = pVVar19->z;
      velocity.z = (float)uVar20;
      fVar14 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
      velocity.y = (float)&stack0xffffffe4;
      velocity.x = (float)&UNK_?;
      a.y = fVar9;
      a.x = velocity.z;
      a.z = fVar8;
      UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                ((Vector3 *)velocity.y,a,(float)fVar14,(MethodInfo *)0x0);
      fVar14 = (float10)func_?();
      pMVar13 = (this->fields).groundMaterial;
      if (pMVar13 != (MVMaterial *)0x0) {
        pPVar21 = MVMaterial::MVMaterial_get_PhysicalProperties
                            ((PhysicalProperties *)&stack0xffffffa8,pMVar13,(MethodInfo *)0x0);
        fVar9 = pPVar21->staticFriction;
        pIVar22 = (interactableLocal->klass->vtable).__unknown_6.methodPtr;
        fVar8 = 2.24208e-44;
        fVar23 = (float10)(*(code *)(interactableLocal->klass->vtable).__unknown_5.method)();
        if ((float)fVar23 < (float)fVar14) {
          d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
          ;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          a_02.y = fVar9;
          a_02.x = fVar8;
          a_02.z = (float)pIVar22;
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffffe4,a_02,d,(MethodInfo *)0x0);
          a_03.y = velocity.y;
          a_03.x = (float)&UNK_?;
          a_03.z = velocity.z;
          pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffffe4,a_03,*pVVar19,(MethodInfo *)0x0);
          fVar8 = pVVar19->y;
          fVar9 = pVVar19->z;
          pVVar11->x = pVVar19->x;
          pVVar11->y = fVar8;
          pVVar11->z = fVar9;
          return pVVar11;
        }
        goto code_?;
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pVVar11 = (Vector3 *)(*pcVar24)();
  return pVVar11;
}


/* Single GetGradientAngle(Vector3) */

float Assembly-CSharp.dll::MVGroundState::MVGroundState_GetGradientAngle
                (Vector3 gradientDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                    (*pVVar1,gradientDirection,(MethodInfo *)0x0);
  return fVar2 - _UNK_?;
}


/* Boolean GroundTest(MVControllerColliderHit ByRef, MvCharacterController, Vector3, Boolean,
   Single) */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_GroundTest
               (MVGroundState *this,MVControllerColliderHit *groundHit,
               MvCharacterController *controller,Vector3 velocity,bool sendCollData,
               float additionalGroundDepth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                     ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  d = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime((MethodInfo *)0x0);
  a.z = velocity.z;
  a.x = velocity.x;
  a.y = velocity.y;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&velocity,a,d,(MethodInfo *)0x0);
  if (controller != (MvCharacterController *)0x0) {
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    direction.y = (float)uVar4;
    direction.x = (float)uVar3;
    direction.z = fVar2;
    bVar5 = MvCharacterController::MvCharacterController_TestWithOutSliding
                      (controller,additionalGroundDepth + _UNK_?,direction,*pVVar1,groundHit,
                       (MethodInfo *)0x0);
    return bVar5;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar5 = (*pcVar6)();
  return bVar5;
}


/* Boolean IsGroundedTest() */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_IsGroundedTest
               (MVGroundState *this,MethodInfo *method)

{
  return _UNK_? < (this->fields).groundNormal.y;
}


/* Boolean Update(MvCharacterController, Vector3, Single) */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_Update
               (MVGroundState *this,MvCharacterController *controller,Vector3 velocity,
               float additionalGroundDepth,MethodInfo *method)

{
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_down
                     (&VStack_2,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  fStack_5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                       ((MethodInfo *)0x0);
  pVVar1 = &velocity;
  puVar6 = &UNK_?;
  a.z = velocity.z;
  a.x = velocity.x;
  a.y = velocity.y;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (pVVar1,a,fStack_5,(MethodInfo *)0x0);
  fVar8 = 0.0;
  if (controller != (MvCharacterController *)0x0) {
    uVar9._0_4_ = pVVar7->x;
    uVar9._4_4_ = pVVar7->y;
    colliderHit = (MVControllerColliderHit *)&stack0xffffff54;
    fVar10 = pVVar7->z;
    uVar11 = (undefined4)uStack_3;
    uVar12 = (undefined4)((ulonglong)uStack_3 >> 0x20);
    distance = additionalGroundDepth + _UNK_?;
    puVar13 = &UNK_?;
    direction.z = fVar4;
    direction.x = (float)(undefined4)uStack_3;
    direction.y = (float)uStack_3._4_4_;
    pMVar14 = controller;
    bVar15 = MvCharacterController::MvCharacterController_TestWithOutSliding
                      (controller,distance,direction,*pVVar7,colliderHit,(MethodInfo *)0x0);
    uVar16 = 0;
    puVar17 = (undefined4 *)&stack0xffffff54;
    puVar18 = &uStack_19;
    for (iVar20 = 0x24; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar18 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar18 = puVar18 + 1;
    }
    groundHit.impactVelocity.y = (float)puVar6;
    auVar21 = in_stack_22._0_12_;
    auVar23 = in_stack_22._12_12_;
    auVar24 = in_stack_22._24_12_;
    auVar25 = in_stack_22._36_12_;
    groundHit.positionTouchingHit.x = (float)auVar21._0_4_;
    groundHit.positionTouchingHit.y = (float)auVar21._4_4_;
    groundHit.positionTouchingHit.z = (float)auVar21._8_4_;
    groundHit.moveDirection.x = (float)auVar23._0_4_;
    groundHit.moveDirection.y = (float)auVar23._4_4_;
    groundHit.moveDirection.z = (float)auVar23._8_4_;
    groundHit.elipsoidNormal.x = (float)auVar24._0_4_;
    groundHit.elipsoidNormal.y = (float)auVar24._4_4_;
    groundHit.elipsoidNormal.z = (float)auVar24._8_4_;
    groundHit.slopeNormal.x = (float)auVar25._0_4_;
    groundHit.slopeNormal.y = (float)auVar25._4_4_;
    groundHit.slopeNormal.z = (float)auVar25._8_4_;
    groundHit.impactVelocity.x = (float)in_stack_22._48_4_;
    groundHit.impactVelocity.z = (float)pVVar1;
    groundHit._60_4_ = puVar13;
    groundHit.hit.point.x = (float)pMVar14;
    groundHit.hit.point.y = distance;
    groundHit.hit.point.z = (float)uVar11;
    groundHit.hit.normal.x = (float)uVar12;
    groundHit.hit.normal.y = fVar4;
    groundHit.hit._20_8_ = uVar9;
    groundHit.hit._28_4_ = fVar10;
    groundHit.hit.face = (int32_t)colliderHit;
    groundHit.hit._36_4_ = fVar8;
    groundHit.hit.woId = in_stack_26._0_4_;
    groundHit.hit.cube = (Cube *)in_stack_26._4_4_;
    groundHit.hit.distance = (float)in_stack_26._8_4_;
    groundHit.hit.collider = (Collider *)in_stack_26._12_4_;
    groundHit.hit.transform = (Transform *)in_stack_26._16_4_;
    groundHit.hit._60_4_ = in_stack_26._20_4_;
    groundHit.hit.interactionFlags = in_stack_26._24_8_;
    groundHit.material = (MVMaterial *)in_stack_26._32_4_;
    groundHit.testWithOutMoving = (char)uVar16;
    groundHit._141_3_ = SUB43(uVar16,1);
    MVGroundState_UpdateGroundStateWithHit(this,controller,bVar15,groundHit,in_stack_27);
    return bVar15;
  }
  func_?();
  pcVar28 = (code *)swi(3);
  bVar15 = (*pcVar28)();
  return bVar15;
}


/* Void UpdateGroundChange() */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundChange
               (MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = UIPushOption__Enum_None;
  OVar1 = (this->fields).grounded;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(OVar1,(MethodInfo *)0x0);
  if ((bVar2 == 0) || (_UNK_? < (this->fields).groundNormal.y)) {
    OVar1 = (this->fields).grounded;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?();
    }
    bVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(OVar1,(MethodInfo *)0x0);
    if ((bVar2 != 0) || ((this->fields).groundNormal.y <= _UNK_?)) goto code_?;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,1,(MethodInfo *)0x0);
    obj = UIPushOption__Enum_HideAll;
  }
  else {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_op_Implicit((ObscuredBool *)&stack0xfffffff0,0,(MethodInfo *)0x0);
    obj = UIPushOption__Enum_Blocking;
  }
  uVar4 = *(undefined3 *)&pOVar3->field_0x1;
  iVar5 = pOVar3->hiddenValue;
  bVar2 = pOVar3->fakeValue;
  bVar6 = pOVar3->fakeValueChanged;
  bVar7 = pOVar3->inited;
  uVar8 = pOVar3->field_0xb;
  (this->fields).grounded.currentCryptoKey = pOVar3->currentCryptoKey;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = uVar4;
  (this->fields).grounded.hiddenValue = iVar5;
  (this->fields).grounded.fakeValue = bVar2;
  (this->fields).grounded.fakeValueChanged = bVar6;
  (this->fields).grounded.inited = bVar7;
  (this->fields).grounded.field_0xb = uVar8;
code_?:
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnGroundChange;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,obj,MethodInfo__System__Action<GroundChange>__Invoke_GroundChange_);
  }
  return;
}


/* Void UpdateGroundData(MvCharacterController, Boolean, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundData
               (MVGroundState *this,MvCharacterController *controller,bool foundGroundHit,
               MVControllerColliderHit groundHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).groundNormal.x = pVVar1->x;
  (this->fields).groundNormal.y = fVar3;
  (this->fields).groundNormal.z = fVar4;
  if (foundGroundHit == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkGame *)0x0) {
      pCVar6 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
      if (pCVar6 != (CelestialParam *)0x0) {
        pMVar7 = (MVMaterial *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pCVar6,(MethodInfo *)0x0);
        (this->fields).groundMaterial = pMVar7;
        return;
      }
    }
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero(&VStack_2,(MethodInfo *)0x0)
    ;
    (this->fields).groundNormal.x = (float)(int)groundHit._32_8_;
    (this->fields).groundNormal.y = (float)(int)((ulonglong)groundHit._32_8_ >> 0x20);
    (this->fields).groundNormal.z = groundHit.slopeNormal.y;
    if (controller != (MvCharacterController *)0x0) {
      pVVar1 = MvCharacterController::MvCharacterController_GetGradientDirection
                         ((Vector3 *)&stack0xffffffe4,controller,groundHit._60_72_,(MethodInfo *)0x0
                         );
      bVar8 = cRam_? == '\0';
      VStack_2.y = pVVar1->x;
      VStack_2.z = pVVar1->y;
      fVar4 = pVVar1->z;
      (this->fields).gradientDirection.x = VStack_2.y;
      (this->fields).gradientDirection.y = VStack_2.z;
      (this->fields).gradientDirection.z = fVar4;
      if (bVar8) {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                         ((Vector3 *)&stack0xffffffe4,(MethodInfo *)0x0);
      to.z = fVar4;
      to.x = VStack_2.y;
      to.y = VStack_2.z;
      fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle
                        (*pVVar1,to,(MethodInfo *)0x0);
      (this->fields).gradientAngle = fVar4 - _UNK_?;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (pMVar5 != (MVNetworkGame *)0x0) {
        pCVar6 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)pMVar5,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0
            ) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
          func_?();
        }
        materialId = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetMaterial
                               ((CubeBase *)groundHit.hit.woId,groundHit.hit._28_4_,
                                (MethodInfo *)0x0);
        if (pCVar6 != (CelestialParam *)0x0) {
          pMVar7 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                             ((MVMaterialRepository *)pCVar6,materialId,(MethodInfo *)0x0);
          (this->fields).groundMaterial = pMVar7;
          return;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdateGroundStateWithHit(MvCharacterController, Boolean, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundStateWithHit
               (MVGroundState *this,MvCharacterController *controller,bool foundGroundHit,
               MVControllerColliderHit groundHit,MethodInfo *method)

{
  uVar1 = 0;
  puVar2 = (undefined4 *)&stack0x00000010;
  puVar3 = &uStack_4;
  for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  groundHit_00._140_4_ = uVar1;
  auVar6 = in_stack_7._0_12_;
  auVar8 = in_stack_7._12_12_;
  auVar9 = in_stack_7._24_12_;
  auVar10 = in_stack_7._36_12_;
  auVar11 = in_stack_7._48_12_;
  auVar12 = in_stack_7._64_72_;
  groundHit_00.positionTouchingHit.x = (float)auVar6._0_4_;
  groundHit_00.positionTouchingHit.y = (float)auVar6._4_4_;
  groundHit_00.positionTouchingHit.z = (float)auVar6._8_4_;
  groundHit_00.moveDirection.x = (float)auVar8._0_4_;
  groundHit_00.moveDirection.y = (float)auVar8._4_4_;
  groundHit_00.moveDirection.z = (float)auVar8._8_4_;
  groundHit_00.elipsoidNormal.x = (float)auVar9._0_4_;
  groundHit_00.elipsoidNormal.y = (float)auVar9._4_4_;
  groundHit_00.elipsoidNormal.z = (float)auVar9._8_4_;
  groundHit_00.slopeNormal.x = (float)auVar10._0_4_;
  groundHit_00.slopeNormal.y = (float)auVar10._4_4_;
  groundHit_00.slopeNormal.z = (float)auVar10._8_4_;
  groundHit_00.impactVelocity.x = (float)auVar11._0_4_;
  groundHit_00.impactVelocity.y = (float)auVar11._4_4_;
  groundHit_00.impactVelocity.z = (float)auVar11._8_4_;
  groundHit_00._60_4_ = in_stack_7._60_4_;
  auVar6 = auVar12._0_12_;
  auVar8 = auVar12._12_12_;
  uVar13 = auVar12._24_6_;
  groundHit_00.hit.point.x = (float)auVar6._0_4_;
  groundHit_00.hit.point.y = (float)auVar6._4_4_;
  groundHit_00.hit.point.z = (float)auVar6._8_4_;
  groundHit_00.hit.normal.x = (float)auVar8._0_4_;
  groundHit_00.hit.normal.y = (float)auVar8._4_4_;
  groundHit_00.hit.normal.z = (float)auVar8._8_4_;
  groundHit_00.hit.cubePos.x = (short)uVar13;
  groundHit_00.hit.cubePos.y = (short)((uint6)uVar13 >> 0x10);
  groundHit_00.hit.cubePos.z = (short)((uint6)uVar13 >> 0x20);
  groundHit_00.hit._30_2_ = auVar12._30_2_;
  groundHit_00.hit.face = auVar12._32_4_;
  groundHit_00.hit.isCubeHit = auVar12[0x24];
  groundHit_00.hit._37_3_ = auVar12._37_3_;
  groundHit_00.hit.woId = auVar12._40_4_;
  groundHit_00.hit.cube = (Cube *)auVar12._44_4_;
  groundHit_00.hit.distance = (float)auVar12._48_4_;
  groundHit_00.hit.collider = (Collider *)auVar12._52_4_;
  groundHit_00.hit.transform = (Transform *)auVar12._56_4_;
  groundHit_00.hit._60_4_ = auVar12._60_4_;
  groundHit_00.hit.interactionFlags = auVar12._64_8_;
  groundHit_00.material = (MVMaterial *)in_stack_7._136_4_;
  MVGroundState_UpdateGroundData(this,controller,foundGroundHit,groundHit_00,unaff_EDI);
  if (cRam_? == '\0') {
    groundHit.hit._60_4_ = _UNK_?;
    groundHit.hit.transform = (Transform *)&UNK_?;
    func_?();
    cRam_? = '\x01';
  }
  obj = UIPushOption__Enum_None;
  uVar14 = *(undefined8 *)&(this->fields).grounded;
  pTVar15 = *(Transform **)&(this->fields).grounded.fakeValue;
  groundHit.hit.interactionFlags._4_4_ = (int64_t *)uVar14;
  groundHit.material = SUB84(uVar14,4);
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    groundHit.hit._60_4_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
    groundHit.hit.transform = (Transform *)&UNK_?;
    func_?();
    uVar14._4_4_ = (Collider *)groundHit.material;
    uVar14._0_4_ = (float)groundHit.hit.interactionFlags._4_4_;
  }
  groundHit.hit._60_4_ = 0;
  groundHit.hit.cube = (Cube *)&UNK_?;
  value._8_4_ = pTVar15;
  value._0_8_ = uVar14;
  groundHit.hit._48_8_ = uVar14;
  groundHit.hit.transform = pTVar15;
  bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((bVar16 == 0) || (_UNK_? < (this->fields).groundNormal.y)) {
    uVar17._0_1_ = (this->fields).grounded.currentCryptoKey;
    uVar17._1_3_ = *(undefined3 *)&(this->fields).grounded.field_0x1;
    uVar17._4_4_ = (this->fields).grounded.hiddenValue;
    pMVar18 = *(MVMaterial **)&(this->fields).grounded.fakeValue;
    groundHit.hit.interactionFlags._4_4_ = (int64_t *)uVar17;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      groundHit._140_4_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      groundHit.material = (MVMaterial *)&UNK_?;
      func_?();
      uVar17 = CONCAT44(groundHit.material,groundHit.hit.interactionFlags._4_4_);
    }
    groundHit.testWithOutMoving = 0;
    groundHit._141_3_ = 0;
    groundHit.hit.interactionFlags._0_4_ = (undefined *)uVar17;
    groundHit.hit.interactionFlags._4_4_ = (int64_t *)((ulonglong)uVar17 >> 0x20);
    groundHit.hit._60_4_ = &UNK_?;
    value_00._8_4_ = pMVar18;
    value_00.currentCryptoKey = (char)uVar17;
    value_00._1_3_ = (int3)((ulonglong)uVar17 >> 8);
    value_00.hiddenValue = (int)((ulonglong)uVar17 >> 0x20);
    groundHit.material = pMVar18;
    bVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_op_Implicit_1(value_00,(MethodInfo *)0x0);
    if ((bVar16 != 0) || ((this->fields).groundNormal.y <= _UNK_?)) goto code_?;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      func_?();
    }
    pOVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_op_Implicit
                       ((ObscuredBool *)&groundHit.hit.interactionFlags,1,(MethodInfo *)0x0);
    obj = UIPushOption__Enum_HideAll;
  }
  else {
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
      groundHit._140_4_ = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool;
      groundHit.material = (MVMaterial *)&UNK_?;
      func_?();
    }
    groundHit.testWithOutMoving = 0;
    groundHit._141_3_ = 0;
    groundHit.hit.interactionFlags._4_4_ = &groundHit.hit.interactionFlags;
    groundHit.material = (MVMaterial *)0x0;
    groundHit.hit.interactionFlags._0_4_ = &UNK_?;
    pOVar19 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
             ObscuredBool_op_Implicit
                       ((ObscuredBool *)groundHit.hit.interactionFlags._4_4_,0,(MethodInfo *)0x0);
    obj = UIPushOption__Enum_Blocking;
  }
  uVar20 = *(undefined3 *)&pOVar19->field_0x1;
  iVar21 = pOVar19->hiddenValue;
  bVar16 = pOVar19->fakeValue;
  bVar22 = pOVar19->fakeValueChanged;
  bVar23 = pOVar19->inited;
  uVar24 = pOVar19->field_0xb;
  (this->fields).grounded.currentCryptoKey = pOVar19->currentCryptoKey;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = uVar20;
  (this->fields).grounded.hiddenValue = iVar21;
  (this->fields).grounded.fakeValue = bVar16;
  (this->fields).grounded.fakeValueChanged = bVar22;
  (this->fields).grounded.inited = bVar23;
  (this->fields).grounded.field_0xb = uVar24;
code_?:
  this_00 = (Action_1_UIPushOption_ *)(this->fields).OnGroundChange;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,obj,MethodInfo__System__Action<GroundChange>__Invoke_GroundChange_);
  }
  return;
}


/* Void UpdateGroundStateWithHitExternal(MvCharacterController, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundStateWithHitExternal
               (MVGroundState *this,MvCharacterController *controller,
               MVControllerColliderHit groundHit,MethodInfo *method)

{
  uVar1 = 0;
  pMVar2 = &groundHit;
  pfVar3 = &fStack_4;
  for (iVar5 = 0x24; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar3 = (pMVar2->positionTouchingHit).x;
    pMVar2 = (MVControllerColliderHit *)&(pMVar2->positionTouchingHit).y;
    pfVar3 = pfVar3 + 1;
  }
  groundHit_00._140_4_ = uVar1;
  auVar6 = in_stack_7._0_12_;
  auVar8 = in_stack_7._12_12_;
  auVar9 = in_stack_7._24_12_;
  auVar10 = in_stack_7._36_12_;
  auVar11 = in_stack_7._48_12_;
  auVar12 = in_stack_7._64_72_;
  groundHit_00.positionTouchingHit.x = (float)auVar6._0_4_;
  groundHit_00.positionTouchingHit.y = (float)auVar6._4_4_;
  groundHit_00.positionTouchingHit.z = (float)auVar6._8_4_;
  groundHit_00.moveDirection.x = (float)auVar8._0_4_;
  groundHit_00.moveDirection.y = (float)auVar8._4_4_;
  groundHit_00.moveDirection.z = (float)auVar8._8_4_;
  groundHit_00.elipsoidNormal.x = (float)auVar9._0_4_;
  groundHit_00.elipsoidNormal.y = (float)auVar9._4_4_;
  groundHit_00.elipsoidNormal.z = (float)auVar9._8_4_;
  groundHit_00.slopeNormal.x = (float)auVar10._0_4_;
  groundHit_00.slopeNormal.y = (float)auVar10._4_4_;
  groundHit_00.slopeNormal.z = (float)auVar10._8_4_;
  groundHit_00.impactVelocity.x = (float)auVar11._0_4_;
  groundHit_00.impactVelocity.y = (float)auVar11._4_4_;
  groundHit_00.impactVelocity.z = (float)auVar11._8_4_;
  groundHit_00._60_4_ = in_stack_7._60_4_;
  auVar6 = auVar12._0_12_;
  auVar8 = auVar12._12_12_;
  uVar13 = auVar12._24_6_;
  groundHit_00.hit.point.x = (float)auVar6._0_4_;
  groundHit_00.hit.point.y = (float)auVar6._4_4_;
  groundHit_00.hit.point.z = (float)auVar6._8_4_;
  groundHit_00.hit.normal.x = (float)auVar8._0_4_;
  groundHit_00.hit.normal.y = (float)auVar8._4_4_;
  groundHit_00.hit.normal.z = (float)auVar8._8_4_;
  groundHit_00.hit.cubePos.x = (short)uVar13;
  groundHit_00.hit.cubePos.y = (short)((uint6)uVar13 >> 0x10);
  groundHit_00.hit.cubePos.z = (short)((uint6)uVar13 >> 0x20);
  groundHit_00.hit._30_2_ = auVar12._30_2_;
  groundHit_00.hit.face = auVar12._32_4_;
  groundHit_00.hit.isCubeHit = auVar12[0x24];
  groundHit_00.hit._37_3_ = auVar12._37_3_;
  groundHit_00.hit.woId = auVar12._40_4_;
  groundHit_00.hit.cube = (Cube *)auVar12._44_4_;
  groundHit_00.hit.distance = (float)auVar12._48_4_;
  groundHit_00.hit.collider = (Collider *)auVar12._52_4_;
  groundHit_00.hit.transform = (Transform *)auVar12._56_4_;
  groundHit_00.hit._60_4_ = auVar12._60_4_;
  groundHit_00.hit.interactionFlags = auVar12._64_8_;
  groundHit_00.material = (MVMaterial *)in_stack_7._136_4_;
  MVGroundState_UpdateGroundStateWithHit(this,controller,1,groundHit_00,unaff_EDI);
  return;
}


/* MVGroundState() */

void Assembly-CSharp.dll::MVGroundState::MVGroundState__ctor(MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (MVMaterial *)func_?(TypeInfo__MVMaterial);
  WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
  WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor
            ((WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)this_00,(MethodInfo *)0x0);
  (this->fields).groundMaterial = this_00;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
           ObscuredBool_op_Implicit((ObscuredBool *)&puStack_2,0,(MethodInfo *)0x0);
  uVar3 = *(undefined3 *)&pOVar1->field_0x1;
  iVar4 = pOVar1->hiddenValue;
  bVar5 = pOVar1->fakeValue;
  bVar6 = pOVar1->fakeValueChanged;
  bVar7 = pOVar1->inited;
  uVar8 = pOVar1->field_0xb;
  (this->fields).grounded.currentCryptoKey = pOVar1->currentCryptoKey;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = uVar3;
  (this->fields).grounded.hiddenValue = iVar4;
  (this->fields).grounded.fakeValue = bVar5;
  (this->fields).grounded.fakeValueChanged = bVar6;
  (this->fields).grounded.inited = bVar7;
  (this->fields).grounded.field_0xb = uVar8;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      ((Vector3 *)&puStack_2,(MethodInfo *)0x0);
  fVar10 = pVVar9->y;
  fVar11 = pVVar9->z;
  (this->fields).groundNormal.x = pVVar9->x;
  (this->fields).groundNormal.y = fVar10;
  (this->fields).groundNormal.z = fVar11;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EBP);
  return;
}


/* Single get_GroundDepth() */

float Assembly-CSharp.dll::MVGroundState::MVGroundState_get_GroundDepth
                (MVGroundState *this,MethodInfo *method)

{
  return _UNK_?;
}


/* Boolean get_Grounded() */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_get_Grounded
               (MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).grounded;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  bVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_op_Implicit_1(value,(MethodInfo *)0x0);
  return bVar1;
}

