
/* String _(MVConnState) */

String * Assembly-CSharp.dll::LocalizedEnums::LocalizedEnums__
                   (MVConnState__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__MVConnStateLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__MVConnStateLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__MVConnStateLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__MVConnStateLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = TypeInfo__LocalizedEnums__MVConnStateLS->static_fields->enumLocalizeBookkeeping;
  if (pEVar1 == (EnumLocalizeBookkeeping *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  aIStackX_10[0].m_value = enumVal;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,enumVal,0);
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
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
  if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar4,enumVal,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar6 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_;
    if (iVar5 < 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_No_localized_string_found_for__,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      return pSVar3;
    }
    pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
    if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar4,enumVal,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar7 < 0) {
        aIStackX_10[0].m_value = enumVal;
        uVar8 = func_?(pMVar6->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar8);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      pDVar9 = (pDVar4->fields)._entries;
      if (pDVar9 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar7 < (uint)pDVar9->max_length) {
          return *(String **)&pDVar9->vector[(int)uVar7].value.y;
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* String _(MVEventCodes) */

String * Assembly-CSharp.dll::LocalizedEnums::LocalizedEnums___1
                   (MVEventCodes__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__MVJoinStateLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__MVJoinStateLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__MVJoinStateLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__MVJoinStateLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = TypeInfo__LocalizedEnums__MVJoinStateLS->static_fields->enumLocalizeBookkeeping;
  if (pEVar1 == (EnumLocalizeBookkeeping *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  aIStackX_10[0].m_value = enumVal & MVEventCodes__Enum_Join;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,(char)enumVal,0);
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
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
  if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar4,enumVal & MVEventCodes__Enum_Join,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar6 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_;
    if (iVar5 < 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_No_localized_string_found_for__,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      return pSVar3;
    }
    pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
    if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar4,enumVal & MVEventCodes__Enum_Join,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar7 < 0) {
        aIStackX_10[0].m_value = enumVal & MVEventCodes__Enum_Join;
        uVar8 = func_?(pMVar6->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar8);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      pDVar9 = (pDVar4->fields)._entries;
      if (pDVar9 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar7 < (uint)pDVar9->max_length) {
          return *(String **)&pDVar9->vector[(int)uVar7].value.y;
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* String _(XPRewardType) */

String * Assembly-CSharp.dll::LocalizedEnums::LocalizedEnums___2
                   (XPRewardType__Enum enumVal,MethodInfo *method)

{
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
  pEVar1 = TypeInfo__LocalizedEnums__XPRewardTypeLS->static_fields->enumLocalizeBookkeeping;
  if (pEVar1 == (EnumLocalizeBookkeeping *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  aIStackX_10[0].m_value = enumVal & 0xff;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,(char)enumVal,0);
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
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
  if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar4,enumVal & 0xff,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar6 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_;
    if (iVar5 < 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_No_localized_string_found_for__,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      return pSVar3;
    }
    pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
    if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar4,enumVal & 0xff,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar7 < 0) {
        aIStackX_10[0].m_value = enumVal & 0xff;
        uVar8 = func_?(pMVar6->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar8);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      pDVar9 = (pDVar4->fields)._entries;
      if (pDVar9 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar7 < (uint)pDVar9->max_length) {
          return *(String **)&pDVar9->vector[(int)uVar7].value.y;
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}


/* String _(AccessoryCategoryClient) */

String * Assembly-CSharp.dll::LocalizedEnums::LocalizedEnums___3
                   (AccessoryCategoryClient__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__AccessoryCategoryLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__AccessoryCategoryLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__AccessoryCategoryLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__AccessoryCategoryLS->_1).field_0x1c == 0) {
    FUN_?();
  }
  pEVar1 = TypeInfo__LocalizedEnums__AccessoryCategoryLS->static_fields->enumLocalizeBookkeeping;
  if (pEVar1 == (EnumLocalizeBookkeeping *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pSVar3 = (String *)(*pcVar2)();
    return pSVar3;
  }
  aIStackX_10[0].m_value = enumVal;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,enumVal,0);
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
  pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
  if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar4,enumVal,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar6 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_;
    if (iVar5 < 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_No_localized_string_found_for__,pSVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_10,(MethodInfo *)0x0);
      return pSVar3;
    }
    pDVar4 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(pEVar1->fields).enumToStringKeyMap;
    if (pDVar4 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar4,enumVal,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar7 < 0) {
        aIStackX_10[0].m_value = enumVal;
        uVar8 = func_?(pMVar6->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar8);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      pDVar9 = (pDVar4->fields)._entries;
      if (pDVar9 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar7 < (uint)pDVar9->max_length) {
          return *(String **)&pDVar9->vector[(int)uVar7].value.y;
        }
        FUN_?();
        pcVar2 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar2)();
        return pSVar3;
      }
      FUN_?();
      pcVar2 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar2)();
      return pSVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar2)();
  return pSVar3;
}

