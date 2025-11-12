
/* Void KogamaLogHandlerOnOnLogReceived(Object, ProxyLogHandler+LogFormatData) */

void Assembly-CSharp.dll::KogamaLogHandlerTest::KogamaLogHandlerTest_KogamaLogHandlerOnOnLogReceived
               (KogamaLogHandlerTest *this,Object *sender,ProxyLogHandler_LogFormatData *e,
               MethodInfo *method)

{
  if (e == (ProxyLogHandler_LogFormatData *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pSVar2 = ProxyLogHandler+LogFormatData::ProxyLogHandler_LogFormatData_get_Message
                     (e,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).s = pSVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).s >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
  (this->fields).logType = (e->fields).LogType;
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::KogamaLogHandlerTest::KogamaLogHandlerTest_Start
               (KogamaLogHandlerTest *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__KogamaLogHandlerTest__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ProxyLogHandler);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_test);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = (ProxyLogHandler *)FUN_?(TypeInfo__ProxyLogHandler);
  ProxyLogHandler::ProxyLogHandler__ctor(pPVar1,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).kogamaLogHandler = pPVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).kogamaLogHandler >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  pPVar1 = (this->fields).kogamaLogHandler;
  this_00 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<ProxyLogHandler::LogFormatData>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__KogamaLogHandlerTest__KogamaLogHandlerOnOnLogReceived_System__Object__ProxyLogHandler__LogFormatData_
             ,(MethodInfo *)0x0);
  if (pPVar1 == (ProxyLogHandler *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  ProxyLogHandler::ProxyLogHandler_add_OnLogReceived
            (pPVar1,(EventHandler_1_ProxyLogHandler_LogFormatData_ *)this_00,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar8 = StringLiteral_test;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar9 == (ILogger_1 *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,0,pSVar8);
  return;
}

