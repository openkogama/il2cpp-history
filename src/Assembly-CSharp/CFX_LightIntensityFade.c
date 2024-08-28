
/* Void OnEnable() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_OnEnable
               (CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).delay;
  (this->fields).p_lifetime = 0.0;
  (this->fields).p_delay = fVar1;
  if (0.0 < fVar1) {
    this_00 = (Behaviour *)
              UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                        ((Component *)this,
                         UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                        );
    if (this_00 == (Behaviour *)0x0) {
      uVar2 = func_?(&stack0xfffffff8);
      func_?(uVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (this_00,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_Start
               (CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                   );
    cRam_? = '\x01';
  }
  this_00 = (Light *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)this,
                                UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                               );
  if (this_00 != (Light *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                      (this_00,(MethodInfo *)0x0);
    (this->fields).baseIntensity = fVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_Update
               (CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).p_delay;
  if (_UNK_? < fVar1) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields).p_delay = fVar1;
    if (fVar1 <= 0.0) {
      this_01 = (Behaviour *)
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                          ((Component *)this,
                           UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                          );
      if (this_01 != (Behaviour *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  (this_01,1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  else {
    if ((this->fields).p_lifetime / (this->fields).duration < _UNK_?) {
      this_00 = (Light *)UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_GetComponent_1
                                   ((Component *)this,
                                    UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                                   );
      fVar2 = (this->fields).p_lifetime / (this->fields).duration;
      fVar1 = (this->fields).baseIntensity;
      if (fVar2 < 0.0) {
        fVar2 = 0.0;
      }
      else if (_UNK_? < fVar2) {
        fVar2 = _UNK_?;
      }
      if (this_00 != (Light *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                  (this_00,((this->fields).finalIntensity - fVar1) * fVar2 + fVar1,(MethodInfo *)0x0
                  );
        fVar1 = (this->fields).p_lifetime;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields).p_lifetime = fVar2 + fVar1;
        return;
      }
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->fields).autodestruct != 0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
  }
  return;
}

