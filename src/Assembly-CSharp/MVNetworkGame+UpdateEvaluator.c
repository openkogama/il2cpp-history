
/* Boolean DoUpdate(LogicObjectManager) */

bool Assembly-CSharp.dll::MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_DoUpdate
               (MVNetworkGame_UpdateEvaluator *this,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_Diff((this->fields).lastUpdateTick,(MethodInfo *)0x0)
  ;
  iVar2 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  iVar3 = (this->fields).accumulatedTime + iVar1;
  (this->fields).lastUpdateTick = iVar2;
  (this->fields).accumulatedTime = iVar3;
  if ((this->fields).updateInterval <= iVar3) {
    if (logicObjectManager == (LogicObjectManager *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if ((logicObjectManager->fields)._TimeStamp_k__BackingField < (this->fields).stepTimestamp) {
      (this->fields).accumulatedTime = iVar3 - (this->fields).updateInterval;
      return 1;
    }
  }
  return 0;
}


/* MVNetworkGame+UpdateEvaluator(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator__ctor
               (MVNetworkGame_UpdateEvaluator *this,int32_t updateInterval,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
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

