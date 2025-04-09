
/* String GetLocalizedString(Int32) */

String * Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::
         EnumLocalizeBookkeeping_GetLocalizedString
                   (EnumLocalizeBookkeeping *this,int32_t enumVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                   );
    func_?(&StringLiteral_No_localized_string_found_for__);
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).enumToStringKeyMap;
  if (pDVar1 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Single]::
            Dictionary_2_System_Int32_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32_System_Single_ *)pDVar1,enumVal,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__ContainsKey_int_
                      );
    if (bVar2 == 0) {
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&enumVal,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_No_localized_string_found_for__,pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      method = (MethodInfo *)&UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar3,(MethodInfo *)0x0);
      method = (MethodInfo *)&UNK_?;
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&enumVal,(MethodInfo *)0x0);
      return pSVar3;
    }
    pDVar1 = (this->fields).enumToStringKeyMap;
    if (pDVar1 != (Dictionary_2_System_Int32_System_String_ *)0x0) {
      pSVar3 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,enumVal,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__get_Item_int_
                         );
      return pSVar3;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar4)();
  return pSVar3;
}


/* Void Init() */

void Assembly-CSharp.dll::Localize::EnumLocalizeBookkeeping::EnumLocalizeBookkeeping_Init
               (EnumLocalizeBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  (this->fields).enumToStringKeyMap = (Dictionary_2_System_Int32_System_String_ *)this_00;
  func_?(&this->fields,this_00);
  pAVar1 = (this->fields).initCallback;
  if (pAVar1 != (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)0x0)
  {
    (*(pAVar1->fields)._._.invoke_impl)
              ((pAVar1->fields)._._.method_code,(this->fields).enumToStringKeyMap,
               (pAVar1->fields)._._.method);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__Localize__EnumLocalizeBookkeeping__Init__);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).initCallback = initCallback;
  func_?(&(this->fields).initCallback,initCallback);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__Localize__EnumLocalizeBookkeeping__Init__,
             (MethodInfo *)0x0);
  TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    ppMStack1 =
         &MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__;
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  ppMStack1 =
       (MethodInfo **)TypeInfo__System__Collections__Generic__Dictionary<int,_System::String>;
  this_01 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?();
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::String>__Dictionary__
            );
  (this->fields).enumToStringKeyMap = (Dictionary_2_System_Int32_System_String_ *)this_01;
  func_?();
  pAVar2 = (this->fields).initCallback;
  if (pAVar2 != (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_System_String_ *)0x0)
  {
    puStack3 = (pAVar2->fields)._._.method;
    pDStack4 = (this->fields).enumToStringKeyMap;
    ppMStack1 = (pAVar2->fields)._._.method_code;
    (*(pAVar2->fields)._._.invoke_impl)();
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

