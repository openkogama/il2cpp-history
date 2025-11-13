
/* String DetectRegionFromEnvironment() */

String * Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_DetectRegionFromEnvironment
                   (RegionConfigManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  bool_MethodInfo__System__Linq__Enumerable__Any<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<RegionConfigNamePair,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RegionConfigManager____c___DetectRegionFromEnvironment_b__4_0_RegionConfigNamePair_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RegionConfigManager____c);
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
  source = (this->fields).expectedRegionValues;
  if (*(int *)&(TypeInfo__RegionConfigManager____c->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_00 = TypeInfo__RegionConfigManager____c->static_fields->__9__4_0;
  if (this_00 == (Func_2_RegionConfigNamePair_Boolean_ *)0x0) {
    if (*(int *)&(TypeInfo__RegionConfigManager____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    object = TypeInfo__RegionConfigManager____c->static_fields->__9;
    this_00 = (Func_2_RegionConfigNamePair_Boolean_ *)
              FUN_?(TypeInfo__System__Func<RegionConfigNamePair,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              ((Predicate_1_Object_ *)this_00,(Object *)object,
               MethodInfo__RegionConfigManager____c___DetectRegionFromEnvironment_b__4_0_RegionConfigNamePair_
               ,(MethodInfo *)0x0);
    TypeInfo__RegionConfigManager____c->static_fields->__9__4_0 = this_00;
    if (iRam_? != 0) {
      uVar1 = (uint)((ulonglong)&TypeInfo__RegionConfigManager____c->static_fields->__9__4_0 >> 0xc
                     );
      puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar3 = *puVar2;
        LOCK();
        uVar4 = *puVar2;
        if (uVar3 == uVar4) {
          *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
        }
        UNLOCK();
      } while (uVar3 != uVar4);
    }
  }
  bVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_5
                    ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                     bool_MethodInfo__System__Linq__Enumerable__Any<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                    );
  pSVar6 = StringLiteral_local;
  if (bVar5 == 0) {
    pSVar7 = mscorlib.dll::System::Environment::Environment_GetCommandLineArgs((MethodInfo *)0x0);
    pSVar8 = StringLiteral__region;
    pSVar9 = StringLiteral___region;
    uVar1 = 0;
    if (pSVar7 != (String__Array *)0x0) {
      ppSVar10 = pSVar7->vector;
      iVar11 = pSVar7->max_length;
      do {
        if ((int)iVar11 + -1 <= (int)uVar1) {
          pSVar9 = mscorlib.dll::System::String::String_Concat_4
                              (StringLiteral_region__,pSVar6,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                    ((Object *)pSVar9,(MethodInfo *)0x0);
          return pSVar6;
        }
        if ((uint)pSVar7->max_length <= uVar1) goto DAT_?;
        pSVar12 = *ppSVar10;
        if ((pSVar12 == pSVar9) ||
           ((((pSVar12 != (String *)0x0 && (pSVar9 != (String *)0x0)) &&
             ((pSVar12->fields)._stringLength == (pSVar9->fields)._stringLength)) &&
            (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                               ((uint8_t *)&(pSVar12->fields)._firstChar,
                                (uint8_t *)&(pSVar9->fields)._firstChar,
                                (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0),
            bVar5 != 0)))) {
code_?:
          if ((uint)pSVar7->max_length <= uVar1 + 1) {
DAT_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            pSVar6 = (String *)(*pcVar13)();
            return pSVar6;
          }
          pSVar6 = ppSVar10[1];
        }
        else {
          if ((uint)pSVar7->max_length <= uVar1) goto DAT_?;
          pSVar12 = *ppSVar10;
          if ((pSVar12 == pSVar8) ||
             (((pSVar12 != (String *)0x0 && (pSVar8 != (String *)0x0)) &&
              (((pSVar12->fields)._stringLength == (pSVar8->fields)._stringLength &&
               (bVar5 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                  ((uint8_t *)&(pSVar12->fields)._firstChar,
                                   (uint8_t *)&(pSVar8->fields)._firstChar,
                                   (longlong)(pSVar12->fields)._stringLength * 2,(MethodInfo *)0x0),
               bVar5 != 0)))))) goto code_?;
        }
        uVar1 = uVar1 + 1;
        ppSVar10 = ppSVar10 + 1;
      } while( true );
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar14 != (GameSessionData *)0x0) {
      pSVar6 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_Region_from_session_data__,(pGVar14->fields).region,
                           (MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)pSVar6,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar14 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar14 != (GameSessionData *)0x0) {
        return (pGVar14->fields).region;
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar13)();
  return pSVar6;
}


/* Boolean <get_RegionConfig>b__3_0(RegionConfigNamePair) */

bool Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager__get_RegionConfig_b__3_0
               (RegionConfigManager *this,RegionConfigNamePair *p,MethodInfo *method)

{
  if (p == (RegionConfigNamePair *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pSVar3 = (p->fields).regionName;
  pSVar4 = (this->fields).region;
  if (pSVar3 != pSVar4) {
    if (((pSVar3 != (String *)0x0) && (pSVar4 != (String *)0x0)) &&
       ((pSVar3->fields)._stringLength == (pSVar4->fields)._stringLength)) {
      lVar5 = (longlong)(pSVar3->fields)._stringLength;
      puVar6 = &(pSVar4->fields)._firstChar;
      uVar7 = lVar5 * 2;
      puVar8 = &(pSVar3->fields)._firstChar;
      if (puVar8 != puVar6) {
        if (7 < uVar7) {
          if (uVar7 != 8) {
            puVar9 = puVar6;
            do {
              if (*(longlong *)((longlong)puVar9 + ((longlong)puVar8 - (longlong)puVar6)) !=
                  *(longlong *)puVar9) {
                return 0;
              }
              puVar9 = puVar9 + 4;
            } while ((ulonglong)((longlong)puVar9 - (longlong)puVar6) < uVar7 - 8);
          }
          return *(longlong *)(puVar8 + lVar5 + -4) == *(longlong *)(puVar6 + lVar5 + -4);
        }
        if (uVar7 != 0) {
          puVar9 = puVar6;
          do {
            if (*(char *)((longlong)puVar9 + ((longlong)puVar8 - (longlong)puVar6)) != (char)*puVar9
               ) {
              return 0;
            }
            puVar9 = (uint16_t *)((longlong)puVar9 + 1);
          } while ((ulonglong)((longlong)puVar9 - (longlong)puVar6) < uVar7);
        }
      }
      return 1;
    }
    return 0;
  }
  return 1;
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
    FUN_?(&
                  RegionConfigNamePair_MethodInfo__System__Linq__Enumerable__FirstOrDefault<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<RegionConfigNamePair,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RegionConfigManager___get_RegionConfig_b__3_0_RegionConfigNamePair_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionConfigManager_GetRegionCon);
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
    pSVar1 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_RegionConfigManager_GetRegionCon,(this->fields).region,
                        (MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar1,(MethodInfo *)0x0);
  }
  source = (this->fields).expectedRegionValues;
  this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<RegionConfigNamePair,_bool>)
  ;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__RegionConfigManager___get_RegionConfig_b__3_0_RegionConfigNamePair_,
             (MethodInfo *)0x0);
  pOVar7 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_3
                     ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                      RegionConfigNamePair_MethodInfo__System__Linq__Enumerable__FirstOrDefault<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                     );
  if (pOVar7 == (Object *)0x0) {
    uVar8 = func_?(&TypeInfo__System__Exception);
    this_01 = (Exception *)func_?(uVar8);
    pSVar1 = (String *)func_?(&StringLiteral_RegionConfig_not_found);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar1,(MethodInfo *)0x0);
    uVar8 = func_?(&MethodInfo__RegionConfigManager__get_RegionConfig__);
    FUN_?(this_01,uVar8);
    pcVar9 = (code *)swi(3);
    pRVar10 = (RegionConfig *)(*pcVar9)();
    return pRVar10;
  }
  return (RegionConfig *)pOVar7[1].monitor;
}

