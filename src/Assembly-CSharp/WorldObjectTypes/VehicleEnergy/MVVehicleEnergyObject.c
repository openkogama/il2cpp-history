
/* Void Spawned() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergyObject::
     MVVehicleEnergyObject_Spawned(MVVehicleEnergyObject *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleEnergyVisuals;
  if (this_00 != (VehicleEnergyVisuals *)0x0) {
    VehicleEnergyVisuals::VehicleEnergyVisuals_ToggleVisuals(this_00,1,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Taken() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::MVVehicleEnergyObject::
     MVVehicleEnergyObject_Taken(MVVehicleEnergyObject *this,MethodInfo *method)

{
  this_00 = (this->fields).vehicleEnergyVisuals;
  if (this_00 != (VehicleEnergyVisuals *)0x0) {
    VehicleEnergyVisuals::VehicleEnergyVisuals_ToggleVisuals(this_00,0,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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

