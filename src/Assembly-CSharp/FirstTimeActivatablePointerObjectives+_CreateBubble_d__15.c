
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<CreateBubble>d__15::
     FirstTimeActivatablePointerObjectives_CreateBubble_d_15_MoveNext
               (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0___CreateBubble_b__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&TypeInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0);
    cRam_? = '\x01';
  }
  pFVar1 = this;
  iVar2 = (this->fields).__1__state;
  pFVar3 = (this->fields).__4__this;
  if (iVar2 == 0) {
    (this->fields).__1__state = -1;
    pFVar4 = (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)
             func_?(TypeInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0)
    ;
    if (pFVar4 != (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)pFVar4,ExceptionArgument__Enum_obj,unaff_EDI);
      (pFVar1->fields).__8__1 = pFVar4;
      func_?(&(pFVar1->fields).__8__1,pFVar4);
      pFVar4 = (pFVar1->fields).__8__1;
      pFVar3 = (pFVar1->fields).__4__this;
      if (pFVar4 != (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0) {
        (pFVar4->fields).__4__this = pFVar3;
        func_?(&pFVar4->fields,pFVar3);
        this = (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *)0x0;
        pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
        (pFVar1->fields).__2__current = pOVar5;
        func_?(&(pFVar1->fields).__2__current,pOVar5);
        (pFVar1->fields).__1__state = 1;
        return 1;
      }
    }
  }
  else {
    if (iVar2 != 1) {
      return 0;
    }
    pFVar4 = (this->fields).__8__1;
    (this->fields).__1__state = -1;
    if (pFVar4 != (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0) {
      (pFVar4->fields).target = (RectTransform *)0x0;
      func_?(&(pFVar4->fields).target,0);
      index = (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *)0x0;
      if (pFVar3 != (FirstTimeActivatablePointerObjectives *)0x0) {
        while (pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                        (pFVar3->fields).winningConditionTransforms,
              pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          if ((pLVar6->fields)._size <= (int)index) {
code_?:
            pFVar4 = (pFVar1->fields).__8__1;
            if (pFVar4 != (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *)0x0) {
              x = (pFVar4->fields).target;
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                FirstTimeActivatablePointerObjectives::FirstTimeActivatablePointerObjectives_Destroy
                          (pFVar3,(MethodInfo *)0x0);
                return 0;
              }
              pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)pFVar3,(MethodInfo *)0x0);
              pFVar4 = (pFVar1->fields).__8__1;
              callbackFunction =
                   (ExecuteEvents_EventFunction_1_System_Object_ *)
                   func_?(
                                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>
                                  );
              if (callbackFunction != (ExecuteEvents_EventFunction_1_System_Object_ *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,
                           (Object *)pFVar4,
                           MethodInfo__FirstTimeActivatablePointerObjectives____c__DisplayClass15_0___CreateBubble_b__0_TextBubbleController__UnityEngine__EventSystems__BaseEventData_
                           ,(MethodInfo *)0x0);
                if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
                }
                UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                ExecuteEvents_ExecuteHierarchy
                          (pGVar8,(BaseEventData *)0x0,callbackFunction,
                           UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<TextBubbleController>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<TextBubbleController>_
                          );
                return 0;
              }
            }
            break;
          }
          RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar6,(int32_t)index,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                            );
          if ((RVar9 == (RegexCharClass_SingleRange)0x0) ||
             (pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  ((Component *)RVar9,(MethodInfo *)0x0),
             pGVar8 == (GameObject *)0x0)) break;
          bVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(pGVar8,(MethodInfo *)0x0);
          if (bVar7 != 0) {
            this = (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *)
                   (pFVar1->fields).__8__1;
            pLVar6 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                     (pFVar3->fields).winningConditionTransforms;
            if (pLVar6 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            {
              method = 
              MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
              ;
              this = index;
              RVar9 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (pLVar6,(int32_t)index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__get_Item_int_
                                );
              if (this != (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *)0x0) {
                (this->fields).__2__current = (Object *)RVar9;
                in_stack_10 = &(this->fields).__2__current;
                in_stack_11 = &UNK_?;
                in_stack_12 = RVar9;
                func_?();
                goto code_?;
              }
            }
            break;
          }
          index = (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *)
                  ((int)&index->klass + 1);
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  bVar7 = (*pcVar13)();
  return bVar7;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<CreateBubble>d__15::
     FirstTimeActivatablePointerObjectives_CreateBubble_d_15_System_Collections_IEnumerator_Reset
               (FirstTimeActivatablePointerObjectives_CreateBubble_d_15 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__FirstTimeActivatablePointerObjectives___CreateBubble_d__15__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

