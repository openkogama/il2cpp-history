
/* Void Awake() */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_Awake
               (JoystickControllerStack *this,MethodInfo *method)

{
  MVGameControllerBase::MVGameControllerBase_RegisterJoystickControllerStack(this,(MethodInfo *)0x0)
  ;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Pushing_unknown_joystick);
    cRam_? = '\x01';
  }
  JoystickControllerStack_CreateJoystickFromPrefab(this,(this->fields).avatar,(MethodInfo *)0x0);
  return;
}


/* Void CreateJoystickFromPrefab(InGameControls) */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_CreateJoystickFromPrefab
               (JoystickControllerStack *this,InGameControls *prefab,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    func_?(&
                    InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Controls_prefab_not_set_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)prefab,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
              ((Object *)StringLiteral_Controls_prefab_not_set_,(MethodInfo *)0x0);
    prefab = (this->fields).avatar;
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  this_02 = (Component *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)prefab,
                       InGameControls_MethodInfo__UnityEngine__Object__Instantiate<InGameControls>_InGameControls_
                      );
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).controls;
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  if ((this_00->fields)._size != 0) {
    this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(this_00->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                        );
    if (this_03 == (RegexCharClass_SingleRange)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_03,(MethodInfo *)0x0);
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  if (this_02 != (Component *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       (this_02,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      this_01 = (this->fields).controls;
      if (this_01 != (List_1_InGameControls_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__Add
                  ((List_1_System_Object_ *)this_01,(Object *)this_02,
                   MethodInfo__System__Collections__Generic__List<InGameControls>__Add_InGameControls_
                  );
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            (this_02,(MethodInfo *)0x0);
        parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (this_04 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_04,parent,0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void HideEUseIcon() */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_HideEUseIcon
               (JoystickControllerStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).controls;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size != 0) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(this_00->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                        );
      if ((RVar1 == (RegexCharClass_SingleRange)0x0) || (*(int **)((int)RVar1 + 0x18) == (int *)0x0)
         ) goto code_?;
      (**(code **)(**(int **)((int)RVar1 + 0x18) + 0xe8))();
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Pop() */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_Pop
               (JoystickControllerStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__RemoveAt_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_Pop);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
            ((Object *)StringLiteral_Pop,(MethodInfo *)0x0);
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).controls;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (pLVar1,(pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                      );
    this_00 = (this->fields).controls;
    if (this_00 != (List_1_InGameControls_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)this_00,(this_00->fields)._size + -1,
                 MethodInfo__System__Collections__Generic__List<InGameControls>__RemoveAt_int_);
      if (RVar2 != (RegexCharClass_SingleRange)0x0) {
        pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)RVar2,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar3,(MethodInfo *)0x0);
        pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 (this->fields).controls;
        if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,(pLVar1->fields)._size + -1,
                             MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                            );
          if (RVar2 != (RegexCharClass_SingleRange)0x0) {
            pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                               ((Component *)RVar2,(MethodInfo *)0x0);
            if (pGVar3 != (GameObject *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                        (pGVar3,1,(MethodInfo *)0x0);
              return;
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


/* Void PushJoystick(ControlType) */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_PushJoystick
               (JoystickControllerStack *this,ControlType__Enum joystickType,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Pushing_unknown_joystick);
    cRam_? = '\x01';
  }
  if (joystickType == ControlType__Enum_Avatar) {
    JoystickControllerStack_CreateJoystickFromPrefab(this,(this->fields).avatar,(MethodInfo *)0x0);
    return;
  }
  if (joystickType == ControlType__Enum_BasicVehicle) {
    JoystickControllerStack_CreateJoystickFromPrefab
              (this,(this->fields).basicVehicle,(MethodInfo *)0x0);
    return;
  }
  if (joystickType != ControlType__Enum_Jetpack) {
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)StringLiteral_Pushing_unknown_joystick,(MethodInfo *)0x0);
    return;
  }
  JoystickControllerStack_CreateJoystickFromPrefab
            (this,(this->fields).jetPackControls,(MethodInfo *)0x0);
  return;
}


/* Void ShowEUseIcon(ShowUseOption) */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack_ShowEUseIcon
               (JoystickControllerStack *this,ShowUseOption__Enum option,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).controls;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    if ((this_00->fields)._size != 0) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this_00,(this_00->fields)._size + -1,
                         MethodInfo__System__Collections__Generic__List<InGameControls>__get_Item_int_
                        );
      if ((RVar1 == (RegexCharClass_SingleRange)0x0) || (*(int **)((int)RVar1 + 0x18) == (int *)0x0)
         ) goto code_?;
      (**(code **)(**(int **)((int)RVar1 + 0x18) + 0xe0))();
    }
    return;
  }
code_?:
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* JoystickControllerStack() */

void Assembly-CSharp.dll::JoystickControllerStack::JoystickControllerStack__ctor
               (JoystickControllerStack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<InGameControls>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<InGameControls>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_InGameControls_ *)
            func_?(TypeInfo__System__Collections__Generic__List<InGameControls>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<InGameControls>__List__);
  ppLVar1 = &(this->fields).controls;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

