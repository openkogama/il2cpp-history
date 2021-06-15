
/* Void HandleRotation() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::AvatarLimbManager_AvatarNodEmote_HandleRotation(AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x1085);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._.duration;
  fVar2 = (this->fields)._.lifeTime;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  uStack_3 = (double)((((fVar1 / fVar2) * 5.0) / 10.0) * 10.0);
  fVar4 = (float10)func_?(SUB84(uStack_3,0),(int)((ulonglong)uStack_3 >> 0x20));
  uStack_3 = (double)fVar4;
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Quaternion);
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity((Quaternion *)&stack0xffffffcc,(MethodInfo *)0x0);
  fStack_6 = pQVar5->x;
  fStack_7 = pQVar5->y;
  fStack_8 = pQVar5->z;
  fStack_9 = pQVar5->w;
  uStack_3 = (double)((float)fVar4 + 1.0);
  fVar4 = (float10)func_?();
  fStack_10 = 0.0;
  uStack_3._0_4_ = 0.0;
  uStack_3._4_4_ = 0.0;
  if ((float)fVar4 == 0.0) {
    uVar11 = 0x41700000;
  }
  else {
    uVar11 = 0x43ac8000;
  }
  func_?(&fStack_10,uVar11,0,0);
  func_?(&fStack_6,fStack_10,(float)uStack_3,uStack_3._4_4_);
  fStack_12 = fStack_6;
  fStack_10 = fStack_7;
  uStack_3._0_4_ = fStack_8;
  uStack_3._4_4_ = fStack_9;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pLVar13 = (this->fields).headController;
  if (pLVar13 != (LimbController *)0x0) {
    pQVar5 = LimbController::LimbController_get_InterpolateTowardsPitchRotation((Quaternion *)&stack0xffffffcc,pLVar13,(MethodInfo *)0x0);
    fVar1 = pQVar5->x;
    fVar2 = pQVar5->y;
    puVar14 = (undefined *)pQVar5->z;
    pQVar15 = (Quaternion__Class *)pQVar5->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar14 = &UNK_?;
      pQVar15 = TypeInfo__UnityEngine__Quaternion;
      func_?();
    }
    lhs.y = fVar2;
    lhs.x = fVar1;
    lhs.z = (float)puVar14;
    lhs.w = (float)pQVar15;
    rhs.y = fStack_10;
    rhs.x = fStack_12;
    rhs.z = (float)uStack_3;
    rhs.w = uStack_3._4_4_;
    bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality(lhs,rhs,(MethodInfo *)0x0);
    if (bVar16 == 0) {
      return;
    }
    pLVar13 = (this->fields).headController;
    if (pLVar13 != (LimbController *)0x0) {
      LimbController::LimbController_ResetInterpolation(pLVar13,(MethodInfo *)0x0);
      pLVar13 = (this->fields).headController;
      if (pLVar13 != (LimbController *)0x0) {
        pQVar5 = LimbController::LimbController_get_InterpolateTowardsYawRotation((Quaternion *)&stack0xffffffcc,pLVar13,(MethodInfo *)0x0);
        PitchRotation.y = fStack_10;
        PitchRotation.x = fStack_12;
        PitchRotation.z = (float)uStack_3;
        PitchRotation.w = uStack_3._4_4_;
        LimbController::LimbController_SetNewRotation(pLVar13,*pQVar5,PitchRotation,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void Initialize(AvatarLimbManager+LimbRotator, Single) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::AvatarLimbManager_AvatarNodEmote_Initialize(AvatarLimbManager_AvatarNodEmote *this,AvatarLimbManager_LimbRotator *limbRotator,float lifeTime,MethodInfo *method)

{
  (this->fields)._.limbRotator = limbRotator;
  (this->fields)._.lifeTime = lifeTime;
  if (limbRotator != (AvatarLimbManager_LimbRotator *)0x0) {
    this_00 = AvatarLimbManager+LimbRotator::AvatarLimbManager_LimbRotator_GetLimbController(limbRotator,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
    (this->fields).headController = this_00;
    if (this_00 != (LimbController *)0x0) {
      fVar1 = LimbController::LimbController_get_InterpolationSpeed(this_00,(MethodInfo *)0x0);
      (this->fields)._.emote = 2;
      (this->fields).originalInterpolationSpeed = fVar1;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RotateHead(Quaternion) */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::AvatarLimbManager_AvatarNodEmote_RotateHead(AvatarLimbManager_AvatarNodEmote *this,Quaternion pitchRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x1086);
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).headController;
  if (pLVar1 != (LimbController *)0x0) {
    pQVar2 = LimbController::LimbController_get_InterpolateTowardsPitchRotation((Quaternion *)&stack0xffffffec,pLVar1,(MethodInfo *)0x0);
    puVar3 = (undefined *)pQVar2->x;
    pQVar4 = (Quaternion__Class *)pQVar2->y;
    fVar5 = pQVar2->z;
    fVar6 = pQVar2->w;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      puVar3 = &UNK_?;
      pQVar4 = TypeInfo__UnityEngine__Quaternion;
      func_?();
    }
    lhs.y = (float)pQVar4;
    lhs.x = (float)puVar3;
    lhs.z = fVar5;
    lhs.w = fVar6;
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality(lhs,pitchRotation,(MethodInfo *)0x0);
    if (bVar7 == 0) {
      return;
    }
    pLVar1 = (this->fields).headController;
    if (pLVar1 != (LimbController *)0x0) {
      LimbController::LimbController_ResetInterpolation(pLVar1,(MethodInfo *)0x0);
      pLVar1 = (this->fields).headController;
      if (pLVar1 != (LimbController *)0x0) {
        pQVar2 = LimbController::LimbController_get_InterpolateTowardsYawRotation((Quaternion *)&stack0xffffffec,pLVar1,(MethodInfo *)0x0);
        LimbController::LimbController_SetNewRotation(pLVar1,*pQVar2,pitchRotation,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManager+AvatarNodEmote::AvatarLimbManager_AvatarNodEmote_Update(AvatarLimbManager_AvatarNodEmote *this,MethodInfo *method)

{
  if ((this->fields)._.isActive != 0) {
    fVar1 = (this->fields)._.duration;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields)._.duration = fVar1;
    if (fVar1 < 0.0) {
      (*(code *)(this->klass->vtable).StopEmote.method)(this,this->klass[1]._0.image);
    }
    AvatarLimbManager_AvatarNodEmote_HandleRotation(this,(MethodInfo *)0x0);
  }
  return;
}

