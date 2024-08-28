
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::ActivateSoundOnAnimation+<PlaySound>d__4::
     ActivateSoundOnAnimation_PlaySound_d_4_MoveNext
               (ActivateSoundOnAnimation_PlaySound_d_4 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  pAVar2 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._startTime_5__2 = fVar3;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if ((this->fields)._startTime_5__2 + (this->fields).activationDelay <= fVar3) {
    if ((pAVar2 != (ActivateSoundOnAnimation *)0x0) &&
       (this_00 = (pAVar2->fields).sound, this_00 != (AudioSource *)0x0)) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (this_00,(MethodInfo *)0x0);
      return 0;
    }
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  ppOVar6 = &(this->fields).__2__current;
  *ppOVar6 = (Object *)0x0;
  func_?(ppOVar6,0);
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::ActivateSoundOnAnimation+<PlaySound>d__4::
     ActivateSoundOnAnimation_PlaySound_d_4_System_Collections_IEnumerator_Reset
               (ActivateSoundOnAnimation_PlaySound_d_4 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__ActivateSoundOnAnimation___PlaySound_d__4__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

