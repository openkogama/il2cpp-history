
/* Void Awake() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyVisuals::
     VehicleEnergyVisuals_Awake(VehicleEnergyVisuals *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).particles;
  if ((this->fields).particleSystemOn == 0) {
    if (this_00 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
              (this_00,(MethodInfo *)0x0);
  }
  else {
    if (this_00 == (ParticleSystem *)0x0) goto code_?;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
              (this_00,(MethodInfo *)0x0);
  }
  this_01 = (this->fields).vehicleEnergyObject;
  if (this_01 != (MVVehicleEnergyObject *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_01,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      pRVar1 = (RotateLocal *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_02,
                          RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                         );
      (this->fields).rotateLocal = pRVar1;
      func_?();
      pRVar1 = (this->fields).rotateLocal;
      if (pRVar1 != (RotateLocal *)0x0) {
        (pRVar1->fields).rotationSpeed = 68.0;
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Rotate(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyVisuals::
     VehicleEnergyVisuals_Rotate(VehicleEnergyVisuals *this,bool onOff,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pRVar2 = (this->fields).rotateLocal;
  if (pRVar2 != (RotateLocal *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    puStack_1 = (undefined1 *)_onOff;
    pRStack_3 = pRVar2;
    (*pcRam_?)();
    return;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ToggleVisuals(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyVisuals::
     VehicleEnergyVisuals_ToggleVisuals(VehicleEnergyVisuals *this,bool val,MethodInfo *method)

{
  if ((this->fields).particleSystemOn == 0) {
    return;
  }
  this_00 = (this->fields).particles;
  if (this_00 != (ParticleSystem *)0x0) {
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar1 != (GameObject *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)();
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

