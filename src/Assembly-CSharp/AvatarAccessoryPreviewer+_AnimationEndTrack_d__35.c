
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AvatarAccessoryPreviewer+<AnimationEndTrack>d__35::
     AvatarAccessoryPreviewer_AnimationEndTrack_d_35_MoveNext
               (AvatarAccessoryPreviewer_AnimationEndTrack_d_35 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._startTime_5__2 = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((this->fields)._startTime_5__2 + (this->fields).resetDelay <= fVar2) {
    if (this_00 != (AvatarAccessoryPreviewer *)0x0) {
      AvatarAccessoryPreviewer::AvatarAccessoryPreviewer_PlayAnimation_1
                (this_00,StringLiteral_Idle,(MethodInfo *)0x0);
      return 0;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  (this->fields).__2__current = (Object *)0x0;
  func_?(&(this->fields).__2__current,0);
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AvatarAccessoryPreviewer+<AnimationEndTrack>d__35::
     AvatarAccessoryPreviewer_AnimationEndTrack_d_35_System_Collections_IEnumerator_Reset
               (AvatarAccessoryPreviewer_AnimationEndTrack_d_35 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AvatarAccessoryPreviewer___AnimationEndTrack_d__35__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

