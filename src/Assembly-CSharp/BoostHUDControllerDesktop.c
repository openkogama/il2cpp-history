
/* Void CreateActiveBoosts() */

void Assembly-CSharp.dll::BoostHUDControllerDesktop::BoostHUDControllerDesktop_CreateActiveBoosts
               (BoostHUDControllerDesktop *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffb8;
  puVar5 = &stack0xffffffb8;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Clear__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                   );
    func_?(&
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pLVar6 = (this->fields).currentBoosts;
  if (pLVar6 != (List_1_UnityEngine_GameObject_ *)0x0) {
    iVar7 = (pLVar6->fields)._size;
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).currentBoosts;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      RStack_8 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,iVar7,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                            );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)RStack_8,(MethodInfo *)0x0);
    }
    pLVar6 = (this->fields).currentBoosts;
    if (pLVar6 != (List_1_UnityEngine_GameObject_ *)0x0) {
      iVar7 = (pLVar6->fields)._size;
      piVar9 = &(pLVar6->fields)._version;
      *piVar9 = *piVar9 + 1;
      (pLVar6->fields)._size = 0;
      if (0 < iVar7) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar6->fields)._items,0,iVar7,(MethodInfo *)0x0);
      }
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar10 != (MVLocalPlayer *)0x0) &&
         (pBVar11 = (pMVar10->fields).boostController, pBVar11 != (BoostController *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                         );
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pBVar11->fields).activeBoosts;
        if ((this_01 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (this_04 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                (this_01,
                                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                                ),
           this_04 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          pDVar12 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             (&DStack_13,this_04,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pDVar12->_currentValue;
          DStack_13._version = 0;
          uStack_1 = 1;
          DStack_13._currentValue = (Object *)&stack0xffffffc4;
          while( true ) {
            bVar14 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffc4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                              );
            if (bVar14 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&stack0xffffffc4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_02 = (this->fields).boostImageController;
            if ((method_00 == (MethodInfo *)0x0) || (this_02 == (BoostImageController *)0x0)) break;
            original = BoostImageController::BoostImageController_GetBoostVisualization
                                 (this_02,(BoostType__Enum)method_00->invoker_method,
                                  (MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              DStack_13._index = (int32_t)TypeInfo__UnityEngine__Object;
              DStack_13._dictionary =
                   (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    *)&UNK_?;
              func_?();
            }
            this_05 = (Component *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                                ((Object *)original,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image_
                                );
            RStack_8 = (RegexCharClass_SingleRange)(this->fields).currentBoosts;
            if ((this_05 == (Component *)0x0) ||
               (item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (this_05,(MethodInfo *)0x0),
               RStack_8 == (RegexCharClass_SingleRange)0x0)) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)RStack_8,(Object *)item,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
            RStack_8 = (RegexCharClass_SingleRange)
                        UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  (this_05,(MethodInfo *)0x0);
            this_03 = (this->fields).content;
            if ((this_03 == (HorizontalLayoutGroup *)0x0) ||
               (parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)this_03,(MethodInfo *)0x0),
               RStack_8 == (RegexCharClass_SingleRange)0x0)) break;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                      ((Transform *)RStack_8,parent,0,(MethodInfo *)0x0);
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostHUDControllerDesktop::BoostHUDControllerDesktop_OnDestroy
               (BoostHUDControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostHUDControllerDesktop__CreateActiveBoosts__);
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar2 == (MVLocalPlayer *)0x0) ||
     (pBVar3 = (pMVar2->fields).boostController, pBVar3 == (BoostController *)0x0)) {
    uVar4 = func_?();
  }
  else {
    pAVar5 = (pBVar3->fields).BoostCountChanged;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__BoostHUDControllerDesktop__CreateActiveBoosts__,
               (MethodInfo *)0x0);
    pAVar5 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pAVar5,(Delegate *)this_00,(MethodInfo *)0x0);
    uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
    if (pAVar5 == (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = (Action *)0x0;
      pBStack6 = &pBVar3->fields;
      pAStack7 = (Action *)0x0;
      func_?();
      return;
    }
    pAVar8 = (Action *)0x0;
    if (pAVar5->klass == TypeInfo__System__Action) {
      pAVar8 = pAVar5;
    }
    if (pAVar8 != (Action *)0x0) {
      (pBVar3->fields).BoostCountChanged = pAVar8;
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar5);
      pAStack7 = (Action *)0x0;
      if (pAVar5->klass == TypeInfo__System__Action) {
        pAStack7 = pAVar5;
      }
      if (pAStack7 != (Action *)0x0) {
        pBStack6 = &pBVar3->fields;
        func_?();
        return;
      }
    }
  }
  _pBStack00000014 = uVar4;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostHUDControllerDesktop::BoostHUDControllerDesktop_Start
               (BoostHUDControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostHUDControllerDesktop__CreateActiveBoosts__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    pBVar2 = (pMVar1->fields).boostController;
    if (pBVar2 != (BoostController *)0x0) {
      pAVar3 = (pBVar2->fields).BoostCountChanged;
      this_00 = (NavMesh_OnNavMeshPreUpdate *)func_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (this_00,(Object *)this,MethodInfo__BoostHUDControllerDesktop__CreateActiveBoosts__,
                 (MethodInfo *)0x0);
      pAVar3 = (Action *)
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      uVar4 = CONCAT44(TypeInfo__System__Action,pAVar3);
      if (pAVar3 == (Action *)0x0) {
        (pBVar2->fields).BoostCountChanged = (Action *)0x0;
        pBStack5 = &pBVar2->fields;
        pAStack6 = (Action *)0x0;
        func_?();
        return;
      }
      pAVar7 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar7 = pAVar3;
      }
      if (pAVar7 != (Action *)0x0) {
        (pBVar2->fields).BoostCountChanged = pAVar7;
        uVar4 = CONCAT44(TypeInfo__System__Action,pAVar3);
        pAStack6 = (Action *)0x0;
        if (pAVar3->klass == TypeInfo__System__Action) {
          pAStack6 = pAVar3;
        }
        if (pAStack6 != (Action *)0x0) {
          pBStack5 = &pBVar2->fields;
          func_?();
          return;
        }
      }
      goto code_?;
    }
  }
  uVar4 = func_?();
code_?:
  _pBStack00000010 = uVar4;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* BoostHUDControllerDesktop() */

void Assembly-CSharp.dll::BoostHUDControllerDesktop::BoostHUDControllerDesktop__ctor
               (BoostHUDControllerDesktop *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_GameObject_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
  (this->fields).currentBoosts = this_00;
  func_?(&(this->fields).currentBoosts,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

