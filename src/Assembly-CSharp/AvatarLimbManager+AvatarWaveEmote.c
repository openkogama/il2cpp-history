
/* Void HandleArmRotation(LimbController, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_HandleArmRotation
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,float yawAngle
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  auVar1._4_8_ = 0;
  auVar1._0_4_ = yawAngle * _UNK_?;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffb0,(Vector3)(auVar1 << 0x20),(MethodInfo *)0x0);
  func_?(SUB84((double)(((this->fields)._.duration / (this->fields)._.lifeTime) *
                                 _UNK_? * _UNK_?),0));
  fVar3 = (float10)func_?();
  fVar4 = pQVar2->y;
  fVar5 = pQVar2->z;
  if ((float)fVar3 == 0.0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar6 = 0.0;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffc0,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
    fVar7 = pQVar2->z;
    fVar8 = pQVar2->w;
    if (armController == (LimbController *)0x0) goto code_?;
    if (pQVar2->y * (armController->fields).interpolateTowardsPitchRotation.y +
        pQVar2->x * (armController->fields).interpolateTowardsPitchRotation.x +
        fVar7 * (armController->fields).interpolateTowardsPitchRotation.z +
        fVar8 * (armController->fields).interpolateTowardsPitchRotation.w <= _UNK_?) {
      fVar9 = 0.0;
      pLVar10 = armController;
      LimbController::LimbController_ResetInterpolation(armController,(MethodInfo *)0x0);
      QVar11.y = fVar4;
      QVar11.x = fVar6;
      QVar11.z = fVar5;
      QVar11.w = (float)pLVar10;
      PitchRotation.y = fVar9;
      PitchRotation.x = (float)pLVar10;
      PitchRotation.z = fVar7;
      PitchRotation.w = fVar8;
      LimbController::LimbController_SetNewRotation
                (armController,QVar11,PitchRotation,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    euler.y = 0.0;
    euler.z = 0.0;
    euler.x = (float)_UNK_?;
    pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                       ((Quaternion *)&stack0xffffffb0,euler,(MethodInfo *)0x0);
    QVar11 = *pQVar2;
    uVar12 = pQVar2->y;
    uVar13 = pQVar2->z;
    uVar14 = pQVar2->w;
    yawRotation.z = (float)uVar14;
    yawRotation.y = (float)uVar13;
    yawRotation.x = (float)uVar12;
    if (armController == (LimbController *)0x0) {
code_?:
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    if (pQVar2->x * (armController->fields).interpolateTowardsPitchRotation.x +
        pQVar2->y * (armController->fields).interpolateTowardsPitchRotation.y +
        pQVar2->z * (armController->fields).interpolateTowardsPitchRotation.z +
        pQVar2->w * (armController->fields).interpolateTowardsPitchRotation.w <= _UNK_?) {
      LimbController::LimbController_ResetInterpolation(armController,(MethodInfo *)0x0);
      yawRotation.w = 0.0;
      LimbController::LimbController_SetNewRotation
                (armController,yawRotation,QVar11,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_Initialize
               (AvatarLimbManager_AvatarWaveEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  (this->fields)._.limbRotator = limbRotator;
  func_?(&(this->fields)._.limbRotator,limbRotator);
  (this->fields)._.lifeTime = lifeTime;
  if (limbRotator != (AvatarLimbManager_LimbRotator *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    bVar1 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (limbRotator,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pLVar2 = (LimbController *)0x0;
    }
    else {
      pDVar3 = (limbRotator->fields).limbControllers;
      if (pDVar3 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
      pLVar2 = (LimbController *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,2,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
    }
    (this->fields).RArmController = pLVar2;
    func_?(&(this->fields).RArmController,pLVar2);
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                     );
      cRam_? = '\x01';
    }
    bVar1 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_HasLimbController
                      (limbRotator,BodyData_PartIndex__Enum_LArm,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pLVar2 = (LimbController *)0x0;
    }
    else {
      pDVar3 = (limbRotator->fields).limbControllers;
      if (pDVar3 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
      pLVar2 = (LimbController *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar3,3,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
    }
    (this->fields).LArmController = pLVar2;
    func_?(&(this->fields).LArmController,pLVar2);
    pLVar2 = (this->fields).RArmController;
    if (pLVar2 != (LimbController *)0x0) {
      (this->fields).originalInterpolationSpeed = (pLVar2->fields).interpolationSpeed;
      (this->fields)._.emote = 3;
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void MoveArmDownwards(LimbController, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_MoveArmDownwards
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,
               Quaternion yawRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  fVar2 = pQVar1->x;
  if (armController != (LimbController *)0x0) {
    if (pQVar1->y * (armController->fields).interpolateTowardsPitchRotation.y +
        fVar2 * (armController->fields).interpolateTowardsPitchRotation.x +
        pQVar1->z * (armController->fields).interpolateTowardsPitchRotation.z +
        pQVar1->w * (armController->fields).interpolateTowardsPitchRotation.w <= _UNK_?) {
      fVar3 = 0.0;
      puVar4 = &UNK_?;
      pLVar5 = armController;
      LimbController::LimbController_ResetInterpolation(armController,(MethodInfo *)0x0);
      PitchRotation.y = (float)puVar4;
      PitchRotation.x = fVar2;
      PitchRotation.z = (float)pLVar5;
      PitchRotation.w = fVar3;
      LimbController::LimbController_SetNewRotation
                (armController,yawRotation,PitchRotation,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void MoveArmUpwards(LimbController, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_MoveArmUpwards
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,
               Quaternion yawRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = (float)_UNK_?;
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffec,euler,(MethodInfo *)0x0);
  fVar2 = pQVar1->x;
  if (armController != (LimbController *)0x0) {
    if (pQVar1->y * (armController->fields).interpolateTowardsPitchRotation.y +
        fVar2 * (armController->fields).interpolateTowardsPitchRotation.x +
        pQVar1->z * (armController->fields).interpolateTowardsPitchRotation.z +
        pQVar1->w * (armController->fields).interpolateTowardsPitchRotation.w <= _UNK_?) {
      fVar3 = 0.0;
      puVar4 = &UNK_?;
      pLVar5 = armController;
      LimbController::LimbController_ResetInterpolation(armController,(MethodInfo *)0x0);
      PitchRotation.y = (float)puVar4;
      PitchRotation.x = fVar2;
      PitchRotation.z = (float)pLVar5;
      PitchRotation.w = fVar3;
      LimbController::LimbController_SetNewRotation
                (armController,yawRotation,PitchRotation,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_StartEmote
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  (this->fields)._.duration = (this->fields)._.lifeTime;
  pLVar2 = (this->fields).RArmController;
  (this->fields)._.isActive = 1;
  fVar3 = _UNK_?;
  fVar4 = _UNK_?;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed =
         (_UNK_? / (this->fields)._.lifeTime) * _UNK_?;
    pLVar2 = (this->fields).RArmController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 1;
      pLVar2 = (this->fields).LArmController;
      if (pLVar2 != (LimbController *)0x0) {
        (pLVar2->fields).interpolationSpeed = (fVar3 / (this->fields)._.lifeTime) * fVar4;
        pLVar2 = (this->fields).LArmController;
        if (pLVar2 != (LimbController *)0x0) {
          (pLVar2->fields).isEventControllingLimb = 1;
          return;
        }
      }
    }
  }
  uVar5 = func_?(auStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_StopEmote
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnEmoteEnd;
  (this->fields)._.duration = 0.0;
  (this->fields)._.isActive = 0;
  if (pAVar1 != (Action_1_EmoteTypes_ *)0x0) {
    pAVar1 = (this->fields)._.OnEmoteEnd;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields)._.emote,(pAVar1->fields)._._.method);
  }
  pLVar2 = (this->fields).RArmController;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
    pLVar2 = (this->fields).RArmController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 0;
      pLVar2 = (this->fields).RArmController;
      if (pLVar2 != (LimbController *)0x0) {
        LimbController::LimbController_StopRotating(pLVar2,(MethodInfo *)0x0);
        pLVar2 = (this->fields).LArmController;
        if (pLVar2 != (LimbController *)0x0) {
          (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
          pLVar2 = (this->fields).LArmController;
          if (pLVar2 != (LimbController *)0x0) {
            (pLVar2->fields).isEventControllingLimb = 0;
            if ((this->fields).LArmController != (LimbController *)0x0) {
              if (*(char *)(in_stack_3 + 0x88) == '\0') {
                *(undefined1 *)(in_stack_3 + 0x78) = 0;
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_Update
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.duration;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields)._.duration = fVar1;
    if (0.0 < fVar1) {
      AvatarLimbManager_AvatarWaveEmote_HandleArmRotation
                (this,(this->fields).RArmController,65.0,(MethodInfo *)0x0);
      AvatarLimbManager_AvatarWaveEmote_HandleArmRotation
                (this,(this->fields).LArmController,295.0,(MethodInfo *)0x0);
      return;
    }
    (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
  }
  return;
}

