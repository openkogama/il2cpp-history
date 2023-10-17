
/* Void AddTabMenuButton(Int32, String) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_AddTabMenuButton
               (TabMenuAccessoryShop *this,int32_t categoryIndex,String *categoryName,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Item_int_
                   );
    func_?(&
                    TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_02 = (Component *)0x0;
  index = 0;
  pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           (this->fields).nonLayoutTabButtons;
  if (pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    while (index < (pLVar1->fields)._size) {
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).nonLayoutTabButtons;
      if ((pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
         (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (pLVar1,index,
                             MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Item_int_
                            ), RVar2 == (RegexCharClass_SingleRange)0x0)) goto code_?;
      pLVar1 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (this->fields).nonLayoutTabButtons;
      if (*(int *)((int)RVar2 + 8) == categoryIndex) {
        if ((pLVar1 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
           (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              (pLVar1,index,
                               MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Item_int_
                              ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
          original = *(Object **)((int)RVar2 + 0xc);
          if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          this_02 = (Component *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              (original,
                               TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                              );
          break;
        }
        goto code_?;
      }
      index = index + 1;
      if (pLVar1 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)this_02,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      original_00 = (this->fields).tabMenuButtonPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_02 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original_00,
                           TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                          );
    }
    if (this_02 != (Component *)0x0) {
      (*(code *)this_02->klass[1]._0.image)
                (this_02,categoryIndex,categoryName,this_02->klass[1]._0.gc_desc);
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (this_02,(MethodInfo *)0x0);
      parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_01,parent,0,(MethodInfo *)0x0);
        this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).buttons;
        if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (this_00,(Object *)categoryIndex,(Object *)this_02,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                    );
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void DestroyTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
               (TabMenuAccessoryShop *this,AccessoryCategoryClient__Enum category,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).buttons;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)category,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return;
    }
    pDVar2 = (this->fields).buttons;
    if ((pDVar2 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) &&
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System
                  ::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                            ((Dictionary_2_System_Int32Enum_System_Object_ *)pDVar2,category,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                            ), this_01 != (Component *)0x0)) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_01,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      pDVar2 = (this->fields).buttons;
      if (pDVar2 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Remove
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,category,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Remove_int_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* TabMenuButtonBase GetTabMenuButton(AccessoryCategoryClient) */

TabMenuButtonBase *
Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_GetTabMenuButton
          (TabMenuAccessoryShop *this,AccessoryCategoryClient__Enum category,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(this->fields).buttons;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)category,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                      );
    if (bVar1 == 0) {
      return (TabMenuButtonBase *)0x0;
    }
    this_01 = (this->fields).buttons;
    if (this_01 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
      pTVar2 = (TabMenuButtonBase *)
               mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,category,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                         );
      return pTVar2;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pTVar2 = (TabMenuButtonBase *)(*pcVar3)();
  return pTVar2;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_SelectTab
               (TabMenuAccessoryShop *this,int32_t tab,int32_t currentPage,int32_t maxPages,
               MethodInfo *method)

{
  pRStack_1 = (RectTransform *)0xffffffff;
  puStack_2 = &DAT_?;
  fStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (float)&fStack_3;
  puStack_4 = &stack0xffffffa0;
  puVar5 = &stack0xffffffa0;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__get_Current__
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabMenuButtonBase>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    func_?(&StringLiteral__0___1_);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  auStack_6._0_4_ = (Text__Class *)0x0;
  auStack_6._4_4_ = (MonitorData *)0x0;
  auStack_6._8_4_ = (Behaviour__Fields)0x0;
  auStack_6._12_4_ = (Material *)0x0;
  auStack_6._16_4_ = 0.0;
  auStack_6._20_4_ = 0.0;
  pTStack_7 = (this->fields).pages;
  method_00 = (MethodInfo *)&currentPage;
  pOVar8 = (Object *)func_?(TypeInfo__System__Int32);
  fStack_9 = (float)maxPages;
  arg1 = (Object *)func_?(TypeInfo__System__Int32,&fStack_9);
  mscorlib.dll::System::String::String_Format_1(StringLiteral__0___1_,pOVar8,arg1,(MethodInfo *)0x0)
  ;
  if (pTStack_7 != (Text *)0x0) {
    (*(pTStack_7->klass->vtable).set_text.methodPtr)();
    pLVar10 = (this->fields).pageButtons;
    index = 0;
    if (pLVar10 != (List_1_UnityEngine_GameObject_ *)0x0) {
      while (index < (pLVar10->fields)._size) {
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).pageButtons;
        if ((this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) ||
           (this_03 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                      RegularExpressions::RegexCharClass+SingleRange]::
                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                (this_00,index,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                                ), this_03 == (RegexCharClass_SingleRange)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  ((GameObject *)this_03,1 < maxPages,(MethodInfo *)0x0);
        pLVar10 = (this->fields).pageButtons;
        index = index + 1;
        if (pLVar10 == (List_1_UnityEngine_GameObject_ *)0x0) goto code_?;
      }
      this_01 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).buttons;
      if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                           ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                            &stack0xffffffac,this_01,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                           );
        fStack_12 = 0.0;
        auStack_6._0_4_ = pDVar11->_dictionary;
        auStack_6._4_4_ = pDVar11->_version;
        auStack_6._8_4_ = pDVar11->_index;
        auStack_6._12_4_ = (pDVar11->_current).key;
        auStack_6._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
        pRStack_1 = (RectTransform *)0x1;
        pTStack_7 = (Text *)auStack_6;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
code_?:
  bVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System::
          Int32Enum,System::Object]::
          Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                    ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                     auStack_6,
                     MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                    );
  if (bVar14 == 0) goto code_?;
  if ((Object *)auStack_6._16_4_ == (Object *)0x0) goto code_?;
  (*(code *)(*(Object__Class **)auStack_6._16_4_)[1]._0.name)
            (auStack_6._16_4_,(*(Object__Class **)auStack_6._16_4_)[1]._0.namespaze);
  goto code_?;
code_?:
  pRStack_1 = (RectTransform *)0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)auStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__Dispose__
             ,method_00);
  pRStack_1 = (RectTransform *)0xffffffff;
  this_02 = (this->fields).buttons;
  if ((this_02 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) &&
     (pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
               Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item
                         ((Dictionary_2_System_Int32Enum_System_Object_ *)this_02,tab,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                         ), pOVar8 != (Object *)0x0)) {
    (*(code *)pOVar8->klass[1]._0.byval_arg.data)();
    *unaff_FS_OFFSET = fStack_3;
    return;
  }
  goto code_?;
}


/* TabMenuAccessoryShop() */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop__ctor
               (TabMenuAccessoryShop *this,MethodInfo *method)

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

