
/* String DetectRegionFromEnvironment() */

String * Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_DetectRegionFromEnvironment
                   (RegionConfigManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__region);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_region__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Region_from_session_data__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___region);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionConfigManager__DetectRegio);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_local);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionNotDefined);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField ==
      (GameSessionData *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_RegionConfigManager__DetectRegio,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if ((pGVar2 == (GameSessionData *)0x0) ||
     (pSVar3 = (pGVar2->fields).region, pSVar3 == (String *)0x0)) goto DAT_?;
  if (pSVar3 == StringLiteral_RegionNotDefined) {
code_?:
    pSVar3 = StringLiteral_local;
    pSVar4 = mscorlib.dll::System::Environment::Environment_GetCommandLineArgs((MethodInfo *)0x0);
    pSVar5 = StringLiteral__region;
    pSVar6 = StringLiteral___region;
    uVar7 = 0;
    if (pSVar4 != (String__Array *)0x0) {
      ppSVar8 = pSVar4->vector;
      iVar9 = pSVar4->max_length;
      do {
        if ((int)iVar9 + -1 <= (int)uVar7) {
          pSVar6 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_region__,pSVar3,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          return pSVar3;
        }
        if ((uint)pSVar4->max_length <= uVar7) goto DAT_?;
        pSVar10 = *ppSVar8;
        if (pSVar10 == pSVar6) {
code_?:
          if ((uint)pSVar4->max_length <= uVar7 + 1) {
DAT_?:
            FUN_?();
            pcVar11 = (code *)swi(3);
            pSVar3 = (String *)(*pcVar11)();
            return pSVar3;
          }
          pSVar3 = ppSVar8[1];
        }
        else {
          if (((pSVar10 != (String *)0x0) && (pSVar6 != (String *)0x0)) &&
             ((pSVar10->fields)._stringLength == (pSVar6->fields)._stringLength)) {
            bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar10->fields)._firstChar,
                               (uint8_t *)&(pSVar6->fields)._firstChar,
                               (longlong)(pSVar10->fields)._stringLength * 2,(MethodInfo *)0x0);
            if (bVar12 != 0) goto code_?;
          }
          if ((uint)pSVar4->max_length <= uVar7) goto DAT_?;
          pSVar10 = *ppSVar8;
          if (pSVar10 == pSVar5) goto code_?;
          if (((pSVar10 != (String *)0x0) && (pSVar5 != (String *)0x0)) &&
             ((pSVar10->fields)._stringLength == (pSVar5->fields)._stringLength)) {
            bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                              ((uint8_t *)&(pSVar10->fields)._firstChar,
                               (uint8_t *)&(pSVar5->fields)._firstChar,
                               (longlong)(pSVar10->fields)._stringLength * 2,(MethodInfo *)0x0);
            if (bVar12 != 0) goto code_?;
          }
        }
        uVar7 = uVar7 + 1;
        ppSVar8 = ppSVar8 + 1;
      } while( true );
    }
  }
  else {
    if ((StringLiteral_RegionNotDefined != (String *)0x0) &&
       ((pSVar3->fields)._stringLength == (StringLiteral_RegionNotDefined->fields)._stringLength)) {
      bVar12 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                        ((uint8_t *)&(pSVar3->fields)._firstChar,
                         (uint8_t *)&(StringLiteral_RegionNotDefined->fields)._firstChar,
                         (longlong)(pSVar3->fields)._stringLength * 2,(MethodInfo *)0x0);
      if (bVar12 != 0) goto code_?;
    }
    if (cVar1 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar2 != (GameSessionData *)0x0) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Region_from_session_data__,(pGVar2->fields).region,
                          (MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar3,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        return (pGVar2->fields).region;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar11 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar11)();
  return pSVar3;
}


/* RegionConfig get_RegionConfig() */

