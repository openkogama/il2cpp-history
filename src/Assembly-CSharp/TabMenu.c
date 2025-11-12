
/* Void AddTabMenuButton(Int32, String) */

void Assembly-CSharp.dll::TabMenu::TabMenu_AddTabMenuButton
               (TabMenu *this,int32_t categoryIndex,String *categoryName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase__UnityEngine__Transform__bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  original = (this->fields).tabMenuButtonPrefab;
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  value = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                    ((Object *)original,parent,0,
                     TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase__UnityEngine__Transform__bool_
                    );
  if (value != (Object *)0x0) {
    pvVar1 = value->klass[1]._0.gc_desc;
    (*(code *)value->klass[1]._0.image)(value,categoryIndex,categoryName,pvVar1);
    this_00 = (this->fields).buttons;
    if (this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_00,categoryIndex,value,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar1 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::TabMenu::TabMenu_SelectTab
               (TabMenu *this,int32_t tab,int32_t currentPage,int32_t maxPages,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_TabMenuButtonBase>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    FUN_?(&::StringLiteral__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).pages;
  if (pTVar1 != (Text *)0x0) {
    (*(pTVar1->klass->vtable).set_text.methodPtr)
              (pTVar1,::StringLiteral__,(pTVar1->klass->vtable).set_text.method);
    if (1 < maxPages) {
      pTVar1 = (this->fields).pages;
      aiStack_2[0] = currentPage;
      pOVar3 = (Object *)FUN_?(uRam_?,aiStack_2);
      aiStack_2[0] = maxPages;
      arg1 = (Object *)FUN_?(uRam_?,aiStack_2);
      pSVar4 = StringLiteral__0___1_;
      PStack_5._arg0 = (Object *)0x0;
      PStack_5._arg1 = (Object *)0x0;
      PStack_5._arg2 = (Object *)0x0;
      PStack_5._args = (Object__Array *)0x0;
      mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
                (&PStack_5,pOVar3,arg1,(MethodInfo *)0x0);
      PStack_6._arg0 = PStack_5._arg0;
      PStack_6._arg1 = PStack_5._arg1;
      PStack_6._arg2 = PStack_5._arg2;
      PStack_6._args = PStack_5._args;
      pSVar4 = mscorlib.dll::System::String::String_FormatHelper
                          ((IFormatProvider *)0x0,pSVar4,&PStack_6,(MethodInfo *)0x0);
      if (pTVar1 == (Text *)0x0) goto code_?;
      (*(pTVar1->klass->vtable).set_text.methodPtr)
                (pTVar1,pSVar4,(pTVar1->klass->vtable).set_text.method);
    }
    pOVar7 = (Object__Class *)(this->fields).buttons;
    if (pOVar7 != (Object__Class *)0x0) {
      PStack_6._arg2 = (Object *)0x0;
      PStack_6._args = (Object__Array *)0x0;
      if (iRam_? != 0) {
        uVar8 = (uint)((ulonglong)&PStack_6 >> 0xc);
        puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
        do {
          uVar10 = *puVar9;
          LOCK();
          uVar11 = *puVar9;
          if (uVar10 == uVar11) {
            *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
          }
          UNLOCK();
        } while (uVar10 != uVar11);
      }
      PStack_6._arg1 = (Object *)(ulonglong)*(uint *)&(pOVar7->_0).byval_arg.field_0xc;
      uStack_12 = 2;
      auStack_13._8_8_ = PStack_6._arg1;
      KStack_14.key = 0;
      KStack_14._4_4_ = 0;
      KStack_14.value = (Object *)0x0;
      uStack_15._0_4_ = 2;
      uStack_15._4_4_ = 0;
      PStack_5._arg0 = (Object *)0x0;
      PStack_5._arg1 = (Object *)auStack_13;
      PStack_6._arg0 = (Object *)pOVar7;
      auStack_13._0_8_ = pOVar7;
      while (bVar16 = mscorlib.dll::System::Collections::Generic::
                     Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                     Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                               ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *)
                                auStack_13,
                                MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                               ), bVar16 != 0) {
        if (KStack_14.value == (Object *)0x0) goto code_?;
        (*(code *)(KStack_14.value)->klass[1]._0.name)
                  (KStack_14.value,(KStack_14.value)->klass[1]._0.namespaze);
      }
      this_00 = (this->fields).buttons;
      if ((this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) &&
         (pOVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)this_00,tab,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                             ), pOVar3 != (Object *)0x0)) {
        pOVar7 = pOVar3->klass;
        uVar17._0_2_ = pOVar7[1]._0.byval_arg.attrs;
        uVar17._2_1_ = pOVar7[1]._0.byval_arg.type;
        uVar17._3_5_ = *(undefined5 *)&pOVar7[1]._0.byval_arg.field_0xb;
        (*(code *)pOVar7[1]._0.byval_arg.data)(pOVar3,uVar17);
        return;
      }
    }
  }
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* TabMenu() */

void Assembly-CSharp.dll::TabMenu::TabMenu__ctor(TabMenu *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).buttons = (Dictionary_2_System_Int32_TabMenuButtonBase_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).buttons >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

