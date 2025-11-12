
/* String GetLocalizedString(String) */

String * Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::
         StringLocalizeBookkeeping_GetLocalizedString
                   (StringLocalizeBookkeeping *this,String *stringVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_No_localized_string_found_for__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
            *)(this->fields).stringToStringKeyMap;
  if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                 *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (pDVar1,(Object *)stringVal,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                       ->klass->rgctx_data[0x21].method);
    if (iVar2 < 0) {
      pSVar3 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_No_localized_string_found_for__,stringVal,(MethodInfo *)0x0)
      ;
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      return stringVal;
    }
    pDVar1 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
              *)(this->fields).stringToStringKeyMap;
    if (pDVar1 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                   *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
              UIElements::StyleComplexSelector+PseudoStateData]::
              Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                        (pDVar1,(Object *)stringVal,
                         MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  ((Object *)stringVal,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar5)();
        return pSVar3;
      }
      pDVar6 = (pDVar1->fields)._entries;
      if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                     *)0x0) {
        if (uVar4 < (uint)pDVar6->max_length) {
          return (String *)pDVar6->vector[(int)uVar4].value;
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        pSVar3 = (String *)(*pcVar5)();
        return pSVar3;
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      pSVar3 = (String *)(*pcVar5)();
      return pSVar3;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* Void Init() */

void Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::StringLocalizeBookkeeping_Init
               (StringLocalizeBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).stringToStringKeyMap = (Dictionary_2_System_String_System_String_ *)this_00;
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
  if (pAVar6 == (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_String_ *)0x0
     ) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,(this->fields).stringToStringKeyMap,
             (pAVar6->fields)._._.method);
  return;
}


/* StringLocalizeBookkeeping(Action`1[System.Collections.Generic.Dictionary`2[System.String,System.String]])
    */

void Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::StringLocalizeBookkeeping__ctor
               (StringLocalizeBookkeeping *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_String_System_String_
               *initCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__Localize__StringLocalizeBookkeeping__Init__);
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
            (this_00,(Object *)this,MethodInfo__Localize__StringLocalizeBookkeeping__Init__,
             (MethodInfo *)0x0);
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).stringToStringKeyMap = (Dictionary_2_System_String_System_String_ *)this_01;
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
  if (pAVar6 == (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_String_ *)0x0
     ) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,(this->fields).stringToStringKeyMap,
             (pAVar6->fields)._._.method);
  return;
}

