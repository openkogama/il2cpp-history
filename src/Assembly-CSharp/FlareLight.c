
/* Void OnDisable() */

void Assembly-CSharp.dll::FlareLight::FlareLight_OnDisable(FlareLight *this,MethodInfo *method)

{
  this_00 = (this->fields).light;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    this_01 = (this->fields).lensFlare;
    if (this_01 != (LensFlare *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnEnable() */

void Assembly-CSharp.dll::FlareLight::FlareLight_OnEnable(FlareLight *this,MethodInfo *method)

{
  this_00 = (this->fields).light;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    this_01 = (this->fields).lensFlare;
    if (this_01 != (LensFlare *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::FlareLight::FlareLight_Reset(FlareLight *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::LensFlare>__
                   );
    func_?(&
                    UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (Light *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                              ((Component *)this,
                               UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                              );
  (this->fields).light = pLVar1;
  func_?(&(this->fields).light,pLVar1);
  pLVar2 = (LensFlare *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::LensFlare>__
                     );
  (this->fields).lensFlare = pLVar2;
  func_?(&(this->fields).lensFlare,pLVar2);
  return;
}


/* Void SetEnabled(Boolean) */

void Assembly-CSharp.dll::FlareLight::FlareLight_SetEnabled
               (FlareLight *this,bool b,MethodInfo *method)

{
  this_00 = (this->fields).light;
  if (this_00 != (Light *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,b,(MethodInfo *)0x0);
    if ((this->fields).lensFlare != (LensFlare *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

