
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
  pTVar7 = (this->fields).pages;
  if (pTVar7 != (Text *)0x0) {
    (*(code *)(pTVar7->klass->vtable).set_text.method)
              (pTVar7,::StringLiteral__,
               (pTVar7->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    if (1 < maxPages) {
      pTStack_8 = (this->fields).pages;
      fStack_9 = (float)currentPage;
      pOVar10 = (Object *)func_?(TypeInfo__System__Int32,&fStack_9);
      iStack_11 = maxPages;
      in_stack_6 = (MethodInfo **)&UNK_?;
      arg1 = (Object *)func_?(TypeInfo__System__Int32,&iStack_11);
      pSVar12 = mscorlib.dll::System::String::String_Format_1
                         (StringLiteral__0___1_,pOVar10,arg1,(MethodInfo *)0x0);
      if (pTStack_8 == (Text *)0x0) goto code_?;
      (*(code *)(pTStack_8->klass->vtable).set_text.method)
                (pTStack_8,pSVar12,
                 (pTStack_8->klass->vtable).CalculateLayoutInputHorizontal_1.methodPtr);
    }
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).buttons;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_14,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                         );
      fStack_15 = 0.0;
      DStack_16._dictionary = pDVar13->_dictionary;
      DStack_16._version = pDVar13->_version;
      DStack_16._index = pDVar13->_index;
      DStack_16._current.key = (pDVar13->_current).key;
      DStack_16._16_8_ = *(undefined8 *)&(pDVar13->_current).value;
      pRStack_1 = (RectTransform *)0x1;
      pTStack_8 = (Text *)&DStack_16;
      while( true ) {
        bVar17 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_16,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                          );
        if (bVar17 == 0) break;
        if ((Material *)DStack_16._current.value == (Material *)0x0) goto code_?;
        (*(code *)((Material__Class *)(DStack_16._current.value)->klass)[1]._0.namespaze)
                  (DStack_16._current.value,
                   ((Material__Class *)(DStack_16._current.value)->klass)[1]._0.byval_arg.data.dummy
                  );
      }
      pRStack_1 = (RectTransform *)0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_16,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__Dispose__
                 ,(MethodInfo *)in_stack_6);
      pRStack_1 = (RectTransform *)0xffffffff;
      this_01 = (this->fields).buttons;
      if (this_01 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
        pOVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)this_01,tab,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                           );
        if (pOVar10 != (Object *)0x0) {
          (**(code **)&pOVar10->klass[1]._0.byval_arg.attrs)
                    (pOVar10,pOVar10->klass[1]._0.this_arg.data.dummy);
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
  ppDVar1 = &(this->fields).buttons;
  *ppDVar1 = (Dictionary_2_System_Int32_TabMenuButtonBase_ *)this_00;
  func_?(ppDVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

