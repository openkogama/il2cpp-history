
/* Void Initialize(GamePassTier, Int32, UnityAction`1[MV.Common.GamePassTier]) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_Initialize
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,int32_t newspawnRoleCost,
               UnityAction_1_MV_Common_GamePassTier_ *ChangeTierRequirement,MethodInfo *method)

{
  (this->fields).ChangeTierRequirement = ChangeTierRequirement;
  func_?(&(this->fields).ChangeTierRequirement,ChangeTierRequirement);
  pTVar1 = (this->fields).currentTierNumberText;
  (this->fields).spawnRoleCost = newspawnRoleCost;
  (this->fields).currentTier = (undefined1)newTier;
  newTier = newTier & 0xff;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newTier,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    SpawnRoleTierEditorMenu_UpdateSpawnRoleCost(this,(this->fields).spawnRoleCost,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnTierSelected(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_OnTierSelected
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  GVar1 = newTier;
  pTVar2 = (this->fields).currentTierNumberText;
  (this->fields).currentTier = (uint8_t)newTier;
  newTier = newTier & 0xff;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newTier,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(pTVar2->klass->vtable).set_text.methodPtr)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
    SpawnRoleTierEditorMenu_UpdateSpawnRoleCost(this,(this->fields).spawnRoleCost,(MethodInfo *)0x0)
    ;
    pUVar4 = (this->fields).ChangeTierRequirement;
    if (pUVar4 != (UnityAction_1_MV_Common_GamePassTier_ *)0x0) {
      (*(pUVar4->fields)._._.invoke_impl)
                ((pUVar4->fields)._._.method_code,GVar1,(pUVar4->fields)._._.method);
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SelectTier() */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_SelectTier
               (SpawnRoleTierEditorMenu *this,MethodInfo *method)

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
                    SpawnRoleTierSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTierSettings>_SpawnRoleTierSettings_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&MethodInfo__SpawnRoleTierEditorMenu__OnTierSelected_MV__Common__GamePassTier_);
    func_?(&
                    MethodInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0___SelectTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>);
    cRam_? = '\x01';
  }
  value_00 = (Object *)func_?(TypeInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0);
  if (value_00 != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value_00,ExceptionArgument__Enum_obj,unaff_EDI);
    original = (this->fields).tierSettingsPrefab;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    pOVar1 = (Object__Class *)
             UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                       ((Object *)original,
                        SpawnRoleTierSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTierSettings>_SpawnRoleTierSettings_
                       );
    value_00[1].klass = pOVar1;
    func_?(value_00 + 1,pOVar1);
    bVar2 = (this->fields).currentTier;
    pOVar1 = value_00[1].klass;
    value = (this->fields).canSelectTier0;
    this_01 = (UnityAction_1_System_ByteEnum_ *)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>);
    if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_01,(Object *)this,
                 MethodInfo__SpawnRoleTierEditorMenu__OnTierSelected_MV__Common__GamePassTier_,
                 (MethodInfo *)0x0);
      if (pOVar1 != (Object__Class *)0x0) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                         );
          cRam_? = '\x01';
        }
        *(bool *)&(pOVar1->_0).this_arg.data = value;
        *(UnityAction_1_System_ByteEnum_ **)&(pOVar1->_0).this_arg.attrs = this_01;
        func_?(&(pOVar1->_0).this_arg.attrs,this_01);
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (pOVar1->_0).namespaze;
        if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (this_00,(uint)bVar2,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                              );
          if (this_02 != (RegexCharClass_SingleRange)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      ((GameObject *)this_02,1,(MethodInfo *)0x0);
            pGVar3 = (GameObject *)(pOVar1->_0).byval_arg.data.typeHandle;
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,value,(MethodInfo *)0x0);
              pGVar3 = *(GameObject **)&(pOVar1->_0).byval_arg.attrs;
              if (pGVar3 != (GameObject *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar3,value == 0,(MethodInfo *)0x0);
                pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                         Component_get_gameObject((Component *)this,(MethodInfo *)0x0);
                callbackFunction =
                     (ExecuteEvents_EventFunction_1_System_Object_ *)
                     func_?(
                                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                    );
                if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::
                  Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor
                            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value_00
                             ,
                             MethodInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0___SelectTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                             ,(MethodInfo *)0x0);
                  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                      cctor_finished_or_no_cctor == 0) {
                    func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                  }
                  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                  ExecuteEvents_ExecuteHierarchy
                            (pGVar3,(BaseEventData *)0x0,callbackFunction,
                             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                            );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateSpawnRoleCost(Int32) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateSpawnRoleCost
               (SpawnRoleTierEditorMenu *this,int32_t newspawnRoleCost,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  IStack_1.m_value = 100;
  this_00 = (ProgressBarAndroid *)(this->fields).progressBar;
  (this->fields).spawnRoleCost = newspawnRoleCost;
  if ((this->fields).currentTier == 0) {
    if (this_00 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_00,(float)newspawnRoleCost / _UNK_?,(MethodInfo *)0x0);
      pTVar2 = (this->fields).progressBarText;
      str0 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
      str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
      pSStack3 =
           mscorlib.dll::System::String::String_Concat_4
                     (str0,::StringLiteral__,str2,(MethodInfo *)0x0);
      if (pTVar2 != (Text *)0x0) {
        pTVar4 = pTVar2->klass;
        pMStack5 = (pTVar4->vtable).set_text.method;
        (*(pTVar4->vtable).set_text.methodPtr)();
        (this->fields).canSelectTier0 = (this->fields).spawnRoleCost <= IStack_1.m_value;
        return;
      }
    }
  }
  else if (this_00 != (ProgressBarAndroid *)0x0) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_00,1.0,(MethodInfo *)0x0);
    pTVar2 = (this->fields).progressBarText;
    mscorlib.dll::System::Int32::Int32_ToString
              ((Int32 *)&(this->fields).spawnRoleCost,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      IStack_1.m_value = (int32_t)pTVar2;
      (*(pTVar2->klass->vtable).set_text.methodPtr)();
      (this->fields).canSelectTier0 = (this->fields).spawnRoleCost <= IStack_1.m_value;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateTier(GamePassTier) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_UpdateTier
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,MethodInfo *method)

{
  pTVar1 = (this->fields).currentTierNumberText;
  (this->fields).currentTier = (undefined1)newTier;
  newTier = newTier & 0xff;
  pSVar2 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newTier,(MethodInfo *)0x0);
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).set_text.method);
    SpawnRoleTierEditorMenu_UpdateSpawnRoleCost(this,(this->fields).spawnRoleCost,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

