
/* Void HandleArmRotation(LimbController, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_HandleArmRotation
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,float yawAngle
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffc0,(MethodInfo *)0x0);
  fVar2 = pQVar1->z;
  fVar3 = pQVar1->w;
  uVar4 = 0;
  func_?(&stack0xfffffff0,0,yawAngle,0);
  func_?(&stack0xffffffd0,uVar4,0,0);
  fVar5 = ((this->fields)._.duration / (this->fields)._.lifeTime) * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  func_?(SUB84((double)(fVar5 * _UNK_?),0));
  fVar6 = (float10)func_?();
  if ((float)fVar6 == 0.0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffb0,(MethodInfo *)0x0);
    uVar4 = 0;
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffb0,(MethodInfo *)0x0);
    uVar4 = 0x439b0000;
  }
  fVar5 = pQVar1->x;
  fVar7 = pQVar1->y;
  fVar8 = pQVar1->z;
  fVar9 = pQVar1->w;
  uVar10 = 0;
  func_?(&stack0xfffffff0,uVar4);
  func_?(&stack0xffffffe0,uVar10);
  if (armController != (LimbController *)0x0) {
    pQVar1 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                       ((Quaternion *)&stack0xffffffb0,armController,(MethodInfo *)0x0);
    fVar11 = 0.0;
    rhs.y = fVar7;
    rhs.x = fVar5;
    rhs.z = fVar8;
    rhs.w = fVar9;
    fVar5 = fVar9;
    bVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                      (*pQVar1,rhs,(MethodInfo *)0x0);
    if (bVar12 != 0) {
      uVar4 = 0;
      puVar13 = &UNK_?;
      pLVar14 = armController;
      LimbController::LimbController_ResetInterpolation(armController,(MethodInfo *)0x0);
      yawRotation.y = fVar11;
      yawRotation.x = fVar9;
      yawRotation.z = fVar2;
      yawRotation.w = fVar3;
      PitchRotation.y = (float)pLVar14;
      PitchRotation.x = (float)puVar13;
      PitchRotation.z = (float)uVar4;
      PitchRotation.w = fVar5;
      LimbController::LimbController_SetNewRotation
                (armController,yawRotation,PitchRotation,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_Initialize
               (AvatarLimbManager_AvatarWaveEmote *this,AvatarLimbManager_LimbRotator *limbRotator,
               float lifeTime,MethodInfo *method)

{
  (this->fields)._.limbRotator = limbRotator;
  (this->fields)._.lifeTime = lifeTime;
  if (limbRotator != (AvatarLimbManager_LimbRotator *)0x0) {
    pLVar1 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
                       (limbRotator,BodyData_PartIndex__Enum_RArm,(MethodInfo *)0x0);
    (this->fields).RArmController = pLVar1;
    pLVar1 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController
                       (limbRotator,BodyData_PartIndex__Enum_LArm,(MethodInfo *)0x0);
    (this->fields).LArmController = pLVar1;
    pLVar1 = (this->fields).RArmController;
    if (pLVar1 != (LimbController *)0x0) {
      fVar2 = LimbController::LimbController_get_InterpolationSpeed(pLVar1,(MethodInfo *)0x0);
      (this->fields)._.emote = 3;
      (this->fields).originalInterpolationSpeed = fVar2;
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void MoveArmDownwards(LimbController, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_MoveArmDownwards
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,
               Quaternion yawRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffd0,(MethodInfo *)0x0);
  puStack_1 = (undefined *)pQVar2->x;
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  this = (AvatarLimbManager_AvatarWaveEmote *)pQVar2->w;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  func_?(&stack0xfffffff0,0,0,0);
  func_?(&puStack_1,uVar6,uVar7,uVar5);
  if (armController != (LimbController *)0x0) {
    pQVar2 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                       ((Quaternion *)&stack0xffffffd0,armController,(MethodInfo *)0x0);
    QVar8.y = fVar3;
    QVar8.x = (float)puStack_1;
    QVar8.z = fVar4;
    QVar8.w = (float)this;
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                      (*pQVar2,QVar8,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      LimbController::LimbController_ResetInterpolation(armController,(MethodInfo *)0x0);
      fVar10 = fVar3;
      fVar11 = (float)puStack_1;
      uVar12 = CONCAT44(fVar10,fVar11);
      fVar13 = fVar4;
      QVar8 = (Quaternion)CONCAT88(uVar14,uVar12);
      LimbController::LimbController_SetNewRotation
                (armController,yawRotation,QVar8,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void MoveArmUpwards(LimbController, Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_MoveArmUpwards
               (AvatarLimbManager_AvatarWaveEmote *this,LimbController *armController,
               Quaternion yawRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffd0,(MethodInfo *)0x0);
  puStack_1 = (undefined *)pQVar2->x;
  fVar3 = pQVar2->y;
  fVar4 = pQVar2->z;
  this = (AvatarLimbManager_AvatarWaveEmote *)pQVar2->w;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  func_?(&stack0xfffffff0,0x439b0000,0,0);
  func_?(&puStack_1,uVar6,uVar7,uVar5);
  if (armController != (LimbController *)0x0) {
    pQVar2 = LimbController::LimbController_get_InterpolateTowardsPitchRotation
                       ((Quaternion *)&stack0xffffffd0,armController,(MethodInfo *)0x0);
    QVar8.y = fVar3;
    QVar8.x = (float)puStack_1;
    QVar8.z = fVar4;
    QVar8.w = (float)this;
    bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                      (*pQVar2,QVar8,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      LimbController::LimbController_ResetInterpolation(armController,(MethodInfo *)0x0);
      fVar10 = fVar3;
      fVar11 = (float)puStack_1;
      uVar12 = CONCAT44(fVar10,fVar11);
      fVar13 = fVar4;
      QVar8 = (Quaternion)CONCAT88(uVar14,uVar12);
      LimbController::LimbController_SetNewRotation
                (armController,yawRotation,QVar8,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void StartEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_StartEmote
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  fVar1 = (this->fields)._.lifeTime;
  pLVar2 = (this->fields).RArmController;
  (this->fields)._.isActive = 1;
  (this->fields)._.duration = fVar1;
  if (pLVar2 != (LimbController *)0x0) {
    LimbController::LimbController_set_InterpolationSpeed
              (pLVar2,(_UNK_? / fVar1) * _UNK_?,(MethodInfo *)0x0);
    pLVar2 = (this->fields).RArmController;
    if (pLVar2 != (LimbController *)0x0) {
      LimbController::LimbController_set_IsEventControllingLimb(pLVar2,1,(MethodInfo *)0x0);
      pLVar2 = (this->fields).LArmController;
      if (pLVar2 != (LimbController *)0x0) {
        LimbController::LimbController_set_InterpolationSpeed
                  (pLVar2,(_UNK_? / (this->fields)._.lifeTime) * _UNK_?,
                   (MethodInfo *)0x0);
        pLVar2 = (this->fields).LArmController;
        if (pLVar2 != (LimbController *)0x0) {
          LimbController::LimbController_set_IsEventControllingLimb(pLVar2,1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopEmote() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarWaveEmote::
     AvatarLimbManager_AvatarWaveEmote_StopEmote
               (AvatarLimbManager_AvatarWaveEmote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_UIPushOption_ *)(this->fields)._.OnEmoteEnd;
  (this->fields)._.duration = 0.0;
  (this->fields)._.isActive = 0;
  if (this_00 != (Action_1_UIPushOption_ *)0x0) {
    mscorlib.dll::System::Action`1[UIPushOption]::Action_1_UIPushOption__Invoke
              (this_00,(uint)(this->fields)._.emote,
               MethodInfo__System__Action<EmoteTypes>__Invoke_EmoteTypes_);
  }
  pLVar1 = (this->fields).RArmController;
  if (pLVar1 != (LimbController *)0x0) {
    LimbController::LimbController_set_InterpolationSpeed
              (pLVar1,(this->fields).originalInterpolationSpeed,(MethodInfo *)0x0);
    pLVar1 = (this->fields).RArmController;
    if (pLVar1 != (LimbController *)0x0) {
      LimbController::LimbController_set_IsEventControllingLimb(pLVar1,0,(MethodInfo *)0x0);
      pLVar1 = (this->fields).RArmController;
      if (pLVar1 != (LimbController *)0x0) {
        LimbController::LimbController_StopRotating(pLVar1,(MethodInfo *)0x0);
        pLVar1 = (this->fields).LArmController;
        if (pLVar1 != (LimbController *)0x0) {
          LimbController::LimbController_set_InterpolationSpeed
                    (pLVar1,(this->fields).originalInterpolationSpeed,(MethodInfo *)0x0);
          pLVar1 = (this->fields).LArmController;
          if (pLVar1 != (LimbController *)0x0) {
            LimbController::LimbController_set_IsEventControllingLimb(pLVar1,0,(MethodInfo *)0x0);
            if ((this->fields).LArmController != (LimbController *)0x0) {
              if (*(char *)(in_stack_2 + 0x88) == '\0') {
                *(undefined1 *)(in_stack_2 + 0x78) = 0;
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
    (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
  }
  return;
}

