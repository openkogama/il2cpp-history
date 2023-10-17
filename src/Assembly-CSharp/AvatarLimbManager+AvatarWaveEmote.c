
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
  uStack_1 = 0;
  QStack_2.x = 0.0;
  QStack_2.y = 0.0;
  QStack_2.z = 0.0;
  QStack_2.w = 0.0;
  auVar3._4_8_ = 0;
  auVar3._0_4_ = yawAngle * _UNK_?;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     ((Quaternion *)&stack0xffffffc0,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0);
  dStack_5 = (double)(((this->fields)._.duration / (this->fields)._.lifeTime) * _UNK_? *
                      _UNK_?);
  fVar6 = (float10)func_?(SUB84(dStack_5,0));
  dStack_5 = (double)((float)fVar6 + _UNK_?);
  fVar6 = (float10)func_?();
  dStack_5 = (double)fVar6;
  fVar7 = pQVar4->y;
  fVar8 = pQVar4->z;
  fVar9 = pQVar4->w;
  if ((float)fVar6 == QStack_2.x) {
    fVar10 = QStack_2.x;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      fVar10 = QStack_2.x;
    }
  }
  else {
    fVar10 = _UNK_?;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
      fVar10 = _UNK_?;
    }
  }
  fVar11 = 0.0;
  uStack_1 = 0;
  euler.y = QStack_2.x;
  euler.x = fVar10;
  euler.z = 0.0;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_2,euler,(MethodInfo *)0x0);
  fVar10 = pQVar4->x;
  fVar12 = pQVar4->y;
  fVar13 = pQVar4->z;
  fVar14 = pQVar4->w;
  if (armController == (LimbController *)0x0) {
    QStack_2.y = (float)&UNK_?;
    func_?();
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if ((armController->fields).interpolateTowardsPitchRotation.y * fVar12 +
      (armController->fields).interpolateTowardsPitchRotation.x * fVar10 +
      (armController->fields).interpolateTowardsPitchRotation.z * fVar13 +
      (armController->fields).interpolateTowardsPitchRotation.w * fVar14 <= _UNK_?) {
    (armController->fields).elapsedInterpolationTime = 0.0;
    (armController->fields).elapsedInterpolateAnimationTime = 0.0;
    (armController->fields).shouldRotate = 1;
    (armController->fields).rotationDuration = 0.0;
    (armController->fields).interpolateTowardsYawRotation.x = fVar11;
    (armController->fields).interpolateTowardsYawRotation.y = fVar7;
    (armController->fields).interpolateTowardsYawRotation.z = fVar8;
    (armController->fields).interpolateTowardsYawRotation.w = fVar9;
    (armController->fields).interpolateTowardsPitchRotation.x = fVar10;
    (armController->fields).interpolateTowardsPitchRotation.y = fVar12;
    (armController->fields).interpolateTowardsPitchRotation.z = fVar13;
    (armController->fields).interpolateTowardsPitchRotation.w = fVar14;
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
  QStack_1.w = 0.0;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_1,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  fVar3 = pQVar2->x;
  fVar4 = pQVar2->y;
  fVar5 = pQVar2->z;
  fVar6 = pQVar2->w;
  if (armController != (LimbController *)0x0) {
    if ((armController->fields).interpolateTowardsPitchRotation.y * fVar4 +
        (armController->fields).interpolateTowardsPitchRotation.x * fVar3 +
        (armController->fields).interpolateTowardsPitchRotation.z * fVar5 +
        (armController->fields).interpolateTowardsPitchRotation.w * fVar6 <= _UNK_?) {
      (armController->fields).elapsedInterpolationTime = 0.0;
      (armController->fields).elapsedInterpolateAnimationTime = 0.0;
      (armController->fields).shouldRotate = 1;
      (armController->fields).rotationDuration = 0.0;
      (armController->fields).interpolateTowardsYawRotation.x = yawRotation.x;
      (armController->fields).interpolateTowardsYawRotation.y = yawRotation.y;
      (armController->fields).interpolateTowardsYawRotation.z = yawRotation.z;
      (armController->fields).interpolateTowardsYawRotation.w = yawRotation.w;
      (armController->fields).interpolateTowardsPitchRotation.x = fVar3;
      (armController->fields).interpolateTowardsPitchRotation.y = fVar4;
      (armController->fields).interpolateTowardsPitchRotation.z = fVar5;
      (armController->fields).interpolateTowardsPitchRotation.w = fVar6;
    }
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  QStack_1.w = 0.0;
  euler.y = 0.0;
  euler.z = 0.0;
  euler.x = (float)_UNK_?;
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                     (&QStack_1,euler,(MethodInfo *)0x0);
  fVar3 = pQVar2->x;
  fVar4 = pQVar2->y;
  fVar5 = pQVar2->z;
  fVar6 = pQVar2->w;
  if (armController != (LimbController *)0x0) {
    if ((armController->fields).interpolateTowardsPitchRotation.y * fVar4 +
        (armController->fields).interpolateTowardsPitchRotation.x * fVar3 +
        (armController->fields).interpolateTowardsPitchRotation.z * fVar5 +
        (armController->fields).interpolateTowardsPitchRotation.w * fVar6 <= _UNK_?) {
      (armController->fields).elapsedInterpolationTime = 0.0;
      (armController->fields).elapsedInterpolateAnimationTime = 0.0;
      (armController->fields).shouldRotate = 1;
      (armController->fields).rotationDuration = 0.0;
      (armController->fields).interpolateTowardsYawRotation.x = yawRotation.x;
      (armController->fields).interpolateTowardsYawRotation.y = yawRotation.y;
      (armController->fields).interpolateTowardsYawRotation.z = yawRotation.z;
      (armController->fields).interpolateTowardsYawRotation.w = yawRotation.w;
      (armController->fields).interpolateTowardsPitchRotation.x = fVar3;
      (armController->fields).interpolateTowardsPitchRotation.y = fVar4;
      (armController->fields).interpolateTowardsPitchRotation.z = fVar5;
      (armController->fields).interpolateTowardsPitchRotation.w = fVar6;
    }
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
        if ((pLVar2->fields).isEventControllingLimb == 0) {
          (pLVar2->fields).shouldRotate = 0;
        }
        pLVar2 = (this->fields).LArmController;
        if (pLVar2 != (LimbController *)0x0) {
          (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
          pLVar2 = (this->fields).LArmController;
          if (pLVar2 != (LimbController *)0x0) {
            (pLVar2->fields).isEventControllingLimb = 0;
            pLVar2 = (this->fields).LArmController;
            if (pLVar2 != (LimbController *)0x0) {
              if ((pLVar2->fields).isEventControllingLimb == 0) {
                (pLVar2->fields).shouldRotate = 0;
              }
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    (*(this->klass->vtable).StopEmote.methodPtr)(this,(this->klass->vtable).StopEmote.method);
  }
  return;
}

