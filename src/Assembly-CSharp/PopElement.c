
/* Void Pop() */

void Assembly-CSharp.dll::PopElement::PopElement_Pop(PopElement *this,MethodInfo *method)

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
                    MethodInfo__PopElement____c___Pop_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__PopElement____c);
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__PopElement____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__PopElement____c);
  }
  callbackFunction = TypeInfo__PopElement____c->static_fields->__9__1_0;
  if (callbackFunction == (ExecuteEvents_EventFunction_1_IUIStack_ *)0x0) {
    if ((TypeInfo__PopElement____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PopElement____c);
    }
    object = TypeInfo__PopElement____c->static_fields->__9;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_IUIStack_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)object,
               MethodInfo__PopElement____c___Pop_b__1_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    TypeInfo__PopElement____c->static_fields->__9__1_0 = callbackFunction;
    func_?(&TypeInfo__PopElement____c->static_fields->__9__1_0,callbackFunction);
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


/* Void PopGroups() */

void Assembly-CSharp.dll::PopElement::PopElement_PopGroups(PopElement *this,MethodInfo *method)

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
                    MethodInfo__PopElement___PopGroups_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                   );
    cRam_? = '\x01';
  }
  root = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                   ((Component *)this,(MethodInfo *)0x0);
  callbackFunction =
       (ExecuteEvents_EventFunction_1_System_Object_ *)
       func_?(
                      TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                      );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
             MethodInfo__PopElement___PopGroups_b__2_0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
             ,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
            (root,(BaseEventData *)0x0,callbackFunction,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
            );
  return;
}


/* Void <PopGroups>b__2_0(IUIStack, BaseEventData) */

void Assembly-CSharp.dll::PopElement::PopElement__PopGroups_b__2_0
               (PopElement *this,IUIStack *x,BaseEventData *y,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IUIStack);
    func_?(&MethodInfo__System__Collections__Generic__List<UIGroupFlags>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<UIGroupFlags>__get_Item_int_);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  iVar2 = 0;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            (this->fields).popGroups;
  do {
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this_00->fields)._size <= iVar2) {
      if (x != (IUIStack *)0x0) {
        pIVar4 = x->klass;
        uVar5 = 0;
        uVar6._0_1_ = (pIVar4->_1).rank;
        uVar6._1_1_ = (pIVar4->_1).minimumAlignment;
        if (uVar6 != 0) {
          do {
            if (pIVar4->interfaceOffsets[uVar5].interfaceType ==
                (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IUIStack) {
              pIVar4 = x->klass;
              iVar2 = pIVar4->interfaceOffsets[uVar5].offset;
              (*(code *)(&(pIVar4->vtable).PopGroups)[iVar2].method)
                        (x,uVar1,(&(pIVar4->vtable).PopToGroup)[iVar2].methodPtr);
              return;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar6);
        }
        puVar7 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IUIStack,3);
        (*(code *)*puVar7)(x,uVar1,puVar7[1]);
        return;
      }
      goto code_?;
    }
    if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
    goto code_?;
    RVar8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,iVar2,
                       MethodInfo__System__Collections__Generic__List<UIGroupFlags>__get_Item_int_);
    uVar1 = uVar1 | (uint)RVar8;
    iVar2 = iVar2 + 1;
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              (this->fields).popGroups;
  } while( true );
}


/* PopElement() */

void Assembly-CSharp.dll::PopElement::PopElement__ctor(PopElement *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UIGroupFlags>__Add_UIGroupFlags_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UIGroupFlags>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UIGroupFlags>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UIGroupFlags>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UIGroupFlags>__List__);
  pMVar1 = MethodInfo__System__Collections__Generic__List<UIGroupFlags>__Add_UIGroupFlags_;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pRVar3 = (this_00->fields)._items;
    if (pRVar3 != (RegexCharClass_SingleRange__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (pRVar3->max_length <= uVar4) {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                  (this_00,(RegexCharClass_SingleRange)0x0,pMVar1->klass->rgctx_data[0xe].method);
code_?:
        (this->fields).popGroups = (List_1_UIGroupFlags_ *)this_00;
        func_?();
        UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
                  ((MonoBehaviour *)this,(MethodInfo *)0x0);
        return;
      }
      (this_00->fields)._size = uVar4 + 1;
      if (uVar4 < pRVar3->max_length) {
        pRVar3->vector[uVar4].First = 0;
        pRVar3->vector[uVar4].Last = 0;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

