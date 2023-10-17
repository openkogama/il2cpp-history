
/* Void AddTabMenuButton(Int32, String) */

void Assembly-CSharp.dll::TabMenu::TabMenu_AddTabMenuButton
               (TabMenu *this,int32_t categoryIndex,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                   );
    func_?(&
                    TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  original = (this->fields).tabMenuButtonPrefab;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                    ((Object *)original,parent,0,
                     TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase__UnityEngine__Transform__bool_
                    );
  if (value != (Object *)0x0) {
    (*(code *)value->klass[1]._0.image)(value,categoryIndex);
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).buttons;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                (this_00,(Object *)categoryIndex,value,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                );
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::TabMenu::TabMenu_SelectTab
               (TabMenu *this,int32_t tab,int32_t currentPage,int32_t maxPages,MethodInfo *method)

{
  pCStack_1 = (CanvasRenderer *)0xffffffff;
  pRStack_2 = (RectTransform *)&DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__get_Current__
    ;
    func_?();
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabMenuButtonBase>__get_Value__
                   );
    func_?(&StringLiteral__0___1_);
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_7._0_4_ = (Text__Class *)0x0;
  auStack_7._4_4_ = (MonitorData *)0x0;
  auStack_7._8_4_ = (Behaviour__Fields)0x0;
  auStack_7._12_4_ = (Material *)0x0;
  auStack_7._16_4_ = 0.0;
  auStack_7._20_4_ = 0.0;
  pTVar8 = (this->fields).pages;
  if (pTVar8 != (Text *)0x0) {
    (*(pTVar8->klass->vtable).set_text.methodPtr)
              (pTVar8,::StringLiteral__,(pTVar8->klass->vtable).set_text.method);
    if (1 < maxPages) {
      pTStack_9 = (this->fields).pages;
      fStack_10 = (float)currentPage;
      pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&fStack_10);
      fStack_12 = (float)maxPages;
      in_stack_6 = (MethodInfo **)&UNK_?;
      arg1 = (Object *)func_?(TypeInfo__System__Int32,&fStack_12);
      pSVar13 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0___1_,pOVar11,arg1,(MethodInfo *)0x0);
      if (pTStack_9 == (Text *)0x0) goto code_?;
      (*(pTStack_9->klass->vtable).set_text.methodPtr)
                (pTStack_9,pSVar13,(pTStack_9->klass->vtable).set_text.method);
    }
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).buttons;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         (&DStack_15,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                         );
      fStack_16 = 0.0;
      auStack_7._0_4_ = pDVar14->_dictionary;
      auStack_7._4_4_ = pDVar14->_version;
      auStack_7._8_4_ = pDVar14->_index;
      auStack_7._12_4_ = (pDVar14->_current).key;
      auStack_7._16_8_ = *(undefined8 *)&(pDVar14->_current).value;
      pCStack_1 = (CanvasRenderer *)0x1;
      pTStack_9 = (Text *)auStack_7;
      while( true ) {
        bVar17 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                          ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                           auStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                          );
        if (bVar17 == 0) break;
        if ((Object *)auStack_7._16_4_ == (Object *)0x0) goto code_?;
        (*(code *)(*(Object__Class **)auStack_7._16_4_)[1]._0.name)
                  (auStack_7._16_4_,(*(Object__Class **)auStack_7._16_4_)[1]._0.namespaze);
      }
      pCStack_1 = (CanvasRenderer *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)auStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      pCStack_1 = (CanvasRenderer *)0xffffffff;
      this_01 = (this->fields).buttons;
      if (this_01 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
        pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
                 Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                           ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,tab,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                           );
        if (pOVar11 != (Object *)0x0) {
          pOVar18 = pOVar11->klass;
          uVar19._0_2_ = pOVar18[1]._0.byval_arg.attrs;
          uVar19._2_1_ = pOVar18[1]._0.byval_arg.type;
          uVar19._3_1_ = pOVar18[1]._0.byval_arg.field_0x7;
          (*(code *)pOVar18[1]._0.byval_arg.data)(pOVar11,uVar19);
          *unaff_FS_OFFSET = fStack_3;
          return;
        }
      }
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* TabMenu() */

void Assembly-CSharp.dll::TabMenu::TabMenu__ctor(TabMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_TabMenuButtonBase_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>
                           );
  if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Dictionary__
              );
    (this->fields).buttons = this_00;
    func_?(&(this->fields).buttons,this_00);
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
              ((Transform *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

