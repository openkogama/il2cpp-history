
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__Light_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::Light>__
                     );
  (this->fields).light = (Light *)pMVar1;
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                     ((Component_1 *)this,
                      UnityEngine__LensFlare_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::LensFlare>__
                     );
  (this->fields).lensFlare = (LensFlare *)pMVar1;
  return;
}


/* Void SetEnabled(Boolean) */

void Assembly-CSharp.dll::FlareLight::FlareLight_SetEnabled
               (FlareLight *this,bool b,MethodInfo *method)

{
  this_00 = (this->fields).light;
  if ((this_00 == (Light *)0x0) ||
     (UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,b,(MethodInfo *)0x0),
     (this->fields).lensFlare == (LensFlare *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)func_?(), pcVar1 == (code *)0x0))
  {
    uVar2 = func_?(&UNK_?);
    func_?(uVar2);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)();
  return;
}

