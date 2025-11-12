
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::MVGameControllerBase+<InitRegionDependent>d__162::
     MVGameControllerBase_InitRegionDependent_d_162_MoveNext
               (MVGameControllerBase_InitRegionDependent_d_162 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Func<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StatHatWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVGameControllerBase____c___InitRegionDependent_b__162_0__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase____c);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__WaitUntil);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  pMVar2 = (this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return 0;
    }
    bVar3 = cRam_? == '\0';
    (this->fields).__1__state = -1;
    if (bVar3) {
      FUN_?(&TypeInfo__PlayerPrefsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    bVar4 = TypeInfo__PlayerPrefsManager->static_fields->isFirstTimeSession;
    if (((pMVar2 != (MVGameControllerBase *)0x0) &&
        (pRVar5 = (pMVar2->fields).regionConfigManager, pRVar5 != (RegionConfigManager *)0x0)) &&
       (pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                            (pRVar5,(MethodInfo *)0x0), pRVar6 != (RegionConfig *)0x0)) {
      pSStack_7 = (pRVar6->fields).StathatConfig.regionKey;
      PStack_8.filterLogTypeConsoleWrite = *(int32_t *)&(pRVar6->fields).StathatConfig.isEnabled;
      uStack_9 = *(undefined4 *)&(pRVar6->fields).StathatConfig.field_0xc;
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__StatHatWrapper);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__StatHatWrapper->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__StatHatWrapper->static_fields->isFirstTimeSession = bVar4;
      pSVar10 = TypeInfo__StatHatWrapper->static_fields;
      (pSVar10->statHatConfig).regionKey = pSStack_7;
      *(ulonglong *)&(pSVar10->statHatConfig).isEnabled =
           CONCAT44(uStack_9,PStack_8.filterLogTypeConsoleWrite);
      if (iRam_? != 0) {
        uVar11 = (uint)((ulonglong)&TypeInfo__StatHatWrapper->static_fields->statHatConfig >> 0xc);
        uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
        do {
          uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
          puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
          LOCK();
          bVar3 = uVar13 == *puVar14;
          if (bVar3) {
            *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
          }
          UNLOCK();
        } while (!bVar3);
      }
      pRVar5 = (pMVar2->fields).regionConfigManager;
      this_00 = (pMVar2->fields).debugLogHandler;
      if ((pRVar5 != (RegionConfigManager *)0x0) &&
         (pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                              (pRVar5,(MethodInfo *)0x0), pRVar6 != (RegionConfig *)0x0)) {
        pRVar5 = (pMVar2->fields).regionConfigManager;
        uVar15._0_1_ = (pRVar6->fields).DebuggerLoggerConfig.useSamplingOnAndroidAndWebGL;
        uVar15._1_1_ = (pRVar6->fields).DebuggerLoggerConfig.useProxyLogHandler;
        uVar15._2_2_ = *(undefined2 *)&(pRVar6->fields).DebuggerLoggerConfig.field_0x2;
        uVar15._4_4_ = (pRVar6->fields).DebuggerLoggerConfig.maxLogContextQueueCount;
        iVar16 = (pRVar6->fields).DebuggerLoggerConfig.proxyLogHandlerConfig.
                filterLogTypeConsoleWrite;
        if ((pRVar5 != (RegionConfigManager *)0x0) &&
           ((pRVar6 = RegionConfigManager::RegionConfigManager_get_RegionConfig
                                 (pRVar5,(MethodInfo *)0x0), pRVar6 != (RegionConfig *)0x0 &&
            (this_00 != (DebugLogHandler *)0x0)))) {
          SStack_17.dns = (pRVar6->fields).sentryConfig.dns;
          SStack_17.isEnabled = (pRVar6->fields).sentryConfig.isEnabled;
          SStack_17._9_7_ = *(undefined7 *)&(pRVar6->fields).sentryConfig.field_0x9;
          pSStack_7 = (String *)uVar15;
          PStack_8.filterLogTypeConsoleWrite = iVar16;
          DebugLogHandler::DebugLogHandler_Initialize
                    (this_00,(DebugLogHandlerConfig *)&pSStack_7,&SStack_17,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
    FUN_?();
    pcVar18 = (code *)swi(3);
    bVar4 = (*pcVar18)();
    return bVar4;
  }
  (this->fields).__1__state = -1;
  if (*(int *)&(TypeInfo__MVGameControllerBase____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar19 = (Object__Class *)TypeInfo__MVGameControllerBase____c->static_fields->__9__162_0;
  if (pOVar19 == (Object__Class *)0x0) {
    if (*(int *)&(TypeInfo__MVGameControllerBase____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    pMVar20 = TypeInfo__MVGameControllerBase____c->static_fields->__9;
    pOVar19 = (Object__Class *)FUN_?(TypeInfo__System__Func<bool>);
    FUN_?(pOVar19,pMVar20,
                  MethodInfo__MVGameControllerBase____c___InitRegionDependent_b__162_0__);
    TypeInfo__MVGameControllerBase____c->static_fields->__9__162_0 = (Func_1_Boolean_ *)pOVar19;
    if (iRam_? != 0) {
      uVar11 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase____c->static_fields->__9__162_0 >>
                     0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar3 = uVar13 == *puVar14;
        if (bVar3) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar3);
    }
  }
  pOVar21 = (Object *)FUN_?(TypeInfo__UnityEngine__WaitUntil);
  iVar1 = iRam_?;
  pOVar21[1].klass = pOVar19;
  pOVar21[2].monitor = (MonitorData *)0xbff0000000000000;
  if (iVar1 != 0) {
    uVar11 = (uint)((ulonglong)(pOVar21 + 1) >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar13 == *puVar14;
      if (bVar3) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar3);
  }
  (this->fields).__2__current = pOVar21;
  if (iVar1 != 0) {
    uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
    uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
    do {
      uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
      puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar13 == *puVar14;
      if (bVar3) {
        *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  (this->fields).__1__state = 1;
  return 1;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::MVGameControllerBase+<InitRegionDependent>d__162::
     MVGameControllerBase_InitRegionDependent_d_162_System_Collections_IEnumerator_Reset
               (MVGameControllerBase_InitRegionDependent_d_162 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  uVar1 = func_?(&
                              MethodInfo__MVGameControllerBase___InitRegionDependent_d__162__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