RegionConfig *
Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_get_RegionConfig
          (RegionConfigManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_friends);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_br);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionConfigManager_GetRegionCon);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_www);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_test);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_dev);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ut);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_local);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).region;
  if ((pSVar1 == (String *)0x0) || ((pSVar1->fields)._stringLength == 0)) {
    pSVar1 = RegionConfigManager_DetectRegionFromEnvironment(this,(MethodInfo *)0x0);
    bVar2 = iRam_? != 0;
    (this->fields).region = pSVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).region >> 0xc);
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
    pSVar1 = RegionConfigManager_DetectRegionFromEnvironment(this,(MethodInfo *)0x0);
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_RegionConfigManager_GetRegionCon,pSVar1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  }
  pSVar1 = (this->fields).region;
  if ((pSVar1 == StringLiteral_local) ||
     ((((pSVar1 != (String *)0x0 && (StringLiteral_local != (String *)0x0)) &&
       ((pSVar1->fields)._stringLength == (StringLiteral_local->fields)._stringLength)) &&
      (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                         ((uint8_t *)&(pSVar1->fields)._firstChar,
                          (uint8_t *)&(StringLiteral_local->fields)._firstChar,
                          (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
      bVar7 != 0)))) {
    return (this->fields).local;
  }
  pSVar1 = (this->fields).region;
  if ((pSVar1 == StringLiteral_dev) ||
     (((pSVar1 != (String *)0x0 && (StringLiteral_dev != (String *)0x0)) &&
      (((pSVar1->fields)._stringLength == (StringLiteral_dev->fields)._stringLength &&
       (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_dev->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar7 != 0)))))) {
    return (this->fields).dev;
  }
  pSVar1 = (this->fields).region;
  if ((pSVar1 != StringLiteral_test) &&
     (((pSVar1 == (String *)0x0 || (StringLiteral_test == (String *)0x0)) ||
      (((pSVar1->fields)._stringLength != (StringLiteral_test->fields)._stringLength ||
       (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                          ((uint8_t *)&(pSVar1->fields)._firstChar,
                           (uint8_t *)&(StringLiteral_test->fields)._firstChar,
                           (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
       bVar7 == 0)))))) {
    pSVar1 = (this->fields).region;
    if ((pSVar1 == StringLiteral_friends) ||
       ((((pSVar1 != (String *)0x0 && (StringLiteral_friends != (String *)0x0)) &&
         ((pSVar1->fields)._stringLength == (StringLiteral_friends->fields)._stringLength)) &&
        (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                           ((uint8_t *)&(pSVar1->fields)._firstChar,
                            (uint8_t *)&(StringLiteral_friends->fields)._firstChar,
                            (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
        bVar7 != 0)))) {
      return (this->fields).friends;
    }
    pSVar1 = (this->fields).region;
    if ((pSVar1 == StringLiteral_br) ||
       (((pSVar1 != (String *)0x0 && (StringLiteral_br != (String *)0x0)) &&
        (((pSVar1->fields)._stringLength == (StringLiteral_br->fields)._stringLength &&
         (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar1->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_br->fields)._firstChar,
                             (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar7 != 0)))))) {
      return (this->fields).br;
    }
    pSVar1 = (this->fields).region;
    if ((pSVar1 != StringLiteral_www) &&
       (((pSVar1 == (String *)0x0 || (StringLiteral_www == (String *)0x0)) ||
        (((pSVar1->fields)._stringLength != (StringLiteral_www->fields)._stringLength ||
         (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                            ((uint8_t *)&(pSVar1->fields)._firstChar,
                             (uint8_t *)&(StringLiteral_www->fields)._firstChar,
                             (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
         bVar7 == 0)))))) {
      pSVar1 = (this->fields).region;
      if ((pSVar1 != StringLiteral_ut) &&
         ((((pSVar1 == (String *)0x0 || (StringLiteral_ut == (String *)0x0)) ||
           ((pSVar1->fields)._stringLength != (StringLiteral_ut->fields)._stringLength)) ||
          (bVar7 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar1->fields)._firstChar,
                              (uint8_t *)&(StringLiteral_ut->fields)._firstChar,
                              (longlong)(pSVar1->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar7 == 0)))) {
        uVar8 = func_?(&TypeInfo__System__Exception);
        this_00 = (Exception *)func_?(uVar8);
        pSVar1 = (String *)func_?(&StringLiteral_RegionConfig_not_found);
        mscorlib.dll::System::Exception::Exception__ctor_1(this_00,pSVar1,(MethodInfo *)0x0);
        uVar8 = func_?(&MethodInfo__RegionConfigManager__get_RegionConfig__);
        FUN_?(this_00,uVar8);
        pcVar9 = (code *)swi(3);
        pRVar10 = (RegionConfig *)(*pcVar9)();
        return pRVar10;
      }
      return (this->fields).ut;
    }
    return (this->fields).www;
  }
  return (this->fields).test;
}

