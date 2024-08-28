
/* Void Initialize(GamePassTier, Int32, UnityAction`1[MV.Common.GamePassTier]) */

void Assembly-CSharp.dll::SpawnRoleTierEditorMenu::SpawnRoleTierEditorMenu_Initialize
               (SpawnRoleTierEditorMenu *this,GamePassTier__Enum newTier,int32_t newspawnRoleCost,
               UnityAction_1_MV_Common_GamePassTier_ *ChangeTierRequirement,MethodInfo *method)

{
  ppUVar1 = &(this->fields).ChangeTierRequirement;
  *ppUVar1 = ChangeTierRequirement;
  func_?(ppUVar1,ChangeTierRequirement);
  pTVar2 = (this->fields).currentTierNumberText;
  (this->fields).spawnRoleCost = newspawnRoleCost;
  (this->fields).currentTier = (undefined1)newTier;
  newTier = newTier & 0xff;
  pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&newTier,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    SpawnRoleTierEditorMenu_UpdateSpawnRoleCost(this,(this->fields).spawnRoleCost,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
    (*(code *)(pTVar2->klass->vtable).set_text.method)
              (pTVar2,pSVar3,(pTVar2->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
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
  method_00 = TypeInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0;
  value_00 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value_00,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  original = (this->fields).tierSettingsPrefab;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pOVar1 = (Object__Class *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                     ((Object *)original,
                      SpawnRoleTierSettings_MethodInfo__UnityEngine__Object__Instantiate<SpawnRoleTierSettings>_SpawnRoleTierSettings_
                     );
  if (value_00 != (Object *)0x0) {
    pOVar2 = value_00 + 1;
    pOVar2->klass = pOVar1;
    func_?(pOVar2,pOVar1);
    bVar3 = (this->fields).currentTier;
    pOVar1 = pOVar2->klass;
    value = (this->fields).canSelectTier0;
    this_01 = (MethodInfo **)
              func_?(TypeInfo__UnityEngine__Events__UnityAction<MV::Common::GamePassTier>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              ((UnityAction_1_System_Int32Enum_ *)this_01,(Object *)this,
               MethodInfo__SpawnRoleTierEditorMenu__OnTierSelected_MV__Common__GamePassTier_,
               (MethodInfo *)0x0);
    if (pOVar1 != (Object__Class *)0x0) {
      if (cRam_? == '\0') {
        this_01 = &
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
        ;
        func_?();
        cRam_? = '\x01';
      }
      *(bool *)&(pOVar1->_0).this_arg.attrs = value;
      ppIVar4 = &(pOVar1->_0).element_class;
      *ppIVar4 = (Il2CppClass *)this_01;
      func_?(ppIVar4,this_01);
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (pOVar1->_0).byval_arg.data.typeHandle;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,(uint)bVar3,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                            );
        if (this_02 != (RegexCharClass_SingleRange)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    ((GameObject *)this_02,1,(MethodInfo *)0x0);
          pGVar5 = *(GameObject **)&(pOVar1->_0).byval_arg.attrs;
          if (pGVar5 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (pGVar5,value,(MethodInfo *)0x0);
            pGVar5 = (GameObject *)(pOVar1->_0).this_arg.data.typeHandle;
            if (pGVar5 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar5,value == 0,(MethodInfo *)0x0);
              pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 ((Component *)this,(MethodInfo *)0x0);
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                  );
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
              Object]::UnityAction_2_System_Object_System_Object___ctor
                        ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,value_00,
                         MethodInfo__SpawnRoleTierEditorMenu____c__DisplayClass11_0___SelectTier_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                         ,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
              ExecuteEvents_ExecuteHierarchy
                        (pGVar5,(BaseEventData *)0x0,callbackFunction,
                         UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                        );
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  this_00 = &(this->fields).spawnRoleCost;
  IStack_1.m_value = 100;
  *this_00 = newspawnRoleCost;
  this_01 = (ProgressBarAndroid *)(this->fields).progressBar;
  if ((this->fields).currentTier == 0) {
    if (this_01 != (ProgressBarAndroid *)0x0) {
      ProgressBarAndroid::ProgressBarAndroid_set_Progress
                (this_01,(float)newspawnRoleCost / _UNK_?,(MethodInfo *)0x0);
      pTVar2 = (this->fields).progressBarText;
      pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
      str2 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_1,(MethodInfo *)0x0);
      mscorlib.dll::System::String::String_Concat_4(pSVar3,::StringLiteral__,str2,(MethodInfo *)0x0)
      ;
      if (pTVar2 != (Text *)0x0) {
        pTVar4 = pTVar2->klass;
        goto code_?;
      }
    }
  }
  else if (this_01 != (ProgressBarAndroid *)0x0) {
    ProgressBarAndroid::ProgressBarAndroid_set_Progress(this_01,1.0,(MethodInfo *)0x0);
    pTVar2 = (this->fields).progressBarText;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_00,(MethodInfo *)0x0);
    if (pTVar2 != (Text *)0x0) {
      pTVar4 = pTVar2->klass;
      IStack_1.m_value = (int32_t)pSVar3;
code_?:
      (*(code *)(pTVar4->vtable).set_text.method)();
      (this->fields).canSelectTier0 = *this_00 <= IStack_1.m_value;
      return;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    (*(code *)(pTVar1->klass->vtable).set_text.method)
              (pTVar1,pSVar2,(pTVar1->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    SpawnRoleTierEditorMenu_UpdateSpawnRoleCost(this,(this->fields).spawnRoleCost,(MethodInfo *)0x0)
    ;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

