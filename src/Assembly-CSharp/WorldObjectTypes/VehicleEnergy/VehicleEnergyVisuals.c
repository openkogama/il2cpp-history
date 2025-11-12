
/* Void Awake() */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyVisuals::
     VehicleEnergyVisuals_Awake(VehicleEnergyVisuals *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).particles;
  if (this_00 != (ParticleSystem *)0x0) {
    if ((this->fields).particleSystemOn == 0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_1
                (this_00,1,(MethodInfo *)0x0);
    }
    else {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play
                (this_00,1,(MethodInfo *)0x0);
    }
    this_01 = (this->fields).vehicleEnergyObject;
    if ((this_01 != (MVVehicleEnergyObject *)0x0) &&
       (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0), this_02 != (GameObject *)0x0))
    {
      pRVar1 = (RotateLocal *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_02,
                          RotateLocal_MethodInfo__UnityEngine__GameObject__AddComponent<RotateLocal>__
                         );
      bVar2 = iRam_? != 0;
      (this->fields).rotateLocal = pRVar1;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).rotateLocal >> 0xc);
        uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
        do {
          uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
          puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pRVar1 = (this->fields).rotateLocal;
      if (pRVar1 != (RotateLocal *)0x0) {
        (pRVar1->fields).rotationSpeed = 68.0;
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void Rotate(Boolean) */

void Assembly-CSharp.dll::WorldObjectTypes::VehicleEnergy::VehicleEnergyVisuals::
     VehicleEnergyVisuals_Rotate(VehicleEnergyVisuals *this,bool onOff,MethodInfo *method)

{
  obj = (this->fields).rotateLocal;
  if (obj == (RotateLocal *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,CONCAT71(in_register_00000011,onOff),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (RotateLocal *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,onOff);
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
  if ((this_00 == (ParticleSystem *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,val,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,val);
  return;
}

