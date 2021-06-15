
/* Boolean GetResult() */

bool MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd_GetResult
               (LogicEvaluateInputSignalsAnd *this,MethodInfo *method)

{
  bVar1 = (this->fields).andIsTrue;
  (this->fields).andIsTrue = 1;
  return bVar1;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd_UpdateSignal
               (LogicEvaluateInputSignalsAnd *this,bool isHot,MethodInfo *method)

{
  bVar1 = 0;
  if ((this->fields).andIsTrue != 0) {
    bVar1 = isHot;
  }
  (this->fields).andIsTrue = bVar1;
  return;
}

