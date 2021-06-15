
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AvatarAccessoryPreviewer+<AnimationEndTrack>c__Iterator0::
     AvatarAccessoryPreviewer_AnimationEndTrack_c_Iterator0_MoveNext
               (AvatarAccessoryPreviewer_AnimationEndTrack_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._startTime___0 = fVar2;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar2 < (this->fields).resetDelay + (this->fields)._startTime___0) {
    (this->fields)._current = (Object *)0x0;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  this_00 = (this->fields)._this;
  if (this_00 != (AvatarAccessoryPreviewer *)0x0) {
    AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation_1
              (this_00,StringLiteral_Idle,(MethodInfo *)0x0);
    (this->fields)._PC = -1;
    return 0;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void Reset() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer+<AnimationEndTrack>c__Iterator0::
     AvatarAccessoryPreviewer_AnimationEndTrack_c_Iterator0_Reset
               (AvatarAccessoryPreviewer_AnimationEndTrack_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

