
/* Boolean GetResult() */

bool MVWorldObject.dll::LogicEvaluateInputSignalsOr::LogicEvaluateInputSignalsOr_GetResult
               (LogicEvaluateInputSignalsOr *this,MethodInfo *method)

{
  bVar1 = (this->fields).orIsTrue;
  (this->fields).orIsTrue = 0;
  return bVar1;
}


/* Void UpdateSignal(Boolean) */

void MVWorldObject.dll::LogicEvaluateInputSignalsOr::LogicEvaluateInputSignalsOr_UpdateSignal
               (LogicEvaluateInputSignalsOr *this,bool isHot,MethodInfo *method)

{
  if ((this->fields).orIsTrue != 0) {
    (this->fields).orIsTrue = 1;
    return;
  }
  (this->fields).orIsTrue = isHot;
  return;
}

