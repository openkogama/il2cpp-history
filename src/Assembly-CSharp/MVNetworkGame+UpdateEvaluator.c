
/* Boolean DoUpdate(LogicObjectManager) */

bool Assembly-CSharp.dll::MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_DoUpdate
               (MVNetworkGame_UpdateEvaluator *this,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_Diff((this->fields).lastUpdateTick,(MethodInfo *)0x0)
  ;
  iVar2 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  piVar3 = &(this->fields).accumulatedTime;
  *piVar3 = *piVar3 + iVar1;
  (this->fields).lastUpdateTick = iVar2;
  if ((this->fields).updateInterval <= (this->fields).accumulatedTime) {
    if (logicObjectManager == (LogicObjectManager *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    pIVar6 = MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::
             KogamaSettingTypes::KogamaSettingNumericBase`1[System::Single]::
             KogamaSettingNumericBase_1_System_Single__get_KogamaSetting
                       ((KogamaSettingNumericBase_1_System_Single_ *)logicObjectManager,
                        (MethodInfo *)0x0);
    if ((int)pIVar6 < (this->fields).stepTimestamp) {
      piVar3 = &(this->fields).accumulatedTime;
      *piVar3 = *piVar3 - (this->fields).updateInterval;
      return 1;
    }
  }
  return 0;
}


/* MVNetworkGame+UpdateEvaluator(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator__ctor
               (MVNetworkGame_UpdateEvaluator *this,int32_t updateInterval,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).updateInterval = updateInterval;
  return;
}


/* Void set_StepTimestamp(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+UpdateEvaluator::
     MVNetworkGame_UpdateEvaluator_set_StepTimestamp
               (MVNetworkGame_UpdateEvaluator *this,int32_t value,MethodInfo *method)

{
  (this->fields).stepTimestamp = value;
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  (this->fields).lastUpdateTick = iVar1;
  (this->fields).accumulatedTime = 0;
  return;
}

