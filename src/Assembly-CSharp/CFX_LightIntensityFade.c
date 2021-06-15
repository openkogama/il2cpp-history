
/* Void OnEnable() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_OnEnable
               (CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).delay;
  (this->fields).p_lifetime = 0.0;
  (this->fields).p_delay = fVar1;
  if (0.0 < fVar1) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                        ((Component_1 *)this,
                         UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                        );
    if (this_00 == (MVInteractableBase *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
  }
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade_Start
               (CFX_LightIntensityFade *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                      ((Component_1 *)this,
                       UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                      );
  if (this_00 != (MVInteractableBase *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                      ((Light *)this_00,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).p_delay;
  if (_UNK_? < fVar1) {
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar1 = fVar1 - fVar2;
    (this->fields).p_delay = fVar1;
    if (fVar1 <= 0.0) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                         );
      if (pMVar3 != (MVInteractableBase *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pMVar3,1,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  else {
    if ((this->fields).p_lifetime / (this->fields).duration < _UNK_?) {
      pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                         ((Component_1 *)this,
                          UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                         );
      fVar1 = (this->fields).baseIntensity;
      fVar2 = (this->fields).duration;
      b = (this->fields).finalIntensity;
      fVar4 = (this->fields).p_lifetime;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                        (fVar1,b,fVar4 / fVar2,(MethodInfo *)0x0);
      if (pMVar3 != (MVInteractableBase *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Light::Light_set_intensity
                  ((Light *)pMVar3,fVar1,(MethodInfo *)0x0);
        fVar1 = (this->fields).p_lifetime;
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        (this->fields).p_lifetime = fVar2 + fVar1;
        return;
      }
code_?:
      func_?(0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->fields).autodestruct != 0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
  }
  return;
}


/* CFX_LightIntensityFade() */

void Assembly-CSharp.dll::CFX_LightIntensityFade::CFX_LightIntensityFade__ctor
               (CFX_LightIntensityFade *this,MethodInfo *method)

{
  (this->fields).duration = 1.0;
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

