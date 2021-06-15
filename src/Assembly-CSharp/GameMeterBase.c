
/* GameMeterBase() */

void Assembly-CSharp.dll::GameMeterBase::GameMeterBase__ctor(GameMeterBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  (this->fields).gameMeterVisualEffects = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)this_00;
  (this->fields).meterActive = 1;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
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

