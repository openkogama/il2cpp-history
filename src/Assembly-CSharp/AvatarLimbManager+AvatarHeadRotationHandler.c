
/* Single CalculateHeadPitchRotationModifier(Single) */

float Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_CalculateHeadPitchRotationModifier(AvatarLimbManager_AvatarHeadRotationHandler *this,float yawAngle,MethodInfo *method)

{
  if (180.0 < yawAngle) {
    yawAngle = 360.0 - yawAngle;
  }
  if ((this->fields).shouldLean == 0) {
    yawAngle = 90.0;
  }
  return 1.0 / ((0.71 - yawAngle / 90.0) + 0.6);
}


/* Single CalculateTorsoRotationModifier(Single) */

float Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_CalculateTorsoRotationModifier(AvatarLimbManager_AvatarHeadRotationHandler *this,float yawAngle,MethodInfo *method)

{
  if (180.0 < yawAngle) {
    yawAngle = 360.0 - yawAngle;
  }
  if ((this->fields).shouldLean == 0) {
    yawAngle = 90.0;
  }
  return 1.5 / (1.01 - yawAngle / 90.0);
}


/* Quaternion ClampQuaternion(Quaternion) */

Quaternion * Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_ClampQuaternion(Quaternion *__return_storage_ptr__,AvatarLimbManager_AvatarHeadRotationHandler *this,Quaternion rotation,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?();
  fStack_2 = (float)*puVar1;
  fStack_3 = (float)((ulonglong)*puVar1 >> 0x20);
  if (((45.0 < fStack_2) && (fVar4 = 45.0, fStack_2 <= 180.0)) || ((fStack_2 < 315.0 && (fVar4 = 315.0, 180.0 < fStack_2)))) {
    fStack_2 = fVar4;
  }
  fVar4 = 90.0;
  if (((90.0 < fStack_3) && (fStack_3 <= 180.0)) || ((fVar4 = 270.0, fStack_3 < 270.0 && (180.0 < fStack_3)))) {
    fStack_3 = fVar4;
  }
  func_?(&rotation,CONCAT44(fStack_3,fStack_2),*(undefined4 *)(puVar1 + 1),0);
  __return_storage_ptr__->x = rotation.x;
  __return_storage_ptr__->y = rotation.y;
  __return_storage_ptr__->z = rotation.z;
  __return_storage_ptr__->w = rotation.w;
  return __return_storage_ptr__;
}


