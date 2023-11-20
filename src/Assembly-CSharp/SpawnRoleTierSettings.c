
/* Void Initialize(GamePassTier, Boolean, UnityAction`1[MV.Common.GamePassTier]) */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_Initialize
               (SpawnRoleTierSettings *this,GamePassTier__Enum currentTier,bool canSelectTier0,
               UnityAction_1_MV_Common_GamePassTier_ *OnChangeTierCallback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  (this->fields).OnChangeTierCallback = OnChangeTierCallback;
  (this->fields).canSelectTier0 = canSelectTier0;
  func_?(&(this->fields).OnChangeTierCallback,OnChangeTierCallback);
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).tierSelectedEffectObjects;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    this_01 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,currentTier & 0xff,
                         MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                        );
    if (this_01 != (RegexCharClass_SingleRange)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)this_01,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).tierZero;
      if (pGVar1 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar1,canSelectTier0,(MethodInfo *)0x0);
        pGVar1 = (this->fields).tierZeroGray;
        if (pGVar1 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar1,canSelectTier0 ^ 1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnSelectTier0() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier0
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  if ((this->fields).canSelectTier0 != 0) {
    SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier0,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnSelectTier1() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier1
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier1,(MethodInfo *)0x0);
  return;
}


/* Void OnSelectTier2() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier2
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier2,(MethodInfo *)0x0);
  return;
}


/* Void OnSelectTier3() */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_OnSelectTier3
               (SpawnRoleTierSettings *this,MethodInfo *method)

{
  SpawnRoleTierSettings_SelectTier(this,GamePassTier__Enum_Tier3,(MethodInfo *)0x0);
  return;
}


/* Void SelectTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierSettings::SpawnRoleTierSettings_SelectTier
               (SpawnRoleTierSettings *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&
                    MethodInfo__SpawnRoleTierSettings____c___SelectTier_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleTierSettings____c);
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).OnChangeTierCallback;
  if (pUVar1 != (UnityAction_1_MV_Common_GamePassTier_ *)0x0) {
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,newTier,(pUVar1->fields)._._.method);
    root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__SpawnRoleTierSettings____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SpawnRoleTierSettings____c);
    }
    callbackFunction = TypeInfo__SpawnRoleTierSettings____c->static_fields->__9__10_0;
    if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
      if ((TypeInfo__SpawnRoleTierSettings____c->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SpawnRoleTierSettings____c);
      }
      object = TypeInfo__SpawnRoleTierSettings____c->static_fields->__9;
      callbackFunction =
           (ExecuteEvents_EventFunction_1_IUIStack_ *)
           func_?(
                          TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                          );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]
      ::UnityAction_2_System_Object_System_Object___ctor
                ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
                 MethodInfo__SpawnRoleTierSettings____c___SelectTier_b__10_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 ,(MethodInfo *)0x0);
      TypeInfo__SpawnRoleTierSettings____c->static_fields->__9__10_0 = callbackFunction;
      func_?(&TypeInfo__SpawnRoleTierSettings____c->static_fields->__9__10_0,
                      callbackFunction);
    }
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,
               (ExecuteEvents_EventFunction_1_System_Object_ *)callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

