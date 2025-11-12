
/* XPProgressData(Int32, XPLevelLimits) */

void Assembly-CSharp.dll::XPProgressData::XPProgressData__ctor
               (XPProgressData *this,int32_t playerCurrentXP,XPLevelLimits *xpLevelLimits,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields).playerCurrentXP = playerCurrentXP;
  (this->fields).xpLevelLimits = xpLevelLimits;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* Boolean get_XPLimitExceeded() */

bool Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XPLimitExceeded
               (XPProgressData *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpLevelLimits;
  if (pXVar1 == (XPLevelLimits *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pXVar1->fields)._NextXP_k__BackingField <= (pXVar1->fields)._PrevXP_k__BackingField) {
    uVar4 = func_?(&TypeInfo__System__Exception);
    pEVar5 = (Exception *)func_?(uVar4);
    pSVar6 = (String *)func_?(&StringLiteral_prevXp____nextXp);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    FUN_?(pEVar5,uVar4);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  iVar7 = (this->fields).playerCurrentXP;
  if (iVar7 < (pXVar1->fields)._PrevXP_k__BackingField) {
    uVar4 = func_?(&TypeInfo__System__Exception);
    pEVar5 = (Exception *)func_?(uVar4);
    pSVar6 = (String *)func_?(&StringLiteral_currentXp___prevXp);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    FUN_?(pEVar5,uVar4);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (iVar7 < (pXVar1->fields)._NextXP_k__BackingField) {
    if (-1 < iVar7) {
      return 0;
    }
    uVar4 = func_?(&TypeInfo__System__Exception);
    pEVar5 = (Exception *)func_?(uVar4);
    pSVar6 = (String *)func_?(&StringLiteral_currentXp___0);
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar6,(MethodInfo *)0x0);
    uVar4 = func_?(&MethodInfo__XPLevelLimits__Validate_int_);
    FUN_?(pEVar5,uVar4);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  return 1;
}


/* String get_XPString() */

String * Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XPString
                   (XPProgressData *this,MethodInfo *method)

{
  bVar1 = (this->fields).xpId;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__XPRewardTypeLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__XPRewardTypeLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__XPRewardTypeLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__XPRewardTypeLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar2 = TypeInfo__LocalizedEnums__XPRewardTypeLS->static_fields->enumLocalizeBookkeeping;
  if (pEVar2 == (EnumLocalizeBookkeeping *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    pSVar4 = (String *)(*pcVar3)();
    return pSVar4;
  }
  aIStackX_10[0].m_value = (int32_t)bVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,bVar1,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_localized_string_found_for__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar2->fields).enumToStringKeyMap;
  if (pDVar5 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar5,(uint)bVar1,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar7 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_;
    if (iVar6 < 0) {
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::String::String_Concat_4
                          (StringLiteral_No_localized_string_found_for__,pSVar4,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar4,(MethodInfo *)0x0);
      pSVar4 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      return pSVar4;
    }
    pDVar5 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar2->fields).enumToStringKeyMap;
    if (pDVar5 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar5,(uint)bVar1,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar8 < 0) {
        aIStackX_10[0].m_value = (int32_t)bVar1;
        uVar9 = func_?(pMVar7->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar9);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      pDVar10 = (pDVar5->fields)._entries;
      if (pDVar10 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar8 < (uint)pDVar10->max_length) {
          return *(String **)&pDVar10->vector[(int)uVar8].value.y;
        }
        FUN_?();
        pcVar3 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar3)();
        return pSVar4;
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar3)();
      return pSVar4;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar3)();
  return pSVar4;
}


/* Int32 get_XpNextRel() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XpNextRel
                  (XPProgressData *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpLevelLimits;
  if (pXVar1 != (XPLevelLimits *)0x0) {
    return (pXVar1->fields)._NextXP_k__BackingField - (pXVar1->fields)._PrevXP_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Int32 get_XpRel() */

int32_t Assembly-CSharp.dll::XPProgressData::XPProgressData_get_XpRel
                  (XPProgressData *this,MethodInfo *method)

{
  pXVar1 = (this->fields).xpLevelLimits;
  if (pXVar1 != (XPLevelLimits *)0x0) {
    return (this->fields).playerCurrentXP - (pXVar1->fields)._PrevXP_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

