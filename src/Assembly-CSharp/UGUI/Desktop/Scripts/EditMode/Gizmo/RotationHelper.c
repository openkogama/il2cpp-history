
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
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        puVar5 = (undefined8 *)(*(code *)pOVar4->klass[2]._0.this_arg.data)();
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
      return bVar1 ^ 1;
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
  HStack_7._set = (HashSet_1_System_UInt32_ *)0x0;
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
      if (bVar12 == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      QStack_13.y = (float)TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>;
      QStack_13.x = (float)&UNK_?;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                func_?();
      pLStack_14 = this_00;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
      pMVar15 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
      pLStack_16 = this_00;
      if (pMVar15 != (MVJetPack_LocalObjectsJetPack *)0x0) {
        this_01 = (HashSet_1_System_UInt32_ *)
                  MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                            (pMVar15,(MethodInfo *)0x0);
        if (this_01 != (HashSet_1_System_UInt32_ *)0x0) {
          pHVar17 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__GetEnumerator
                             ((HashSet_1_T_Enumerator_System_UInt32_ *)&LStack_18,this_01,
                              MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                             );
          HStack_7._set = pHVar17->_set;
          HStack_7._index = pHVar17->_index;
          HStack_7._version = pHVar17->_version;
          HStack_7._current = pHVar17->_current;
          LStack_18._version = 0;
          uStack_1 = 1;
          LStack_18._current = (RegexCharClass_SingleRange)&HStack_7;
          while( true ) {
            bVar12 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                              (&HStack_7,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                              );
            if (bVar12 == 0) break;
            pQStack_19 = (Quaternion *)HStack_7._current;
            this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
            item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                             (this_02,(int32_t)pQStack_19,(MethodInfo *)0x0);
            if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            goto code_?;
            in_stack_20 = (MethodInfo *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_00,(Object *)item,
                       MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                      );
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&HStack_7,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,in_stack_20);
          uStack_1 = 0xffffffff;
          bVar12 = RotationHelper_ValidateTargets
                            ((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
          if (bVar12 == 0) goto code_?;
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
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
              (*(code *)(this_03->klass->vtable).set_SyncRot.method)
                        (this_03,pQStack_19->x,pQStack_19->y,pQStack_19->z,pQStack_19->w);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff80;
  puVar5 = &stack0xffffff80;
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
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
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
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  OStack_6.klass = (Object__Class *)0x0;
  OStack_6.monitor = (MonitorData *)0x0;
  angle = (List_1_System_Object_ *)0x0;
  method_01 = (MethodInfo *)0x0;
  pEVar7 = (this->fields).editorStateMachine;
  if (pEVar7 == (EditorStateMachine *)0x0) goto code_?;
  pMVar8 = (pEVar7->fields).networkSelector;
  pHVar9 = (HashSet_1_System_Int32_ *)
           MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                     ((MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine,
                      (MethodInfo *)0x0);
  if (pMVar8 == (MVNetworkSelector *)0x0) goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  bVar10 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(pMVar8,pHVar9,(MethodInfo *)0x0);
  if (bVar10 == 0) goto code_?;
  pMVar11 = (MVWorldObjectClient *)func_?();
  pMStack_12 = pMVar11;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pMVar11,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  pMStack_13 = pMVar11;
  pLVar14 = (List_1_UnityEngine_Transform_ *)func_?();
  pLStack_15 = pLVar14;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar14,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pMVar16 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  pLStack_17 = pLVar14;
  if ((pMVar16 == (MVJetPack_LocalObjectsJetPack *)0x0) ||
     (this_00 = (HashSet_1_System_UInt32_ *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          (pMVar16,(MethodInfo *)0x0), this_00 == (HashSet_1_System_UInt32_ *)0x0))
  goto code_?;
  pHVar18 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
            HashSet_1_System_UInt32__GetEnumerator
                      ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffbc,this_00,
                       MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
  lStack_19 = ZEXT48(&OStack_6) << 0x20;
  OStack_6.klass = (Object__Class *)pHVar18->_set;
  OStack_6.monitor = (MonitorData *)pHVar18->_index;
  uStack_1 = 1;
  id = pHVar18->_current;
  while (bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                 UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                           ((HashSet_1_T_Enumerator_System_UInt32_ *)&OStack_6,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                           ), bVar10 != 0) {
    uVar20 = id;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
       (this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                            (this_01,id,(MethodInfo *)0x0), pMStack_12 == (MVWorldObjectClient *)0x0
       )) goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pMStack_12,(Object *)this_02,
               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
              );
    if ((this_02 == (WorldObjectClientRef *)0x0) ||
       ((pOVar21 = WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)this_02,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             ), pOVar21 == (Object *)0x0 ||
        (pLStack_15 == (List_1_UnityEngine_Transform_ *)0x0)))) goto code_?;
    in_stack_22 = pOVar21[0x12].klass;
    in_stack_23 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLStack_15,(Object *)in_stack_22,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
              );
    id = uVar20;
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (&OStack_6,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
             method_00);
  pLVar14 = pLStack_15;
  pMVar11 = pMStack_12;
  uStack_1 = 0xffffffff;
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
  if (pMVar11 == (MVWorldObjectClient *)0x0) goto code_?;
  if ((pMVar11->fields)._.groupId == 1) {
    RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pMVar11,
                        0,
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                       );
    if ((RVar24 == (RegexCharClass_SingleRange)0x0) ||
       (pOVar21 = WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            ((WorldObjectClientRef_1_System_Object_ *)RVar24,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            ), pOVar21 == (Object *)0x0)) goto code_?;
    plVar25 = (longlong *)(*(code *)pOVar21->klass[2]._0.this_arg.data)();
    lStack_19 = *plVar25;
    pLStack_15 = *(List_1_UnityEngine_Transform_ **)(plVar25 + 1);
  }
  else {
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar26 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                        (&VStack_27,pLVar14,(MethodInfo *)0x0);
    pLStack_15 = (List_1_UnityEngine_Transform_ *)pVVar26->z;
    lStack_19._0_4_ = pVVar26->x;
    lStack_19._4_4_ = pVVar26->y;
  }
  bVar10 = RotationHelper_ValidateTargets((List_1_WorldObjectClientRef_ *)pMVar11,(MethodInfo *)0x0);
  if (bVar10 == 0) goto code_?;
  RVar24 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pMVar11,0,
                      MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                     );
  if (RVar24 == (RegexCharClass_SingleRange)0x0) goto code_?;
  this_03 = (MVWorldObjectClient *)
            WorldObjectClientRef`1[System::Object]::
            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                      ((WorldObjectClientRef_1_System_Object_ *)RVar24,
                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                      );
  if ((pMVar11->fields)._.groupId == 1) {
    if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar26 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                        (&VStack_27,this_03,(MethodInfo *)0x0);
    pVVar26 = MathFunctions::MathFunctions_RoundVector(&VStack_27,*pVVar26,0,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
              (this_03,*pVVar26,(MethodInfo *)0x0);
    if ((pMVar11->fields)._.groupId != 1) goto code_?;
    if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
    bVar10 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      (this_03,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
    if (((bVar10 == 0) || (rotationMode != RotationMode__Enum_X)) &&
       ((bVar10 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                           (this_03,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0), bVar10 == 0
        || (rotationMode != RotationMode__Enum_Y)))) {
      bVar10 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (this_03,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
      if ((bVar10 == 0) || (rotationMode != RotationMode__Enum_Z)) goto code_?;
      method_01 = (MethodInfo *)0x0;
      angle = (List_1_System_Object_ *)(rotationSpeed * _UNK_? - _UNK_?);
      in_stack_23 = (MethodInfo *)0x2;
    }
    pivot_00.z = (float)pLStack_15;
    pivot_00.x = (float)(undefined4)lStack_19;
    pivot_00.y = (float)lStack_19._4_4_;
    MVWorldObjectClient::MVWorldObjectClient_RotateAroundLocal
              (this_03,pivot_00,(RotationMode__Enum)in_stack_23,(float)angle,method_01);
    OStack_6.monitor = (MonitorData *)&UNK_?;
    pQVar28 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&stack0xffffff8c,this_03,(MethodInfo *)0x0);
    VStack_27.x = pQVar28->z;
    VStack_27.y = pQVar28->w;
    VStack_27.z = (float)(this_03->klass->vtable).PositionChangedNotify.methodPtr;
    OStack_6.monitor = (MonitorData *)&UNK_?;
    (*(code *)(this_03->klass->vtable).set_SyncRot.method)();
  }
  else {
code_?:
    pLVar29 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&stack0xffffffbc,
                         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pMVar11
                         ,
                         MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                        );
    RVar24 = pLVar29->_current;
    VStack_27.y = 0.0;
    uStack_1 = 4;
    VStack_27.z = (float)&stack0xffffff9c;
    while (bVar10 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffff9c,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                             ), bVar10 != 0) {
      if (RVar24 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pMStack_12 = (MVWorldObjectClient *)
                   WorldObjectClientRef`1[System::Object]::
                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                             ((WorldObjectClientRef_1_System_Object_ *)RVar24,
                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                             );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pMStack_12 == (MVWorldObjectClient *)0x0) goto code_?;
      pivot.z = (float)pLStack_15;
      pivot.x = (float)(undefined4)lStack_19;
      pivot.y = (float)lStack_19._4_4_;
      MVWorldObjectClient::MVWorldObjectClient_RotateAround
                (pMStack_12,pivot,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                 (float)(_UNK_? ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 rotationSpeed - _UNK_?,(MethodInfo *)0x0);
      pLStack_17 = (List_1_UnityEngine_Transform_ *)
                   MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                             ((Quaternion *)&stack0xffffff8c,pMStack_12,(MethodInfo *)0x0);
      OStack_6.klass = (Object__Class *)(pMStack_12->klass->vtable).PositionChangedNotify.methodPtr
      ;
      RVar24 = (RegexCharClass_SingleRange)(pLStack_17->fields)._size;
      in_stack_22 = (Object__Class *)&UNK_?;
      (*(code *)(pMStack_12->klass->vtable).set_SyncRot.method)();
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffff9c,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
               ,(MethodInfo *)in_stack_22);
    uStack_1 = 0xffffffff;
  }
code_?:
  RotationHelper_DoGridSnapping((List_1_WorldObjectClientRef_ *)pMVar11,(MethodInfo *)0x0);
  pMVar16 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if (pMVar16 != (MVJetPack_LocalObjectsJetPack *)0x0) {
    pMVar8 = *(MVNetworkSelector **)&(pMVar16->fields).walkMode;
    pHVar9 = (HashSet_1_System_Int32_ *)
             MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                       (pMVar16,(MethodInfo *)0x0);
    if (pMVar8 != (MVNetworkSelector *)0x0) {
      MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership(pMVar8,pHVar9,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar30 = func_?();
  uVar30 = func_?(uVar30);
  func_?(uVar30);
  pcVar31 = (code *)swi(3);
  (*pcVar31)();
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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

