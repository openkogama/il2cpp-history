
/* Void CreateActiveBoosts() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_CreateActiveBoosts
               (BoostHUDController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
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
                    UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                   );
    cRam_? = '\x01';
  }
  pLVar4 = (this->fields).currentBoosts;
  if (pLVar4 != (List_1_UnityEngine_GameObject_ *)0x0) {
    iVar5 = (pLVar4->fields)._size;
    while (iVar5 = iVar5 + -1, -1 < iVar5) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).currentBoosts;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      obj = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this_00,iVar5,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__get_Item_int_
                      );
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
    }
    pLVar4 = (this->fields).currentBoosts;
    if (pLVar4 != (List_1_UnityEngine_GameObject_ *)0x0) {
      iVar5 = (pLVar4->fields)._size;
      piVar6 = &(pLVar4->fields)._version;
      *piVar6 = *piVar6 + 1;
      (pLVar4->fields)._size = 0;
      if (0 < iVar5) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar4->fields)._items,0,iVar5,(MethodInfo *)0x0);
      }
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar7 != (MVLocalPlayer *)0x0) &&
         (pBVar8 = (pMVar7->fields).boostController, pBVar8 != (BoostController *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                         );
          cRam_? = '\x01';
        }
        this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                   *)(pBVar8->fields).activeBoosts;
        if ((this_01 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (this_03 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                (this_01,
                                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                                ),
           this_03 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          pDVar9 = mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                             ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                               *)&stack0xffffffd4,this_03,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__GetEnumerator__
                             );
          method_00 = (MethodInfo *)pDVar9->_version;
          this_05 = (HorizontalLayoutGroup *)pDVar9->_currentValue;
          uStack_1 = 1;
          while( true ) {
            bVar10 = mscorlib.dll::System::Collections::Generic::
                    Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                    UInt32,System::Object]::
                    Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                              ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object_
                                *)&stack0xffffffc4,
                               MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__MoveNext__
                              );
            if (bVar10 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
                        ((Object *)&stack0xffffffc4,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<BoostType,_Boost>__Dispose__
                         ,method_00);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_02 = (this->fields).boostImageController;
            if ((this_05 == (HorizontalLayoutGroup *)0x0) ||
               (this_02 == (BoostImageController *)0x0)) break;
            original = BoostImageController::BoostImageController_GetBoostVisualization
                                 (this_02,(BoostType__Enum)(this_05->fields)._._._._._._._,
                                  (MethodInfo *)0x0);
            this_05 = (this->fields).content;
            if (this_05 == (HorizontalLayoutGroup *)0x0) break;
            method_00 = (MethodInfo *)&UNK_?;
            parent = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)this_05,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            this_04 = (Component *)
                      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                                ((Object *)original,parent,0,
                                 UnityEngine__UI__Image_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::UI::Image>_UnityEngine__UI__Image__UnityEngine__Transform__bool_
                                );
            pLVar4 = (this->fields).currentBoosts;
            if ((this_04 == (Component *)0x0) ||
               (item = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                 (this_04,(MethodInfo *)0x0),
               pLVar4 == (List_1_UnityEngine_GameObject_ *)0x0)) break;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar4,(Object *)item,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                      );
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_OnDestroy
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostHUDController__CreateActiveBoosts__);
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
              (this_00,(Object *)this,MethodInfo__BoostHUDController__CreateActiveBoosts__,
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


/* Void SetupHUD() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_SetupHUD
               (BoostHUDController *this,MethodInfo *method)

{
  BoostHUDController_CreateActiveBoosts(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if (pMVar1 != (MVLocalPlayer *)0x0) {
    pBVar2 = (pMVar1->fields).boostController;
    if (pBVar2 != (BoostController *)0x0) {
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                       );
        cRam_? = '\x01';
      }
      this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(pBVar2->fields).activeBoosts;
      if (this_00 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                            );
        if (this_01 !=
            (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)0x0) {
          iVar3 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                  StyleSheetCache+SheetHandleKey,System::Object]::
                  Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                            );
          pSVar4 = (this->fields).slideOnClick;
          if ((pSVar4 != (SlideOnClick *)0x0) &&
             (uVar5 = (pSVar4->fields)._StartPos_k__BackingField.x, pSVar4 != (SlideOnClick *)0x0))
          {
            uVar6 = (pSVar4->fields)._StartPos_k__BackingField.y;
            (pSVar4->fields).targetPos.x =
                 (float)((this->fields).boosterWidth * iVar3) + (float)uVar5;
            (pSVar4->fields).targetPos.y = (float)uVar6;
            (pSVar4->fields).targetPos.z = 0.0;
            pCVar7 = (this->fields).canvasGroup;
            if (pCVar7 != (CanvasGroup *)0x0) {
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar7,0.0,(MethodInfo *)0x0);
              if (0 < iVar3) {
                pCVar7 = (this->fields).canvasGroup;
                if (pCVar7 == (CanvasGroup *)0x0) goto code_?;
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (pCVar7,1.0,(MethodInfo *)0x0);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetupTransform() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_SetupTransform
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 != (MVLocalPlayer *)0x0) &&
     (pBVar2 = (pMVar1->fields).boostController, pBVar2 != (BoostController *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                     );
      cRam_? = '\x01';
    }
    this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
               *)(pBVar2->fields).activeBoosts;
    if (this_00 !=
        (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                          (this_00,
                           MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                          );
      if (this_01 !=
          (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                          );
        pSVar4 = (this->fields).slideOnClick;
        if ((pSVar4 != (SlideOnClick *)0x0) &&
           (uVar5 = (pSVar4->fields)._StartPos_k__BackingField.x, pSVar4 != (SlideOnClick *)0x0)) {
          uVar6 = (pSVar4->fields)._StartPos_k__BackingField.y;
          (pSVar4->fields).targetPos.x = (float)((this->fields).boosterWidth * iVar3) + (float)uVar5
          ;
          (pSVar4->fields).targetPos.y = (float)uVar6;
          (pSVar4->fields).targetPos.z = 0.0;
          pCVar7 = (this->fields).canvasGroup;
          if (pCVar7 != (CanvasGroup *)0x0) {
            UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                      (pCVar7,0.0,(MethodInfo *)0x0);
            if (0 < iVar3) {
              pCVar7 = (this->fields).canvasGroup;
              if (pCVar7 == (CanvasGroup *)0x0) goto code_?;
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar7,1.0,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController_Start
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action);
    func_?(&MethodInfo__BoostHUDController__SetupHUD__);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
  if ((pMVar1 == (MVLocalPlayer *)0x0) ||
     (pBVar2 = (pMVar1->fields).boostController, pBVar2 == (BoostController *)0x0)) {
code_?:
    pAVar3 = (Action *)func_?();
  }
  else {
    pAVar4 = (pBVar2->fields).BoostCountChanged;
    unaff_ESI = (Action__Class *)func_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              ((NavMesh_OnNavMeshPreUpdate *)unaff_ESI,(Object *)this,
               MethodInfo__BoostHUDController__SetupHUD__,(MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)unaff_ESI,(MethodInfo *)0x0);
    pAVar4 = (Action *)0x0;
    if (pAVar3 == (Action *)0x0) {
      (pBVar2->fields).BoostCountChanged = (Action *)0x0;
code_?:
      func_?(&pBVar2->fields,pAVar4);
      BoostHUDController_CreateActiveBoosts(this,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                       );
        cRam_? = '\x01';
      }
      pMVar1 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
      if ((pMVar1 != (MVLocalPlayer *)0x0) &&
         (unaff_ESI = (Action__Class *)(pMVar1->fields).boostController,
         unaff_ESI != (Action__Class *)0x0)) {
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                         );
          cRam_? = '\x01';
        }
        this_00 = *(Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                    **)&(unaff_ESI->_0).byval_arg.attrs;
        if ((this_00 !=
             (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
              *)0x0) &&
           (this_01 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::
                      UIElements::StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                      Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                                (this_00,
                                 MethodInfo__System__Collections__Generic__Dictionary<BoostType,_Boost>__get_Values__
                                ),
           this_01 !=
           (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)0x0)) {
          pAVar5 = (Action__Class *)
                   mscorlib.dll::System::Collections::Generic::
                   Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
                   StyleSheetCache+SheetHandleKey,System::Object]::
                   Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                             (this_01,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<BoostType,_Boost>__get_Count__
                             );
          pSVar6 = (this->fields).slideOnClick;
          unaff_ESI = pAVar5;
          if ((pSVar6 != (SlideOnClick *)0x0) &&
             (uVar7 = (pSVar6->fields)._StartPos_k__BackingField.x, pSVar6 != (SlideOnClick *)0x0))
          {
            uVar8 = (pSVar6->fields)._StartPos_k__BackingField.y;
            (pSVar6->fields).targetPos.x =
                 (float)((this->fields).boosterWidth * (int)pAVar5) + (float)uVar7;
            (pSVar6->fields).targetPos.y = (float)uVar8;
            (pSVar6->fields).targetPos.z = 0.0;
            pCVar9 = (this->fields).canvasGroup;
            if (pCVar9 != (CanvasGroup *)0x0) {
              unaff_ESI = unaff_retaddr;
              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                        (pCVar9,0.0,(MethodInfo *)0x0);
              if ((int)pAVar5 < 1) {
                return;
              }
              pCVar9 = (this->fields).canvasGroup;
              if (pCVar9 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (pCVar9,1.0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
      goto code_?;
    }
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    pAVar5 = TypeInfo__System__Action;
    if (pAVar4 == (Action *)0x0) goto code_?;
    (pBVar2->fields).BoostCountChanged = pAVar4;
    pAVar4 = (Action *)0x0;
    if (pAVar3->klass == TypeInfo__System__Action) {
      pAVar4 = pAVar3;
    }
    unaff_ESI = TypeInfo__System__Action;
    if (pAVar4 != (Action *)0x0) goto code_?;
  }
  pAVar3 = (Action *)func_?(pAVar3,unaff_ESI);
  pAVar5 = extraout_ECX;
code_?:
  func_?(pAVar3,pAVar5);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* BoostHUDController() */

void Assembly-CSharp.dll::BoostHUDController::BoostHUDController__ctor
               (BoostHUDController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    cRam_? = '\x01';
  }
  (this->fields).boosterWidth = 100;
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

