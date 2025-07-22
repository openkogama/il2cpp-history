
/* Void AddUseInteractor(UseInteractor) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_AddUseInteractor
               (UseInteractorHandler *this,UseInteractor *useInteractor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((useInteractor != (UseInteractor *)0x0) &&
     (this_00 = (this->fields).useInteractors,
     this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Add
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(useInteractor->fields).woOwnerID
               ,(Object *)useInteractor,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Add_int__UseInteractor_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ClosestUseInteractorHasUseIconInVehicle() */

bool Assembly-CSharp.dll::UseInteractorHandler::
     UseInteractorHandler_ClosestUseInteractorHasUseIconInVehicle
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).useInteractors;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (this_00,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                      );
    if (iVar1 == 0) {
      return 0;
    }
    this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
    if ((this_01 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) &&
       (RVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                          (this_01,0,
                           MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_
                          ), RVar2 != (RegexCharClass_SingleRange)0x0)) {
      if ((*(int *)((int)RVar2 + 0x1c) != 0) &&
         (cVar3 = (**(code **)(*(int *)((int)RVar2 + 0x1c) + 0xc))(), cVar3 == '\0')) {
        return 0;
      }
      if (*(UseInteractorVisualization **)((int)RVar2 + 8) != (UseInteractorVisualization *)0x0) {
        UVar4 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                          (*(UseInteractorVisualization **)((int)RVar2 + 8),(MethodInfo *)0x0);
        if (((byte)UVar4 & 0xf) < 2) {
          return 0;
        }
        if (*(char *)((int)RVar2 + 0x20) == '\0') {
          return 0;
        }
        if (*(char *)((int)RVar2 + 0x21) == '\0') {
          return 1;
        }
        if (*(int *)((int)RVar2 + 8) != 0) {
          return *(bool *)(*(int *)((int)RVar2 + 8) + 0x34);
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Init(Int32, Collider) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Init
               (UseInteractorHandler *this,int32_t ownerWoId,Collider *baseCollider,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__Tools__ColliderCollection);
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    cRam_? = '\x01';
  }
  (this->fields).ownerWoId = ownerWoId;
  this_00 = (ColliderCollection *)
            func_?(TypeInfo__Assets__Scripts__Tools__ColliderCollection);
  Assets::Scripts::Tools::ColliderCollection::ColliderCollection__ctor
            (this_00,baseCollider,(MethodInfo *)0x0);
  (this->fields).triggingColliders = this_00;
  func_?(&(this->fields).triggingColliders,this_00);
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    pMVar1 = (MVInteractableBase *)
             UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                       (this_01,
                        MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                       );
    (this->fields).interactionBase = pMVar1;
    func_?();
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void RemoveUseInteractor(UseInteractor) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_RemoveUseInteractor
               (UseInteractorHandler *this,UseInteractor *useInteractor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((useInteractor != (UseInteractor *)0x0) &&
     (this_00 = (this->fields).useInteractors,
     this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,(useInteractor->fields).woOwnerID
               ,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Reset
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).useInteractors;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::StyleSheets::
    StyleSheetCache+SheetHandleKey,System::Object]::
    Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* List`1[UseInteractor] SortByDistance() */

List_1_UseInteractor_ *
Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_SortByDistance
          (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Values__
                   );
    func_?(&
                    System__Linq__IOrderedEnumerable<UseInteractor>_MethodInfo__System__Linq__Enumerable__OrderBy<UseInteractor,_float>_System__Collections__Generic__IEnumerable<UseInteractor>__System__Func<UseInteractor,_float>_
                   );
    func_?(&
                    System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                   );
    func_?(&TypeInfo__System__Func<UseInteractor,_float>);
    func_?(&
                    MethodInfo__UseInteractorHandler____c__DisplayClass14_0___SortByDistance_b__0_UseInteractor_
                   );
    func_?(&TypeInfo__UseInteractorHandler____c__DisplayClass14_0);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__UseInteractorHandler____c__DisplayClass14_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).useInteractors;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    source = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
             StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
             Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                       (this_00,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Values__
                       );
    source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                          ((IEnumerable_1_System_Object_ *)source,
                           System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                          );
    pCVar1 = (this->fields).triggingColliders;
    if ((pCVar1 != (ColliderCollection *)0x0) &&
       (this_01 = (pCVar1->fields).activeCollider, this_01 != (Collider *)0x0)) {
      pBVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                         ((Bounds *)&stack0xffffffcc,this_01,(MethodInfo *)0x0);
      fVar3 = (pBVar2->m_Center).y;
      pOVar4 = (Object__Class *)(pBVar2->m_Center).z;
      if (value != (Object *)0x0) {
        value[1].klass = (Object__Class *)(pBVar2->m_Center).x;
        value[1].monitor = (MonitorData *)fVar3;
        value[2].klass = pOVar4;
        this_02 = (Func_2_Object_Single_ *)func_?();
        mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                  (this_02,value,
                   MethodInfo__UseInteractorHandler____c__DisplayClass14_0___SortByDistance_b__0_UseInteractor_
                   ,(MethodInfo *)0x0);
        source_01 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_4
                              ((IEnumerable_1_System_Object_ *)source_00,this_02,
                               System__Linq__IOrderedEnumerable<UseInteractor>_MethodInfo__System__Linq__Enumerable__OrderBy<UseInteractor,_float>_System__Collections__Generic__IEnumerable<UseInteractor>__System__Func<UseInteractor,_float>_
                              );
        pLVar5 = (List_1_UseInteractor_ *)
                 System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_8
                           ((IEnumerable_1_System_Object_ *)source_01,
                            System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                           );
        return pLVar5;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pLVar5 = (List_1_UseInteractor_ *)(*pcVar6)();
  return pLVar5;
}


/* Void Update() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Update
               (UseInteractorHandler *this,MethodInfo *method)

{
  UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                   );
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_);
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
     this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
    bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      cVar3 = func_?(9,TypeInfo__IPlayModeUI);
      if (cVar3 != '\0') {
        return;
      }
      this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(in_stack_4->fields).useInteractors;
      if (this_01 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                          );
        if (0 < iVar5) {
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    UseInteractorHandler_SortByDistance(in_stack_4,(MethodInfo *)0x0);
          if ((this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_02,0,
                                    MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_
                                   ), RVar6 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
          if ((*(int *)((int)RVar6 + 0x1c) == 0) ||
             (cVar3 = (**(code **)(*(int *)((int)RVar6 + 0x1c) + 0xc))(), cVar3 != '\0')) {
            if (*(UseInteractorVisualization **)((int)RVar6 + 8) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
                      (*(UseInteractorVisualization **)((int)RVar6 + 8),(MethodInfo *)0x0);
            if (*(UseInteractorVisualization **)((int)RVar6 + 8) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UVar7 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                              (*(UseInteractorVisualization **)((int)RVar6 + 8),(MethodInfo *)0x0);
            if (1 < ((byte)UVar7 & 0xf)) {
              if ((*(char *)((int)RVar6 + 0x20) == '\0') || (*(char *)((int)RVar6 + 0x21) == '\0'))
              {
                bVar8 = false;
              }
              else {
                if (*(int *)((int)RVar6 + 8) == 0) goto code_?;
                bVar8 = *(char *)(*(int *)((int)RVar6 + 8) + 0x34) == '\0';
              }
              if (bVar8) {
                UseInteractorHandler_Use(in_stack_4,(MethodInfo *)0x0);
                return;
              }
              piVar9 = (int *)func_?();
              if (piVar9 != (int *)0x0) {
                uVar10 = 0;
                uVar11 = *(ushort *)(*piVar9 + 0xb6);
                if (uVar11 != 0) {
                  do {
                    if (*(IPlayModeUI__Class **)(*(int *)(*piVar9 + 0x58) + (uint)uVar10 * 8) ==
                        TypeInfo__IPlayModeUI) {
                      puVar12 = (undefined4 *)
                                (*piVar9 +
                                (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar10 * 8) + 0x18) *
                                8);
                      goto code_?;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar11);
                }
                puVar12 = (undefined4 *)func_?(piVar9,TypeInfo__IPlayModeUI,0);
code_?:
                (*(code *)*puVar12)(piVar9,puVar12[1],unaff_EBX);
                return;
              }
              goto code_?;
            }
          }
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
            (IPlayModeUI *)0x0) {
          func_?(1,TypeInfo__IPlayModeUI);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateInteractorsWOID() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_UpdateInteractorsWOID
               (UseInteractorHandler *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                   );
    in_stack_6 =
         &MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__get_Current__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_UseInteractor>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_UseInteractor>__get_Value__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__Clear__);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__);
    func_?(&TypeInfo__UnityEngine__Object);
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
  pLVar8 = (this->fields).removeList;
  LStack_9._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_9._index = 0;
  LStack_9._version = 0;
  LStack_9._current.First = 0;
  LStack_9._current.Last = 0;
  if (pLVar8 != (List_1_System_Int32_ *)0x0) {
    piVar10 = &(pLVar8->fields)._version;
    *piVar10 = *piVar10 + 1;
    (pLVar8->fields)._size = 0;
    this_00 = (Dictionary_2_System_UInt32_System_Object_ *)(this->fields).useInteractors;
    if (this_00 != (Dictionary_2_System_UInt32_System_Object_ *)0x0) {
      pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::
               Object]::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                         (&DStack_12,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__GetEnumerator__
                         );
      LStack_13._version = 0;
      DStack_7._dictionary = pDVar11->_dictionary;
      DStack_7._version = pDVar11->_version;
      DStack_7._index = pDVar11->_index;
      DStack_7._current.key = (pDVar11->_current).key;
      DStack_7._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
      uStack_1 = 1;
      LStack_13._current = (RegexCharClass_SingleRange)&DStack_7;
code_?:
      bVar14 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::UInt32,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                        (&DStack_7,
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__MoveNext__
                        );
      if (bVar14 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&DStack_7,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).removeList;
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                              (&LStack_13,this_02,
                               MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__)
          ;
          LStack_9._list = pLVar15->_list;
          LStack_9._index = pLVar15->_index;
          LStack_9._version = pLVar15->_version;
          LStack_9._current = pLVar15->_current;
          LStack_13._version = 0;
          uStack_1 = 4;
          LStack_13._current = (RegexCharClass_SingleRange)&LStack_9;
          while( true ) {
            bVar14 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                              (&LStack_9,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                              );
            if (bVar14 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&LStack_9,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__Dispose__
                         ,unaff_EDI);
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            this_03 = (this->fields).useInteractors;
            if (this_03 == (Dictionary_2_System_Int32_UseInteractor_ *)0x0) break;
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__Remove
                      ((Dictionary_2_System_Int32_System_Object_ *)this_03,
                       (int32_t)LStack_9._current,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                      );
          }
        }
      }
      else {
        uStack_16 = DStack_7._current.key;
        pOStack_17 = DStack_7._current.value;
        this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_04 != (MVWorldObjectClientManager *)0x0) {
          in_stack_6 = (MethodInfo **)0x0;
          pMVar18 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_04,uStack_16,(MethodInfo *)0x0);
          if ((pMVar18 == (MVWorldObject *)0x0) || (pOStack_17 == (Object *)0x0)) {
            pLVar8 = (this->fields).removeList;
            if (pLVar8 != (List_1_System_Int32_ *)0x0) goto code_?;
          }
          else {
            pOStack_19 = (Object_1 *)pOStack_17[2].monitor;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              (pOStack_19,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar14 != 0) goto code_?;
            if ((Collider *)pOStack_17[2].monitor != (Collider *)0x0) {
              pBVar20 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                 (&BStack_21,(Collider *)pOStack_17[2].monitor,(MethodInfo *)0x0);
              DStack_12._dictionary =
                   (Dictionary_2_System_UInt32_System_Object_ *)(pBVar20->m_Center).x;
              DStack_12._version = (int32_t)(pBVar20->m_Center).y;
              DStack_12._index = (int32_t)(pBVar20->m_Center).z;
              DStack_12._current.key = (uint32_t)(pBVar20->m_Extents).x;
              DStack_12._current.value = (Object *)(pBVar20->m_Extents).y;
              DStack_12._getEnumeratorRetType = (int32_t)(pBVar20->m_Extents).z;
              pCVar22 = (this->fields).triggingColliders;
              if ((pCVar22 != (ColliderCollection *)0x0) &&
                 (this_01 = (pCVar22->fields).activeCollider, this_01 != (Collider *)0x0))
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  uVar23 = func_?();
  func_?(uVar23);
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
code_?:
  pBVar20 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                     (&BStack_21,this_01,(MethodInfo *)0x0);
  bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Intersects
                    ((Bounds *)&DStack_12,*pBVar20,(MethodInfo *)0x0);
  if (bVar14 == 0) {
code_?:
    pLVar8 = (this->fields).removeList;
    if (pLVar8 == (List_1_System_Int32_ *)0x0) goto code_?;
code_?:
    func_?(pLVar8,uStack_16,MethodInfo__System__Collections__Generic__List<int>__Add_int_);
  }
  goto code_?;
}


/* Void UpdateUseVisuals() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_UpdateUseVisuals
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                   );
    func_?(&TypeInfo__IPlayModeUI);
    func_?(&MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_);
    cRam_? = '\x01';
  }
  pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                     ((MethodInfo *)0x0);
  if ((pSVar1 != (SpawnRoleDataMediator *)0x0) &&
     (this_00 = (pSVar1->fields).SpawnRoleModeTypeWrapper,
     this_00 != (SpawnRoleModeTypeWrapper *)0x0)) {
    bVar2 = SpawnRoleModeTypeWrapper::SpawnRoleModeTypeWrapper_IsInMode
                      (this_00,SpawnRoleModeType__Enum_Playing,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MVGameControllerBase);
      cRam_? = '\x01';
    }
    pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
    if (pIVar3 != (IPlayModeUI *)0x0) {
      cVar4 = func_?(9,TypeInfo__IPlayModeUI,pIVar3);
      if (cVar4 != '\0') {
        return;
      }
      this_01 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)(this->fields).useInteractors;
      if (this_01 !=
          (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
           *)0x0) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
                Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                          (this_01,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                          );
        if (0 < iVar5) {
          this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                    UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
          if ((this_02 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
             || (RVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                         RegularExpressions::RegexCharClass+SingleRange]::
                         List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                   (this_02,0,
                                    MethodInfo__System__Collections__Generic__List<UseInteractor>__get_Item_int_
                                   ), RVar6 == (RegexCharClass_SingleRange)0x0))
          goto code_?;
          if ((*(int *)((int)RVar6 + 0x1c) == 0) ||
             (cVar4 = (**(code **)(*(int *)((int)RVar6 + 0x1c) + 0xc))(), cVar4 != '\0')) {
            if (*(UseInteractorVisualization **)((int)RVar6 + 8) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
                      (*(UseInteractorVisualization **)((int)RVar6 + 8),(MethodInfo *)0x0);
            if (*(UseInteractorVisualization **)((int)RVar6 + 8) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UVar7 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                              (*(UseInteractorVisualization **)((int)RVar6 + 8),(MethodInfo *)0x0);
            if (1 < ((byte)UVar7 & 0xf)) {
              if ((*(char *)((int)RVar6 + 0x20) == '\0') || (*(char *)((int)RVar6 + 0x21) == '\0'))
              {
                bVar8 = false;
              }
              else {
                if (*(int *)((int)RVar6 + 8) == 0) goto code_?;
                bVar8 = *(char *)(*(int *)((int)RVar6 + 8) + 0x34) == '\0';
              }
              if (bVar8) {
                UseInteractorHandler_Use(this,(MethodInfo *)0x0);
                return;
              }
              piVar9 = (int *)func_?();
              if (piVar9 != (int *)0x0) {
                uVar10 = 0;
                uVar11 = *(ushort *)(*piVar9 + 0xb6);
                if (uVar11 != 0) {
                  do {
                    if (*(IPlayModeUI__Class **)(*(int *)(*piVar9 + 0x58) + (uint)uVar10 * 8) ==
                        TypeInfo__IPlayModeUI) {
                      puVar12 = (undefined4 *)
                                (*piVar9 +
                                (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar10 * 8) + 0x18)
                                * 8);
                      goto code_?;
                    }
                    uVar10 = uVar10 + 1;
                  } while (uVar10 < uVar11);
                }
                puVar12 = (undefined4 *)func_?(piVar9,TypeInfo__IPlayModeUI,0);
code_?:
                (*(code *)*puVar12)(piVar9,puVar12[1],unaff_EBX);
                return;
              }
              goto code_?;
            }
          }
        }
        if (cRam_? == '\0') {
          func_?(&TypeInfo__MVGameControllerBase);
          cRam_? = '\x01';
        }
        pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
        if (pIVar3 != (IPlayModeUI *)0x0) {
          func_?(1,TypeInfo__IPlayModeUI,pIVar3);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Boolean Use() */

bool Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_Use
               (UseInteractorHandler *this,MethodInfo *method)

{
  method_00 = (MethodInfo *)&DAT_?;
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UseInteractor>__GetEnumerator__)
    ;
    cRam_? = '\x01';
  }
  UseInteractorHandler_UpdateInteractorsWOID(this,(MethodInfo *)0x0);
  pDVar2 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
            *)(this->fields).useInteractors;
  if (pDVar2 != (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                 *)0x0) {
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
            StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
            Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Count
                      (pDVar2,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Count__
                      );
    if (iVar3 == 0) {
code_?:
      *unaff_FS_OFFSET = uVar1;
      return 0;
    }
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
              UseInteractorHandler_SortByDistance(this,(MethodInfo *)0x0);
    if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
      RegexCharClass+SingleRange]::
      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                 &stack0xffffffd0,this_00,
                 MethodInfo__System__Collections__Generic__List<UseInteractor>__GetEnumerator__);
      do {
        do {
          bVar4 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffc0,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__MoveNext__
                            );
          if (bVar4 == 0) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&stack0xffffffc0,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                       ,in_stack_5);
            goto code_?;
          }
        } while ((_UNK_? != 0) &&
                (cVar6 = (**(code **)(_UNK_? + 0xc))(), cVar6 == '\0'));
        pMVar7 = (this->fields)._.worldObjectParent;
        if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
        bVar4 = UseInteractor::UseInteractor_Use
                          ((UseInteractor *)&UNK_?,(pMVar7->fields)._.id,(MethodInfo *)0x0);
      } while (bVar4 == 0);
      UseInteractor::UseInteractor_PayUseCost((UseInteractor *)&UNK_?,(MethodInfo *)0x0);
      pMVar8 = 
      MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&stack0xffffffc0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                 ,method_00);
      if (UNK_? != '\0') {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pDVar2 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                  *)(this->fields).useInteractors;
        if (pDVar2 == (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
        StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
        Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__Clear
                  (pDVar2,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Clear__
                  );
      }
      *unaff_FS_OFFSET = pMVar8;
      return 1;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar9 = (code *)swi(3);
  bVar4 = (*pcVar9)();
  return bVar4;
}


/* UseInteractorHandler() */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler__ctor
               (UseInteractorHandler *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>);
    func_?(&MethodInfo__System__Collections__Generic__List<int>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<int>);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>)
  ;
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Dictionary__)
  ;
  (this->fields).useInteractors = (Dictionary_2_System_Int32_UseInteractor_ *)this_00;
  func_?(&(this->fields).useInteractors,this_00);
  this_01 = (List_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__List<int>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_01,
             MethodInfo__System__Collections__Generic__List<int>__List__);
  (this->fields).removeList = this_01;
  func_?(&(this->fields).removeList,this_01);
  (this->fields).ownerWoId = -1;
  (this->fields)._.findWorldObjectParent = 1;
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

