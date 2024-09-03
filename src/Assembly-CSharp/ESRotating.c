
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Enter
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa8;
  puVar5 = &stack0xffffffa8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
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
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__RotationMode);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__System__Single);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__)
    ;
    func_?(&StringLiteral_rotationDegreesStep);
    func_?(&StringLiteral_rotationMode);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pTVar6 = mscorlib.dll::System::Object::Object_GetType((Object *)this,(MethodInfo *)0x0);
  if (pTVar6 != (Type *)0x0) {
    pOVar7 = (Object *)(*(code *)(pTVar6->klass->vtable).ToString.method)();
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log(pOVar7,(MethodInfo *)0x0);
    pLVar8 = (List_1_WorldObjectClientRef_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,
               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    (this->fields).targets = pLVar8;
    func_?(&(this->fields).targets);
    if (e != (EditorStateMachine *)0x0) {
      pSVar9 = (e->fields).selectionController;
      this_00 = (e->fields).networkSelector;
      if ((pSVar9 != (SelectionController *)0x0) && (this_00 != (MVNetworkSelector *)0x0)) {
        bVar10 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                          (this_00,(pSVar9->fields).selectedIDs,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
        if (pDVar11 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Object,UnityEngine::UIElements::TextureId]::
                   Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                             (pDVar11,(Object *)StringLiteral_rotationDegreesStep,
                              MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                             );
          if (TVar12.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar12.m_Index + 0x20) !=
                (TypeInfo__System__Single->_0).element_class) goto code_?;
            pfVar13 = (float *)func_?();
            (this->fields).rotationSpeed = *pfVar13;
            pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                     (e->fields)._.data;
            if (pDVar11 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                       Object,UnityEngine::UIElements::TextureId]::
                       Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                 (pDVar11,(Object *)StringLiteral_rotationMode,
                                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                 );
              if (TVar12.m_Index != 0) {
                if (*(Il2CppClass **)(*(int *)TVar12.m_Index + 0x20) !=
                    (TypeInfo__RotationMode->_0).element_class) goto code_?;
                piVar14 = (int32_t *)func_?();
                (this->fields).rotationMode = *piVar14;
                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pVVar15 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                          DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                    ((Vector3 *)(auStack_16 + 4),(DefaultEventSystem_Input *)0x0,
                                     unaff_EBX);
                (this->fields).prevMouseX = pVVar15->x;
                pVVar15 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                          DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition
                                    ((Vector3 *)(auStack_16 + 4),(DefaultEventSystem_Input *)0x0,
                                     unaff_EBX);
                (this->fields).prevMouseY = pVVar15->y;
                pLVar17 = (List_1_UnityEngine_Transform_ *)func_?();
                pLStack_18 = pLVar17;
                mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                           pLVar17,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__
                          );
                pSVar9 = (e->fields).selectionController;
                pLStack_19 = pLVar17;
                if ((pSVar9 != (SelectionController *)0x0) &&
                   (this_01 = (HashSet_1_System_UInt32_ *)(pSVar9->fields).selectedIDs,
                   this_01 != (HashSet_1_System_UInt32_ *)0x0)) {
                  pHVar20 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]
                            ::HashSet_1_System_UInt32__GetEnumerator
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_16,this_01,
                                       MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                      );
                  id = pHVar20->_current;
                  iStack_21 = 0;
                  uStack_1 = 1;
                  pOStack_22 = (Object *)&stack0xffffffb4;
                  while( true ) {
                    bVar10 = System.Core.dll::System::Collections::Generic::
                            HashSet`1[T]+Enumerator[System::UInt32]::
                            HashSet_1_T_Enumerator_System_UInt32__MoveNext
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffb4,
                                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                      );
                    if (bVar10 == 0) break;
                    this_05 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (this_05 == (MVWorldObjectClientManager *)0x0) goto code_?;
                    this_06 = MVWorldObjectClientManager::
                              MVWorldObjectClientManager_GetWorldObjectClientRef
                                        (this_05,id,(MethodInfo *)0x0);
                    pLVar8 = (this->fields).targets;
                    if (pLVar8 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
                    method_00 = (MethodInfo *)&UNK_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLVar8,(Object *)this_06,
                               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                              );
                    if (this_06 == (WorldObjectClientRef *)0x0) goto code_?;
                    pOVar7 = WorldObjectClientRef`1[System::Object]::
                              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                        ((WorldObjectClientRef_1_System_Object_ *)this_06,
                                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                        );
                    if ((pOVar7 == (Object *)0x0) ||
                       (pLStack_18 == (List_1_UnityEngine_Transform_ *)0x0)) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLStack_18,(Object *)pOVar7[0x12].klass,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                              );
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffffb4,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                             ,method_00);
                  pLVar17 = pLStack_18;
                  uStack_1 = 0xffffffff;
                  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this->fields).targets;
                  if (this_02 !=
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                    if ((this_02->fields)._size == 1) {
                      if (this_02 !=
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                      {
                        this_07 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                  RegularExpressions::RegexCharClass+SingleRange]::
                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                            (this_02,0,
                                             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                                            );
                        if (this_07 != (RegexCharClass_SingleRange)0x0) {
                          pOVar7 = WorldObjectClientRef`1[System::Object]::
                                    WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                              ((WorldObjectClientRef_1_System_Object_ *)this_07,
                                               MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                              );
                          if (pOVar7 != (Object *)0x0) {
                            pVVar15 = (Vector3 *)
                                      (*(code *)pOVar7->klass[2]._0.byval_arg.data)(auStack_16 + 4)
                            ;
                            goto code_?;
                          }
                        }
                      }
                    }
                    else {
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__SharedCubeFunctions);
                      }
                      pVVar15 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                                          (&VStack_23,pLVar17,(MethodInfo *)0x0);
code_?:
                      fVar24 = pVVar15->y;
                      fVar25 = pVVar15->z;
                      (this->fields).pivot.x = pVVar15->x;
                      (this->fields).pivot.y = fVar24;
                      (this->fields).pivot.z = fVar25;
                      pGVar26 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                          ((MethodInfo *)0x0);
                      if (((pGVar26 != (GameEventManager *)0x0) &&
                          (pGVar27 = (pGVar26->fields).AvatarCommandsBuildMode,
                          pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                         (this_03 = (RTFocusCamera *)(pGVar27->fields).LaserCommands,
                         this_03 != (RTFocusCamera *)0x0)) {
                        RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
                                  (this_03,CameraPrjSwitchTransition_Type__Enum_ToPerspective|
                                           CameraPrjSwitchTransition_Type__Enum_ToOrtho,
                                   (MethodInfo *)0x0);
                        pGVar26 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (((pGVar26 != (GameEventManager *)0x0) &&
                            (pGVar27 = (pGVar26->fields).AvatarCommandsBuildMode,
                            pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (this_04 = (pGVar27->fields).LaserCommands,
                           this_04 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                                    (this_04,1,(MethodInfo *)0x0);
                          *unaff_FS_OFFSET = uStack_3;
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Execute
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff18;
  puVar5 = &stack0xffffff18;
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                   );
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__System__Math);
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  bVar7 = UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ValidateTargets
                    ((this->fields).targets,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      fVar8 = (this->fields).xAcc;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         ((Vector3 *)auStack_10,(DefaultEventSystem_Input *)0x0,unaff_EDI);
      method_00 = (MethodInfo *)0x0;
      fVar11 = (this->fields).yAcc;
      (this->fields).xAcc =
           (pVVar9->x - (this->fields).prevMouseX) *
           ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar8;
      pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         ((Vector3 *)auStack_10,(DefaultEventSystem_Input *)0x0,unaff_EDI);
      uVar12 = _UNK_?;
      fVar8 = (float)((uint)(this->fields).xAcc & _UNK_?);
      pfVar13 = &(this->fields).rotateThreshold;
      fVar11 = (pVVar9->y - (this->fields).prevMouseY) *
               ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar11;
      cStack_14 = *pfVar13 <= fVar8 && fVar8 != *pfVar13;
      (this->fields).yAcc = fVar11;
      fVar11 = (float)((uint)fVar11 & uVar12);
      pfVar13 = &(this->fields).rotateThreshold;
      bVar15 = *pfVar13 <= fVar11 && fVar11 != *pfVar13;
      while( true ) {
        if (!bVar15 && (bool)cStack_14 == false) break;
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this->fields).targets;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                            (this_00,0,
                             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                            );
        if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
        pMVar16 = (MVWorldObjectClient *)
                  WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            ((WorldObjectClientRef_1_System_Object_ *)this_02,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            );
        fStack_17 = (this->fields).xAcc;
        pLVar18 = (this->fields).targets;
        fStack_17 = fStack_17 / (float)((uint)fStack_17 & _UNK_?);
        cStack_19 = '\0';
        cStack_20 = '\0';
        fStack_21 = (this->fields).yAcc;
        fStack_21 = fStack_21 / (float)((uint)fStack_21 & _UNK_?);
        uStack_22 = (double)((ulonglong)uStack_22 & 0xffffffff);
        pMStack_23 = pMVar16;
        fStack_24 = fStack_17;
        if (pLVar18 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar18->fields)._size == 1) {
          if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                             (&VStack_25,pMVar16,(MethodInfo *)0x0);
          pVVar9 = MathFunctions::MathFunctions_RoundVector
                             ((Vector3 *)&uStack_26,*pVVar9,0,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
                    (pMVar16,*pVVar9,(MethodInfo *)0x0);
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                             ((Vector3 *)auStack_27,pMVar16,(MethodInfo *)0x0);
          uStack_22._4_4_ = pVVar9->y;
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            uStack_26._4_4_ = (float)TypeInfo__System__Math;
            uStack_26._0_4_ = (float)&UNK_?;
            func_?();
          }
          uStack_26 = (double)uStack_22._4_4_;
          fVar28 = (float10)func_?();
          uStack_22 = (double)(this->fields).rotationSpeed;
          uStack_26._0_4_ = 0.0;
          uStack_26._4_4_ = 0.0;
          auStack_10._4_8_ = (undefined8)fVar28;
          fVar28 = (float10)func_?();
          unique0x0000aa00 = (double)fVar28;
          auStack_27._0_4_ = &UNK_?;
          auStack_10._4_8_ = unique0x0000aa00;
          fVar28 = (float10)func_?();
          auStack_10._4_8_ = (undefined8)fVar28;
          uStack_22 = (double)CONCAT44((float)fVar28,(undefined4)uStack_22);
        }
        pLVar18 = (this->fields).targets;
        if (pLVar18 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar18->fields)._size == 1) {
          if (cStack_14 != '\0') {
            if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
            method_00 = (MethodInfo *)&UNK_?;
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (pMVar16,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 0)) {
              auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar8 = (this->fields).pivot.z;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                                 (&VStack_29,(MethodInfo *)0x0);
              pMVar16 = pMStack_23;
              method_00 = (MethodInfo *)&UNK_?;
              pivot_02.z = fVar8;
              pivot_02.x = (float)auStack_10._4_4_;
              pivot_02.y = (float)auStack_10._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_23,pivot_02,*pVVar9,
                         (float)((uint)fStack_24 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_22._4_4_,(MethodInfo *)0x0
                        );
              cStack_19 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (pMVar16,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 1)) {
              auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar8 = (this->fields).pivot.z;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                 ((Vector3 *)&stack0xffffff54,(MethodInfo *)0x0);
              pMVar16 = pMStack_23;
              pivot.z = fVar8;
              pivot.x = (float)auStack_10._4_4_;
              pivot.y = (float)auStack_10._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_23,pivot,*pVVar9,
                         (float)((uint)fStack_24 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_22._4_4_,(MethodInfo *)0x0
                        );
              cStack_20 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (pMVar16,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
            if (((bVar7 == 0) || (cStack_19 != '\0')) || ((this->fields).rotationMode != 2)) {
              bVar15 = false;
            }
            else {
              auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar8 = (this->fields).pivot.z;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                                 (&VStack_30,(MethodInfo *)0x0);
              pMVar16 = pMStack_23;
              method_00 = (MethodInfo *)pVVar9->x;
              pivot_01.z = fVar8;
              pivot_01.x = (float)auStack_10._4_4_;
              pivot_01.y = (float)auStack_10._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_23,pivot_01,*pVVar9,
                         (float)((uint)fStack_24 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_22._4_4_,(MethodInfo *)0x0
                        );
              bVar15 = true;
            }
            if ((bVar15 || cStack_20 != '\0') || cStack_19 != '\0') {
              MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&stack0xffffff24,pMVar16,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)0x1f;
              func_?();
            }
          }
        }
        else {
          method_01 = (MethodInfo *)&UNK_?;
          puVar31 = (undefined4 *)func_?();
          uStack_32 = 0;
          LStack_6._list = (List_1_System_Object_ *)*puVar31;
          LStack_6._index = puVar31[1];
          LStack_6._version = puVar31[2];
          LStack_6._current = (Object *)puVar31[3];
          uStack_1 = 1;
          pLStack_33 = &LStack_6;
          while( true ) {
            bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_6,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                              );
            if (bVar7 == 0) break;
            if ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current ==
                (WorldObjectClientRef_1_System_Object_ *)0x0) goto code_?;
            pMVar16 = (MVWorldObjectClient *)
                      WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                );
            auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
            pMStack_23 = (MVWorldObjectClient *)(this->fields).pivot.z;
            pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               (&VStack_34,(MethodInfo *)0x0);
            if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
            method_01 = (MethodInfo *)pVVar9->y;
            pivot_00.z = (float)pMStack_23;
            pivot_00.x = (float)auStack_10._4_4_;
            pivot_00.y = (float)auStack_10._8_4_;
            MVWorldObjectClient::MVWorldObjectClient_RotateAround
                      (pMVar16,pivot_00,*pVVar9,
                       (float)((uint)fStack_24 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ) * (this->fields).rotationSpeed - uStack_22._4_4_,(MethodInfo *)0x0);
            MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xffffff34,pMVar16,(MethodInfo *)0x0);
            func_?();
          }
          uStack_1 = 0xffffffff;
          method_00 = 
          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
          ;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                     ,method_01);
          uStack_1 = 0xffffffff;
        }
        uVar12 = _UNK_?;
        fVar8 = (this->fields).yAcc - fStack_21 * (this->fields).rotateThreshold;
        (this->fields).yAcc = fVar8;
        fVar8 = (float)((uint)fVar8 & uVar12);
        pfVar13 = &(this->fields).rotateThreshold;
        fStack_24 = fStack_24 * (this->fields).rotateThreshold;
        bVar15 = *pfVar13 <= fVar8 && fVar8 != *pfVar13;
        fVar8 = (this->fields).xAcc - fStack_24;
        (this->fields).xAcc = fVar8;
        fVar8 = (float)((uint)fVar8 & uVar12);
        pfVar13 = &(this->fields).rotateThreshold;
        cStack_14 = *pfVar13 <= fVar8 && fVar8 != *pfVar13;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&VStack_30,(DefaultEventSystem_Input *)0x0,method_00);
      (this->fields).prevMouseX = pVVar9->x;
      pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&VStack_34,(DefaultEventSystem_Input *)0x0,method_00);
      (this->fields).prevMouseY = pVVar9->y;
      pGVar35 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar35 != (GameEventManager *)0x0) &&
          (pGVar36 = (pGVar35->fields).AvatarCommandsBuildMode,
          pGVar36 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_01 = (pGVar36->fields).LaserCommands,
         this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                  (this_01,(this->fields).pivot,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      goto code_?;
    }
  }
  if (e != (EditorStateMachine *)0x0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    *unaff_FS_OFFSET = uStack_3;
    return;
  }
code_?:
  func_?();
  func_?();
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Exit
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) &&
      (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
      pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_00 = (RTFocusCamera *)(pGVar2->fields).LaserCommands, this_00 != (RTFocusCamera *)0x0)) {
    RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
              (this_00,CameraPrjSwitchTransition_Type__Enum_None,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (this_01 = (pGVar2->fields).LaserCommands,
       this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                (this_01,0,(MethodInfo *)0x0);
      targets = this_01[1].fields.OnActivateLaserForDuration;
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_DoGridSnapping
                ((List_1_WorldObjectClientRef_ *)targets,(MethodInfo *)0x0);
      if (((targets != (Action_1_Single_ *)0x0) &&
          (pMVar3 = (targets->fields)._._.original_method_info, pMVar3 != (MethodInfo_1 *)0x0)) &&
         (this_02 = (targets->fields)._.delegates, this_02 != (Delegate__Array *)0x0)) {
        MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                  ((MVNetworkSelector *)this_02,(HashSet_1_System_Int32_ *)pMVar3[1].klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* ESRotating() */

void Assembly-CSharp.dll::ESRotating::ESRotating__ctor(ESRotating *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    cRam_? = '\x01';
  }
  (this->fields).rotationSpeed = 15.0;
  (this->fields).rotationMode = 1;
  (this->fields).rotateThreshold = 10.0;
  (this->fields).mouseSensitivity = 10.0;
  this_00 = (List_1_WorldObjectClientRef_ *)
            func_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  (this->fields).targets = this_00;
  func_?(&(this->fields).targets,this_00);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

