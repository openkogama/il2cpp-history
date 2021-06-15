
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AudioOnOffComponent+<Fader>c__Iterator0::
     AudioOnOffComponent_Fader_c_Iterator0_MoveNext
               (AudioOnOffComponent_Fader_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pAVar2 = (this->fields)._this;
    (this->fields)._counter___0 = 0.0;
    if (pAVar2 == (AudioOnOffComponent *)0x0) goto code_?;
    (this->fields)._startFade___0 = (pAVar2->fields).fadeNum;
    pAVar3 = (pAVar2->fields).onOffAudioSource;
    if (pAVar3 == (AudioSource *)0x0) goto code_?;
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (pAVar3,(pAVar2->fields).fadeNum,(MethodInfo *)0x0);
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      ((this->fields).minEndPoint,(this->fields).maxEndPoint,(MethodInfo *)0x0);
    (this->fields)._fadeToNum___0 = fVar4;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar4 = (this->fields)._counter___0;
  pAVar2 = (this->fields)._this;
  if (_UNK_? <= fVar4) {
    if (pAVar2 != (AudioOnOffComponent *)0x0) {
      (pAVar2->fields).fadeNum = (this->fields)._fadeToNum___0;
      pAVar2 = (this->fields)._this;
      if ((pAVar2 != (AudioOnOffComponent *)0x0) &&
         (pAVar3 = (pAVar2->fields).onOffAudioSource, pAVar3 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar3,(pAVar2->fields).fadeNum,(MethodInfo *)0x0);
        if ((this->fields)._this != (AudioOnOffComponent *)0x0) {
          pOVar5 = (Object *)func_?();
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          message = mscorlib.dll::System::String::String_Concat
                              ((Object *)StringLiteral_End__,pOVar5,(MethodInfo *)0x0);
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                    ((Object *)message,(MethodInfo *)0x0);
          pAVar2 = (this->fields)._this;
          if (pAVar2 != (AudioOnOffComponent *)0x0) {
            routine = AudioOnOffComponent::AudioOnOffComponent_Fader
                                (pAVar2,(this->fields).minEndPoint,(this->fields).maxEndPoint,
                                 (MethodInfo *)0x0);
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::
            MonoBehaviour_StartCoroutine_Auto((MonoBehaviour *)pAVar2,routine,(MethodInfo *)0x0);
            (this->fields)._PC = -1;
            return 0;
          }
        }
      }
    }
  }
  else {
    a = (Mathf__Class *)(this->fields)._startFade___0;
    b = (undefined *)(this->fields)._fadeToNum___0;
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      b = &UNK_?;
      a = TypeInfo__UnityEngine__Mathf;
      func_?();
    }
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                      ((float)a,(float)b,fVar4,(MethodInfo *)0x0);
    if (pAVar2 != (AudioOnOffComponent *)0x0) {
      (pAVar2->fields).fadeNum = fVar4;
      if ((this->fields)._this != (AudioOnOffComponent *)0x0) {
        pOVar5 = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_print
                  (pOVar5,(MethodInfo *)0x0);
        pAVar2 = (this->fields)._this;
        if ((pAVar2 != (AudioOnOffComponent *)0x0) &&
           (pAVar3 = (pAVar2->fields).onOffAudioSource, pAVar3 != (AudioSource *)0x0)) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (pAVar3,(pAVar2->fields).fadeNum,(MethodInfo *)0x0);
          fVar4 = (this->fields)._counter___0;
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
          pAVar2 = (this->fields)._this;
          if (pAVar2 != (AudioOnOffComponent *)0x0) {
            (this->fields)._counter___0 = (pAVar2->fields).fadeSpeed * fVar6 + fVar4;
            pOVar5 = (Object *)func_?();
            (this->fields)._current = pOVar5;
            if ((this->fields)._disposing == 0) {
              (this->fields)._PC = 1;
            }
            return 1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void Reset() */

void Assembly-CSharp.dll::AudioOnOffComponent+<Fader>c__Iterator0::
     AudioOnOffComponent_Fader_c_Iterator0_Reset
               (AudioOnOffComponent_Fader_c_Iterator0 *this,MethodInfo *method)

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

