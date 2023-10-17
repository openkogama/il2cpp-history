
/* Void Spawned() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergyObject::
     MVVehicleEnergyObject_Spawned(MVVehicleEnergyObject *this,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyVisuals;
  if (pVVar1 != (VehicleEnergyVisuals *)0x0) {
    if ((pVVar1->fields).particleSystemOn == 0) {
      return;
    }
    this_00 = (pVVar1->fields).particles;
    if ((this_00 != (ParticleSystem *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Taken() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergyObject::
     MVVehicleEnergyObject_Taken(MVVehicleEnergyObject *this,MethodInfo *method)

{
  pVVar1 = (this->fields).vehicleEnergyVisuals;
  if (pVVar1 != (VehicleEnergyVisuals *)0x0) {
    if ((pVVar1->fields).particleSystemOn == 0) {
      return;
    }
    this_00 = (pVVar1->fields).particles;
    if ((this_00 != (ParticleSystem *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0))
    {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  uVar2 = func_?(&stack0xfffffff8);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* GameObject get_VehicleEnergyVisualsGameObject() */

GameObject *
Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergyObject::
MVVehicleEnergyObject_get_VehicleEnergyVisualsGameObject
          (MVVehicleEnergyObject *this,MethodInfo *method)

{
  pVStack_1 = (VehicleEnergyVisuals *)&stack0xfffffffc;
  pVVar2 = (this->fields).vehicleEnergyVisuals;
  if (pVVar2 != (VehicleEnergyVisuals *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    pVStack_1 = pVVar2;
    pGVar3 = (GameObject *)(*pcRam_?)();
    return pGVar3;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  pGVar3 = (GameObject *)(*pcVar6)();
  return pGVar3;
}

