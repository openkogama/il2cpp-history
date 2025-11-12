
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
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,1);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
       (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0), obj != (GameObject *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,0,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,0);
      return;
    }
  }
  FUN_?();
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
  obj = (this->fields).vehicleEnergyVisuals;
  if (obj == (VehicleEnergyVisuals *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (VehicleEnergyVisuals *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pvVar3 = (obj->fields)._._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    pGVar2 = (GameObject *)(*pcVar1)();
    return pGVar2;
  }
  pcRam_? = pcVar1;
  plVar5 = (longlong *)(*pcRam_?)(pvVar3);
  pMVar6 = 
  UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
  ;
  if ((
      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                 );
  }
  if (plVar5 != (longlong *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    System__Runtime__InteropServices__GCHandle__MethodInfo__Unity__Collections__LowLevel__Unsafe__UnsafeUtility__As<void*,_System::Runtime::InteropServices::GCHandle>_System__IntPtr__
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (((ulonglong)plVar5 & 1) == 0) {
      lVar7 = *plVar5;
    }
    else {
      lVar7 = FUN_?(plVar5);
    }
    pvVar3 = ((pMVar6->field7_0x38).rgctx_data)->rgctxDataDummy;
    if ((*(byte *)((longlong)pvVar3 + 0x135) & 1) == 0) {
      pvVar3 = (void *)FUN_?(pvVar3);
    }
    if (lVar7 != 0) {
      pGVar2 = (GameObject *)FUN_?(lVar7,pvVar3,in_R8,in_R9,unaff_RDI);
      if (pGVar2 != (GameObject *)0x0) {
        return pGVar2;
      }
      FUN_?(lVar7,pvVar3);
      pcVar1 = (code *)swi(3);
      pGVar2 = (GameObject *)(*pcVar1)();
      return pGVar2;
    }
  }
  return (GameObject *)0x0;
}

