
/* Void Awake() */

void Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_Awake
               (AudioOnOffComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::AudioSource>__
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).audioSourcePrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GameObject *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)pGVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (pGVar1 != (GameObject *)0x0) {
    pAVar2 = (AudioSource *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (pGVar1,
                        UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::AudioSource>__
                       );
    (this->fields).onOffAudioSource = pAVar2;
    func_?(&(this->fields).onOffAudioSource,pAVar2);
    pAVar2 = (this->fields).onOffAudioSource;
    if (pAVar2 != (AudioSource *)0x0) {
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pAVar2,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_00,value,(MethodInfo *)0x0);
        pAVar2 = (this->fields).onOffAudioSource;
        if (pAVar2 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (pAVar2,(this->fields).loop,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator Fader(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_Fader
          (AudioOnOffComponent *this,float minEndPoint,float maxEndPoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioOnOffComponent___Fader_d__13);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AudioOnOffComponent___Fader_d__13;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)minEndPoint;
  value[3].klass = (Object__Class *)maxEndPoint;
  return (IEnumerator *)value;
}


/* Void PlayClip(AudioSource, AudioClip, Boolean, Single, Single, Single, Single) */

void Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_PlayClip
               (AudioOnOffComponent *this,AudioSource *aS,AudioClip *aC,bool loop,float minPitch,
               float maxPitch,float minVol,float maxVol,MethodInfo *method)

{
  if (aS != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (aS,aC,(MethodInfo *)0x0);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (minPitch,maxPitch,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (aS,fVar1,(MethodInfo *)0x0);
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (minVol,maxVol,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (aS,fVar1,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play(aS,(MethodInfo *)0x0);
    pAVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                       (aS,(MethodInfo *)0x0);
    if (pAVar2 != (AudioClip *)0x0) {
      iVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioClip::AudioClip_get_samples
                        (pAVar2,(MethodInfo *)0x0);
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_timeSamples
                (aS,iVar3 / 2,(MethodInfo *)0x0);
      loop = SUB41(minVol,0);
      if (loop != 0) {
        pAVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                           (aS,(MethodInfo *)0x0);
        if (pAVar2 == (AudioClip *)0x0) goto code_?;
        iVar3 = UnityEngine.AudioModule.dll::UnityEngine::AudioClip::AudioClip_get_samples
                          (pAVar2,(MethodInfo *)0x0);
        iVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                          (0,iVar3,(MethodInfo *)0x0);
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_timeSamples
                  (aS,iVar3,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_Start
               (AudioOnOffComponent *this,MethodInfo *method)

{
  iVar1 = (this->fields).startLoop;
  if (iVar1 == 1) {
    pIVar2 = this->klass[1]._0.image;
    pMVar3 = (this->klass->vtable).TurnOff.method;
  }
  else {
    if (iVar1 != 2) goto code_?;
    pIVar2 = (Il2CppImage *)(this->klass->vtable).TurnOff.methodPtr;
    pMVar3 = (this->klass->vtable).TurnOn.method;
  }
  (*(code *)pMVar3)(this,pIVar2);
code_?:
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioOnOffComponent___Fader_d__13);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AudioOnOffComponent___Fader_d__13;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
  func_?(value + 2,this);
  value[2].monitor = (MonitorData *)0x0;
  value[3].klass = (Object__Class *)0x3f800000;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
            ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
  return;
}


/* Void TurnOn() */

void Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_TurnOn
               (AudioOnOffComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).onClip;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return;
  }
  this_00 = (this->fields).onOffAudioSource;
  fVar3 = (this->fields).onMaxPitch;
  bVar2 = (this->fields).loop;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
              (this_00,(this->fields).onClip,(MethodInfo *)0x0);
    minInclusive = 0.0;
    value = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (0.0,fVar3,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (this_00,value,(MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (minInclusive,fVar3,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_00,fVar3,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
              (this_00,(MethodInfo *)0x0);
    pAVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                       (this_00,(MethodInfo *)0x0);
    if (pAVar1 != (AudioClip *)0x0) {
      iVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioClip::AudioClip_get_samples
                        (pAVar1,(MethodInfo *)0x0);
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_timeSamples
                (this_00,iVar4 / 2,(MethodInfo *)0x0);
      if (bVar2 != 0) {
        pAVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                           (this_00,(MethodInfo *)0x0);
        if (pAVar1 == (AudioClip *)0x0) goto code_?;
        iVar4 = UnityEngine.AudioModule.dll::UnityEngine::AudioClip::AudioClip_get_samples
                          (pAVar1,(MethodInfo *)0x0);
        iVar4 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                          (0,iVar4,(MethodInfo *)0x0);
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_timeSamples
                  (this_00,iVar4,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* AudioOnOffComponent() */

void Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent__ctor
               (AudioOnOffComponent *this,MethodInfo *method)

{
  (this->fields).onMinPitch = 0.8;
  (this->fields).onMaxPitch = 1.1;
  (this->fields).onMinVol = 0.7;
  (this->fields).onMaxVol = 0.9;
  (this->fields).fadeSpeed = 0.5;
  (this->fields).fadeNum = 1.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

