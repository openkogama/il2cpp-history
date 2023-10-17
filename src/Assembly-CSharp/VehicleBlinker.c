
/* Void Awake() */

void Assembly-CSharp.dll::VehicleBlinker::VehicleBlinker_Awake
               (VehicleBlinker *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)func_?();
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Dictionary__
              );
    CVar1 = (this->fields).blinkDamageColor;
    pMVar2 = (this->fields)._.blinkMaterial;
    pBVar3 = (Blinker *)func_?();
    if (pBVar3 != (Blinker *)0x0) {
      Blinker::Blinker__ctor(pBVar3,4.0,pMVar2,CVar1,(MethodInfo *)0x0);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)0x0,(Object *)pBVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                );
      CVar1 = (this->fields).blinkHealingColor;
      pMVar2 = (this->fields)._.blinkMaterial;
      pBVar3 = (Blinker *)func_?();
      if (pBVar3 != (Blinker *)0x0) {
        Blinker::Blinker__ctor(pBVar3,4.0,pMVar2,CVar1,(MethodInfo *)0x0);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  (this_00,(Object *)0x8,(Object *)pBVar3,
                   MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                  );
        CVar1 = (this->fields).blinkAboutToExpireColor;
        pMVar2 = (this->fields)._.blinkMaterial;
        pBVar3 = (Blinker *)func_?();
        if (pBVar3 != (Blinker *)0x0) {
          Blinker::Blinker__ctor(pBVar3,4.0,pMVar2,CVar1,(MethodInfo *)0x0);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)0x5,(Object *)pBVar3,
                     MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__Add_BlinkType__Blinker_
                    );
          (this->fields)._.blinkers = (Dictionary_2_BlinkType_Blinker_ *)this_00;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* VehicleBlinker() */

void Assembly-CSharp.dll::VehicleBlinker::VehicleBlinker__ctor
               (VehicleBlinker *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkDamageColor.r = _UNK_?;
  (this->fields).blinkDamageColor.g = fVar3;
  (this->fields).blinkDamageColor.b = fVar2;
  (this->fields).blinkDamageColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkHealingColor.r = _UNK_?;
  (this->fields).blinkHealingColor.g = fVar3;
  (this->fields).blinkHealingColor.b = fVar2;
  (this->fields).blinkHealingColor.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields).blinkAboutToExpireColor.r = _UNK_?;
  (this->fields).blinkAboutToExpireColor.g = fVar3;
  (this->fields).blinkAboutToExpireColor.b = fVar2;
  (this->fields).blinkAboutToExpireColor.a = fVar1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

