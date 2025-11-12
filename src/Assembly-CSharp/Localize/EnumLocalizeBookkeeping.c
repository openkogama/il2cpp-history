
/* String GetLocalizedString(Int32) */

String * Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::
         EnumLocalizeBookkeeping_GetLocalizedString
                   (EnumLocalizeBookkeeping *this,int32_t enumVal,MethodInfo *method)

{
  aIStackX_10[0].m_value = enumVal;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
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
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).enumToStringKeyMap;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,enumVal,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_;
    if (iVar2 < 0) {
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
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).enumToStringKeyMap;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,enumVal,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar5 < 0) {
        aIStackX_10[0].m_value = enumVal;
        uVar6 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar6);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar7)();
        return pSVar4;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar5 < (uint)pDVar8->max_length) {
          return *(String **)&pDVar8->vector[(int)uVar5].value.y;
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        pSVar4 = (String *)(*pcVar7)();
        return pSVar4;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      pSVar4 = (String *)(*pcVar7)();
      return pSVar4;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pSVar4 = (String *)(*pcVar7)();
  return pSVar4;
}


/* Void Init() */

void Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_Init
               (EnumLocalizeBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).enumToStringKeyMap = (Dictionary_2_System_Int32_System_String_ *)this_00;
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
  pAVar6 = (this->fields).initCallback;
  if (pAVar6 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)0x0)
  {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,(this->fields).enumToStringKeyMap,
             (pAVar6->fields)._._.method);
  return;
}


/* EnumLocalizeBookkeeping(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,System.String]])
    */

void Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping__ctor
               (EnumLocalizeBookkeeping *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_
               *initCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Localize__EnumLocalizeBookkeeping__Init__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).initCallback = initCallback;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).initCallback >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__Localize__EnumLocalizeBookkeeping__Init__,
             (MethodInfo *)0x0);
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).enumToStringKeyMap = (Dictionary_2_System_Int32_System_String_ *)this_01;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pAVar6 = (this->fields).initCallback;
  if (pAVar6 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)0x0)
  {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,(this->fields).enumToStringKeyMap,
             (pAVar6->fields)._._.method);
  return;
}

