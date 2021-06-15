
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ActivateSoundOnAnimation+<PlaySound>c__Iterator0::
     ActivateSoundOnAnimation_PlaySound_c_Iterator0_MoveNext
               (ActivateSoundOnAnimation_PlaySound_c_Iterator0 *this,MethodInfo *method)

{
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
  if (fVar2 < (this->fields).activationDelay + (this->fields)._startTime___0) {
    (this->fields)._current = (Object *)0x0;
    if ((this->fields)._disposing == 0) {
      (this->fields)._PC = 1;
    }
    return 1;
  }
  pAVar3 = (this->fields)._this;
  if ((pAVar3 != (ActivateSoundOnAnimation *)0x0) &&
     (this_00 = (pAVar3->fields).sound, this_00 != (AudioSource *)0x0)) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
              (this_00,(MethodInfo *)0x0);
    (this->fields)._PC = -1;
    return 0;
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void Reset() */

void Assembly-CSharp.dll::ActivateSoundOnAnimation+<PlaySound>c__Iterator0::
     ActivateSoundOnAnimation_PlaySound_c_Iterator0_Reset
               (ActivateSoundOnAnimation_PlaySound_c_Iterator0 *this,MethodInfo *method)

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

