
/* Void DoGridSnapping(List`1[WorldObjectClientRef]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_DoGridSnapping(List_1_WorldObjectClientRef_ *targets,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
  if (cRam_? == '\0') {
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                   );
    func_?(&TypeInfo__IEditModeUI);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                   );
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar7 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar7 != (IEditModeUI *)0x0) {
    uVar8 = CONCAT44(unaff_EDI,pIVar7);
    cVar9 = func_?(0,TypeInfo__IEditModeUI);
    uStack_10 = _UNK_?;
    if (cVar9 == '\0') {
      uStack_10 = _UNK_?;
    }
    if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
      pLVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_12,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          targets,
                          MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                         );
      uStack_13 = 0;
      LStack_6._list = (List_1_System_Object_ *)pLVar11->_list;
      LStack_6._index = pLVar11->_index;
      LStack_6._version = pLVar11->_version;
      LStack_6._current = *(Object **)&pLVar11->_current;
      uStack_1 = 1;
      pLStack_14 = &LStack_6;
      while( true ) {
        method_00 = (MethodInfo *)((ulonglong)uVar8 >> 0x20);
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                          );
        if (bVar15 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        break;
        uVar8 = CONCAT44(method_00,
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        );
        pOVar16 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar16 != (Object *)0x0) {
          func_?();
          puVar17 = (undefined8 *)func_?(&LStack_12._index,0x41,pOVar16,uStack_10);
          uVar8 = *puVar17;
          func_?(0x1e,pOVar16);
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Vector3 GetPivot(List`1[WorldObjectClientRef], List`1[UnityEngine.Transform]) */

