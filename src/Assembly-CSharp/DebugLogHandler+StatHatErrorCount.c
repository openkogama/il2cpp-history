
/* Void Increment(Boolean, Boolean) */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_Increment
               (DebugLogHandler_StatHatErrorCount *this,bool errorDetected,bool onGoingErrorDetected
               ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_An_errorDetected_and_onGoingErro);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (errorDetected == onGoingErrorDetected) {
    if (*(int *)(lRam_? + 0xe4) == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_False);
      LOCK();
      UNLOCK();
      FUN_?(&StringLiteral_True);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pSVar1 = StringLiteral_False;
    if (errorDetected != 0) {
      pSVar1 = StringLiteral_True;
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_An_errorDetected_and_onGoingErro,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar1,(MethodInfo *)0x0);
  }
  else {
    if (onGoingErrorDetected != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__StatHatWrapper);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_errorcountongoing);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields).reportedOngoingError == 0) {
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcountongoing,1,(MethodInfo *)0x0);
        (this->fields).reportedOngoingError = 1;
      }
    }
    if (errorDetected != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__StatHatWrapper);
        LOCK();
        UNLOCK();
        FUN_?(&StringLiteral_errorcount);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this->fields).reportedError == 0) {
        if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
          FUN_?();
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcount,1,(MethodInfo *)0x0);
        (this->fields).reportedError = 1;
      }
    }
  }
  return;
}


/* Void IncrementErrorCount() */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_IncrementErrorCount
               (DebugLogHandler_StatHatErrorCount *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_errorcount);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).reportedError == 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcount,1,(MethodInfo *)0x0);
    (this->fields).reportedError = 1;
  }
  return;
}


/* Void IncrementErrorCountOnGoing() */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_IncrementErrorCountOnGoing
               (DebugLogHandler_StatHatErrorCount *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_errorcountongoing);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).reportedOngoingError == 0) {
    if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcountongoing,1,(MethodInfo *)0x0);
    (this->fields).reportedOngoingError = 1;
  }
  return;
}

