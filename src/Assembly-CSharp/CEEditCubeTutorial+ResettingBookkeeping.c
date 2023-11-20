
/* Void InitializeResetting(Int32) */

void Assembly-CSharp.dll::CEEditCubeTutorial+ResettingBookkeeping::
     CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting
               (CEEditCubeTutorial_ResettingBookkeeping *this,int32_t resettingDelay,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_InitializeResetting);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_InitializeResetting,(MethodInfo *)0x0);
  (this->fields).doReset = 1;
  (this->fields).isResetting = 0;
  if ((this->fields).resettingDelay < resettingDelay) {
    (this->fields).resettingDelay = resettingDelay;
  }
  return;
}


/* Void StartResetting() */

void Assembly-CSharp.dll::CEEditCubeTutorial+ResettingBookkeeping::
     CEEditCubeTutorial_ResettingBookkeeping_StartResetting
               (CEEditCubeTutorial_ResettingBookkeeping *this,MethodInfo *method)

{
  (this->fields).doReset = 0;
  (this->fields).isResetting = 1;
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_GetEnvironmentTick(0,(MethodInfo *)0x0);
  (this->fields).resettingBeginTime = iVar1;
  return;
}


/* Boolean get_ReadyToReset() */

bool Assembly-CSharp.dll::CEEditCubeTutorial+ResettingBookkeeping::
     CEEditCubeTutorial_ResettingBookkeeping_get_ReadyToReset
               (CEEditCubeTutorial_ResettingBookkeeping *this,MethodInfo *method)

{
  iVar1 = WaitForTicksLocal::WaitForTicksLocal_Diff
                    ((this->fields).resettingBeginTime,(MethodInfo *)0x0);
  return (this->fields).resettingDelay < iVar1;
}