Vector3 * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
          RotationHelper_GetPivot
                    (Vector3 *__return_storage_ptr__,List_1_WorldObjectClientRef_ *targets,
                    List_1_UnityEngine_Transform_ *targetTransforms,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
    if ((targets->fields)._size != 1) {
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                         ((Vector3 *)&stack0xfffffff0,targetTransforms,(MethodInfo *)0x0);
      fVar2 = pVVar1->y;
      fVar3 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
    this = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)targets,0
                      ,
                      MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                     );
    if (this != (RegexCharClass_SingleRange)0x0) {
      pOVar4 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)this,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar4 != (Object *)0x0) {
        puVar5 = (undefined8 *)(**(code **)&pOVar4->klass[2]._0.byval_arg.attrs)();
        uVar6 = *puVar5;
        fVar3 = *(float *)(puVar5 + 1);
        __return_storage_ptr__->x = (float)(int)uVar6;
        __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
        __return_storage_ptr__->z = fVar3;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Boolean IsRotationInvalid() */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_IsRotationInvalid(RotationHelper *this,MethodInfo *method)

{
  this_00 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if (this_00 != (MVJetPack_LocalObjectsJetPack *)0x0) {
    this_01 = *(MVNetworkSelector **)&(this_00->fields).walkMode;
    selectionSet = (HashSet_1_System_Int32_ *)
                   MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                             (this_00,(MethodInfo *)0x0);
    if (this_01 != (MVNetworkSelector *)0x0) {
      bVar1 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                        (this_01,selectionSet,(MethodInfo *)0x0);
      return bVar1 == 0;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar1 = (*pcVar2)();
  return bVar1;
}


/* Void ResetRotation() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_ResetRotation(RotationHelper *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    in_stack_6 =
         &
         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
    ;
    func_?();
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  HStack_7._set = (HashSet_1_System_Int32_ *)0x0;
  HStack_7._index = 0;
  HStack_7._version = 0;
  HStack_7._current = 0;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  pEVar9 = (this->fields).editorStateMachine;
  if (pEVar9 != (EditorStateMachine *)0x0) {
    pMVar10 = (pEVar9->fields).networkSelector;
    pHVar11 = (HashSet_1_System_Int32_ *)
             MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                       ((MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine,
                        (MethodInfo *)0x0);
    if (pMVar10 != (MVNetworkSelector *)0x0) {
      bVar12 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(pMVar10,pHVar11,(MethodInfo *)0x0)
      ;
      if (bVar12 == 0) goto code_?;
      QStack_13.y = (float)TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>;
      QStack_13.x = (float)&UNK_?;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                func_?();
      pLStack_14 = this_00;
      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
        LowLevelList_1_System_Object___ctor
                  ((LowLevelList_1_System_Object_ *)this_00,
                   MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
        pMVar15 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
        pLStack_16 = this_00;
        if (pMVar15 != (MVJetPack_LocalObjectsJetPack *)0x0) {
          this_01 = (HashSet_1_System_Object_ *)
                    MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                              (pMVar15,(MethodInfo *)0x0);
          if (this_01 != (HashSet_1_System_Object_ *)0x0) {
            pHVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
                     HashSet_1_System_Object__GetEnumerator
                               ((HashSet_1_T_Enumerator_System_Object_ *)&LStack_18,this_01,
                                MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                               );
            HStack_7._set = (HashSet_1_System_Int32_ *)pHVar17->_set;
            HStack_7._index = pHVar17->_index;
            HStack_7._version = pHVar17->_version;
            HStack_7._current = (int32_t)pHVar17->_current;
            LStack_18._version = 0;
            uStack_1 = 1;
            LStack_18._current = (RegexCharClass_SingleRange)&HStack_7;
            while( true ) {
              bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System
                      ::Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                                (&HStack_7,
                                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                );
              if (bVar12 == 0) break;
              pQStack_19 = (Quaternion *)HStack_7._current;
              this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
              if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
              item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                               (this_02,(int32_t)pQStack_19,(MethodInfo *)0x0);
              in_stack_20 = (MethodInfo *)&UNK_?;
              mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
              List_1_System_Object__Add
                        ((List_1_System_Object_ *)this_00,(Object *)item,
                         MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                        );
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&HStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                       ,in_stack_20);
            uStack_1 = 0xffffffff;
            bVar12 = RotationHelper_ValidateTargets
                              ((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
            if (bVar12 == 0) {
code_?:
              *unaff_FS_OFFSET = uStack_3;
              return;
            }
            pLVar21 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_18,this_00,
                                MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                               );
            LStack_8._list = (List_1_System_Object_ *)pLVar21->_list;
            LStack_8._index = pLVar21->_index;
            LStack_8._version = pLVar21->_version;
            LStack_8._current = *(Object **)&pLVar21->_current;
            LStack_18._version = 0;
            uStack_1 = 4;
            LStack_18._current = (RegexCharClass_SingleRange)&LStack_8;
            while( true ) {
              bVar12 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_8,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                                );
              if (bVar12 == 0) break;
              if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
              goto code_?;
              this_03 = (MVWorldObjectClient *)
                        WorldObjectClientRef`1[System::Object]::
                        WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                  ((WorldObjectClientRef_1_System_Object_ *)LStack_8._current,
                                   MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                  );
              if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
              MVWorldObjectClient::MVWorldObjectClient_ResetRotation(this_03,(MethodInfo *)0x0);
              pQStack_19 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                                     (&QStack_13,this_03,(MethodInfo *)0x0);
              in_stack_6 = (MethodInfo **)&UNK_?;
              (*(this_03->klass->vtable).set_SyncRot.methodPtr)
                        (this_03,pQStack_19->x,pQStack_19->y,pQStack_19->z,pQStack_19->w);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                      ((Object *)&LStack_8,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                       ,(MethodInfo *)in_stack_6);
            uStack_1 = 0xffffffff;
            RotationHelper_DoGridSnapping
                      ((List_1_WorldObjectClientRef_ *)pLStack_14,(MethodInfo *)0x0);
            pMVar15 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
            if (pMVar15 != (MVJetPack_LocalObjectsJetPack *)0x0) {
              pMVar10 = *(MVNetworkSelector **)&(pMVar15->fields).walkMode;
              pHVar11 = (HashSet_1_System_Int32_ *)
                       MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                 (pMVar15,(MethodInfo *)0x0);
              if (pMVar10 != (MVNetworkSelector *)0x0) {
                MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                          (pMVar10,pHVar11,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar22 = func_?();
  uVar22 = func_?(uVar22);
  func_?(uVar22);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void RotateStep(RotationMode, Single) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_RotateStep
               (RotationHelper *this,RotationMode__Enum rotationMode,float rotationSpeed,
               MethodInfo *method)

{
  pMVar1 = (MethodInfo *)*unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff0;
  pMVar2 = (MethodInfo *)&stack0xffffff84;
  method_00 = (MethodInfo *)&stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                   );
    in_stack_3 = &MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__;
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__)
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    func_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
    method_00 = pMVar2;
  }
  pEVar4 = (this->fields).editorStateMachine;
  if (pEVar4 == (EditorStateMachine *)0x0) goto code_?;
  pMVar5 = (pEVar4->fields).networkSelector;
  pHVar6 = (HashSet_1_System_Int32_ *)
           MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                     ((MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine,
                      (MethodInfo *)0x0);
  if (pMVar5 == (MVNetworkSelector *)0x0) goto code_?;
  bVar7 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(pMVar5,pHVar6,(MethodInfo *)0x0);
  if (bVar7 == 0) goto code_?;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?();
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)this_00,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  transforms = (List_1_UnityEngine_Transform_ *)
               func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>)
  ;
  if (transforms == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pMVar8 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if ((pMVar8 == (MVJetPack_LocalObjectsJetPack *)0x0) ||
     (this_01 = (HashSet_1_System_Object_ *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          (pMVar8,(MethodInfo *)0x0), this_01 == (HashSet_1_System_Object_ *)0x0))
  goto code_?;
  pHVar9 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::
           HashSet_1_System_Object__GetEnumerator
                     ((HashSet_1_T_Enumerator_System_Object_ *)&stack0xffffffb0,this_01,
                      MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
  pOVar10 = pHVar9->_current;
  while (bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                 Int32]::HashSet_1_T_Enumerator_System_Int32__MoveNext
                           ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffa0,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                           ), bVar7 != 0) {
    pOVar11 = pOVar10;
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                        (this_02,(int32_t)pOVar10,(MethodInfo *)0x0);
    in_stack_3 = (MethodInfo **)&UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)this_03,
               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
              );
    if ((this_03 == (WorldObjectClientRef *)0x0) ||
       (pOVar10 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)this_03,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pOVar10 == (Object *)0x0)) goto code_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)transforms,(Object *)pOVar10[0x12].klass,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
              );
    pOVar10 = pOVar11;
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)&stack0xffffffa0,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
             (MethodInfo *)in_stack_3);
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                   );
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
  }
  if ((this_00->fields)._size == 1) {
    RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_00,0,
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                       );
    if ((RVar12 == (RegexCharClass_SingleRange)0x0) ||
       (pOVar10 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)RVar12,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pOVar10 == (Object *)0x0)) goto code_?;
    iVar13 = (**(code **)&pOVar10->klass[2]._0.byval_arg.attrs)
                       (&stack0xffffffb4,pOVar10,pOVar10->klass[2]._0.this_arg.data.dummy);
    rotationMode_00 = *(float *)(iVar13 + 8);
  }
  else {
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar14 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                       ((Vector3 *)&stack0xffffffc0,transforms,(MethodInfo *)0x0);
    rotationMode_00 = pVVar14->z;
  }
  bVar7 = RotationHelper_ValidateTargets((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
  if (bVar7 == 0) goto code_?;
  RVar12 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,0,
                      MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                     );
  if (RVar12 == (RegexCharClass_SingleRange)0x0) goto code_?;
  this_04 = (MVWorldObjectClient *)
            WorldObjectClientRef`1[System::Object]::
            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                      ((WorldObjectClientRef_1_System_Object_ *)RVar12,
                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                      );
  if ((this_00->fields)._size == 1) {
    if (this_04 == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar14 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                       ((Vector3 *)&stack0xffffffb4,this_04,(MethodInfo *)0x0);
    pVVar14 = MathFunctions::MathFunctions_RoundVector
                       ((Vector3 *)&stack0xffffffb4,*pVVar14,0,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles(this_04,*pVVar14,(MethodInfo *)0x0)
    ;
    if ((this_00->fields)._size != 1) goto code_?;
    if (this_04 == (MVWorldObjectClient *)0x0) goto code_?;
    uVar15 = 0;
    bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      (this_04,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
    if ((bVar7 == 0) || (rotationMode != RotationMode__Enum_X)) {
      uVar15 = CONCAT44(0x100,this_04);
      bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_04,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
      if ((bVar7 == 0) || (rotationMode != RotationMode__Enum_Y)) {
        bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                          (this_04,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
        if ((bVar7 == 0) || (rotationMode != RotationMode__Enum_Z)) goto code_?;
        pMVar1 = (MethodInfo *)0x0;
        method_00 = (MethodInfo *)(rotationSpeed * _UNK_? - _UNK_?);
        rotationMode_00 = 2.8026e-45;
      }
    }
    else {
      uVar15 = uVar15 & 0xffffffff;
    }
    pivot_00.z = rotationMode_00;
    pivot_00.x = (float)(int)uVar15;
    pivot_00.y = (float)(int)(uVar15 >> 0x20);
    MVWorldObjectClient::MVWorldObjectClient_RotateAroundLocal
              (this_04,pivot_00,(RotationMode__Enum)rotationMode_00,(float)method_00,pMVar1);
    MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
              ((Quaternion *)&stack0xffffffb0,this_04,(MethodInfo *)0x0);
    (*(this_04->klass->vtable).set_SyncRot.methodPtr)();
    this = (RotationHelper *)this_04;
  }
  else {
code_?:
    uVar16 = CONCAT44(this_00,(List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffb0);
    pLVar17 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffb0,this_00,
                         MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                        );
    this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)&stack0xffffff90;
    RVar12 = pLVar17->_current;
    while (bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff90,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                             ), bVar7 != 0) {
      if (RVar12 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pMVar1 = MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__;
      RVar12 = (RegexCharClass_SingleRange)
               WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)RVar12,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (cRam_? == '\0') {
        method_00 = (MethodInfo *)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      if (RVar12 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pivot.z = (float)pMVar1;
      pivot.x = (float)(int)uVar16;
      pivot.y = (float)(int)((ulonglong)uVar16 >> 0x20);
      MVWorldObjectClient::MVWorldObjectClient_RotateAround
                ((MVWorldObjectClient *)RVar12,pivot,
                 TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                 (float)(_UNK_? ^
                        __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
                 rotationSpeed - _UNK_?,(MethodInfo *)0x0);
      MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                ((Quaternion *)&stack0xffffffb0,(MVWorldObjectClient *)RVar12,(MethodInfo *)0x0);
      (**(code **)(*(int *)RVar12 + 0x1bc))();
    }
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_00,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
               ,method_00);
  }
code_?:
  RotationHelper_DoGridSnapping((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
  pMVar8 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if (pMVar8 != (MVJetPack_LocalObjectsJetPack *)0x0) {
    pMVar5 = *(MVNetworkSelector **)&(pMVar8->fields).walkMode;
    pMVar1 = (MethodInfo *)&UNK_?;
    pHVar6 = (HashSet_1_System_Int32_ *)
             MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                       (pMVar8,(MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkSelector *)0x0) {
      MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership(pMVar5,pHVar6,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = pMVar1;
      return;
    }
  }
code_?:
  uVar18 = func_?();
  uVar18 = func_?(uVar18);
  func_?(uVar18);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Boolean ValidateTargets(List`1[WorldObjectClientRef]) */

bool Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::
     RotationHelper_ValidateTargets(List_1_WorldObjectClientRef_ *targets,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                   );
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_8,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)targets
                        ,
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                       );
    LStack_6._list = (List_1_System_Object_ *)pLVar7->_list;
    LStack_6._index = pLVar7->_index;
    LStack_6._version = pLVar7->_version;
    LStack_6._current = *(Object **)&pLVar7->_current;
    LStack_8._version = 0;
    uStack_1 = 1;
    LStack_8._current = (RegexCharClass_SingleRange)&LStack_6;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0) break;
      pOVar10 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar10 == (Object *)0x0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)&LStack_6,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                   ,unaff_EBX);
        *unaff_FS_OFFSET = uStack_3;
        return 0;
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  bVar9 = (*pcVar11)();
  return bVar9;
}

