
/* RegionConfigNamePair+RegionConfigType DetectRegionFromEnvironment() */

RegionConfigNamePair_RegionConfigType__Enum
Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager_DetectRegionFromEnvironment
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
    FUN_?(&TypeInfo__RegionConfigNamePair__RegionConfigType);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__RegionConfigManager____c__DisplayClass4_0___DetectRegionFromEnvironment_b__0_RegionConfigNamePair_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RegionConfigManager____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__region);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_region__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral___region);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionConfigManager__DetectRegio);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Region__0__extracted_from_from_s);
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
  else {
    object = (Object *)FUN_?(TypeInfo__RegionConfigManager____c__DisplayClass4_0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if ((pGVar1 == (GameSessionData *)0x0) ||
       (RVar2 = RegionConfigNamePair::RegionConfigNamePair_RegionNameToType
                          ((pGVar1->fields).region,(MethodInfo *)0x0), object == (Object *)0x0))
    goto code_?;
    *(RegionConfigNamePair_RegionConfigType__Enum *)&object[1].klass = RVar2;
    source = (this->fields).expectedRegionValues;
    this_00 = (Predicate_1_Object_ *)
              FUN_?(TypeInfo__System__Func<RegionConfigNamePair,_bool>);
    mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
              (this_00,object,
               MethodInfo__RegionConfigManager____c__DisplayClass4_0___DetectRegionFromEnvironment_b__0_RegionConfigNamePair_
               ,(MethodInfo *)0x0);
    bVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Any_5
                      ((IEnumerable_1_System_Object_ *)source,(Func_2_Object_Boolean_ *)this_00,
                       bool_MethodInfo__System__Linq__Enumerable__Any<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                      );
    if (bVar3 != 0) {
      auStackX_18[0] = *(undefined4 *)&object[1].klass;
      arg0 = (Object *)FUN_?(TypeInfo__RegionConfigNamePair__RegionConfigType,auStackX_18);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pSVar4 = StringLiteral_Region__0__extracted_from_from_s;
      pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar1 != (GameSessionData *)0x0) {
        PStack_5._arg0 = (Object *)0x0;
        PStack_5._arg1 = (Object *)0x0;
        PStack_5._arg2 = (Object *)0x0;
        PStack_5._args = (Object__Array *)0x0;
        mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                  (&PStack_5,arg0,(Object *)(pGVar1->fields).region,(MethodInfo *)0x0);
        PStack_6._arg0 = PStack_5._arg0;
        PStack_6._arg1 = PStack_5._arg1;
        PStack_6._arg2 = PStack_5._arg2;
        PStack_6._args = PStack_5._args;
        pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                           ((IFormatProvider *)0x0,pSVar4,&PStack_6,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return *(RegionConfigNamePair_RegionConfigType__Enum *)&object[1].klass;
      }
      goto code_?;
    }
  }
  RVar2 = RegionConfigNamePair_RegionConfigType__Enum_local;
  pSVar7 = mscorlib.dll::System::Environment::Environment_GetCommandLineArgs((MethodInfo *)0x0);
  uVar8 = 0;
  if (pSVar7 != (String__Array *)0x0) {
    ppSVar9 = pSVar7->vector;
    do {
      if ((int)pSVar7->max_length + -1 <= (int)uVar8) {
        PStack_5._arg0 = (Object *)TypeInfo__RegionConfigNamePair__RegionConfigType;
        PStack_5._arg1 = (Object *)0xffffffffffffffff;
        PStack_5._arg2 = (Object *)CONCAT44(PStack_5._arg2._4_4_,RVar2);
        pSVar4 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&PStack_5,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_region__,pSVar4,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return RVar2;
      }
      if ((uint)pSVar7->max_length <= uVar8) goto code_?;
      pSVar4 = *ppSVar9;
      if ((pSVar4 == StringLiteral___region) ||
         ((((pSVar4 != (String *)0x0 && (StringLiteral___region != (String *)0x0)) &&
           ((pSVar4->fields)._stringLength == (StringLiteral___region->fields)._stringLength)) &&
          (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                             ((uint8_t *)&(pSVar4->fields)._firstChar,
                              (uint8_t *)&(StringLiteral___region->fields)._firstChar,
                              (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
          bVar3 != 0)))) {
code_?:
        if ((uint)pSVar7->max_length <= uVar8 + 1) {
code_?:
          FUN_?();
          pcVar10 = (code *)swi(3);
          RVar2 = (*pcVar10)();
          return RVar2;
        }
        RVar2 = RegionConfigNamePair::RegionConfigNamePair_RegionNameToType
                          (ppSVar9[1],(MethodInfo *)0x0);
      }
      else {
        if ((uint)pSVar7->max_length <= uVar8) goto code_?;
        pSVar4 = *ppSVar9;
        if ((pSVar4 == StringLiteral__region) ||
           (((pSVar4 != (String *)0x0 && (StringLiteral__region != (String *)0x0)) &&
            (((pSVar4->fields)._stringLength == (StringLiteral__region->fields)._stringLength &&
             (bVar3 = mscorlib.dll::System::SpanHelpers::SpanHelpers_SequenceEqual
                                ((uint8_t *)&(pSVar4->fields)._firstChar,
                                 (uint8_t *)&(StringLiteral__region->fields)._firstChar,
                                 (longlong)(pSVar4->fields)._stringLength * 2,(MethodInfo *)0x0),
             bVar3 != 0)))))) goto code_?;
      }
      uVar8 = uVar8 + 1;
      ppSVar9 = ppSVar9 + 1;
    } while( true );
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  RVar2 = (*pcVar10)();
  return RVar2;
}


/* Boolean <get_RegionConfig>b__3_0(RegionConfigNamePair) */

bool Assembly-CSharp.dll::RegionConfigManager::RegionConfigManager__get_RegionConfig_b__3_0
               (RegionConfigManager *this,RegionConfigNamePair *p,MethodInfo *method)

{
  if (p != (RegionConfigNamePair *)0x0) {
    return (p->fields).regionType == (this->fields).regionConfigType;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  bVar2 = (*pcVar1)();
  return bVar2;
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
    FUN_?(&TypeInfo__RegionConfigNamePair__RegionConfigType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RegionConfigManager_GetRegionCon);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).regionConfigType == 0) {
    RStack_1 = RegionConfigManager_DetectRegionFromEnvironment(this,(MethodInfo *)0x0);
    (this->fields).regionConfigType = RStack_1;
    EStack_2.klass = (Enum__Class *)TypeInfo__RegionConfigNamePair__RegionConfigType;
    EStack_2.monitor = (MonitorData *)0xffffffffffffffff;
    pSVar3 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_2,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_RegionConfigManager_GetRegionCon,pSVar3,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log((Object *)pSVar3,(MethodInfo *)0x0);
  }
  pLVar4 = (this->fields).expectedRegionValues;
  this_00 = (Predicate_1_Object_ *)FUN_?(TypeInfo__System__Func<RegionConfigNamePair,_bool>)
  ;
  mscorlib.dll::System::Predicate`1[Object]::Predicate_1_Object___ctor
            (this_00,(Object *)this,
             MethodInfo__RegionConfigManager___get_RegionConfig_b__3_0_RegionConfigNamePair_,
             (MethodInfo *)0x0);
  pOVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_3
                     ((IEnumerable_1_System_Object_ *)pLVar4,(Func_2_Object_Boolean_ *)this_00,
                      RegionConfigNamePair_MethodInfo__System__Linq__Enumerable__FirstOrDefault<RegionConfigNamePair>_System__Collections__Generic__IEnumerable<RegionConfigNamePair>__System__Func<RegionConfigNamePair,_bool>_
                     );
  if (pOVar5 != (Object *)0x0) {
    return (RegionConfig *)pOVar5[1].monitor;
  }
  uVar6 = func_?(&TypeInfo__RegionConfigNamePair__RegionConfigType);
  pOVar5 = (Object *)func_?(uVar6);
  pLVar4 = (this->fields).expectedRegionValues;
  uVar6 = func_?(&TypeInfo__Extensions);
  func_?(uVar6);
  pSVar3 = Extensions::Extensions_BuildStringRecursive
                     ((IEnumerable *)pLVar4,(String *)0x0,1,(MethodInfo *)0x0);
  format = (String *)func_?(&StringLiteral_RegionConfig_not_found_for_regio);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (format,pOVar5,(Object *)pSVar3,(MethodInfo *)0x0);
  uVar6 = func_?(&TypeInfo__System__Exception);
  this_01 = (Exception *)func_?(uVar6);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_01,pSVar3,(MethodInfo *)0x0);
  uVar6 = func_?(&MethodInfo__RegionConfigManager__get_RegionConfig__);
  FUN_?(this_01,uVar6);
  pcVar7 = (code *)swi(3);
  pRVar8 = (RegionConfig *)(*pcVar7)();
  return pRVar8;
}

