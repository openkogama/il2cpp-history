
/* Void Deactivate() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_Deactivate(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  (this->fields).isActive = 0;
  return;
}


/* Void HandleNewAngle(Single) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_HandleNewAngle(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,float angle,MethodInfo *method)

{
  if ((this->fields).isActive == 0) {
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = (this->fields).resetInterval;
  }
  fVar1 = (this->fields).previousAngle;
  uVar2 = (int)(this->fields).eventRecognitioner & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if (uVar2 == (int)(this->fields).startModulusOffset) {
    if (((fVar1 <= 315.0) || (45.0 <= angle)) && (((fVar1 < 45.0 && (315.0 < angle)) || (angle <= fVar1)))) goto code_?;
  }
  else if (((315.0 < fVar1) && (angle < 45.0)) || (((45.0 <= fVar1 || (angle <= 315.0)) && (fVar1 < angle)))) {
code_?:
    (this->fields).previousAngle = angle;
    goto code_?;
  }
  pfVar3 = &(this->fields).angleSensitivity;
  if (*pfVar3 <= ABS(angle - fVar1) && ABS(angle - fVar1) != *pfVar3) {
    piVar4 = &(this->fields).eventRecognitioner;
    *piVar4 = *piVar4 + 1;
  }
code_?:
  if ((this->fields).recognitionsBeforeEvent <= (this->fields).eventRecognitioner) {
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = (this->fields).resetInterval;
    if ((this->fields).OnStartEvent != (Action *)0x0) {
      pAVar5 = (this->fields).OnStartEvent;
      (*(pAVar5->fields)._._.invoke_impl)((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
    }
  }
  return;
}


/* Void HandleRecognition(Single, Single, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_HandleRecognition(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,float newAngle,float previousAngle,bool checkPositiveRotation,MethodInfo *method)

{
  if ((previousAngle <= 315.0) || (45.0 <= newAngle)) {
    if ((45.0 <= previousAngle) || (newAngle <= 315.0)) {
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
  pfVar2 = &(this->fields).angleSensitivity;
  if (*pfVar2 <= ABS(newAngle - previousAngle) && ABS(newAngle - previousAngle) != *pfVar2) {
    piVar3 = &(this->fields).eventRecognitioner;
    *piVar3 = *piVar3 + 1;
  }
  return;
}


/* Void Initlialize(AvatarLimbManager, Single, Single, Int16, Boolean, Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_Initlialize(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,AvatarLimbManager *limbManager,float angleSensitivity,float resetInterval,int16_t recognitionsBeforeEvent,bool shouldRecognisePositiveAngleFirst,bool isActive,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__ResetRecognition__);
    cRam_? = '\x01';
  }
  if (limbManager != (AvatarLimbManager *)0x0) {
    pAVar1 = (limbManager->fields).OnAvatarRotate;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::NavMesh_OnNavMeshPreUpdate__ctor(this_00,(Object *)this,MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__ResetRecognition__,(MethodInfo *)0x0);
      pAVar2 = (Action *)mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
      pAVar1 = (Action *)0x0;
      if (pAVar2 == (Action *)0x0) {
        (limbManager->fields).OnAvatarRotate = (Action *)0x0;
code_?:
        func_?();
        (this->fields).angleSensitivity = (float)&limbManager->fields;
        (this->fields).resetInterval = (float)pAVar1;
        (this->fields).resetCooldown = (float)pAVar1;
        (this->fields).recognitionsBeforeEvent = recognitionsBeforeEvent;
        (this->fields).startModulusOffset = (ushort)(shouldRecognisePositiveAngleFirst ^ 1);
        (this->fields).isActive = isActive;
        return;
      }
      if (pAVar2->klass == TypeInfo__System__Action) {
        pAVar1 = pAVar2;
      }
      if (pAVar1 != (Action *)0x0) {
        (limbManager->fields).OnAvatarRotate = pAVar1;
        pAVar1 = (Action *)0x0;
        if (pAVar2->klass == TypeInfo__System__Action) {
          pAVar1 = pAVar2;
        }
        if (pAVar1 != (Action *)0x0) goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsEventRecognitionDone() */

bool Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_IsEventRecognitionDone(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  if ((this->fields).eventRecognitioner < (this->fields).recognitionsBeforeEvent) {
    return 0;
  }
  (this->fields).eventRecognitioner = 0;
  (this->fields).resetCooldown = (this->fields).resetInterval;
  return 1;
}


/* Boolean IsRotationPositive(Single, Single) */

bool Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_IsRotationPositive(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,float newAngle,float previousAngle,MethodInfo *method)

{
  if (((previousAngle <= 315.0) || (45.0 <= newAngle)) && (((previousAngle < 45.0 && (315.0 < newAngle)) || (newAngle <= previousAngle)))) {
    return 0;
  }
  return 1;
}


/* Void ResetRecognition() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_ResetRecognition(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  (this->fields).eventRecognitioner = 0;
  (this->fields).resetCooldown = (this->fields).resetInterval;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser_Update(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  if ((this->fields).eventRecognitioner == 0) {
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = (this->fields).resetInterval;
  }
  fVar1 = (this->fields).resetCooldown;
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar1 = fVar1 - fVar2;
  (this->fields).resetCooldown = fVar1;
  if (fVar1 <= 0.0) {
    (this->fields).eventRecognitioner = 0;
    (this->fields).resetCooldown = (this->fields).resetInterval;
  }
  return;
}


/* AvatarLimbManagerLocal+AvatarEmoteRecogniser() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::AvatarLimbManagerLocal_AvatarEmoteRecogniser__ctor(AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  (this->fields).angleSensitivity = 15.0;
  (this->fields).resetInterval = 2.0;
  return;
}