/* Void Initialize(AvatarLimbManager, AvatarLimbManager+LimbRotator, AvatarLimbManager+AvatarLookDirectionHandler) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_Initialize(AvatarLimbManager_AvatarHeadRotationHandler *this,AvatarLimbManager *limbManager,AvatarLimbManager_LimbRotator *limbRotator,AvatarLimbManager_AvatarLookDirectionHandler *lookDirectionHandler,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x100d);
    cRam_? = '\x01';
  }
  (this->fields).limbRotator = limbRotator;
  if (limbManager != (AvatarLimbManager *)0x0) {
    pAVar1 = (limbManager->fields).OnAvatarRotate;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor(this_00,(Object *)this,MethodInfo__AvatarLimbManager__AvatarHeadRotationHandler__ResetIdleTimer__,(MethodInfo *)0x0);
    pAVar2 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (limbManager->fields).OnAvatarRotate = pAVar1;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ResetIdleTimer() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer(AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x100e);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).limbRotator;
  (this->fields).idleTime = 0.0;
  animation = StringLiteral_Idle;
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?(0x3cf6);
      cRam_? = '\x01';
    }
    bVar1 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController(this_00,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (this_00->fields).limbControllers;
    if ((this_01 != (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) && (this_02 = (LimbController *)mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_01,BodyData_PartIndex__Enum_Head,MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_), this_02 != (LimbController *)0x0)) {
      LimbController::LimbController_StopBlendingWithAnimation(this_02,animation,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetIdleTimer(EmoteTypes) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer_1(AvatarLimbManager_AvatarHeadRotationHandler *this,EmoteTypes__Enum emoteType,MethodInfo *method)

{
  AvatarLimbManager_AvatarHeadRotationHandler_ResetIdleTimer(this,(MethodInfo *)0x0);
  return;
}


/* Void RotateHead(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_RotateHead(AvatarLimbManager_AvatarHeadRotationHandler *this,Quaternion yawRotation,Quaternion pitchRotation,MethodInfo *method)

{
  puVar1 = (undefined8 *)func_?(auStack_2,&yawRotation,0);
  uVar3 = *puVar1;
  uStack_4._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  if (180.0 < uStack_4._4_4_) {
    uStack_4._4_4_ = 360.0 - uStack_4._4_4_;
  }
  if ((this->fields).shouldLean == 0) {
    uStack_4._4_4_ = 90.0;
  }
  this_00 = (this->fields).limbRotator;
  uStack_4 = uVar3;
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    limbYawRotation.y = yawRotation.y;
    limbYawRotation.x = yawRotation.x;
    limbYawRotation.z = yawRotation.z;
    limbYawRotation.w = yawRotation.w;
    limbPitchRotation.y = pitchRotation.y;
    limbPitchRotation.x = pitchRotation.x / (1.0 / ((0.71 - uStack_4._4_4_ / 90.0) + 0.6));
    limbPitchRotation.z = pitchRotation.z;
    limbPitchRotation.w = pitchRotation.w;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_TrySetLimbRotation(this_00,BodyData_PartIndex__Enum_Head,limbYawRotation,limbPitchRotation,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RotateTorso(Quaternion, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_RotateTorso(AvatarLimbManager_AvatarHeadRotationHandler *this,Quaternion yawRotation,Quaternion pitchRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x100f);
    cRam_? = '\x01';
  }
  puVar1 = (undefined8 *)func_?(auStack_2,&yawRotation,0);
  uVar3 = *puVar1;
  uStack_4._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  if (180.0 < uStack_4._4_4_) {
    uStack_4._4_4_ = 360.0 - uStack_4._4_4_;
  }
  fVar5 = uStack_4._4_4_;
  if ((this->fields).shouldLean == 0) {
    fVar5 = 90.0;
  }
  this_00 = (this->fields).limbRotator;
  uStack_4 = uVar3;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity((Quaternion *)&stack0xffffffe0,(MethodInfo *)0x0);
  if (this_00 != (AvatarLimbManager_LimbRotator *)0x0) {
    limbPitchRotation.y = pitchRotation.y;
    limbPitchRotation.x = pitchRotation.x / (1.5 / (1.01 - fVar5 / 90.0));
    limbPitchRotation.z = pitchRotation.z;
    limbPitchRotation.w = pitchRotation.w;
    AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_TrySetLimbRotation(this_00,BodyData_PartIndex__Enum_Torso,*pQVar6,limbPitchRotation,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void UpdateIdleTimer() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_UpdateIdleTimer(AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x1010);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).idleTime;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar2 = fVar2 + fVar1;
  (this->fields).idleTime = fVar2;
  animation = StringLiteral_Idle;
  if (2.0 <= fVar2) {
    this_00 = (this->fields).limbRotator;
    if (this_00 == (AvatarLimbManager_LimbRotator *)0x0) {
code_?:
      func_?(0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (cRam_? == '\0') {
      func_?(0x3cf5);
      cRam_? = '\x01';
    }
    bVar4 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController(this_00,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      this_01 = (this_00->fields).limbControllers;
      if ((this_01 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) || (this_02 = (LimbController *)mscorlib.dll::System::Collections::Generic::Dictionary`2[BodyData+PartIndex,System::Object]::Dictionary_2_BodyData_PartIndex_System_Object__get_Item((Dictionary_2_BodyData_PartIndex_System_Object_ *)this_01,BodyData_PartIndex__Enum_Head,MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_), this_02 == (LimbController *)0x0)) goto code_?;
      LimbController::LimbController_StartBlendingWithAnimation(this_02,animation,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void UpdateRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler_UpdateRotation(AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).UpdateIdleTimer.method)(this,this->klass[1]._0.image);
  (this->fields).shouldLean = 1;
  return;
}


/* AvatarLimbManager+AvatarHeadRotationHandler() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarHeadRotationHandler::AvatarLimbManager_AvatarHeadRotationHandler__ctor(AvatarLimbManager_AvatarHeadRotationHandler *this,MethodInfo *method)

{
  (this->fields).shouldLean = 1;
  return;
}

