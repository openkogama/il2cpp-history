
/* Void Awake() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Awake
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->y;
    fVar3 = pVVar1->z;
    (this->fields).baseScale.x = pVVar1->x;
    (this->fields).baseScale.y = fVar2;
    (this->fields).baseScale.z = fVar3;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_OnDisable
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  pAVar1 = (this->fields).moving;
  if (pAVar1 == (AudioSource *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pAVar1);
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_OnEnable
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  pAVar1 = (this->fields).moving;
  if (pAVar1 == (AudioSource *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pAVar1,0,0);
  return;
}


/* Void PlayEffect(AdvancedGhostVisualizaton+Effect, Single) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
               (AdvancedGhostVisualizaton *this,AdvancedGhostVisualizaton_Effect__Enum effect,
               float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).currentEffect;
  if (pAVar1 != (AdvancedGhostVisualizaton_EffectBase *)0x0) {
    (*(code *)(pAVar1->klass->vtable).__unknown_1.method)(pAVar1,this,pAVar1->klass[1]._0.image);
  }
  if (effect == AdvancedGhostVisualizaton_Effect__Enum_Die) {
    method_00 = TypeInfo__AdvancedGhostVisualizaton__Die;
    pSVar2 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,(MethodInfo *)method_00);
    (pSVar2->fields)._._._._.m_CachedPtr = (void *)duration;
    (pSVar2->fields).state = (int32_t)duration;
    (this->fields).currentEffect = (AdvancedGhostVisualizaton_EffectBase *)pSVar2;
    return;
  }
  if (effect != AdvancedGhostVisualizaton_Effect__Enum_Respawn) {
    if (effect == AdvancedGhostVisualizaton_Effect__Enum_None) {
      (this->fields).currentEffect = (AdvancedGhostVisualizaton_EffectBase *)0x0;
    }
    return;
  }
  pSVar2 = (ScaleAnimationBase *)func_?(TypeInfo__AdvancedGhostVisualizaton__Respawn);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play(pSVar2,0.0,unaff_EDI);
  (pSVar2->fields)._._._._.m_CachedPtr = (void *)duration;
  (pSVar2->fields).state = (int32_t)duration;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
              (this_00,*pVVar3,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                        ((Component_1 *)this,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      (this->fields).currentEffect = (AdvancedGhostVisualizaton_EffectBase *)pSVar2;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReceivedDamage() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_ReceivedDamage
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (this->fields).receiveDamage;
    if (this_00 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                (this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).blinker;
      if (this_01 != (AdvancedGhostBlinker *)0x0) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_01,BlinkType__Enum_Damage,1.3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivedHealing() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_ReceivedHealing
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      this_00 = (this->fields).blinker;
      if (this_00 == (AdvancedGhostBlinker *)0x0) goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,BlinkType__Enum_Healing,1.3,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRotationSpeed(Single) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_SetRotationSpeed
               (AdvancedGhostVisualizaton *this,float rotationSpeed,MethodInfo *method)

{
  this_00 = (this->fields).moving;
  if (this_00 != (AudioSource *)0x0) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
              (this_00,rotationSpeed * _UNK_?,(MethodInfo *)0x0);
    this_01 = (this->fields).ghostBody;
    if (this_01 != (GhostBody *)0x0) {
      GhostBody::GhostBody_SetRotationSpeed(this_01,rotationSpeed,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Start
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).blinker;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    avatarBody = (MVBody *)
                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                 GameObject_GetComponentsInChildren_29
                           (this_01,
                            UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                           );
    if (this_00 != (AdvancedGhostBlinker *)0x0) {
      AccessoryPreviewPopup::AccessoryPreviewPopup_SetBody
                ((AccessoryPreviewPopup *)this_00,avatarBody,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Update
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  pAVar1 = (this->fields).currentEffect;
  if (pAVar1 != (AdvancedGhostVisualizaton_EffectBase *)0x0) {
    fVar2 = (pAVar1->fields).timeLeft;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar3;
    (pAVar1->fields).timeLeft = fVar2;
    if (fVar2 <= 0.0) {
      (pAVar1->fields).timeLeft = 0.0;
      fVar2 = 0.0;
    }
    pAVar4 = pAVar1->klass;
    if (0.0 < fVar2) {
      (*(code *)(pAVar4->vtable).__unknown.method)
                (pAVar1,this,(pAVar4->vtable).__unknown_1.methodPtr);
      return;
    }
    (*(code *)(pAVar4->vtable).__unknown_1.method)(pAVar1,this,pAVar4[1]._0.image);
    (this->fields).currentEffect = (AdvancedGhostVisualizaton_EffectBase *)0x0;
  }
  return;
}

