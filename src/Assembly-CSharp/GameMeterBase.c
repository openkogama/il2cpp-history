
/* GameMeterBase() */

void Assembly-CSharp.dll::GameMeterBase::GameMeterBase__ctor(GameMeterBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                   );
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields).gameMeterVisualEffects = this_00;
  func_?(&(this->fields).gameMeterVisualEffects,this_00);
  (this->fields).meterActive = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* Void set_MeterActive(Boolean) */

void Assembly-CSharp.dll::GameMeterBase::GameMeterBase_set_MeterActive
               (GameMeterBase *this,bool value,MethodInfo *method)

{
  pGVar1 = this->klass;
  (this->fields).meterActive = value;
  (*(code *)(pGVar1->vtable).__unknown_2.method)(this,_value,(pGVar1->vtable).__unknown_3.methodPtr)
  ;
  return;
}

