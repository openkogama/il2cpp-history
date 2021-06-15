
/* Void Awake() */

void Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_Awake
               (AudioOnOffComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pXVar1 = (XpBoostParticlePreviewer *)(this->fields).audioSourcePrefab;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     (pXVar1,
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
  if (pXVar1 != (XpBoostParticlePreviewer *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                        ((GameObject *)pXVar1,
                         UnityEngine__AudioSource_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::AudioSource>__
                        );
    (this->fields).onOffAudioSource = (AudioSource *)this_01;
    if (this_01 != (UseInteractorHandler *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this_01,(MethodInfo *)0x0);
      value = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_02,value,(MethodInfo *)0x0);
        this_00 = (this->fields).onOffAudioSource;
        if (this_00 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_loop
                    (this_00,(this->fields).loop,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator Fader(Single, Single) */

IEnumerator *
Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_Fader
          (AudioOnOffComponent *this,float minEndPoint,float maxEndPoint,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AudioOnOffComponent___Fader_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = minEndPoint;
    (this_00->fields).target = (Transform *)this;
    (this_00->fields).originalScale.y = maxEndPoint;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
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
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1(aS,(MethodInfo *)0x0);
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
  if (iVar1 == 2) {
    pIVar2 = (Il2CppImage *)(this->klass->vtable).TurnOff.methodPtr;
    pMVar3 = (this->klass->vtable).TurnOn.method;
  }
  else {
    if (iVar1 != 1) goto code_?;
    pIVar2 = this->klass[1]._0.image;
    pMVar3 = (this->klass->vtable).TurnOff.method;
  }
  (*(code *)pMVar3)(this,pIVar2);
code_?:
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__AudioOnOffComponent___Fader_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields).originalScale.x = 0.0;
    (this_00->fields).originalScale.y = 1.0;
    (this_00->fields).target = (Transform *)this;
    UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
              ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void TurnOn() */

void Assembly-CSharp.dll::AudioOnOffComponent::AudioOnOffComponent_TurnOn
               (AudioOnOffComponent *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).onClip;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    min = 0.0;
    value = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (0.0,fVar3,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (this_00,value,(MethodInfo *)0x0);
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_Range
                      (min,fVar3,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (this_00,fVar3,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

