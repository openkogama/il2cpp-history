
/* Void Start() */

void Assembly-CSharp.dll::FadeAndDestroyOnParticleSystemFinish::
     FadeAndDestroyOnParticleSystemFinish_Start
               (FadeAndDestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  pFVar1 = this;
  this_00 = (this->fields).system;
  if (this_00 != (ParticleSystem *)0x0) {
    this = (FadeAndDestroyOnParticleSystemFinish *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    fVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_get_duration_Injected
                      ((ParticleSystem_MainModule *)&this,(MethodInfo *)0x0);
    (pFVar1->fields).fadeCountDown = fVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::FadeAndDestroyOnParticleSystemFinish::
     FadeAndDestroyOnParticleSystemFinish_Update
               (FadeAndDestroyOnParticleSystemFinish *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).fadeCountDown;
  if (_UNK_? < fVar1) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields).fadeCountDown = fVar1;
    if (fVar1 <= 0.0) {
      if ((this->fields).system != (ParticleSystem *)0x0) {
        if (pcRam_? == (code *)0x0) {
          pcRam_? = (code *)func_?(&UNK_?);
        }
        (*pcRam_?)(0,1,1);
        return;
      }
      goto code_?;
    }
  }
  else {
    this_00 = (this->fields).system;
    if (this_00 == (ParticleSystem *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_particleCount(this_00,(MethodInfo *)0x0);
    if (iVar4 < 1) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
  }
  return;
}

