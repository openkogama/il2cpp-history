
/* Void AddUseInteractor(UseInteractor) */

void Assembly-CSharp.dll::UseInteractorHandler::UseInteractorHandler_AddUseInteractor
               (UseInteractorHandler *this,UseInteractor *useInteractor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((useInteractor != (UseInteractor *)0x0) &&
     (this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).useInteractors,
     this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)(useInteractor->fields).woOwnerID,(Object *)useInteractor,
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
  if (this_00 != (ColliderCollection *)0x0) {
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
      func_?(&(this->fields).interactionBase,pMVar1);
      return;
    }
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
  this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
            (this->fields).useInteractors;
  if (this_00 !=
      (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
    Regex+CachedCodeEntryKey,System::Object]::
    Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
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
  value = (Object *)func_?(TypeInfo__UseInteractorHandler____c__DisplayClass14_0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    this_00 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *
              )(this->fields).useInteractors;
    if (this_00 !=
        (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0)
    {
      source = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
               RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
               Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Values
                         (this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__get_Values__
                         );
      source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                            ((IEnumerable_1_System_Object_ *)source,
                             System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                            );
      pCVar1 = (this->fields).triggingColliders;
      if ((pCVar1 != (ColliderCollection *)0x0) &&
         (this_01 = (pCVar1->fields).activeCollider, this_01 != (Collider *)0x0)) {
        pBVar2 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                           (&BStack_3,this_01,(MethodInfo *)0x0);
        pRVar4 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                 RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                 KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                           ((Regex_CachedCodeEntryKey *)&BStack_3.m_Extents,
                            (KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                             *)&stack0xffffffcc,(MethodInfo *)(pBVar2->m_Center).z);
        pSVar5 = pRVar4->_cultureKey;
        pOVar6 = (Object__Class *)pRVar4->_pattern;
        value[1].klass = (Object__Class *)pRVar4->_options;
        value[1].monitor = (MonitorData *)pSVar5;
        value[2].klass = pOVar6;
        this_02 = (Func_2_Object_Single_ *)func_?();
        if (this_02 != (Func_2_Object_Single_ *)0x0) {
          mscorlib.dll::System::Func`2[Object,Single]::Func_2_Object_Single___ctor
                    (this_02,value,
                     MethodInfo__UseInteractorHandler____c__DisplayClass14_0___SortByDistance_b__0_UseInteractor_
                     ,(MethodInfo *)0x0);
          source_01 = System.Core.dll::System::Linq::Enumerable::Enumerable_OrderBy_3
                                ((IEnumerable_1_System_Object_ *)source_00,this_02,
                                 System__Linq__IOrderedEnumerable<UseInteractor>_MethodInfo__System__Linq__Enumerable__OrderBy<UseInteractor,_float>_System__Collections__Generic__IEnumerable<UseInteractor>__System__Func<UseInteractor,_float>_
                                );
          pLVar7 = (List_1_UseInteractor_ *)
                   System.Core.dll::System::Linq::Enumerable::Enumerable_ToList_5
                             ((IEnumerable_1_System_Object_ *)source_01,
                              System__Collections__Generic__List<UseInteractor>_MethodInfo__System__Linq__Enumerable__ToList<UseInteractor>_System__Collections__Generic__IEnumerable<UseInteractor>_
                             );
          return pLVar7;
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pLVar7 = (List_1_UseInteractor_ *)(*pcVar8)();
  return pLVar7;
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
      cVar3 = func_?(5,TypeInfo__IPlayModeUI);
      if (cVar3 != '\0') {
        return;
      }
      this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(in_stack_4->fields).useInteractors;
      if (this_01 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
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
          if ((*(int *)((int)RVar6 + 0xc) == 0) ||
             (cVar3 = (**(code **)(*(int *)((int)RVar6 + 0xc) + 0xc))(), cVar3 != '\0')) {
            if (*(UseInteractorVisualization **)((int)RVar6 + 0x20) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
                      (*(UseInteractorVisualization **)((int)RVar6 + 0x20),(MethodInfo *)0x0);
            if (*(UseInteractorVisualization **)((int)RVar6 + 0x20) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UVar7 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                              (*(UseInteractorVisualization **)((int)RVar6 + 0x20),(MethodInfo *)0x0
                              );
            if (1 < ((byte)UVar7 & 0xf)) {
              if (*(char *)((int)RVar6 + 0x1c) == '\0') {
                bVar8 = false;
              }
              else {
                if (*(int *)((int)RVar6 + 0x20) == 0) goto code_?;
                bVar8 = *(char *)(*(int *)((int)RVar6 + 0x20) + 0x30) == '\0';
              }
              if (bVar8) {
                UseInteractorHandler_Use(in_stack_4,(MethodInfo *)0x0);
                return;
              }
              piVar9 = (int *)func_?();
              if (piVar9 != (int *)0x0) {
                uVar10 = 0;
                uVar11 = *(ushort *)(*piVar9 + 0xb2);
                if (uVar11 != 0) {
                  do {
                    if (*(IPlayModeUI__Class **)(*(int *)(*piVar9 + 0x58) + (uint)uVar10 * 8) ==
                        TypeInfo__IPlayModeUI) {
                      puVar12 = (undefined4 *)
                                (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar10 * 8) * 8 +
                                 0xbc + *piVar9);
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
  puStack_4 = &stack0xffffff5c;
  puVar5 = &stack0xffffff5c;
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
  auStack_7._16_4_ = (Dictionary_2_System_Object_System_Object_ *)0x0;
  iStack_8 = 0;
  iStack_9 = 0;
  pOStack_10 = (Object *)0x0;
  uStack_11._0_4_ = (Object *)0x0;
  uStack_11._4_4_ = 0;
  pLVar12 = (this->fields).removeList;
  BStack_13.m_Extents.y = 0.0;
  BStack_13.m_Extents.z = 0.0;
  BStack_13.m_Center.x = 0.0;
  BStack_13.m_Center.y = 0.0;
  BStack_13.m_Center.z = 0.0;
  BStack_13.m_Extents.x = 0.0;
  auStack_7._0_4_ = (Dictionary_2_System_Int32Enum_System_Object_ *)0x0;
  auStack_7._4_4_ = 0;
  auStack_7._8_4_ = 0;
  auStack_7._12_2_ = 0;
  auStack_7._14_2_ = 0;
  if (pLVar12 != (List_1_System_Int32_ *)0x0) {
    piVar14 = &(pLVar12->fields)._version;
    *piVar14 = *piVar14 + 1;
    (pLVar12->fields)._size = 0;
    this_00 = (Dictionary_2_System_Object_System_Object_ *)(this->fields).useInteractors;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pDVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)
                          auStack_16,this_00,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__GetEnumerator__
                         );
      auStack_7._16_4_ = pDVar15->_dictionary;
      iStack_8 = pDVar15->_version;
      iStack_9 = pDVar15->_index;
      pOStack_10 = (pDVar15->_current).key;
      uStack_11 = *(undefined8 *)&(pDVar15->_current).value;
      pOStack_17 = (Object *)0x0;
      uStack_1 = 1;
      pDStack_18 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                   (auStack_7 + 0x10);
code_?:
      bVar19 = mscorlib.dll::System::Collections::Generic::
              Dictionary`2[TKey,TValue]+Enumerator[System::Int32Enum,System::Object]::
              Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object__MoveNext
                        ((Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                         (auStack_7 + 0x10),
                         MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__MoveNext__
                        );
      if (bVar19 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)(auStack_7 + 0x10),
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<int,_UseInteractor>__Dispose__
                   ,(MethodInfo *)in_stack_6);
        uStack_1 = 0xffffffff;
        this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).removeList;
        if (this_02 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
          pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                *)(auStack_16 + 8),this_02,
                               MethodInfo__System__Collections__Generic__List<int>__GetEnumerator__)
          ;
          auStack_7._0_4_ = pLVar20->_list;
          auStack_7._4_4_ = pLVar20->_index;
          auStack_7._8_4_ = pLVar20->_version;
          auStack_7._12_4_ = pLVar20->_current;
          pOStack_17 = (Object *)0x0;
          uStack_1 = 4;
          pDStack_18 = (Dictionary_2_TKey_TValue_Enumerator_System_Int32Enum_System_Object_ *)
                       auStack_7;
          while( true ) {
            bVar19 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                              ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                *)auStack_7,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<int>__MoveNext__
                              );
            if (bVar19 == 0) {
              uStack_1 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)auStack_7,
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
                      ((Dictionary_2_System_Int32_System_Object_ *)this_03,auStack_7._12_4_,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Remove_int_
                      );
          }
        }
      }
      else {
        pOStack_21 = pOStack_10;
        pOStack_22 = (Object *)uStack_11;
        this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_04 != (MVWorldObjectClientManager *)0x0) {
          in_stack_6 = (MethodInfo **)0x0;
          pMVar23 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                             (this_04,(int32_t)pOStack_21,(MethodInfo *)0x0);
          if ((pMVar23 == (MVWorldObject *)0x0) || (pOStack_22 == (Object *)0x0)) {
            pLVar12 = (this->fields).removeList;
            if (pLVar12 != (List_1_System_Int32_ *)0x0) goto code_?;
          }
          else {
            pOStack_24 = pOStack_22[2].klass;
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__UnityEngine__Object);
            }
            bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)pOStack_24,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar19 != 0) goto code_?;
            if (pOStack_22[2].klass != (Object__Class *)0x0) {
              pBVar25 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                                 (&BStack_26,(Collider *)pOStack_22[2].klass,(MethodInfo *)0x0);
              BStack_13.m_Center.x = (pBVar25->m_Center).x;
              BStack_13.m_Center.y = (pBVar25->m_Center).y;
              BStack_13.m_Center.z = (pBVar25->m_Center).z;
              BStack_13.m_Extents.x = (pBVar25->m_Extents).x;
              BStack_13.m_Extents.y = (pBVar25->m_Extents).y;
              BStack_13.m_Extents.z = (pBVar25->m_Extents).z;
              pCVar27 = (this->fields).triggingColliders;
              if ((pCVar27 != (ColliderCollection *)0x0) &&
                 (this_01 = (pCVar27->fields).activeCollider, this_01 != (Collider *)0x0))
              goto code_?;
            }
          }
        }
      }
    }
  }
