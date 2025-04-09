
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
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar6 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar6 != (IEditModeUI *)0x0) {
    uVar7 = CONCAT44(unaff_EDI,pIVar6);
    cVar8 = func_?(0,TypeInfo__IEditModeUI);
    uStack_9 = _UNK_?;
    if (cVar8 == '\0') {
      uStack_9 = _UNK_?;
    }
    if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
      pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         (&LStack_11,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          targets,
                          MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                         );
      uStack_12 = 0;
      LStack_13._list = (List_1_System_Object_ *)pLVar10->_list;
      LStack_13._index = pLVar10->_index;
      LStack_13._version = pLVar10->_version;
      LStack_13._current = *(Object **)&pLVar10->_current;
      uStack_1 = 1;
      pLStack_14 = &LStack_13;
      while( true ) {
        method_00 = (MethodInfo *)((ulonglong)uVar7 >> 0x20);
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_13,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                          );
        if (bVar15 == 0) {
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_13,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                     ,method_00);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        if ((RegexCharClass_SingleRange)LStack_13._current == (RegexCharClass_SingleRange)0x0)
        break;
        uVar7 = CONCAT44(method_00,
                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                        );
        pOVar16 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)LStack_13._current,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        if (pOVar16 != (Object *)0x0) {
          func_?();
          puVar17 = (undefined8 *)func_?(&LStack_11._index,0x41,pOVar16,uStack_9);
          uVar7 = *puVar17;
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
  LStack_7._list = (List_1_System_Object_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current = (Object *)0x0;
  pMVar8 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if (pMVar8 != (MVJetPack_LocalObjectsJetPack *)0x0) {
    pMVar9 = *(MVNetworkSelector **)&(pMVar8->fields).walkMode;
    pHVar10 = (HashSet_1_System_Int32_ *)
             MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                       (pMVar8,(MethodInfo *)0x0);
    if (pMVar9 != (MVNetworkSelector *)0x0) {
      bVar11 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(pMVar9,pHVar10,(MethodInfo *)0x0)
      ;
      if (bVar11 == 0) {
code_?:
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      QStack_12.y = (float)TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>;
      QStack_12.x = (float)&UNK_?;
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                func_?();
      pLStack_13 = this_00;
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
      __Il2CppFullySharedGenericType]::
      LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
                 MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
      pMVar8 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
      pLStack_14 = this_00;
      if (pMVar8 != (MVJetPack_LocalObjectsJetPack *)0x0) {
        this_01 = (HashSet_1_System_UInt32_ *)
                  MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                            (pMVar8,(MethodInfo *)0x0);
        if (this_01 != (HashSet_1_System_UInt32_ *)0x0) {
          pHVar15 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
                   HashSet_1_System_UInt32__GetEnumerator
                             ((HashSet_1_T_Enumerator_System_UInt32_ *)&LStack_16,this_01,
                              MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                             );
          HStack_17._set = pHVar15->_set;
          HStack_17._index = pHVar15->_index;
          HStack_17._version = pHVar15->_version;
          HStack_17._current = pHVar15->_current;
          LStack_16._version = 0;
          uStack_1 = 1;
          LStack_16._current = (RegexCharClass_SingleRange)&HStack_17;
          while( true ) {
            bVar11 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                    UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                              (&HStack_17,
                               MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                              );
            if (bVar11 == 0) break;
            pQStack_18 = (Quaternion *)HStack_17._current;
            this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
            item = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                             (this_02,(int32_t)pQStack_18,(MethodInfo *)0x0);
            if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
            goto code_?;
            in_stack_19 = (MethodInfo *)&UNK_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)this_00,(Object *)item,
                       MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                      );
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&HStack_17,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                     ,in_stack_19);
          uStack_1 = 0xffffffff;
          bVar11 = RotationHelper_ValidateTargets
                            ((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
          if (bVar11 == 0) goto code_?;
          if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                     RegularExpressions::RegexCharClass+SingleRange]::
                     List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                               (&LStack_16,this_00,
                                MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                               );
            LStack_7._list = (List_1_System_Object_ *)pLVar20->_list;
            LStack_7._index = pLVar20->_index;
            LStack_7._version = pLVar20->_version;
            LStack_7._current = *(Object **)&pLVar20->_current;
            LStack_16._version = 0;
            uStack_1 = 4;
            LStack_16._current = (RegexCharClass_SingleRange)&LStack_7;
            while( true ) {
              bVar11 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                      Object]::List_1_T_Enumerator_System_Object__MoveNext
                                (&LStack_7,
                                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                                );
              if (bVar11 == 0) break;
              if ((RegexCharClass_SingleRange)LStack_7._current == (RegexCharClass_SingleRange)0x0)
              goto code_?;
              this_03 = (MVWorldObjectClient *)
                        WorldObjectClientRef`1[System::Object]::
                        WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                  ((WorldObjectClientRef_1_System_Object_ *)LStack_7._current,
                                   MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                  );
              if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
              MVWorldObjectClient::MVWorldObjectClient_ResetRotation(this_03,(MethodInfo *)0x0);
              pQStack_18 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                                     (&QStack_12,this_03,(MethodInfo *)0x0);
              in_stack_6 = (MethodInfo **)&UNK_?;
              (*(code *)(this_03->klass->vtable).set_SyncRot.method)
                        (this_03,pQStack_18->x,pQStack_18->y,pQStack_18->z,pQStack_18->w);
            }
            uStack_1 = 0xffffffff;
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                      ((Object *)&LStack_7,
                       (ExceptionArgument__Enum)
                       MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                       ,(MethodInfo *)in_stack_6);
            uStack_1 = 0xffffffff;
            RotationHelper_DoGridSnapping
                      ((List_1_WorldObjectClientRef_ *)pLStack_13,(MethodInfo *)0x0);
            pMVar8 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
            if (pMVar8 != (MVJetPack_LocalObjectsJetPack *)0x0) {
              pMVar9 = *(MVNetworkSelector **)&(pMVar8->fields).walkMode;
              pHVar10 = (HashSet_1_System_Int32_ *)
                       MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                 (pMVar8,(MethodInfo *)0x0);
              if (pMVar9 != (MVNetworkSelector *)0x0) {
                MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                          (pMVar9,pHVar10,(MethodInfo *)0x0);
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
code_?:
  uVar21 = func_?();
  uVar21 = func_?(uVar21);
  func_?(uVar21);
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  }
  angle = (Object__Class *)0x0;
  method_02 = (MethodInfo *)0x0;
  pMVar4 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if (pMVar4 == (MVJetPack_LocalObjectsJetPack *)0x0) goto code_?;
  pMVar5 = *(MVNetworkSelector **)&(pMVar4->fields).walkMode;
  pHVar6 = (HashSet_1_System_Int32_ *)
           MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                     (pMVar4,(MethodInfo *)0x0);
  if (pMVar5 == (MVNetworkSelector *)0x0) goto code_?;
  method_00 = (MethodInfo *)&UNK_?;
  bVar7 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(pMVar5,pHVar6,(MethodInfo *)0x0);
  if (bVar7 == 0) goto code_?;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  transforms = (List_1_UnityEngine_Transform_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)transforms,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
  pMVar4 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if ((pMVar4 == (MVJetPack_LocalObjectsJetPack *)0x0) ||
     (this_01 = (HashSet_1_System_UInt32_ *)
                MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                          (pMVar4,(MethodInfo *)0x0), this_01 == (HashSet_1_System_UInt32_ *)0x0))
  goto code_?;
  pHVar8 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::
           HashSet_1_System_UInt32__GetEnumerator
                     ((HashSet_1_T_Enumerator_System_UInt32_ *)&pHStack_9,this_01,
                      MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
  method_01 = (Object__Class *)pHVar8->_version;
  rotationMode_00 = (MethodInfo *)pHVar8->_current;
  uStack_1 = 1;
  while (bVar7 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::
                 UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext
                           ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffff90,
                            MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                           ), bVar7 != 0) {
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((this_02 == (MVWorldObjectClientManager *)0x0) ||
       (this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef
                            (this_02,(int32_t)rotationMode_00,(MethodInfo *)0x0),
       this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0))
    goto code_?;
    method_00 = (MethodInfo *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)this_03,
               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
              );
    if ((this_03 == (WorldObjectClientRef *)0x0) ||
       ((pOVar10 = WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            ((WorldObjectClientRef_1_System_Object_ *)this_03,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            ), pOVar10 == (Object *)0x0 ||
        (transforms == (List_1_UnityEngine_Transform_ *)0x0)))) goto code_?;
    method_01 = pOVar10[0x12].klass;
    rotationMode_00 =
         MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
    ;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)transforms,(Object *)method_01,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
              );
  }
  uStack_1 = 0xffffffff;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)&stack0xffffff90,
             (ExceptionArgument__Enum)
             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,
             method_00);
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
  if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
  goto code_?;
  if ((this_00->fields)._size == 1) {
    RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                       (this_00,0,
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                       );
    if ((RVar11 == (RegexCharClass_SingleRange)0x0) ||
       (pOVar10 = WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)RVar11,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           ), pOVar10 == (Object *)0x0)) goto code_?;
    puVar12 = (undefined8 *)(*(code *)pOVar10->klass[2]._0.this_arg.data)();
    uVar13 = *puVar12;
    fStack_14 = *(float *)(puVar12 + 1);
  }
  else {
    if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__SharedCubeFunctions);
    }
    pVVar15 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                       ((Vector3 *)&stack0xffffffc0,transforms,(MethodInfo *)0x0);
    fStack_14 = pVVar15->z;
    uVar13._0_4_ = pVVar15->x;
    uVar13._4_4_ = pVVar15->y;
  }
  bVar7 = RotationHelper_ValidateTargets((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
  if (bVar7 == 0) goto code_?;
  RVar11 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
           RegexCharClass+SingleRange]::
           List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                     (this_00,0,
                      MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                     );
  if (RVar11 == (RegexCharClass_SingleRange)0x0) goto code_?;
  pMVar16 = (MVWorldObjectClient *)
            WorldObjectClientRef`1[System::Object]::
            WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                      ((WorldObjectClientRef_1_System_Object_ *)RVar11,
                       MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                      );
  if ((this_00->fields)._size == 1) {
    if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
    pVVar15 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                       ((Vector3 *)&puStack_17,pMVar16,(MethodInfo *)0x0);
    pVVar15 = MathFunctions::MathFunctions_RoundVector
                       ((Vector3 *)&puStack_17,*pVVar15,0,(MethodInfo *)0x0);
    MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles(pMVar16,*pVVar15,(MethodInfo *)0x0)
    ;
    if ((this_00->fields)._size != 1) goto code_?;
    if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
    bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                      (pMVar16,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
    if (((bVar7 == 0) || (rotationMode != RotationMode__Enum_X)) &&
       ((bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                           (pMVar16,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0), bVar7 == 0
        || (rotationMode != RotationMode__Enum_Y)))) {
      bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                        (pMVar16,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
      if ((bVar7 == 0) || (rotationMode != RotationMode__Enum_Z)) goto code_?;
      method_02 = (MethodInfo *)0x0;
      angle = (Object__Class *)(rotationSpeed * _UNK_? - _UNK_?);
      rotationMode_00 = (MethodInfo *)0x2;
    }
    pivot_00.z = fStack_14;
    pivot_00.x = (float)(int)uVar13;
    pivot_00.y = (float)(int)((ulonglong)uVar13 >> 0x20);
    MVWorldObjectClient::MVWorldObjectClient_RotateAroundLocal
              (pMVar16,pivot_00,(RotationMode__Enum)rotationMode_00,(float)angle,method_02);
    MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
              ((Quaternion *)&pHStack_9,pMVar16,(MethodInfo *)0x0);
    (*(code *)(pMVar16->klass->vtable).set_SyncRot.method)();
  }
  else {
code_?:
    pLVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                        ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                          *)&pHStack_9,this_00,
                         MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                        );
    RVar11 = pLVar18->_current;
    uStack_1 = 4;
    while (bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             ((List_1_T_Enumerator_System_Object_ *)&stack0xffffffa0,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                             ), bVar7 != 0) {
      if (RVar11 == (RegexCharClass_SingleRange)0x0) goto code_?;
      pMVar16 = (MVWorldObjectClient *)
                WorldObjectClientRef`1[System::Object]::
                WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                          ((WorldObjectClientRef_1_System_Object_ *)RVar11,
                           MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                          );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
      pivot.z = fStack_14;
      pivot.x = (float)(int)uVar13;
      pivot.y = (float)(int)((ulonglong)uVar13 >> 0x20);
      MVWorldObjectClient::MVWorldObjectClient_RotateAround
                (pMVar16,pivot,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                 (float)(_UNK_? ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
                 rotationSpeed - _UNK_?,(MethodInfo *)0x0);
      pQVar19 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                          ((Quaternion *)&pHStack_9,pMVar16,(MethodInfo *)0x0);
      pHStack_9 = (HashSet_1_System_UInt32_ *)
                   (pMVar16->klass->vtable).PositionChangedNotify.methodPtr;
      RVar11 = (RegexCharClass_SingleRange)pQVar19->w;
      method_01 = (Object__Class *)&UNK_?;
      (*(code *)(pMVar16->klass->vtable).set_SyncRot.method)();
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&stack0xffffffa0,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
               ,(MethodInfo *)method_01);
    uStack_1 = 0xffffffff;
  }
code_?:
  RotationHelper_DoGridSnapping((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
  pMVar4 = (MVJetPack_LocalObjectsJetPack *)(this->fields).editorStateMachine;
  if (pMVar4 != (MVJetPack_LocalObjectsJetPack *)0x0) {
    pMVar5 = *(MVNetworkSelector **)&(pMVar4->fields).walkMode;
    pHVar6 = (HashSet_1_System_Int32_ *)
             MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                       (pMVar4,(MethodInfo *)0x0);
    if (pMVar5 != (MVNetworkSelector *)0x0) {
      MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership(pMVar5,pHVar6,(MethodInfo *)0x0);
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  uVar20 = func_?();
  uVar20 = func_?(uVar20);
  func_?(uVar20);
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
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
  if (targets != (List_1_WorldObjectClientRef_ *)0x0) {
    pLVar6 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       (&LStack_7,
                        (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)targets
                        ,
                        MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__
                       );
    LStack_8._list = (List_1_System_Object_ *)pLVar6->_list;
    LStack_8._index = pLVar6->_index;
    LStack_8._version = pLVar6->_version;
    LStack_8._current = *(Object **)&pLVar6->_current;
    LStack_7._version = 0;
    uStack_1 = 1;
    LStack_7._current = (RegexCharClass_SingleRange)&LStack_8;
    while( true ) {
      bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
              List_1_T_Enumerator_System_Object__MoveNext
                        (&LStack_8,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                        );
      if (bVar9 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                   ,unaff_EDI);
        *unaff_FS_OFFSET = uStack_3;
        return 1;
      }
      if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0) break;
      pOVar10 = WorldObjectClientRef`1[System::Object]::
               WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                         ((WorldObjectClientRef_1_System_Object_ *)LStack_8._current,
                          MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                         );
      if (pOVar10 == (Object *)0x0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_8,
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

