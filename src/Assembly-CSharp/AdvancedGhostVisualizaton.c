
/* Void Awake() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Awake
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
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
  if ((this->fields).moving != (AudioSource *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam_?)();
    return;
  }
  puStack_1 = &stack0xfffffffc;
  uVar2 = func_?(auStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_OnEnable
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).moving;
  if (pAVar2 != (AudioSource *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)0x0;
    puStack_3 = (undefined *)0x0;
    pAStack_4 = pAVar2;
    (*pcRam_?)();
    return;
  }
  uVar5 = func_?(&pAStack_4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void PlayEffect(AdvancedGhostVisualizaton+Effect, Single) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
               (AdvancedGhostVisualizaton *this,AdvancedGhostVisualizaton_Effect__Enum effect,
               float duration,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdvancedGhostVisualizaton__Die);
    func_?(&TypeInfo__AdvancedGhostVisualizaton__Respawn);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).currentEffect;
  ppAVar2 = &(this->fields).currentEffect;
  if (pAVar1 != (AdvancedGhostVisualizaton_EffectBase *)0x0) {
    (*(code *)(pAVar1->klass->vtable).__unknown_1.method)(pAVar1,this,pAVar1->klass[1]._0.image);
  }
  if (effect == AdvancedGhostVisualizaton_Effect__Enum_Die) {
    method_01 = TypeInfo__AdvancedGhostVisualizaton__Die;
    pAVar1 = (AdvancedGhostVisualizaton_EffectBase *)func_?();
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)pAVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    (pAVar1->fields).duration = duration;
    (pAVar1->fields).timeLeft = duration;
    *ppAVar2 = pAVar1;
    func_?(ppAVar2,pAVar1);
  }
  else {
    if (effect == AdvancedGhostVisualizaton_Effect__Enum_Respawn) {
      method_00 = TypeInfo__AdvancedGhostVisualizaton__Respawn;
      pAVar1 = (AdvancedGhostVisualizaton_EffectBase *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                ((Object *)pAVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      (pAVar1->fields).duration = duration;
      (pAVar1->fields).timeLeft = duration;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      if (this_00 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                  (this_00,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                   (MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_01,1,(MethodInfo *)0x0);
          *ppAVar2 = pAVar1;
          func_?();
          return;
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (effect == AdvancedGhostVisualizaton_Effect__Enum_None) {
      *ppAVar2 = (AdvancedGhostVisualizaton_EffectBase *)0x0;
      func_?(ppAVar2,0);
      return;
    }
  }
  return;
}


/* Void ReceivedDamage() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_ReceivedDamage
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_02 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_02,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_00 = (this->fields).receiveDamage;
    if (this_00 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (this_00,(MethodInfo *)0x0);
      this_01 = (this->fields).blinker;
      if (this_01 != (AdvancedGhostBlinker *)0x0) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_01,BlinkType__Enum_Damage,1.3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivedHealing() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_ReceivedHealing
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
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
  func_?();
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
    pGVar1 = (this->fields).ghostBody;
    if (pGVar1 != (GhostBody *)0x0) {
      (pGVar1->fields).angularMaxRotation = (pGVar1->fields).angularMaxRotationBase * rotationSpeed;
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Start
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).blinker;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (GameObject *)0x0) {
    pMVar2 = (MeshFilter__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                       (this_00,
                        UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                       );
    if (pAVar1 != (AdvancedGhostBlinker *)0x0) {
      (pAVar1->fields)._.meshFilters = pMVar2;
      func_?();
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_Update
               (AdvancedGhostVisualizaton *this,MethodInfo *method)

{
  pAVar1 = (this->fields).currentEffect;
  ppAVar2 = &(this->fields).currentEffect;
  if (pAVar1 != (AdvancedGhostVisualizaton_EffectBase *)0x0) {
    fVar3 = (pAVar1->fields).timeLeft;
    fVar4 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar3 = fVar3 - fVar4;
    (pAVar1->fields).timeLeft = fVar3;
    if (fVar3 <= 0.0) {
      (pAVar1->fields).timeLeft = 0.0;
    }
    pAVar5 = pAVar1->klass;
    if (0.0 < (pAVar1->fields).timeLeft) {
      (*(code *)(pAVar5->vtable).__unknown.method)
                (pAVar1,this,(pAVar5->vtable).__unknown_1.methodPtr);
      return;
    }
    (*(code *)(pAVar5->vtable).__unknown_1.method)(pAVar1,this,pAVar5[1]._0.image);
    *ppAVar2 = (AdvancedGhostVisualizaton_EffectBase *)0x0;
    func_?(ppAVar2,0);
  }
  return;
}

