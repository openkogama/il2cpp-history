
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
    (*value->klass[1]._0.gc_desc)(value,categoryIndex);
    this_00 = (this->fields).buttons;
    if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Add
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,categoryIndex,value,
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
  pRStack_1 = (RectTransform *)0xffffffff;
  puStack_2 = &DAT_?;
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
  DStack_7._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  pTVar8 = (this->fields).pages;
  if (pTVar8 != (Text *)0x0) {
    (*(code *)(pTVar8->klass->vtable).set_text.method)
              (pTVar8,::StringLiteral__,
               (pTVar8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if (1 < maxPages) {
      pTStack_9 = (this->fields).pages;
      fStack_10 = (float)currentPage;
      pOVar11 = (Object *)func_?(TypeInfo__System__Int32,&fStack_10);
      iStack_12 = maxPages;
      in_stack_6 = (MethodInfo **)&UNK_?;
      arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_12);
      pSVar13 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0___1_,pOVar11,arg1,(MethodInfo *)0x0);
      if (pTStack_9 == (Text *)0x0) goto code_?;
      (*(code *)(pTStack_9->klass->vtable).set_text.method)
                (pTStack_9,pSVar13,
                 (pTStack_9->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    }
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).buttons;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_15,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                         );
      fStack_16 = 0.0;
      DStack_7._dictionary = pDVar14->_dictionary;
      DStack_7._version = pDVar14->_version;
      DStack_7._index = pDVar14->_index;
      DStack_7._current.key = (pDVar14->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar14->_current).value;
      pRStack_1 = (RectTransform *)0x1;
      pTStack_9 = (Text *)&DStack_7;
      while( true ) {
        bVar17 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_7,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                          );
        if (bVar17 == 0) break;
        if ((Material *)DStack_7._current.value == (Material *)0x0) goto code_?;
        (*(code *)((Material__Class *)(DStack_7._current.value)->klass)[1]._0.namespaze)
                  (DStack_7._current.value,
                   ((Material__Class *)(DStack_7._current.value)->klass)[1]._0.byval_arg.data.dummy
                  );
      }
      pRStack_1 = (RectTransform *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      pRStack_1 = (RectTransform *)0xffffffff;
      this_01 = (this->fields).buttons;
      if (this_01 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
        pOVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,tab,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                           );
        if (pOVar11 != (Object *)0x0) {
          (**(code **)&pOVar11->klass[1]._0.byval_arg.attrs)
                    (pOVar11,pOVar11->klass[1]._0.this_arg.data.dummy);
          *unaff_FS_OFFSET = fStack_3;
          return;
        }
      }
    }
  }
code_?:
  uVar18 = func_?();
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
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
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(
                            TypeInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Dictionary__
            );
  (this->fields).buttons = (Dictionary_2_System_Int32_TabMenuButtonBase_ *)this_00;
  func_?(&(this->fields).buttons,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

