
/* Void AddTabMenuButton(Int32, String) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_AddTabMenuButton
               (TabMenuAccessoryShop *this,int32_t categoryIndex,String *categoryName,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)
            (this->fields).nonLayoutTabButtons;
  this_02 = (Component *)0x0;
  if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0)
  goto code_?;
  lVar1 = 0x20;
  pCVar2 = this_02;
  while (index = (uint)pCVar2, (int)index < (this_00->fields)._size) {
    if ((uint)(this_00->fields)._size <= index) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pEVar4 = (this_00->fields)._items;
    if (pEVar4 == (EntryPreProcessor_AllocSize__Array *)0x0) goto code_?;
    if ((uint)pEVar4->max_length <= index) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar5 = *(longlong *)
             ((longlong)&((EntryPreProcessor_AllocSize__Array *)(pEVar4->vector + -4))->klass +
             lVar1);
    if (lVar5 == 0) goto code_?;
    if (*(int *)(lVar5 + 0x10) == categoryIndex) {
      EVar6 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::
              EntryPreProcessor+AllocSize]::
              List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                        (this_00,index,
                         MethodInfo__System__Collections__Generic__List<TabMenuAccessoryShop::TabMenuButtonNonLayoutDef>__get_Item_int_
                        );
      if (EVar6 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
      original = *(Object **)((longlong)EVar6 + 0x18);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      this_02 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          (original,
                           TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                          );
      break;
    }
    lVar1 = lVar1 + 8;
    pCVar2 = (Component *)(ulonglong)(index + 1);
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this_02 == (Component *)0x0) {
code_?:
    original_00 = (this->fields).tabMenuButtonPrefab;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_02 = (Component *)
              UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                        ((Object *)original_00,
                         TabMenuButtonBase_MethodInfo__UnityEngine__Object__Instantiate<TabMenuButtonBase>_TabMenuButtonBase_
                        );
    if (this_02 == (Component *)0x0) goto code_?;
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((this_02->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  (*(code *)this_02->klass[1]._0.image)(this_02);
  this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      (this_02,(MethodInfo *)0x0);
  parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (this_03 != (Transform *)0x0) {
    uVar7 = 0;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_03,parent,0,(MethodInfo *)0x0);
    this_01 = (this->fields).buttons;
    if (this_01 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)this_01,categoryIndex,(Object *)this_02
                 ,(InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar7 >> 8),2),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Add_int__TabMenuButtonBase_
                 ->klass->rgctx_data[0x22].method);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DestroyTab(AccessoryCategoryClient) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_DestroyTab
               (TabMenuAccessoryShop *this,AccessoryCategoryClient__Enum category,MethodInfo *method
               )

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).buttons;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,category,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    pDVar2 = (this->fields).buttons;
    if ((pDVar2 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) &&
       (this_01 = (Component *)
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,category,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                            ), this_01 != (Component *)0x0)) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      (this_01,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                ((Object_1 *)obj,0.0,(MethodInfo *)0x0);
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
  FUN_?();
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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).buttons;
  if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (pDVar1,category,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_;
    if (iVar2 < 0) {
      return (TabMenuButtonBase *)0x0;
    }
    pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).buttons;
    if (pDVar1 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      uVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
              Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                        (pDVar1,category,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                         ->klass->rgctx_data[0x21].method);
      if ((int)uVar4 < 0) {
        uVar5 = func_?(pMVar3->klass->rgctx_data,0xe);
        key = (Object *)func_?(uVar5);
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                  (key,(MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pTVar7 = (TabMenuButtonBase *)(*pcVar6)();
        return pTVar7;
      }
      pDVar8 = (pDVar1->fields)._entries;
      if (pDVar8 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0)
      {
        if (uVar4 < (uint)pDVar8->max_length) {
          return *(TabMenuButtonBase **)&pDVar8->vector[(int)uVar4].value.y;
        }
        FUN_?();
        pcVar6 = (code *)swi(3);
        pTVar7 = (TabMenuButtonBase *)(*pcVar6)();
        return pTVar7;
      }
      FUN_?();
      pcVar6 = (code *)swi(3);
      pTVar7 = (TabMenuButtonBase *)(*pcVar6)();
      return pTVar7;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pTVar7 = (TabMenuButtonBase *)(*pcVar6)();
  return pTVar7;
}


/* Void SelectTab(Int32, Int32, Int32) */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop_SelectTab
               (TabMenuAccessoryShop *this,int32_t tab,int32_t currentPage,int32_t maxPages,
               MethodInfo *method)

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
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_1 = (undefined1  [8])0x0;
  pOStack_2 = (Object *)0x0;
  KStack_3.key = 0;
  KStack_3._4_4_ = 0;
  KStack_3.value = (Object *)0x0;
  uStack_4._0_4_ = 0;
  uStack_4._4_4_ = 0;
  pTVar5 = (this->fields).pages;
  aiStackX_18[0] = currentPage;
  pOVar6 = (Object *)FUN_?(uRam_?,aiStackX_18);
  aiStackX_18[0] = maxPages;
  arg1 = (Object *)FUN_?(uRam_?,aiStackX_18);
  pSVar7 = StringLiteral__0___1_;
  PStack_8._arg0 = (Object *)0x0;
  PStack_8._arg1 = (Object *)0x0;
  PStack_8._arg2 = (Object *)0x0;
  PStack_8._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_8,pOVar6,arg1,(MethodInfo *)0x0);
  PStack_9._arg0 = PStack_8._arg0;
  PStack_9._arg1 = PStack_8._arg1;
  PStack_9._arg2 = PStack_8._arg2;
  PStack_9._args = PStack_8._args;
  pSVar7 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar7,&PStack_9,(MethodInfo *)0x0);
  if (pTVar5 != (Text *)0x0) {
    (*(pTVar5->klass->vtable).set_text.methodPtr)
              (pTVar5,pSVar7,(pTVar5->klass->vtable).set_text.method);
    uVar10 = 0;
    pLVar11 = (this->fields).pageButtons;
    if (pLVar11 != (List_1_UnityEngine_GameObject_ *)0x0) {
      lVar12 = 0x20;
      do {
        if ((pLVar11->fields)._size <= (int)uVar10) {
          pOVar13 = (Object__Class *)(this->fields).buttons;
          if (pOVar13 != (Object__Class *)0x0) {
            PStack_9._arg2 = (Object *)0x0;
            PStack_9._args = (Object__Array *)0x0;
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)&PStack_9 >> 0xc);
              puVar14 = (ulonglong *)((ulonglong)((uVar10 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar15 = *puVar14;
                LOCK();
                uVar16 = *puVar14;
                if (uVar15 == uVar16) {
                  *puVar14 = uVar15 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (uVar15 != uVar16);
            }
            PStack_9._arg1 = (Object *)(ulonglong)*(uint *)&(pOVar13->_0).byval_arg.field_0xc;
            uStack_17 = 2;
            pOStack_2 = PStack_9._arg1;
            KStack_3.key = 0;
            KStack_3._4_4_ = 0;
            KStack_3.value = (Object *)0x0;
            uStack_4._0_4_ = 2;
            uStack_4._4_4_ = 0;
            PStack_8._arg0 = (Object *)0x0;
            PStack_8._arg1 = (Object *)auStack_1;
            PStack_9._arg0 = (Object *)pOVar13;
            auStack_1 = (undefined1  [8])pOVar13;
            while( true ) {
              bVar18 = mscorlib.dll::System::Collections::Generic::
                      Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
                      Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                                ((Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object_ *
                                 )auStack_1,
                                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_TabMenuButtonBase>__MoveNext__
                                );
              if (bVar18 == 0) {
                this_00 = (this->fields).buttons;
                if ((this_00 != (Dictionary_2_System_Int32_TabMenuButtonBase_ *)0x0) &&
                   (pOVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Object]::
                             Dictionary_2_System_Int32_System_Object__get_Item
                                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,tab,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_TabMenuButtonBase>__get_Item_int_
                                       ), pOVar6 != (Object *)0x0)) {
                  pOVar13 = pOVar6->klass;
                  uVar19._0_2_ = pOVar13[1]._0.byval_arg.attrs;
                  uVar19._2_1_ = pOVar13[1]._0.byval_arg.type;
                  uVar19._3_5_ = *(undefined5 *)&pOVar13[1]._0.byval_arg.field_0xb;
                  (*(code *)pOVar13[1]._0.byval_arg.data)(pOVar6,uVar19);
                  return;
                }
                goto code_?;
              }
              if (KStack_3.value == (Object *)0x0) break;
              (*(code *)(KStack_3.value)->klass[1]._0.name)
                        (KStack_3.value,(KStack_3.value)->klass[1]._0.namespaze);
            }
code_?:
            FUN_?();
            FUN_?();
            pcVar20 = (code *)swi(3);
            (*pcVar20)();
            return;
          }
          break;
        }
        pLVar11 = (this->fields).pageButtons;
        if (pLVar11 == (List_1_UnityEngine_GameObject_ *)0x0) break;
        if ((uint)(pLVar11->fields)._size <= uVar10) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          goto code_?;
        }
        pGVar21 = (pLVar11->fields)._items;
        if (pGVar21 == (GameObject__Array *)0x0) break;
        if ((uint)pGVar21->max_length <= uVar10) {
          FUN_?();
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        pOVar6 = *(Object **)((longlong)pGVar21->vector + lVar12 + -0x20);
        if (pOVar6 == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar13 = pOVar6[1].klass;
        if (pOVar13 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(pOVar6,(MethodInfo *)0x0);
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        pcVar20 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar20 = (code *)FUN_?(&UNK_?), pcVar20 == (code *)0x0)) {
          uVar19 = func_?(&UNK_?);
          FUN_?(uVar19,0);
          pcVar20 = (code *)swi(3);
          (*pcVar20)();
          return;
        }
        pcRam_? = pcVar20;
        (*pcRam_?)(pOVar13);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 8;
        pLVar11 = (this->fields).pageButtons;
      } while (pLVar11 != (List_1_UnityEngine_GameObject_ *)0x0);
    }
  }
code_?:
  FUN_?();
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
  return;
}


/* TabMenuAccessoryShop() */

void Assembly-CSharp.dll::TabMenuAccessoryShop::TabMenuAccessoryShop__ctor
               (TabMenuAccessoryShop *this,MethodInfo *method)

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

