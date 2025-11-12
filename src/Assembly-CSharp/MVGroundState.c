
/* Vector3 ApplySlidingVelocity(Vector3, Single, MVInteractableBase) */

Vector3 * Assembly-CSharp.dll::MVGroundState::MVGroundState_ApplySlidingVelocity
                    (Vector3 *__return_storage_ptr__,MVGroundState *this,Vector3 *velocity,
                    float density,MVInteractableBase *interactableLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVPhysics);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGroundState_get_Grounded(this,(MethodInfo *)0x0);
  if (bVar1 == 0) {
code_?:
    fVar2 = velocity->z;
    fVar3 = velocity->y;
    __return_storage_ptr__->x = velocity->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  fVar3 = (float)FUN_?((this->fields).gradientAngle * _UNK_?);
  auStack_4._0_4_ = (int32_t)(this->fields).gradientDirection.x;
  auStack_4._4_4_ = (ACTkByte4)(this->fields).gradientDirection.y;
  fVar2 = (this->fields).gradientDirection.z;
  fVar5 = fVar3 * (float)auStack_4._0_4_;
  fVar6 = fVar3 * (float)auStack_4._4_4_;
  pMVar7 = (this->fields).groundMaterial;
  if (pMVar7 != (MVMaterial *)0x0) {
    uVar8._0_4_ = (pMVar7->fields)._PhysicalProperties_k__BackingField.friction;
    uVar8._4_4_ = (pMVar7->fields)._PhysicalProperties_k__BackingField.bouncyness;
    fStack_9 = (pMVar7->fields)._PhysicalProperties_k__BackingField.toughness;
    if (interactableLocal != (MVInteractableBase *)0x0) {
      fVar10 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                                (interactableLocal,0xc,uVar8,
                                 (interactableLocal->klass->vtable).__unknown_8.method);
      fVar10 = _UNK_? - fVar10 * fVar10;
      if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVPhysics);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MVPhysics->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar11 = TypeInfo__MVPhysics->static_fields;
      uVar12._0_4_ = (pMVar11->gravity).currentCryptoKey;
      uVar12._4_4_ = (pMVar11->gravity).hiddenValue;
      pBVar13 = (pMVar11->gravity).hiddenValueOld;
      uVar14._0_4_ = (pMVar11->gravity).fakeValue;
      uVar14._4_1_ = (pMVar11->gravity).inited;
      uVar14._5_3_ = *(undefined3 *)&(pMVar11->gravity).field_0x15;
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).field_0x1c ==
          0) {
        FUN_?();
      }
      auStack_4 = (undefined1  [8])uVar12;
      pBStack_15 = pBVar13;
      _fStack_78 = uVar14;
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
      fVar16 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
               ObscuredFloat_InternalDecrypt((ObscuredFloat *)auStack_4,(MethodInfo *)0x0);
      fVar17 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                                (interactableLocal,0,CONCAT44(in_XMM3_Db,density),
                                 (interactableLocal->klass->vtable).__unknown_8.method);
      fVar5 = fVar10 * fVar5 * fVar16 * fVar17;
      AVar18 = (ACTkByte4)(fVar10 * fVar6 * fVar16 * fVar17);
      fVar17 = fVar10 * fVar3 * fVar2 * fVar16 * fVar17;
      pBStack_15 = (Byte__Array *)CONCAT44(pBStack_15._4_4_,fVar17);
      auStack_4._4_4_ = AVar18;
      auStack_4._0_4_ = (int32_t)fVar5;
      fVar2 = (float)FUN_?(auStack_4);
      pMVar7 = (this->fields).groundMaterial;
      if (pMVar7 != (MVMaterial *)0x0) {
        fVar3 = (pMVar7->fields)._PhysicalProperties_k__BackingField.staticFriction;
        fVar3 = (float)(*(interactableLocal->klass->vtable).__unknown_8.methodPtr)
                                  (interactableLocal,0x11,CONCAT44(fVar3,fVar3),
                                   (interactableLocal->klass->vtable).__unknown_8.method);
        if (fVar3 < fVar2) {
          pcVar19 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar19 = (code *)swi(3);
            pVVar20 = (Vector3 *)(*pcVar19)();
            return pVVar20;
          }
          pcRam_? = pcVar19;
          fVar2 = (float)(*pcRam_?)();
          uVar21 = velocity->x;
          uVar22 = velocity->y;
          velocity->x = fVar5 * fVar2 + (float)uVar21;
          velocity->y = (float)AVar18 * fVar2 + (float)uVar22;
          velocity->z = fVar17 * fVar2 + velocity->z;
        }
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar19 = (code *)swi(3);
  pVVar20 = (Vector3 *)(*pcVar19)();
  return pVVar20;
}


/* Single GetGradientAngle(Vector3) */

float Assembly-CSharp.dll::MVGroundState::MVGroundState_GetGradientAngle
                (Vector3 *gradientDirection,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fStack_1 = gradientDirection->z;
  uStack_2._0_4_ = gradientDirection->x;
  uStack_2._4_4_ = gradientDirection->y;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_4._0_4_ = (pVVar3->upVector).x;
  uStack_4._4_4_ = (pVVar3->upVector).y;
  fStack_5 = (pVVar3->upVector).z;
  fVar6 = (float)FUN_?(&uStack_4,&uStack_2);
  return fVar6 - _UNK_?;
}


/* Boolean GroundTest(MVControllerColliderHit ByRef, MvCharacterController, Vector3, Boolean,
   Single) */

