
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Enter
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
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
      pLStack_9 = (List_1_UnityEngine_Transform_ *)(e->fields).networkSelector;
      selectionSet = (HashSet_1_System_Int32_ *)
                     MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                               ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      if (pLStack_9 != (List_1_UnityEngine_Transform_ *)0x0) {
        bVar10 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                          ((MVNetworkSelector *)pLStack_9,selectionSet,(MethodInfo *)0x0);
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
                pVVar15 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::
                          Input_get_mousePosition((Vector3 *)(auStack_16 + 4),(MethodInfo *)0x0);
                uStack_17._0_4_ = pVVar15->x;
                uStack_17._4_4_ = pVVar15->y;
                pOStack_18 = (Object *)pVVar15->z;
                (this->fields).prevMouseX = (float)(undefined4)uStack_17;
                pVVar15 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::
                          Input_get_mousePosition((Vector3 *)(auStack_16 + 4),(MethodInfo *)0x0);
                uStack_17._0_4_ = pVVar15->x;
                uStack_17._4_4_ = pVVar15->y;
                pOStack_18 = (Object *)pVVar15->z;
                (this->fields).prevMouseY = (float)uStack_17._4_4_;
                pLVar19 = (List_1_UnityEngine_Transform_ *)func_?();
                pLStack_9 = pLVar19;
                mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                           pLVar19,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__
                          );
                pLStack_20 = pLVar19;
                this_03 = (HashSet_1_System_UInt32_ *)
                          MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                    ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
                if (this_03 != (HashSet_1_System_UInt32_ *)0x0) {
                  pHVar21 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]
                            ::HashSet_1_System_UInt32__GetEnumerator
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_16,this_03,
                                       MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                      );
                  uStack_17 = uStack_17 & 0xffffffff;
                  id = pHVar21->_current;
                  uStack_1 = 1;
                  pOStack_18 = (Object *)&stack0xffffffa8;
                  while( true ) {
                    bVar10 = System.Core.dll::System::Collections::Generic::
                            HashSet`1[T]+Enumerator[System::UInt32]::
                            HashSet_1_T_Enumerator_System_UInt32__MoveNext
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffa8,
                                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                      );
                    if (bVar10 == 0) break;
                    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
                    this_05 = MVWorldObjectClientManager::
                              MVWorldObjectClientManager_GetWorldObjectClientRef
                                        (this_04,id,(MethodInfo *)0x0);
                    pLVar8 = (this->fields).targets;
                    if (pLVar8 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
                    method_00 = (MethodInfo *)&UNK_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLVar8,(Object *)this_05,
                               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                              );
                    if (this_05 == (WorldObjectClientRef *)0x0) goto code_?;
                    pOVar7 = WorldObjectClientRef`1[System::Object]::
                             WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                       ((WorldObjectClientRef_1_System_Object_ *)this_05,
                                        MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                       );
                    if ((pOVar7 == (Object *)0x0) ||
                       (pLStack_9 == (List_1_UnityEngine_Transform_ *)0x0)) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLStack_9,(Object *)pOVar7[0x12].klass,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                              );
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffffa8,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                             ,method_00);
                  pLVar19 = pLStack_9;
                  uStack_1 = 0xffffffff;
                  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this->fields).targets;
                  if (this_00 !=
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                    if ((this_00->fields)._size == 1) {
                      if (this_00 !=
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                      {
                        this_06 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                  RegularExpressions::RegexCharClass+SingleRange]::
                                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                            (this_00,0,
                                             MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                                            );
                        if (this_06 != (RegexCharClass_SingleRange)0x0) {
                          pOVar7 = WorldObjectClientRef`1[System::Object]::
                                   WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                             ((WorldObjectClientRef_1_System_Object_ *)this_06,
                                              MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                             );
                          if (pOVar7 != (Object *)0x0) {
                            pVVar15 = (Vector3 *)
                                      (*(code *)pOVar7->klass[2]._0.byval_arg.data)(auStack_16 + 4);
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
                                          (&VStack_22,pLVar19,(MethodInfo *)0x0);
code_?:
                      fVar23 = pVVar15->y;
                      fVar24 = pVVar15->z;
                      (this->fields).pivot.x = pVVar15->x;
                      (this->fields).pivot.y = fVar23;
                      (this->fields).pivot.z = fVar24;
                      pGVar25 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                          ((MethodInfo *)0x0);
                      if (((pGVar25 != (GameEventManager *)0x0) &&
                          (pGVar26 = (pGVar25->fields).AvatarCommandsBuildMode,
                          pGVar26 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                         (this_01 = (RTFocusCamera *)(pGVar26->fields).LaserCommands,
                         this_01 != (RTFocusCamera *)0x0)) {
                        RTG::RTFocusCamera::RTFocusCamera_OnPrjSwitchTransitionBegin
                                  (this_01,CameraPrjSwitchTransition_Type__Enum_ToPerspective|
                                           CameraPrjSwitchTransition_Type__Enum_ToOrtho,
                                   (MethodInfo *)0x0);
                        pGVar25 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (((pGVar25 != (GameEventManager *)0x0) &&
                            (pGVar26 = (pGVar25->fields).AvatarCommandsBuildMode,
                            pGVar26 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (this_02 = (pGVar26->fields).LaserCommands,
                           this_02 !=
                           (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)
                           0x0)) {
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                                    (this_02,1,(MethodInfo *)0x0);
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
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
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
  puStack_4 = &stack0xffffff14;
  puVar5 = &stack0xffffff14;
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
  bVar7 = UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ValidateTargets
                     ((this->fields).targets,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1
                       (KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0)
    ;
    if (bVar7 != 0) {
      fVar8 = (this->fields).xAcc;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                          (&VStack_10,(MethodInfo *)0x0);
      uVar11 = pVVar9->x;
      uVar12 = pVVar9->y;
      uStack_13._4_4_ = pVVar9->z;
      (this->fields).xAcc =
           ((float)uVar11 - (this->fields).prevMouseX) *
           ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar8;
      fVar8 = (this->fields).yAcc;
      fStack_14 = (float)uVar11;
      uStack_13._0_4_ = (float)uVar12;
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                          (&VStack_10,(MethodInfo *)0x0);
      uVar15 = _UNK_?;
      uVar16 = pVVar9->x;
      uVar17 = pVVar9->y;
      uStack_13 = (double)CONCAT44(pVVar9->z,uVar17);
      fVar18 = (float)((uint)(this->fields).xAcc & _UNK_?);
      pfVar19 = &(this->fields).rotateThreshold;
      fVar8 = ((float)uVar17 - (this->fields).prevMouseY) *
               ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar8;
      cStack_20 = *pfVar19 <= fVar18 && fVar18 != *pfVar19;
      (this->fields).yAcc = fVar8;
      fVar8 = (float)((uint)fVar8 & uVar15);
      pfVar19 = &(this->fields).rotateThreshold;
      bVar21 = *pfVar19 <= fVar8 && fVar8 != *pfVar19;
      fStack_14 = (float)uVar16;
      while( true ) {
        if (!bVar21 && (bool)cStack_20 == false) break;
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
        pMVar22 = (MVWorldObjectClient *)
                  WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            ((WorldObjectClientRef_1_System_Object_ *)this_02,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            );
        fStack_23 = (this->fields).xAcc;
        pLVar24 = (this->fields).targets;
        fStack_23 = fStack_23 / (float)((uint)fStack_23 & _UNK_?);
        cStack_25 = '\0';
        cStack_26 = '\0';
        fStack_27 = (this->fields).yAcc;
        fStack_27 = fStack_27 / (float)((uint)fStack_27 & _UNK_?);
        uStack_28 = (double)((ulonglong)uStack_28 & 0xffffffff);
        pMStack_29 = pMVar22;
        fStack_30 = fStack_23;
        if (pLVar24 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar24->fields)._size == 1) {
          if (pMVar22 == (MVWorldObjectClient *)0x0) goto code_?;
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                              (&VStack_31,pMVar22,(MethodInfo *)0x0);
          pVVar9 = MathFunctions::MathFunctions_RoundVector
                              (&VStack_32,*pVVar9,0,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
                    (pMVar22,*pVVar9,(MethodInfo *)0x0);
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                              ((Vector3 *)auStack_33,pMVar22,(MethodInfo *)0x0);
          uStack_28._4_4_ = pVVar9->y;
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            uStack_34._4_4_ = (float)TypeInfo__System__Math;
            uStack_34._0_4_ = (float)&UNK_?;
            func_?();
          }
          uStack_34 = (double)uStack_28._4_4_;
          stack0xffffff64 = (double)CONCAT44(&UNK_?,auStack_35._8_4_);
          fVar36 = (float10)func_?();
          uStack_28 = (double)(this->fields).rotationSpeed;
          uStack_34._0_4_ = 0.0;
          uStack_34._4_4_ = 0.0;
          uStack_13 = (double)fVar36;
          stack0xffffff64 = (double)CONCAT44(&UNK_?,auStack_35._8_4_);
          fVar36 = (float10)func_?();
          unique0x0000aa00 = (double)fVar36;
          auStack_35._4_4_ = &UNK_?;
          uStack_13 = unique0x0000aa00;
          fVar36 = (float10)func_?();
          uStack_13 = (double)fVar36;
          uStack_28 = (double)CONCAT44((float)fVar36,(undefined4)uStack_28);
        }
        pLVar24 = (this->fields).targets;
        if (pLVar24 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar24->fields)._size == 1) {
          if (cStack_20 != '\0') {
            if (pMVar22 == (MVWorldObjectClient *)0x0) goto code_?;
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                               (pMVar22,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 0)) {
              uVar37 = (this->fields).pivot.x;
              uVar38 = (this->fields).pivot.y;
              fVar8 = (this->fields).pivot.z;
              uStack_13._0_4_ = (float)uVar37;
              uStack_13._4_4_ = (float)uVar38;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                                  ((Vector3 *)auStack_35,(MethodInfo *)0x0);
              pMVar22 = pMStack_29;
              pivot_02.y = uStack_13._4_4_;
              pivot_02.x = (float)uStack_13;
              pivot_02.z = fVar8;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_29,pivot_02,*pVVar9,
                         (float)((uint)fStack_30 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_28._4_4_,(MethodInfo *)0x0
                        );
              cStack_25 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                               (pMVar22,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 1)) {
              uVar39 = (this->fields).pivot.x;
              uVar40 = (this->fields).pivot.y;
              fVar8 = (this->fields).pivot.z;
              uStack_13._0_4_ = (float)uVar39;
              uStack_13._4_4_ = (float)uVar40;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                  ((Vector3 *)&stack0xffffff50,(MethodInfo *)0x0);
              pMVar22 = pMStack_29;
              pivot.y = uStack_13._4_4_;
              pivot.x = (float)uStack_13;
              pivot.z = fVar8;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_29,pivot,*pVVar9,
                         (float)((uint)fStack_30 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_28._4_4_,(MethodInfo *)0x0
                        );
              cStack_26 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                               (pMVar22,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
            if (((bVar7 == 0) || (cStack_25 != '\0')) || ((this->fields).rotationMode != 2)) {
              bVar21 = false;
            }
            else {
              uVar41 = (this->fields).pivot.x;
              uVar42 = (this->fields).pivot.y;
              fVar8 = (this->fields).pivot.z;
              uStack_13._0_4_ = (float)uVar41;
              uStack_13._4_4_ = (float)uVar42;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                                  (&VStack_43,(MethodInfo *)0x0);
              pMVar22 = pMStack_29;
              pivot_01.y = uStack_13._4_4_;
              pivot_01.x = (float)uStack_13;
              pivot_01.z = fVar8;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_29,pivot_01,*pVVar9,
                         (float)((uint)fStack_30 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_28._4_4_,(MethodInfo *)0x0
                        );
              bVar21 = true;
            }
            if ((bVar21 || cStack_26 != '\0') || cStack_25 != '\0') {
              pQVar44 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                                  ((Quaternion *)&stack0xffffff20,pMVar22,(MethodInfo *)0x0);
              func_?(0x1f,pMVar22,pQVar44->x);
            }
          }
        }
        else {
          method_00 = (MethodInfo *)&UNK_?;
          puVar45 = (undefined4 *)func_?(&stack0xffffff40);
          VStack_10.y = 0.0;
          LStack_6._list = (List_1_System_Object_ *)*puVar45;
          LStack_6._index = puVar45[1];
          LStack_6._version = puVar45[2];
          LStack_6._current = (Object *)puVar45[3];
          uStack_1 = 1;
          VStack_10.z = (float)&LStack_6;
          while( true ) {
            bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                     Object]::List_1_T_Enumerator_System_Object__MoveNext
                               (&LStack_6,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                               );
            if (bVar7 == 0) break;
            if ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current ==
                (WorldObjectClientRef_1_System_Object_ *)0x0) goto code_?;
            pMVar22 = (MVWorldObjectClient *)
                      WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                );
            uVar46 = (this->fields).pivot.x;
            uVar47 = (this->fields).pivot.y;
            pMStack_29 = (MVWorldObjectClient *)(this->fields).pivot.z;
            uStack_13._0_4_ = (float)uVar46;
            uStack_13._4_4_ = (float)uVar47;
            pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                (&VStack_48,(MethodInfo *)0x0);
            uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13);
            if (pMVar22 == (MVWorldObjectClient *)0x0) goto code_?;
            method_00 = (MethodInfo *)pVVar9->y;
            pivot_00.y = uStack_13._4_4_;
            pivot_00.x = (float)uStack_13;
            pivot_00.z = (float)pMStack_29;
            MVWorldObjectClient::MVWorldObjectClient_RotateAround
                      (pMVar22,pivot_00,*pVVar9,
                       (float)((uint)fStack_30 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ) * (this->fields).rotationSpeed - uStack_28._4_4_,(MethodInfo *)0x0);
            MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xffffff30,pMVar22,(MethodInfo *)0x0);
            func_?();
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    ((Object *)&LStack_6,
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                     ,method_00);
          uStack_1 = 0xffffffff;
        }
        uVar15 = _UNK_?;
        fVar8 = (this->fields).yAcc - fStack_27 * (this->fields).rotateThreshold;
        (this->fields).yAcc = fVar8;
        fVar8 = (float)((uint)fVar8 & uVar15);
        pfVar19 = &(this->fields).rotateThreshold;
        fStack_30 = fStack_30 * (this->fields).rotateThreshold;
        bVar21 = *pfVar19 <= fVar8 && fVar8 != *pfVar19;
        fVar8 = (this->fields).xAcc - fStack_30;
        (this->fields).xAcc = fVar8;
        fVar8 = (float)((uint)fVar8 & uVar15);
        pfVar19 = &(this->fields).rotateThreshold;
        cStack_20 = *pfVar19 <= fVar8 && fVar8 != *pfVar19;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                          (&VStack_43,(MethodInfo *)0x0);
      uVar49 = pVVar9->x;
      uVar50 = pVVar9->y;
      (this->fields).prevMouseX = (float)uVar49;
      fStack_14 = (float)uVar49;
      uStack_13._0_4_ = (float)uVar50;
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition
                          (&VStack_48,(MethodInfo *)0x0);
      uVar51 = pVVar9->x;
      uVar52 = pVVar9->y;
      (this->fields).prevMouseY = (float)uVar52;
      fStack_14 = (float)uVar51;
      uStack_13._0_4_ = (float)uVar52;
      pGVar53 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13);
      if (((pGVar53 != (GameEventManager *)0x0) &&
          (pGVar54 = (pGVar53->fields).AvatarCommandsBuildMode,
          uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13),
          pGVar54 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_01 = (pGVar54->fields).LaserCommands,
         uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13),
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
  pcVar55 = (code *)swi(3);
  (*pcVar55)();
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
      this_02 = (MVJetPack_LocalObjectsJetPack *)this_01[1].fields.OnActivateLaserForDuration;
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_DoGridSnapping
                ((List_1_WorldObjectClientRef_ *)this_02,(MethodInfo *)0x0);
      if (this_02 != (MVJetPack_LocalObjectsJetPack *)0x0) {
        this_03 = *(MVNetworkSelector **)&(this_02->fields).walkMode;
        selectionSet = (HashSet_1_System_Int32_ *)
                       MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                 (this_02,(MethodInfo *)0x0);
        if (this_03 != (MVNetworkSelector *)0x0) {
          MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                    (this_03,selectionSet,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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

