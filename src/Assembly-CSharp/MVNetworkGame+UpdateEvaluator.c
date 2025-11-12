
/* Boolean DoUpdate(LogicObjectManager) */

bool Assembly-CSharp.dll::MVNetworkGame+UpdateEvaluator::MVNetworkGame_UpdateEvaluator_DoUpdate
               (MVNetworkGame_UpdateEvaluator *this,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  iVar1 = (this->fields).lastUpdateTick;
  iVar2 = FUN_?();
  iVar3 = FUN_?();
  iVar1 = (this->fields).accumulatedTime + (iVar2 - iVar1);
  (this->fields).lastUpdateTick = iVar3;
  (this->fields).accumulatedTime = iVar1;
  if ((this->fields).updateInterval <= iVar1) {
    if (logicObjectManager == (LogicObjectManager *)0x0) {
      FUN_?();
      pcVar4 = (code *)swi(3);
      bVar5 = (*pcVar4)();
      return bVar5;
    }
    if ((logicObjectManager->fields)._TimeStamp_k__BackingField < (this->fields).stepTimestamp) {
      (this->fields).accumulatedTime = iVar1 - (this->fields).updateInterval;
      return 1;
    }
  }
  return 0;
}


/* Void set_StepTimestamp(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+UpdateEvaluator::
     MVNetworkGame_UpdateEvaluator_set_StepTimestamp
               (MVNetworkGame_UpdateEvaluator *this,int32_t value,MethodInfo *method)

{
  (this->fields).stepTimestamp = value;
  iVar1 = FUN_?();
  (this->fields).lastUpdateTick = iVar1;
  (this->fields).accumulatedTime = 0;
  return;
}

