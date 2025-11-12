
/* String Get(XPRewardType) */

String * Assembly-CSharp.dll::LocalizedEnums+XPRewardTypeLS::LocalizedEnums_XPRewardTypeLS_Get
                   (XPRewardType__Enum enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__LocalizedEnums__XPRewardTypeLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__LocalizedEnums__XPRewardTypeLS->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__LocalizedEnums__XPRewardTypeLS);
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


/* Void Init(Dictionary`2[System.Int32,System.String]) */

void Assembly-CSharp.dll::LocalizedEnums+XPRewardTypeLS::LocalizedEnums_XPRewardTypeLS_Init
               (Dictionary_2_System_Int32_System_String_ *map,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Play_mode_reward_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Cool_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Build_mode_reward_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Nice_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Awesome_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Avatar_mode_reward_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Ad_completed_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = TM::TM__(StringLiteral_Play_mode_reward_,(MethodInfo *)0x0);
  if (map != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    IVar2 = CONCAT31((int3)((uint)in_R9D >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)map,1,(Object *)pSVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar1 = TM::TM__(StringLiteral_Avatar_mode_reward_,(MethodInfo *)0x0);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)map,3,(Object *)pSVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar1 = TM::TM__(StringLiteral_Build_mode_reward_,(MethodInfo *)0x0);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)map,2,(Object *)pSVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar1 = TM::TM__(StringLiteral_Cool_,(MethodInfo *)0x0);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)map,4,(Object *)pSVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar1 = TM::TM__(StringLiteral_Nice_,(MethodInfo *)0x0);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)map,5,(Object *)pSVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar1 = TM::TM__(StringLiteral_Awesome_,(MethodInfo *)0x0);
    IVar2 = CONCAT31((int3)(IVar2 >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)map,6,(Object *)pSVar1,IVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
    pSVar1 = TM::TM__(StringLiteral_Ad_completed_,(MethodInfo *)0x0);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryInsert
              ((Dictionary_2_System_Int32_System_Object_ *)map,8,(Object *)pSVar1,
               CONCAT31((int3)(IVar2 >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Add_int__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* LocalizedEnums+XPRewardTypeLS() */

void Assembly-CSharp.dll::LocalizedEnums+XPRewardTypeLS::LocalizedEnums_XPRewardTypeLS__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Localize__EnumLocalizeBookkeeping);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__LocalizedEnums__XPRewardTypeLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LocalizedEnums__XPRewardTypeLS);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this = (UnityAction_1_System_Object_ *)
         FUN_?(
                      TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::String>_>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
  UnityAction_1_System_Object___ctor
            (this,(Object *)0x0,
             MethodInfo__LocalizedEnums__XPRewardTypeLS__Init_System__Collections__Generic__Dictionary<int,_System::String>_
             ,(MethodInfo *)0x0);
  this_00 = (EnumLocalizeBookkeeping *)FUN_?(TypeInfo__Localize__EnumLocalizeBookkeeping);
  Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping__ctor
            (this_00,(Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *
                     )this,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  TypeInfo__LocalizedEnums__XPRewardTypeLS->static_fields->enumLocalizeBookkeeping = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)TypeInfo__LocalizedEnums__XPRewardTypeLS->static_fields >> 0xc);
    uVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
    do {
      uVar4 = *(ulonglong *)(uVar3 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar3 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

