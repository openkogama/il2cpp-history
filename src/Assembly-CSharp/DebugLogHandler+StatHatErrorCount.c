
/* Void Increment(Boolean, Boolean) */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_Increment
               (DebugLogHandler_StatHatErrorCount *this,bool errorDetected,bool onGoingErrorDetected
               ,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_An_errorDetected_and_onGoingErro);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  if (errorDetected == onGoingErrorDetected) {
    if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Boolean);
    }
    pSVar4 = mscorlib.dll::System::Boolean::Boolean_ToString
                       ((Boolean *)&errorDetected,(MethodInfo *)0x0);
    pSVar4 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_An_errorDetected_and_onGoingErro,pSVar4,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)pSVar4,(MethodInfo *)0x0);
  }
  else {
    if (onGoingErrorDetected != 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__StatHatWrapper);
        func_?(&StringLiteral_errorcountongoing);
        cRam_? = '\x01';
      }
      if ((this->fields).reportedOngoingError == 0) {
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__StatHatWrapper);
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcountongoing,1,(MethodInfo *)0x0);
        (this->fields).reportedOngoingError = 1;
      }
    }
    if (errorDetected != 0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__StatHatWrapper);
        func_?(&StringLiteral_errorcount);
        cRam_? = '\x01';
      }
      if ((this->fields).reportedError == 0) {
        if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__StatHatWrapper);
        }
        StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcount,1,(MethodInfo *)0x0);
        (this->fields).reportedError = 1;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = uStack_3;
  return;
}


/* Void IncrementErrorCount() */

void Assembly-CSharp.dll::DebugLogHandler+StatHatErrorCount::
     DebugLogHandler_StatHatErrorCount_IncrementErrorCount
               (DebugLogHandler_StatHatErrorCount *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_errorcount);
    cRam_? = '\x01';
  }
  if ((this->fields).reportedError == 0) {
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
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
    func_?(&TypeInfo__StatHatWrapper);
    func_?(&StringLiteral_errorcountongoing);
    cRam_? = '\x01';
  }
  if ((this->fields).reportedOngoingError == 0) {
    if ((TypeInfo__StatHatWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__StatHatWrapper);
    }
    StatHatWrapper::StatHatWrapper_Count(StringLiteral_errorcountongoing,1,(MethodInfo *)0x0);
    (this->fields).reportedOngoingError = 1;
  }
  return;
}

