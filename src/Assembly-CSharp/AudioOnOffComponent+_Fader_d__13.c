
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AudioOnOffComponent+<Fader>d__13::AudioOnOffComponent_Fader_d_13_MoveNext
               (AudioOnOffComponent_Fader_d_13 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_End__);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    (this->fields)._counter_5__2 = 0.0;
    if (this_00 == (AudioOnOffComponent *)0x0) goto code_?;
    (this->fields)._startFade_5__3 = (this_00->fields).fadeNum;
    pAVar2 = (this_00->fields).onOffAudioSource;
    if (pAVar2 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar2,(this_00->fields).fadeNum,(MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      ((this->fields).minEndPoint,(this->fields).maxEndPoint,(MethodInfo *)0x0);
    (this->fields)._fadeToNum_5__4 = fVar3;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pfVar4 = &(this->fields)._counter_5__2;
  if (_UNK_? < *pfVar4 || _UNK_? == *pfVar4) {
    if (this_00 != (AudioOnOffComponent *)0x0) {
      fVar3 = (this->fields)._fadeToNum_5__4;
      pAVar2 = (this_00->fields).onOffAudioSource;
      (this_00->fields).fadeNum = fVar3;
      if (pAVar2 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar2,fVar3,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::Single::Single_ToString
                           ((Single *)&(this_00->fields).fadeNum,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_End__,pSVar5,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        routine = AudioOnOffComponent::AudioOnOffComponent_Fader
                            (this_00,(this->fields).minEndPoint,(this->fields).maxEndPoint,
                             (MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                  ((MonoBehaviour *)this_00,routine,(MethodInfo *)0x0);
        return 0;
      }
    }
  }
  else {
    fVar3 = (this->fields)._counter_5__2;
    fVar6 = (this->fields)._startFade_5__3;
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
    else if (_UNK_? < fVar3) {
      fVar3 = _UNK_?;
    }
    if (this_00 != (AudioOnOffComponent *)0x0) {
      (this_00->fields).fadeNum = ((this->fields)._fadeToNum_5__4 - fVar6) * fVar3 + fVar6;
      pOVar7 = (Object *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                (pOVar7,(MethodInfo *)0x0);
      pAVar2 = (this_00->fields).onOffAudioSource;
      if (pAVar2 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar2,(this_00->fields).fadeNum,(MethodInfo *)0x0);
        fVar3 = (this->fields)._counter_5__2;
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields)._counter_5__2 = fVar6 * (this_00->fields).fadeSpeed + fVar3;
        pOVar7 = (Object *)func_?();
        (this->fields).__2__current = pOVar7;
        func_?(&(this->fields).__2__current);
        (this->fields).__1__state = 1;
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  bVar9 = (*pcVar8)();
  return bVar9;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AudioOnOffComponent+<Fader>d__13::
     AudioOnOffComponent_Fader_d_13_System_Collections_IEnumerator_Reset
               (AudioOnOffComponent_Fader_d_13 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AudioOnOffComponent___Fader_d__13__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

