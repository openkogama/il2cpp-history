
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
  pbVar1 = &(this->fields).andIsTrue;
  *pbVar1 = *pbVar1 & isHot;
  return;
}


/* LogicEvaluateInputSignalsAnd() */

void MVWorldObject.dll::LogicEvaluateInputSignalsAnd::LogicEvaluateInputSignalsAnd__ctor
               (LogicEvaluateInputSignalsAnd *this,MethodInfo *method)

{
  (this->fields).andIsTrue = 1;
  return;
}

