
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
    (this->fields).resetCooldown = (this->fields).resetInterval;
    (this->fields).eventRecognitioner = 0;
  }
  fVar1 = (this->fields).previousAngle;
  uVar2 = (int)(this->fields).eventRecognitioner & 0x80000001;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
  }
  if (uVar2 == (int)(this->fields).startModulusOffset) {
    if (((fVar1 <= _UNK_?) || (_UNK_? <= angle)) &&
       (((fVar1 < _UNK_? && (_UNK_? < angle)) || (angle <= fVar1))))
    goto code_?;
  }
  else if (((_UNK_? < fVar1) && (angle < _UNK_?)) ||
          (((_UNK_? <= fVar1 || (angle <= _UNK_?)) && (fVar1 < angle)))) {
code_?:
    (this->fields).previousAngle = angle;
    goto code_?;
  }
  fVar1 = (float)((uint)(angle - fVar1) & _UNK_?);
  pfVar3 = &(this->fields).angleSensitivity;
  if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
    piVar4 = &(this->fields).eventRecognitioner;
    *piVar4 = *piVar4 + 1;
  }
code_?:
  if ((this->fields).recognitionsBeforeEvent <= (this->fields).eventRecognitioner) {
    (this->fields).resetCooldown = (this->fields).resetInterval;
    (this->fields).eventRecognitioner = 0;
    if ((this->fields).OnStartEvent != (Action *)0x0) {
      pAVar5 = (this->fields).OnStartEvent;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
      return;
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
  fVar2 = (float)((uint)(newAngle - previousAngle) & _UNK_?);
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
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__ResetRecognition__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (limbManager == (AvatarLimbManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pAVar2 = (limbManager->fields).OnAvatarRotate;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__AvatarLimbManagerLocal__AvatarEmoteRecogniser__ResetRecognition__,
             (MethodInfo *)0x0);
  pAVar2 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pAVar2,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar2 == (Action *)0x0) {
    (limbManager->fields).OnAvatarRotate = (Action *)0x0;
  }
  else {
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?(pAVar2,TypeInfo__System__Action);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (limbManager->fields).OnAvatarRotate = pAVar3;
    pAVar3 = (Action *)0x0;
    if (pAVar2->klass == TypeInfo__System__Action) {
      pAVar3 = pAVar2;
    }
    if (pAVar3 == (Action *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&limbManager->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  (this->fields).recognitionsBeforeEvent = recognitionsBeforeEvent;
  (this->fields).angleSensitivity = angleSensitivity;
  (this->fields).resetInterval = resetInterval;
  (this->fields).resetCooldown = resetInterval;
  (this->fields).startModulusOffset = (ushort)(shouldRecognisePositiveAngleFirst ^ 1);
  (this->fields).isActive = isActive;
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
     (((previousAngle < _UNK_? && (_UNK_? < newAngle)) ||
      (newAngle <= previousAngle)))) {
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


/* Void SetIsActive(Boolean) */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_SetIsActive
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,bool shouldBeActive,
               MethodInfo *method)

{
  (this->fields).isActive = shouldBeActive;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AvatarLimbManagerLocal+AvatarEmoteRecogniser::
     AvatarLimbManagerLocal_AvatarEmoteRecogniser_Update
               (AvatarLimbManagerLocal_AvatarEmoteRecogniser *this,MethodInfo *method)

{
  if ((this->fields).eventRecognitioner == 0) {
    (this->fields).resetCooldown = (this->fields).resetInterval;
    (this->fields).eventRecognitioner = 0;
  }
  fVar1 = (this->fields).resetCooldown;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  fVar4 = (float)(*pcRam_?)();
  fVar1 = fVar1 - fVar4;
  (this->fields).resetCooldown = fVar1;
  if (fVar1 <= 0.0) {
    (this->fields).resetCooldown = (this->fields).resetInterval;
    (this->fields).eventRecognitioner = 0;
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