code_?:
  uVar28 = func_?();
  func_?(uVar28);
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
  return;
code_?:
  pBVar25 = UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_get_bounds
                     (&BStack_26,this_01,(MethodInfo *)0x0);
  bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_Intersects
                    (&BStack_13,*pBVar25,(MethodInfo *)0x0);
  if (bVar19 == 0) {
code_?:
    pLVar12 = (this->fields).removeList;
    if (pLVar12 == (List_1_System_Int32_ *)0x0) goto code_?;
code_?:
    func_?(pLVar12,pOStack_21,MethodInfo__System__Collections__Generic__List<int>__Add_int_)
    ;
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
      cVar4 = func_?(5,TypeInfo__IPlayModeUI,pIVar3);
      if (cVar4 != '\0') {
        return;
      }
      this_01 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)(this->fields).useInteractors;
      if (this_01 !=
          (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)0x0
         ) {
        iVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
                RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
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
          if ((*(int *)((int)RVar6 + 0xc) == 0) ||
             (cVar4 = (**(code **)(*(int *)((int)RVar6 + 0xc) + 0xc))(), cVar4 != '\0')) {
            if (*(UseInteractorVisualization **)((int)RVar6 + 0x20) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UseInteractorVisualization::UseInteractorVisualization_GetShowOptions
                      (*(UseInteractorVisualization **)((int)RVar6 + 0x20),(MethodInfo *)0x0);
            if (*(UseInteractorVisualization **)((int)RVar6 + 0x20) ==
                (UseInteractorVisualization *)0x0) goto code_?;
            UVar7 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                              (*(UseInteractorVisualization **)((int)RVar6 + 0x20),(MethodInfo *)0x0
                              );
            if (1 < ((byte)UVar7 & 0xf)) {
              if (*(char *)((int)RVar6 + 0x1c) == '\0') {
                bVar8 = false;
              }
              else {
                if (*(int *)((int)RVar6 + 0x20) == 0) goto code_?;
                bVar8 = *(char *)(*(int *)((int)RVar6 + 0x20) + 0x30) == '\0';
              }
              if (bVar8) {
                UseInteractorHandler_Use(this,(MethodInfo *)0x0);
                return;
              }
              piVar9 = (int *)func_?();
              if (piVar9 != (int *)0x0) {
                uVar10 = 0;
                uVar11 = *(ushort *)(*piVar9 + 0xb2);
                if (uVar11 != 0) {
                  do {
                    if (*(IPlayModeUI__Class **)(*(int *)(*piVar9 + 0x58) + (uint)uVar10 * 8) ==
                        TypeInfo__IPlayModeUI) {
                      puVar12 = (undefined4 *)
                                (*(int *)(*(int *)(*piVar9 + 0x58) + 4 + (uint)uVar10 * 8) * 8 +
                                 0xbc + *piVar9);
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
  pDVar2 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)
           (this->fields).useInteractors;
  if (pDVar2 != (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                 *)0x0) {
    iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::
            RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
            Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Count
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
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
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
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&stack0xffffffc0,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseInteractor>__Dispose__
                 ,method_00);
      if (UNK_? != '\0') {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pDVar2 = (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                  *)(this->fields).useInteractors;
        if (pDVar2 == (Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Text::RegularExpressions::
        Regex+CachedCodeEntryKey,System::Object]::
        Dictionary_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__Clear
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
  this_00 = (Dictionary_2_System_Int32_UseInteractor_ *)
            func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>);
  if (this_00 != (Dictionary_2_System_Int32_UseInteractor_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UseInteractor>__Dictionary__
              );
    (this->fields).useInteractors = this_00;
    func_?(&(this->fields).useInteractors,this_00);
    this_01 = (List_1_System_Int32_ *)
              func_?(TypeInfo__System__Collections__Generic__List<int>);
    if (this_01 != (List_1_System_Int32_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)this_01,
                 MethodInfo__System__Collections__Generic__List<int>__List__);
      (this->fields).removeList = this_01;
      func_?(&(this->fields).removeList,this_01);
      (this->fields).ownerWoId = -1;
      (this->fields)._.findWorldObjectParent = 1;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform__ctor
                ((Transform *)this,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

