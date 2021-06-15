
/* Void Deactivate() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_Deactivate
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  return;
}


/* Void HandleNewAngle(Single) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_HandleNewAngle
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,float angle,MethodInfo *method)

{
  if ((this->fields).isActive == 0) {
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = (this->fields).resetInterval;
    sVar1 = 0;
  }
  else {
    sVar1 = (this->fields).eventRecognitioner;
  }
  uVar2 = (int)sVar1 & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  AvatarLimbManagerLocal_AvatarEmoteRecogniser_HandleRecognition
            (this,angle,(this->fields).previousAngle,uVar2 == (int)(this->fields).startModulusOffset
             ,(MethodInfo *)0x0);
  if ((this->fields).recognitionsBeforeEvent <= (this->fields).eventRecognitioner) {
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = (this->fields).resetInterval;
    this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).OnStartEvent;
    if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
      JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void HandleRecognition(Single, Single, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_HandleRecognition
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,float newAngle,
               float previousAngle,bool checkPositiveRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((previousAngle <= _UNK_?) || (_UNK_? <= newAngle)) {
    if ((_UNK_? <= previousAngle) || (newAngle <= _UNK_?)) {
      bVar1 = previousAngle < newAngle;
    }
    else {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  if (bVar1 != (bool)checkPositiveRotation) {
    (this->fields).previousAngle = newAngle;
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar2 = (float)(double)CONCAT44((uint)((ulonglong)(double)(newAngle - previousAngle) >> 0x20) &
                                  _UNK_?,
                                  SUB84((double)(newAngle - previousAngle),0) & _UNK_?);
  pfVar3 = &(this->fields).angleSensitivity;
  if (*pfVar3 <= fVar2 && fVar2 != *pfVar3) {
    piVar4 = &(this->fields).eventRecognitioner;
    *piVar4 = *piVar4 + 1;
  }
  return;
}


/* Void Initlialize(AvatarLimbManager, Single, Single, Int16, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,AvatarLimbManager *limbManager,
               float angleSensitivity,float resetInterval,int16_t recognitionsBeforeEvent,
               bool shouldRecognisePositiveAngleFirst,bool isActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (limbManager != (AvatarLimbManager *)0x0) {
    pAVar1 = (limbManager->fields).OnAvatarRotate;
    this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
              func_?(TypeInfo__System__Action);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (this_00,(Object *)this,
               MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__ResetRecognition__,
               (MethodInfo *)0x0);
    pAVar2 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
    pAVar1 = (Action *)0x0;
    if (pAVar2 != (Action *)0x0) {
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 == (Action *)0x0) goto code_?;
    }
    (limbManager->fields).OnAvatarRotate = pAVar1;
    (this->fields).angleSensitivity = angleSensitivity;
    (this->fields).resetInterval = resetInterval;
    (this->fields).resetCooldown = resetInterval;
    (this->fields).recognitionsBeforeEvent = recognitionsBeforeEvent;
    (this->fields).startModulusOffset = (ushort)(shouldRecognisePositiveAngleFirst ^ 1);
    (this->fields).isActive = isActive;
    return;
  }
  func_?(0);
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsEventRecognitionDone() */

bool Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_IsEventRecognitionDone
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  if ((this->fields).eventRecognitioner < (this->fields).recognitionsBeforeEvent) {
    return 0;
  }
  (this->fields).eventRecognitioner = 0;
  (this->fields).resetCooldown = (this->fields).resetInterval;
  return 1;
}


/* Boolean IsRotationPositive(Single, Single) */

bool Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_IsRotationPositive
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,float newAngle,
               float previousAngle,MethodInfo *method)

{
  if (((previousAngle <= _UNK_?) || (_UNK_? <= newAngle)) &&
     (((previousAngle < _UNK_? && (_UNK_? < newAngle)) || (newAngle <= previousAngle))
     )) {
    return 0;
  }
  return 1;
}


/* Void ResetRecognition() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_ResetRecognition
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  (this->fields).eventRecognitioner = 0;
  (this->fields).resetCooldown = (this->fields).resetInterval;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_Update
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  if ((this->fields).eventRecognitioner == 0) {
    fVar1 = (this->fields).resetInterval;
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = fVar1;
  }
  else {
    fVar1 = (this->fields).resetCooldown;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  (this->fields).resetCooldown = fVar1 - fVar2;
  if (fVar1 - fVar2 <= 0.0) {
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = (this->fields).resetInterval;
  }
  return;
}


/* AvatarLimbManagerLocal+AvatarEmoteRecogniser() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser__ctor
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  (this->fields).angleSensitivity = 15.0;
  (this->fields).resetInterval = 2.0;
  return;
}