bool Assembly-CSharp.dll::MVGroundState::MVGroundState_GroundTest
               (MVGroundState *this,MVControllerColliderHit *groundHit,
               MvCharacterController *controller,Vector3 *velocity,bool sendCollData,
               float additionalGroundDepth,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2._0_4_ = (pVVar1->downVector).x;
  uVar2._4_4_ = (pVVar1->downVector).y;
  fVar3 = (pVVar1->downVector).z;
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  pcRam_? = pcVar4;
  fVar6 = (float)(*pcRam_?)();
  aVStack_7[0].x = velocity->x;
  aVStack_7[0].y = velocity->y;
  VStack_8.z = velocity->z * fVar6;
  if (controller == (MvCharacterController *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  VStack_8.y = aVStack_7[0].y * fVar6;
  VStack_8.x = aVStack_7[0].x * fVar6;
  aVStack_7[0]._0_8_ = uVar2;
  aVStack_7[0].z = fVar3;
  bVar5 = MvCharacterController::MvCharacterController_TestWithOutSliding
                    (controller,additionalGroundDepth + _UNK_?,aVStack_7,&VStack_8,
                     groundHit,(MethodInfo *)0x0);
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
               (MVGroundState *this,MvCharacterController *controller,Vector3 *velocity,
               float additionalGroundDepth,MethodInfo *method)

{
  FUN_?(&MStack_1,0,0xa8);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3._0_4_ = (pVVar2->downVector).x;
  uVar3._4_4_ = (pVVar2->downVector).y;
  fVar4 = (pVVar2->downVector).z;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  pcRam_? = pcVar5;
  fVar7 = (float)(*pcRam_?)();
  VStack_8.x = velocity->x;
  VStack_8.y = velocity->y;
  VStack_9.z = velocity->z * fVar7;
  if (controller == (MvCharacterController *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  VStack_9.y = VStack_8.y * fVar7;
  VStack_9.x = VStack_8.x * fVar7;
  VStack_8._0_8_ = uVar3;
  VStack_8.z = fVar4;
  bVar6 = MvCharacterController::MvCharacterController_TestWithOutSliding
                    (controller,additionalGroundDepth + _UNK_?,&VStack_8,&VStack_9,
                     &MStack_1,(MethodInfo *)0x0);
  MStack_10.positionTouchingHit.x = MStack_1.positionTouchingHit.x;
  MStack_10.positionTouchingHit.y = MStack_1.positionTouchingHit.y;
  MStack_10.positionTouchingHit.z = MStack_1.positionTouchingHit.z;
  MStack_10.moveDirection.x = MStack_1.moveDirection.x;
  MStack_10.moveDirection.y = MStack_1.moveDirection.y;
  MStack_10.moveDirection.z = MStack_1.moveDirection.z;
  MStack_10.elipsoidNormal.x = MStack_1.elipsoidNormal.x;
  MStack_10.elipsoidNormal.y = MStack_1.elipsoidNormal.y;
  MStack_10.elipsoidNormal.z = MStack_1.elipsoidNormal.z;
  MStack_10.slopeNormal.x = MStack_1.slopeNormal.x;
  MStack_10.slopeNormal.y = MStack_1.slopeNormal.y;
  MStack_10.slopeNormal.z = MStack_1.slopeNormal.z;
  MStack_10.impactVelocity.x = MStack_1.impactVelocity.x;
  MStack_10.impactVelocity.y = MStack_1.impactVelocity.y;
  MStack_10.impactVelocity.z = MStack_1.impactVelocity.z;
  MStack_10._60_4_ = MStack_1._60_4_;
  MStack_10.hit.point.x = MStack_1.hit.point.x;
  MStack_10.hit.point.y = MStack_1.hit.point.y;
  MStack_10.hit.point.z = MStack_1.hit.point.z;
  MStack_10.hit.normal.x = MStack_1.hit.normal.x;
  MStack_10.hit.normal.y = MStack_1.hit.normal.y;
  MStack_10.hit.normal.z = MStack_1.hit.normal.z;
  MStack_10.hit.cubePos = MStack_1.hit.cubePos;
  MStack_10.hit._30_2_ = MStack_1.hit._30_2_;
  MStack_10.hit.face = MStack_1.hit.face;
  MStack_10.hit.isCubeHit = MStack_1.hit.isCubeHit;
  MStack_10.hit._37_3_ = MStack_1.hit._37_3_;
  MStack_10.hit.woId = MStack_1.hit.woId;
  MStack_10.hit._44_4_ = MStack_1.hit._44_4_;
  MStack_10.hit.cube = MStack_1.hit.cube;
  MStack_10.hit.distance = MStack_1.hit.distance;
  MStack_10.hit._60_4_ = MStack_1.hit._60_4_;
  MStack_10.hit.collider = MStack_1.hit.collider;
  MStack_10.hit.transform = MStack_1.hit.transform;
  MStack_10.hit.interactionFlags = MStack_1.hit.interactionFlags;
  MStack_10.material = MStack_1.material;
  MStack_10.testWithOutMoving = MStack_1.testWithOutMoving;
  MStack_10._161_7_ = MStack_1._161_7_;
  MVGroundState_UpdateGroundStateWithHit(this,controller,bVar6,&MStack_10,(MethodInfo *)0x0);
  return bVar6;
}


/* Void UpdateGroundChange() */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundChange
               (MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_1_ = (this->fields).grounded.currentCryptoKey;
  uVar1._1_3_ = *(undefined3 *)&(this->fields).grounded.field_0x1;
  uVar1._4_4_ = (this->fields).grounded.hiddenValue;
  uVar2._0_1_ = (this->fields).grounded.fakeValue;
  uVar2._1_1_ = (this->fields).grounded.fakeValueChanged;
  uVar2._2_1_ = (this->fields).grounded.inited;
  uVar2._3_1_ = (this->fields).grounded.field_0xb;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStack_3[0]._0_8_ = uVar1;
  aOStack_3[0]._8_4_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
  fVar5 = _UNK_?;
  if ((bVar4 == 0) || (_UNK_? < (this->fields).groundNormal.y)) {
    uVar6._0_1_ = (this->fields).grounded.fakeValue;
    uVar6._1_1_ = (this->fields).grounded.fakeValueChanged;
    uVar6._2_1_ = (this->fields).grounded.inited;
    uVar6._3_1_ = (this->fields).grounded.field_0xb;
    uVar7._0_1_ = (this->fields).grounded.currentCryptoKey;
    uVar7._1_3_ = *(undefined3 *)&(this->fields).grounded.field_0x1;
    uVar7._4_4_ = (this->fields).grounded.hiddenValue;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    aOStack_3[0]._0_8_ = uVar7;
    aOStack_3[0]._8_4_ = uVar6;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt(aOStack_3,(MethodInfo *)0x0);
    uVar2 = 0;
    if ((bVar4 != 0) || (uVar2 = 0, (this->fields).groundNormal.y <= fVar5))
    goto code_?;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_3[0].currentCryptoKey = 0;
    aOStack_3[0]._1_3_ = 0;
    aOStack_3[0].hiddenValue = 0;
    aOStack_3[0].fakeValue = 0;
    aOStack_3[0].fakeValueChanged = 0;
    aOStack_3[0].inited = 0;
    aOStack_3[0]._11_1_ = 0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_Encrypt(1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    aOStack_3[0].hiddenValue = iVar8;
    aOStack_3[0]._11_1_ = SUB41(aOStack_3[0]._8_4_,3);
    aOStack_3[0].fakeValue = 0;
    aOStack_3[0].fakeValueChanged = 0;
    aOStack_3[0].inited = 1;
    aOStack_3[0].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar4 != 0) {
      aOStack_3[0].fakeValue = 1;
      aOStack_3[0].fakeValueChanged = 1;
    }
    uVar2 = 2;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    aOStack_3[0].currentCryptoKey = 0;
    aOStack_3[0]._1_3_ = 0;
    aOStack_3[0].hiddenValue = 0;
    aOStack_3[0].fakeValue = 0;
    aOStack_3[0].fakeValueChanged = 0;
    aOStack_3[0].inited = 0;
    aOStack_3[0]._11_1_ = 0;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    aOStack_3[0].hiddenValue = iVar8;
    uVar9 = SUB41(aOStack_3[0]._8_4_,3);
    aOStack_3[0]._8_2_ = (ushort)aOStack_3[0]._8_4_ & 0xff00;
    aOStack_3[0]._11_1_ = uVar9;
    aOStack_3[0].inited = 1;
    aOStack_3[0].currentCryptoKey =
         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
    bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    uVar2 = 1;
    aOStack_3[0].fakeValueChanged = bVar4 != 0;
  }
  (this->fields).grounded.currentCryptoKey = aOStack_3[0].currentCryptoKey;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = aOStack_3[0]._1_3_;
  (this->fields).grounded.hiddenValue = aOStack_3[0].hiddenValue;
  (this->fields).grounded.fakeValue = aOStack_3[0].fakeValue;
  (this->fields).grounded.fakeValueChanged = aOStack_3[0].fakeValueChanged;
  (this->fields).grounded.inited = aOStack_3[0].inited;
  (this->fields).grounded.field_0xb = aOStack_3[0]._11_1_;
code_?:
  if ((this->fields).OnGroundChange != (Action_1_GroundChange_ *)0x0) {
    pAVar10 = (this->fields).OnGroundChange;
    (*(pAVar10->fields)._._.invoke_impl)
              ((pAVar10->fields)._._.method_code,uVar2,(pAVar10->fields)._._.method);
  }
  return;
}


/* Void UpdateGroundData(MvCharacterController, Boolean, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundData
               (MVGroundState *this,MvCharacterController *controller,bool foundGroundHit,
               MVControllerColliderHit *groundHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).groundNormal.x = (pVVar2->zeroVector).x;
  (this->fields).groundNormal.y = fVar3;
  (this->fields).groundNormal.z = fVar4;
  if (foundGroundHit == 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 != (MVGameControllerBase *)0x0) &&
        (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
       (pMVar7 = (pMVar6->fields)._MaterialRepository_k__BackingField,
       pMVar7 != (MVMaterialRepository *)0x0)) {
      bVar8 = iRam_? != 0;
      (this->fields).groundMaterial = (pMVar7->fields).inAirMaterial;
      if (bVar8) {
        uVar9 = (uint)((ulonglong)&this->fields >> 0xc);
        uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
        do {
          uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
          puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
          LOCK();
          bVar8 = uVar11 == *puVar12;
          if (bVar8) {
            *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
          }
          UNLOCK();
        } while (!bVar8);
      }
      return;
    }
  }
  else {
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar3 = (pVVar2->zeroVector).y;
    fVar4 = (pVVar2->zeroVector).z;
    (groundHit->impactVelocity).x = (pVVar2->zeroVector).x;
    (groundHit->impactVelocity).y = fVar3;
    (groundHit->impactVelocity).z = fVar4;
    uVar13 = (groundHit->slopeNormal).y;
    uVar14 = (groundHit->slopeNormal).z;
    uStack_15 = (undefined4)((ulonglong)*(undefined8 *)&(groundHit->elipsoidNormal).z >> 0x20);
    uStack_16._0_4_ = (groundHit->moveDirection).y;
    uStack_16._4_4_ = (groundHit->moveDirection).z;
    uStack_17._0_4_ = (groundHit->elipsoidNormal).x;
    uStack_17._4_4_ = (groundHit->elipsoidNormal).y;
    (this->fields).groundNormal.x = (float)uStack_15;
    (this->fields).groundNormal.y = (float)uVar13;
    (this->fields).groundNormal.z = (float)uVar14;
    uStack_18 = *(undefined8 *)&groundHit->testWithOutMoving;
    uStack_19._0_4_ = (groundHit->positionTouchingHit).x;
    uStack_19._4_4_ = (groundHit->positionTouchingHit).y;
    uStack_20 = *(undefined8 *)&(groundHit->positionTouchingHit).z;
    uVar21 = *(undefined8 *)&(groundHit->elipsoidNormal).z;
    uVar22 = (groundHit->slopeNormal).y;
    uVar23 = (groundHit->slopeNormal).z;
    uStack_24._0_4_ = (groundHit->impactVelocity).x;
    uStack_24._4_4_ = (groundHit->impactVelocity).y;
    uStack_25 = *(undefined8 *)&(groundHit->impactVelocity).z;
    uStack_26 = (undefined4)uVar21;
    uStack_15 = (undefined4)((ulonglong)uVar21 >> 0x20);
    aVStack_27[0].x = (groundHit->hit).point.x;
    aVStack_27[0].y = (groundHit->hit).point.y;
    aVStack_27._8_8_ = *(undefined8 *)&(groundHit->hit).point.z;
    aVStack_27[1].y = (groundHit->hit).normal.y;
    aVStack_27[1].z = (groundHit->hit).normal.z;
    aVStack_27[2]._0_6_ = (groundHit->hit).cubePos;
    aVStack_27[2].y._2_2_ = *(undefined2 *)&(groundHit->hit).field_0x1e;
    aVStack_27[2].z = (groundHit->hit).face;
    aVStack_27[3].x._0_1_ = (groundHit->hit).isCubeHit;
    aVStack_27[3].x._1_3_ = *(undefined3 *)&(groundHit->hit).field_0x25;
    aVStack_27[3].y = (groundHit->hit).woId;
    aVStack_27[3].z = *(undefined4 *)&(groundHit->hit).field_0x2c;
    pCStack_28 = (groundHit->hit).cube;
    uStack_29._0_4_ = (groundHit->hit).distance;
    uStack_29._4_4_ = *(undefined4 *)&(groundHit->hit).field_0x3c;
    pCStack_30 = (groundHit->hit).collider;
    pTStack_31 = (groundHit->hit).transform;
    iStack_32 = (groundHit->hit).interactionFlags;
    pMStack_33 = groundHit->material;
    uStack_34 = uVar22;
    fStack_35 = (float)uVar23;
    if (controller != (MvCharacterController *)0x0) {
      VStack_36.point._0_8_ = aVStack_27[0]._0_8_;
      VStack_36._8_8_ = aVStack_27._8_8_;
      VStack_36.normal._4_8_ = aVStack_27[1]._4_8_;
      VStack_36._24_8_ = aVStack_27[2]._0_8_;
      VStack_36._32_8_ = aVStack_27._32_8_;
      VStack_36._40_8_ = aVStack_27[3]._4_8_;
      VStack_36.cube = pCStack_28;
      VStack_36._56_8_ = uStack_29;
      VStack_36.collider = pCStack_30;
      VStack_36.transform = pTStack_31;
      VStack_36.interactionFlags = iStack_32;
      pVVar37 = MvCharacterController::MvCharacterController_GetGradientDirection
                          (&VStack_38,controller,&VStack_36,(MethodInfo *)0x0);
      bVar8 = cRam_? == '\0';
      uStack_39._0_4_ = pVVar37->x;
      uStack_39._4_4_ = pVVar37->y;
      fStack_40 = pVVar37->z;
      (this->fields).gradientDirection.x = (float)(undefined4)uStack_39;
      (this->fields).gradientDirection.y = (float)uStack_39._4_4_;
      (this->fields).gradientDirection.z = fStack_40;
      if (bVar8) {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_38.x = (pVVar2->upVector).x;
      VStack_38.y = (pVVar2->upVector).y;
      VStack_38.z = (pVVar2->upVector).z;
      fVar4 = (float)FUN_?(&VStack_38,&uStack_39);
      bVar8 = cRam_? == '\0';
      (this->fields).gradientAngle = fVar4 - _UNK_?;
      if (bVar8) {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar5 != (MVGameControllerBase *)0x0) &&
         (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) {
        uStack_19._0_4_ = (groundHit->positionTouchingHit).x;
        uStack_19._4_4_ = (groundHit->positionTouchingHit).y;
        uStack_20 = *(undefined8 *)&(groundHit->positionTouchingHit).z;
        pMVar7 = (pMVar6->fields)._MaterialRepository_k__BackingField;
        uStack_16._0_4_ = (groundHit->moveDirection).y;
        uStack_16._4_4_ = (groundHit->moveDirection).z;
        uStack_17._0_4_ = (groundHit->elipsoidNormal).x;
        uStack_17._4_4_ = (groundHit->elipsoidNormal).y;
        uStack_18 = *(undefined8 *)&groundHit->testWithOutMoving;
        uVar21 = *(undefined8 *)&(groundHit->elipsoidNormal).z;
        uVar41 = (groundHit->slopeNormal).y;
        uVar42 = (groundHit->slopeNormal).z;
        uStack_24._0_4_ = (groundHit->impactVelocity).x;
        uStack_24._4_4_ = (groundHit->impactVelocity).y;
        uStack_25 = *(undefined8 *)&(groundHit->impactVelocity).z;
        uStack_26 = (undefined4)uVar21;
        uStack_15 = (undefined4)((ulonglong)uVar21 >> 0x20);
        aVStack_27[0].x = (groundHit->hit).point.x;
        aVStack_27[0].y = (groundHit->hit).point.y;
        aVStack_27._8_8_ = *(undefined8 *)&(groundHit->hit).point.z;
        aVStack_27[1].y = (groundHit->hit).normal.y;
        aVStack_27[1].z = (groundHit->hit).normal.z;
        aVStack_27[2]._0_6_ = (groundHit->hit).cubePos;
        aVStack_27[2].y._2_2_ = *(undefined2 *)&(groundHit->hit).field_0x1e;
        aVStack_27[2].z = (groundHit->hit).face;
        aVStack_27[3].x._0_1_ = (groundHit->hit).isCubeHit;
        aVStack_27[3].x._1_3_ = *(undefined3 *)&(groundHit->hit).field_0x25;
        aVStack_27[3].y = (groundHit->hit).woId;
        aVStack_27[3].z = *(undefined4 *)&(groundHit->hit).field_0x2c;
        pCStack_28 = (groundHit->hit).cube;
        uStack_29._0_4_ = (groundHit->hit).distance;
        uStack_29._4_4_ = *(undefined4 *)&(groundHit->hit).field_0x3c;
        pCStack_30 = (groundHit->hit).collider;
        pTStack_31 = (groundHit->hit).transform;
        iStack_32 = (groundHit->hit).interactionFlags;
        pMStack_33 = groundHit->material;
        VStack_36.point.x = (groundHit->positionTouchingHit).x;
        VStack_36.point.y = (groundHit->positionTouchingHit).y;
        VStack_36._8_8_ = *(undefined8 *)&(groundHit->positionTouchingHit).z;
        VStack_36.normal.y = (groundHit->moveDirection).y;
        VStack_36.normal.z = (groundHit->moveDirection).z;
        VStack_36._24_8_ = *(undefined8 *)&groundHit->elipsoidNormal;
        VStack_36._32_8_ = *(undefined8 *)&(groundHit->elipsoidNormal).z;
        VStack_36.woId = (int32_t)(groundHit->slopeNormal).y;
        VStack_36._44_4_ = (groundHit->slopeNormal).z;
        VStack_36.cube = *(Cube **)&groundHit->impactVelocity;
        VStack_36._56_8_ = *(undefined8 *)&(groundHit->impactVelocity).z;
        VStack_36.collider = *(Collider **)&(groundHit->hit).point;
        VStack_36.transform = *(Transform **)&(groundHit->hit).point.z;
        VStack_36.interactionFlags._0_4_ = (groundHit->hit).normal.y;
        VStack_36.interactionFlags._4_4_ = (groundHit->hit).normal.z;
        uStack_43 = *(undefined8 *)&(groundHit->hit).cubePos;
        uStack_44._0_4_ = (groundHit->hit).face;
        uStack_44._4_1_ = (groundHit->hit).isCubeHit;
        uStack_44._5_3_ = *(undefined3 *)&(groundHit->hit).field_0x25;
        uStack_45 = *(undefined8 *)&(groundHit->hit).woId;
        pCStack_46 = (groundHit->hit).cube;
        uStack_47 = *(undefined8 *)&(groundHit->hit).distance;
        uStack_48 = *(undefined4 *)&(groundHit->hit).collider;
        uStack_49 = *(undefined4 *)((longlong)&(groundHit->hit).collider + 4);
        uStack_50 = *(undefined4 *)&(groundHit->hit).transform;
        uStack_51 = *(undefined4 *)((longlong)&(groundHit->hit).transform + 4);
        uStack_52 = (undefined4)(groundHit->hit).interactionFlags;
        uStack_53 = *(undefined4 *)((longlong)&(groundHit->hit).interactionFlags + 4);
        uStack_54 = *(undefined4 *)&groundHit->material;
        uStack_55 = *(undefined4 *)((longlong)&groundHit->material + 4);
        uStack_34 = uVar41;
        fStack_35 = (float)uVar42;
        uStack_56 = uStack_18;
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pCStack_28 == (Cube *)0x0) {
          materialId = 0;
        }
        else {
          pBVar57 = (pCStack_28->fields)._.faceMaterials;
          if (pBVar57 == (Byte__Array *)0x0) goto code_?;
          if ((uint)pBVar57->max_length <= (uint)uStack_44) {
            FUN_?();
            pcVar58 = (code *)swi(3);
            (*pcVar58)();
            return;
          }
          materialId = pBVar57->vector[(int)(uint)uStack_44];
        }
        if (pMVar7 != (MVMaterialRepository *)0x0) {
          pMVar59 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                              (pMVar7,materialId,(MethodInfo *)0x0);
          bVar8 = iRam_? == 0;
          (this->fields).groundMaterial = pMVar59;
          if (bVar8) {
            return;
          }
          uVar9 = (uint)((ulonglong)&this->fields >> 0xc);
          uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
          do {
            uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
            puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
            LOCK();
            bVar8 = uVar11 == *puVar12;
            if (bVar8) {
              *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
            }
            UNLOCK();
          } while (!bVar8);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
  return;
}


/* Void UpdateGroundStateWithHit(MvCharacterController, Boolean, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundStateWithHit
               (MVGroundState *this,MvCharacterController *controller,bool foundGroundHit,
               MVControllerColliderHit *groundHit,MethodInfo *method)

{
  auStack_1._0_4_ = (groundHit->positionTouchingHit).x;
  auStack_1._4_4_ = (groundHit->positionTouchingHit).y;
  auStack_1._8_8_ = *(undefined8 *)&(groundHit->positionTouchingHit).z;
  uStack_2._0_1_ = groundHit->testWithOutMoving;
  uStack_2._1_7_ = *(undefined7 *)&groundHit->field_0xa1;
  auStack_1._16_4_ = (groundHit->moveDirection).y;
  auStack_1._20_4_ = (groundHit->moveDirection).z;
  auStack_1._24_4_ = (groundHit->elipsoidNormal).x;
  auStack_1._28_4_ = (groundHit->elipsoidNormal).y;
  auStack_1._32_8_ = *(undefined8 *)&(groundHit->elipsoidNormal).z;
  auStack_1._40_4_ = (groundHit->slopeNormal).y;
  auStack_1._44_4_ = (groundHit->slopeNormal).z;
  auStack_1._48_4_ = (groundHit->impactVelocity).x;
  auStack_1._52_4_ = (groundHit->impactVelocity).y;
  auStack_1._56_8_ = *(undefined8 *)&(groundHit->impactVelocity).z;
  auStack_1._64_4_ = (groundHit->hit).point.x;
  auStack_1._68_4_ = (groundHit->hit).point.y;
  auStack_1._72_8_ = *(undefined8 *)&(groundHit->hit).point.z;
  auStack_1._80_4_ = (groundHit->hit).normal.y;
  auStack_1._84_4_ = (groundHit->hit).normal.z;
  auStack_1._88_6_ = (groundHit->hit).cubePos;
  auStack_1._94_2_ = *(undefined2 *)&(groundHit->hit).field_0x1e;
  auStack_1._96_4_ = (groundHit->hit).face;
  auStack_1[100] = (groundHit->hit).isCubeHit;
  auStack_1._101_3_ = *(undefined3 *)&(groundHit->hit).field_0x25;
  auStack_1._104_4_ = (groundHit->hit).woId;
  auStack_1._108_4_ = *(undefined4 *)&(groundHit->hit).field_0x2c;
  uStack_3 = (groundHit->hit).collider;
  uStack_4 = (groundHit->hit).transform;
  pCStack_5 = (groundHit->hit).cube;
  uStack_6._0_4_ = (groundHit->hit).distance;
  uStack_6._4_4_ = *(undefined4 *)&(groundHit->hit).field_0x3c;
  uStack_7 = (groundHit->hit).interactionFlags;
  uStack_8 = groundHit->material;
  MVGroundState_UpdateGroundData
            (this,controller,foundGroundHit,(MVControllerColliderHit *)auStack_1,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    auStack_1._88_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar9 = *(Collider **)&(this->fields).grounded;
  uVar10._0_1_ = (this->fields).grounded.fakeValue;
  uVar10._1_1_ = (this->fields).grounded.fakeValueChanged;
  uVar10._2_1_ = (this->fields).grounded.inited;
  uVar10._3_1_ = (this->fields).grounded.field_0xb;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    auStack_1._88_8_ = &UNK_?;
    FUN_?();
  }
  uStack_4 = (Transform *)CONCAT44(uStack_4._4_4_,uVar10);
  uStack_3 = pCVar9;
  if (cRam_? == '\0') {
    auStack_1._88_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    auStack_1._88_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._88_8_ = &UNK_?;
  bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_InternalDecrypt((ObscuredBool *)&uStack_3,(MethodInfo *)0x0);
  fVar12 = _UNK_?;
  if ((bVar11 == 0) || (_UNK_? < (this->fields).groundNormal.y)) {
    uVar13._0_1_ = (this->fields).grounded.fakeValue;
    uVar13._1_1_ = (this->fields).grounded.fakeValueChanged;
    uVar13._2_1_ = (this->fields).grounded.inited;
    uVar13._3_1_ = (this->fields).grounded.field_0xb;
    uStack_7 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
    uStack_8 = (MVMaterial *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
    pCVar9 = *(Collider **)&(this->fields).grounded;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    uStack_4 = (Transform *)CONCAT44(uStack_4._4_4_,uVar13);
    uStack_3 = pCVar9;
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._88_8_ = &UNK_?;
    bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt((ObscuredBool *)&uStack_3,(MethodInfo *)0x0);
    uVar10 = 0;
    if ((bVar11 != 0) || (uVar10 = 0, (this->fields).groundNormal.y <= fVar12))
    goto code_?;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = (Collider *)0x0;
    uStack_4 = (Transform *)((ulonglong)uStack_4 & 0xffffffff00000000);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._88_8_ = &UNK_?;
    iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_Encrypt(1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    uStack_3 = (Collider *)CONCAT44(iVar14,(undefined4)uStack_3);
    uStack_4 = (Transform *)CONCAT53((int5)((ulonglong)uStack_4 >> 0x18),0x10000);
    uStack_3 = (Collider *)
                CONCAT71(uStack_3._1_7_,
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields
                         ->cryptoKey);
    auStack_1._88_8_ = &UNK_?;
    bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar11 != 0) {
      uStack_4 = (Transform *)CONCAT62(uStack_4._2_6_,0x101);
    }
    uVar10 = 2;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = (Collider *)0x0;
    uStack_4 = (Transform *)((ulonglong)uStack_4 & 0xffffffff00000000);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._88_8_ = &UNK_?;
    iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    uStack_3 = (Collider *)CONCAT44(iVar14,(undefined4)uStack_3);
    uVar15 = (ulonglong)uStack_4 >> 0x18;
    uStack_4._0_2_ = (ushort)uStack_4 & 0xff00;
    uStack_4._0_3_ = CONCAT12(1,(ushort)uStack_4);
    uStack_4 = (Transform *)CONCAT53((int5)uVar15,(undefined3)uStack_4);
    uStack_3 = (Collider *)
                CONCAT71(uStack_3._1_7_,
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields
                         ->cryptoKey);
    auStack_1._88_8_ = &UNK_?;
    bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    uVar10 = 1;
    uStack_4._0_2_ = CONCAT11(bVar11 != 0,(bool)uStack_4);
  }
  pTVar16 = uStack_4;
  *(Collider **)&(this->fields).grounded = uStack_3;
  (this->fields).grounded.fakeValue = (bool)uStack_4;
  (this->fields).grounded.fakeValueChanged = uStack_4._1_1_;
  (this->fields).grounded.inited = uStack_4._2_1_;
  (this->fields).grounded.field_0xb = uStack_4._3_1_;
  uStack_4 = pTVar16;
code_?:
  if ((this->fields).OnGroundChange != (Action_1_GroundChange_ *)0x0) {
    pAVar17 = (this->fields).OnGroundChange;
    auStack_1._88_8_ = &UNK_?;
    (*(pAVar17->fields)._._.invoke_impl)
              ((pAVar17->fields)._._.method_code,uVar10,(pAVar17->fields)._._.method);
  }
  return;
}


/* Void UpdateGroundStateWithHitExternal(MvCharacterController, MVControllerColliderHit) */

void Assembly-CSharp.dll::MVGroundState::MVGroundState_UpdateGroundStateWithHitExternal
               (MVGroundState *this,MvCharacterController *controller,
               MVControllerColliderHit *groundHit,MethodInfo *method)

{
  auStack_1._0_4_ = (groundHit->positionTouchingHit).x;
  auStack_1._4_4_ = (groundHit->positionTouchingHit).y;
  auStack_1._8_8_ = *(undefined8 *)&(groundHit->positionTouchingHit).z;
  uStack_2._0_1_ = groundHit->testWithOutMoving;
  uStack_2._1_7_ = *(undefined7 *)&groundHit->field_0xa1;
  auStack_1._16_4_ = (groundHit->moveDirection).y;
  auStack_1._20_4_ = (groundHit->moveDirection).z;
  auStack_1._24_4_ = (groundHit->elipsoidNormal).x;
  auStack_1._28_4_ = (groundHit->elipsoidNormal).y;
  auStack_1._32_8_ = *(undefined8 *)&(groundHit->elipsoidNormal).z;
  auStack_1._40_4_ = (groundHit->slopeNormal).y;
  auStack_1._44_4_ = (groundHit->slopeNormal).z;
  auStack_1._48_4_ = (groundHit->impactVelocity).x;
  auStack_1._52_4_ = (groundHit->impactVelocity).y;
  auStack_1._56_8_ = *(undefined8 *)&(groundHit->impactVelocity).z;
  auStack_1._64_4_ = (groundHit->hit).point.x;
  auStack_1._68_4_ = (groundHit->hit).point.y;
  auStack_1._72_8_ = *(undefined8 *)&(groundHit->hit).point.z;
  auStack_1._80_4_ = (groundHit->hit).normal.y;
  auStack_1._84_4_ = (groundHit->hit).normal.z;
  auStack_1._88_6_ = (groundHit->hit).cubePos;
  auStack_1._94_2_ = *(undefined2 *)&(groundHit->hit).field_0x1e;
  auStack_1._96_4_ = (groundHit->hit).face;
  auStack_1[100] = (groundHit->hit).isCubeHit;
  auStack_1._101_3_ = *(undefined3 *)&(groundHit->hit).field_0x25;
  auStack_1._104_4_ = (groundHit->hit).woId;
  auStack_1._108_4_ = *(undefined4 *)&(groundHit->hit).field_0x2c;
  uStack_3 = (groundHit->hit).collider;
  uStack_4 = (groundHit->hit).transform;
  pCStack_5 = (groundHit->hit).cube;
  uStack_6._0_4_ = (groundHit->hit).distance;
  uStack_6._4_4_ = *(undefined4 *)&(groundHit->hit).field_0x3c;
  uStack_7 = (groundHit->hit).interactionFlags;
  uStack_8 = groundHit->material;
  MVGroundState_UpdateGroundData
            (this,controller,1,(MVControllerColliderHit *)auStack_1,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    auStack_1._88_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar9 = *(Collider **)&(this->fields).grounded;
  uVar10._0_1_ = (this->fields).grounded.fakeValue;
  uVar10._1_1_ = (this->fields).grounded.fakeValueChanged;
  uVar10._2_1_ = (this->fields).grounded.inited;
  uVar10._3_1_ = (this->fields).grounded.field_0xb;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    auStack_1._88_8_ = &UNK_?;
    FUN_?();
  }
  uStack_4 = (Transform *)CONCAT44(uStack_4._4_4_,uVar10);
  uStack_3 = pCVar9;
  if (cRam_? == '\0') {
    auStack_1._88_8_ = &UNK_?;
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    auStack_1._88_8_ = &UNK_?;
    FUN_?();
  }
  auStack_1._88_8_ = &UNK_?;
  bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_InternalDecrypt((ObscuredBool *)&uStack_3,(MethodInfo *)0x0);
  fVar12 = _UNK_?;
  if ((bVar11 == 0) || (_UNK_? < (this->fields).groundNormal.y)) {
    uVar13._0_1_ = (this->fields).grounded.fakeValue;
    uVar13._1_1_ = (this->fields).grounded.fakeValueChanged;
    uVar13._2_1_ = (this->fields).grounded.inited;
    uVar13._3_1_ = (this->fields).grounded.field_0xb;
    uStack_7 = CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
    uStack_8 = (MVMaterial *)CONCAT44(unaff_XMM7_Dd,unaff_XMM7_Dc);
    pCVar9 = *(Collider **)&(this->fields).grounded;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    uStack_4 = (Transform *)CONCAT44(uStack_4._4_4_,uVar13);
    uStack_3 = pCVar9;
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._88_8_ = &UNK_?;
    bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt((ObscuredBool *)&uStack_3,(MethodInfo *)0x0);
    uVar10 = 0;
    if ((bVar11 != 0) || (uVar10 = 0, (this->fields).groundNormal.y <= fVar12))
    goto code_?;
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = (Collider *)0x0;
    uStack_4 = (Transform *)((ulonglong)uStack_4 & 0xffffffff00000000);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._88_8_ = &UNK_?;
    iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_Encrypt(1,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    uStack_3 = (Collider *)CONCAT44(iVar14,(undefined4)uStack_3);
    uStack_4 = (Transform *)CONCAT53((int5)((ulonglong)uStack_4 >> 0x18),0x10000);
    uStack_3 = (Collider *)
                CONCAT71(uStack_3._1_7_,
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields
                         ->cryptoKey);
    auStack_1._88_8_ = &UNK_?;
    bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    if (bVar11 != 0) {
      uStack_4 = (Transform *)CONCAT62(uStack_4._2_6_,0x101);
    }
    uVar10 = 2;
  }
  else {
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_3 = (Collider *)0x0;
    uStack_4 = (Transform *)((ulonglong)uStack_4 & 0xffffffff00000000);
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?();
    }
    auStack_1._88_8_ = &UNK_?;
    iVar14 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      auStack_1._88_8_ = &UNK_?;
      FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    }
    uStack_3 = (Collider *)CONCAT44(iVar14,(undefined4)uStack_3);
    uVar15 = (ulonglong)uStack_4 >> 0x18;
    uStack_4._0_2_ = (ushort)uStack_4 & 0xff00;
    uStack_4._0_3_ = CONCAT12(1,(ushort)uStack_4);
    uStack_4 = (Transform *)CONCAT53((int5)uVar15,(undefined3)uStack_4);
    uStack_3 = (Collider *)
                CONCAT71(uStack_3._1_7_,
                         TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields
                         ->cryptoKey);
    auStack_1._88_8_ = &UNK_?;
    bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector
            ::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
    uVar10 = 1;
    uStack_4._0_2_ = CONCAT11(bVar11 != 0,(bool)uStack_4);
  }
  pTVar16 = uStack_4;
  *(Collider **)&(this->fields).grounded = uStack_3;
  (this->fields).grounded.fakeValue = (bool)uStack_4;
  (this->fields).grounded.fakeValueChanged = uStack_4._1_1_;
  (this->fields).grounded.inited = uStack_4._2_1_;
  (this->fields).grounded.field_0xb = uStack_4._3_1_;
  uStack_4 = pTVar16;
code_?:
  if ((this->fields).OnGroundChange != (Action_1_GroundChange_ *)0x0) {
    pAVar17 = (this->fields).OnGroundChange;
    auStack_1._88_8_ = &UNK_?;
    (*(pAVar17->fields)._._.invoke_impl)
              ((pAVar17->fields)._._.method_code,uVar10,(pAVar17->fields)._._.method);
  }
  return;
}


/* MVGroundState() */

void Assembly-CSharp.dll::MVGroundState::MVGroundState__ctor(MVGroundState *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (MVMaterial *)FUN_?(TypeInfo__MVMaterial);
  bVar2 = iRam_? != 0;
  (this->fields).groundMaterial = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_Encrypt(0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
  }
  lStack_7 = (ulonglong)uVar3 << 0x20;
  uVar8 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->static_fields->cryptoKey;
  bVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::
          ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  uStack_10._0_2_ = (ushort)(bVar9 != 0) << 8;
  uStack_10 = (uint)CONCAT12(1,(short)uStack_10);
  bVar2 = cRam_? == '\0';
  (this->fields).grounded.currentCryptoKey = uVar8;
  *(undefined3 *)&(this->fields).grounded.field_0x1 = lStack_7._1_3_;
  (this->fields).grounded.hiddenValue = lStack_7._4_4_;
  (this->fields).grounded.fakeValue = (undefined1)uStack_10;
  (this->fields).grounded.fakeValueChanged = uStack_10._1_1_;
  (this->fields).grounded.inited = uStack_10._2_1_;
  (this->fields).grounded.field_0xb = uStack_10._3_1_;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar12 = (pVVar11->zeroVector).y;
  fVar13 = (pVVar11->zeroVector).z;
  (this->fields).groundNormal.x = (pVVar11->zeroVector).x;
  (this->fields).groundNormal.y = fVar12;
  (this->fields).groundNormal.z = fVar13;
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
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_1_ = (this->fields).grounded.currentCryptoKey;
  uVar1._1_3_ = *(undefined3 *)&(this->fields).grounded.field_0x1;
  uVar1._4_4_ = (this->fields).grounded.hiddenValue;
  uVar2._0_1_ = (this->fields).grounded.fakeValue;
  uVar2._1_1_ = (this->fields).grounded.fakeValueChanged;
  uVar2._2_1_ = (this->fields).grounded.inited;
  uVar2._3_1_ = (this->fields).grounded.field_0xb;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_3._0_8_ = uVar1;
  OStack_3._8_4_ = uVar2;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  bVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
          ObscuredBool_InternalDecrypt(&OStack_3,(MethodInfo *)0x0);
  return bVar4;
}

