
/* String GetLocalizedString(String) */

String * Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::
         StringLocalizeBookkeeping_GetLocalizedString
                   (StringLocalizeBookkeeping *this,String *stringVal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                   );
    func_?(&StringLiteral_No_localized_string_found_for__);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            (this->fields).stringToStringKeyMap;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)stringVal,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__ContainsKey_System__String_
                      );
    if (bVar1 == 0) {
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_No_localized_string_found_for__,stringVal,(MethodInfo *)0x0)
      ;
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                ((Object *)pSVar2,(MethodInfo *)0x0);
      return stringVal;
    }
    this_01 = (this->fields).stringToStringKeyMap;
    if (this_01 != (Dictionary_2_System_String_System_String_ *)0x0) {
      pSVar2 = (String *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)stringVal,
                          MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__get_Item_System__String_
                         );
      return pSVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pSVar2 = (String *)(*pcVar3)();
  return pSVar2;
}


/* Void Init() */

void Assembly-CSharp.dll::Localize::StringLocalizeBookkeeping::StringLocalizeBookkeeping_Init
               (StringLocalizeBookkeeping *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    (this->fields).stringToStringKeyMap = this_00;
    func_?(&this->fields,this_00);
    pAVar1 = (this->fields).initCallback;
    if (pAVar1 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_String_ *)
                  0x0) {
      (*(pAVar1->fields)._._.invoke_impl)
                ((pAVar1->fields)._._.method_code,(this->fields).stringToStringKeyMap,
                 (pAVar1->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__Localize__StringLocalizeBookkeeping__Init__);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields).initCallback = initCallback;
  func_?(&(this->fields).initCallback,initCallback);
  this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
  if (this_00 != (NavMesh_OnNavMeshPreUpdate *)0x0) {
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__Localize__StringLocalizeBookkeeping__Init__,
               (MethodInfo *)0x0);
    TM::TM_LanguageChanged((Action *)this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_String_System_String_ *)func_?();
    if (this_01 != (Dictionary_2_System_String_System_String_ *)0x0) {
      Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
      ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                ((ParameterOverride_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                );
      (this->fields).stringToStringKeyMap = this_01;
      func_?(&this->fields,this_01);
      pAVar1 = (this->fields).initCallback;
      if (pAVar1 != (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_String_ *
                    )0x0) {
        (*(pAVar1->fields)._._.invoke_impl)
                  ((pAVar1->fields)._._.method_code,(this->fields).stringToStringKeyMap,
                   (pAVar1->fields)._._.method);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

