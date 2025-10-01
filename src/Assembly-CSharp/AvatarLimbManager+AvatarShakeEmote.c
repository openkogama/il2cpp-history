
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_HandleRotation
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  unique0x10000085 =
       (double)(((((this->fields)._.duration / (this->fields)._.lifeTime) * _UNK_?) /
                _UNK_?) * _UNK_?);
  fVar1 = (float10)func_?(unique0x10000085);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  unique0x1000008d = (double)((float)fVar1 + _UNK_?);
  fVar1 = (float10)func_?();
  stack0xfffffff4 = (double)((ulonglong)(double)fVar1 & 0xffffffff);
  uVar2 = _UNK_?;
  if ((float)fVar1 != 0.0) {
    uVar2 = _UNK_?;
  }
  auVar3._4_8_ = 0;
  auVar3._0_4_ = uVar2;
  pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_FromEulerRad
                      ((Quaternion *)auStack_5,(Vector3)(auVar3 << 0x20),(MethodInfo *)0x0);
  fVar6 = pQVar4->x;
  fVar7 = pQVar4->y;
  fVar8 = pQVar4->z;
  fVar9 = pQVar4->w;
  pLVar10 = (this->fields).headController;
  if (pLVar10 != (LimbController *)0x0) {
    if (_UNK_? <
        fVar7 * (pLVar10->fields).interpolateTowardsYawRotation.y +
        fVar6 * (pLVar10->fields).interpolateTowardsYawRotation.x +
        fVar8 * (pLVar10->fields).interpolateTowardsYawRotation.z +
        fVar9 * (pLVar10->fields).interpolateTowardsYawRotation.w) {
      return;
    }
    pLVar10 = (this->fields).headController;
    if (pLVar10 != (LimbController *)0x0) {
      (pLVar10->fields).elapsedInterpolationTime = 0.0;
      (pLVar10->fields).elapsedInterpolateAnimationTime = 0.0;
      (pLVar10->fields).shouldRotate = 1;
      (pLVar10->fields).rotationDuration = 0.0;
      pLVar10 = (this->fields).headController;
      if (pLVar10 != (LimbController *)0x0) {
        fVar11 = (pLVar10->fields).interpolateTowardsPitchRotation.x;
        fVar12 = (pLVar10->fields).interpolateTowardsPitchRotation.y;
        fVar13 = (pLVar10->fields).interpolateTowardsPitchRotation.z;
        fVar14 = (pLVar10->fields).interpolateTowardsPitchRotation.w;
        (pLVar10->fields).elapsedInterpolationTime = 0.0;
        (pLVar10->fields).elapsedInterpolateAnimationTime = 0.0;
        (pLVar10->fields).shouldRotate = 1;
        (pLVar10->fields).rotationDuration = 0.0;
        (pLVar10->fields).interpolateTowardsYawRotation.x = fVar6;
        (pLVar10->fields).interpolateTowardsYawRotation.y = fVar7;
        (pLVar10->fields).interpolateTowardsYawRotation.z = fVar8;
        (pLVar10->fields).interpolateTowardsYawRotation.w = fVar9;
        (pLVar10->fields).interpolateTowardsPitchRotation.x = fVar11;
        (pLVar10->fields).interpolateTowardsPitchRotation.y = fVar12;
        (pLVar10->fields).interpolateTowardsPitchRotation.z = fVar13;
        (pLVar10->fields).interpolateTowardsPitchRotation.w = fVar14;
        return;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_Initialize
               (AvatarLimbManager_AvatarShakeEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
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
                      (limbRotator,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      pLVar2 = (LimbController *)0x0;
    }
    else {
      this_00 = (limbRotator->fields).limbControllers;
      if (this_00 == (Dictionary_2_BodyData_PartIndex_LimbController_ *)0x0) goto code_?;
      pLVar2 = (LimbController *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_00,0,
                          MethodInfo__System__Collections__Generic__Dictionary<BodyData::PartIndex,_LimbController>__get_Item_BodyData__PartIndex_
                         );
    }
    (this->fields).headController = pLVar2;
    func_?(&(this->fields).headController,pLVar2);
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (this->fields).originalInterpolationSpeed = (pLVar2->fields).interpolationSpeed;
      (this->fields)._.emote = 1;
      return;
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RotateHead(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_RotateHead
               (AvatarLimbManager_AvatarShakeEmote *this,Quaternion yawRotation,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pLVar2 = (this->fields).headController;
  if (pLVar2 != (LimbController *)0x0) {
    if (_UNK_? <
        yawRotation.y * (pLVar2->fields).interpolateTowardsYawRotation.y +
        yawRotation.x * (pLVar2->fields).interpolateTowardsYawRotation.x +
        yawRotation.z * (pLVar2->fields).interpolateTowardsYawRotation.z +
        yawRotation.w * (pLVar2->fields).interpolateTowardsYawRotation.w) {
      return;
    }
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).elapsedInterpolationTime = 0.0;
      (pLVar2->fields).elapsedInterpolateAnimationTime = 0.0;
      (pLVar2->fields).shouldRotate = 1;
      (pLVar2->fields).rotationDuration = 0.0;
      pLVar2 = (this->fields).headController;
      if (pLVar2 != (LimbController *)0x0) {
        fVar3 = (pLVar2->fields).interpolateTowardsPitchRotation.x;
        fVar4 = (pLVar2->fields).interpolateTowardsPitchRotation.y;
        fVar5 = (pLVar2->fields).interpolateTowardsPitchRotation.z;
        fVar6 = (pLVar2->fields).interpolateTowardsPitchRotation.w;
        (pLVar2->fields).elapsedInterpolationTime = 0.0;
        (pLVar2->fields).elapsedInterpolateAnimationTime = 0.0;
        (pLVar2->fields).shouldRotate = 1;
        (pLVar2->fields).rotationDuration = 0.0;
        (pLVar2->fields).interpolateTowardsYawRotation.x = yawRotation.x;
        (pLVar2->fields).interpolateTowardsYawRotation.y = yawRotation.y;
        (pLVar2->fields).interpolateTowardsYawRotation.z = yawRotation.z;
        (pLVar2->fields).interpolateTowardsYawRotation.w = yawRotation.w;
        (pLVar2->fields).interpolateTowardsPitchRotation.x = fVar3;
        (pLVar2->fields).interpolateTowardsPitchRotation.y = fVar4;
        (pLVar2->fields).interpolateTowardsPitchRotation.z = fVar5;
        (pLVar2->fields).interpolateTowardsPitchRotation.w = fVar6;
        return;
      }
    }
  }
  uVar7 = func_?(auStack_8);
  func_?(uVar7);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StartEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  (this->fields)._.duration = (this->fields)._.lifeTime;
  pLVar2 = (this->fields).headController;
  (this->fields)._.isActive = 1;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed =
         (_UNK_? / (this->fields)._.lifeTime) * _UNK_?;
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 1;
      return;
    }
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_StopEmote
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  pAVar1 = (this->fields)._.OnEmoteEnd;
  (this->fields)._.duration = 0.0;
  (this->fields)._.isActive = 0;
  if (pAVar1 != (Action_1_EmoteTypes_ *)0x0) {
    pAVar1 = (this->fields)._.OnEmoteEnd;
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields)._.emote,(pAVar1->fields)._._.method);
  }
  pLVar2 = (this->fields).headController;
  if (pLVar2 != (LimbController *)0x0) {
    (pLVar2->fields).interpolationSpeed = (this->fields).originalInterpolationSpeed;
    pLVar2 = (this->fields).headController;
    if (pLVar2 != (LimbController *)0x0) {
      (pLVar2->fields).isEventControllingLimb = 0;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarShakeEmote::
     AvatarLimbManager_AvatarShakeEmote_Update
               (AvatarLimbManager_AvatarShakeEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.duration;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields)._.duration = fVar1;
    if (0.0 <= fVar1) {
      AvatarLimbManager_AvatarShakeEmote_HandleRotation(this,(MethodInfo *)0x0);
      return;
    }
    (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
  }
  return;
}

