
/* Void InitializeResetting(Int32) */

void Assembly-CSharp.dll::CEEditCubeTutorial+ResettingBookkeeping::
     CEEditCubeTutorial_ResettingBookkeeping_InitializeResetting
               (CEEditCubeTutorial_ResettingBookkeeping *this,int32_t resettingDelay,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_InitializeResetting);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
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
  iVar1 = FUN_?();
  (this->fields).resettingBeginTime = iVar1;
  return;
}


/* Boolean get_ReadyToReset() */

bool Assembly-CSharp.dll::CEEditCubeTutorial+ResettingBookkeeping::
     CEEditCubeTutorial_ResettingBookkeeping_get_ReadyToReset
               (CEEditCubeTutorial_ResettingBookkeeping *this,MethodInfo *method)

{
  iVar1 = (this->fields).resettingBeginTime;
  iVar2 = FUN_?();
  return (this->fields).resettingDelay < iVar2 - iVar1;
}

