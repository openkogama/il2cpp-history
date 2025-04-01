
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Enter
               (ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffa4;
  puVar5 = &stack0xffffffa4;
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
    this_03 = (List_1_WorldObjectClientRef_ *)func_?();
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_03,
               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    ppLStack_8 = &(this->fields).targets;
    *ppLStack_8 = this_03;
    func_?(ppLStack_8);
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
                transforms = (List_1_UnityEngine_Transform_ *)func_?();
                pLStack_17 = transforms;
                mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
                __Il2CppFullySharedGenericType]::
                LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                          ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
                           transforms,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__
                          );
                pSVar9 = (e->fields).selectionController;
                pLStack_18 = transforms;
                if ((pSVar9 != (SelectionController *)0x0) &&
                   (this_01 = (HashSet_1_System_UInt32_ *)(pSVar9->fields).selectedIDs,
                   this_01 != (HashSet_1_System_UInt32_ *)0x0)) {
                  pHVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]
                            ::HashSet_1_System_UInt32__GetEnumerator
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_16,this_01,
                                       MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                      );
                  id = pHVar19->_current;
                  iStack_20 = 0;
                  uStack_1 = 1;
                  pOStack_21 = (Object *)&stack0xffffffb0;
                  while( true ) {
                    bVar10 = System.Core.dll::System::Collections::Generic::
                            HashSet`1[T]+Enumerator[System::UInt32]::
                            HashSet_1_T_Enumerator_System_UInt32__MoveNext
                                      ((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffb0,
                                       MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                      );
                    if (bVar10 == 0) break;
                    this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0)
                    ;
                    if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
                    this_05 = MVWorldObjectClientManager::
                              MVWorldObjectClientManager_GetWorldObjectClientRef
                                        (this_04,id,(MethodInfo *)0x0);
                    if (*ppLStack_8 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
                    method_00 = (MethodInfo *)&UNK_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)*ppLStack_8,(Object *)this_05,
                               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                              );
                    if (this_05 == (WorldObjectClientRef *)0x0) goto code_?;
                    pOVar7 = WorldObjectClientRef`1[System::Object]::
                              WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                        ((WorldObjectClientRef_1_System_Object_ *)this_05,
                                         MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                        );
                    transforms = pLStack_17;
                    if ((pOVar7 == (Object *)0x0) ||
                       (pLStack_17 == (List_1_UnityEngine_Transform_ *)0x0)) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLStack_17,(Object *)pOVar7[0x12].klass,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                              );
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                            ((Object *)&stack0xffffffb0,
                             (ExceptionArgument__Enum)
                             MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                             ,method_00);
                  uStack_1 = 0xffffffff;
                  this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                            (this->fields).targets;
                  if (this_02 !=
                      (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                    if ((this_02->fields)._size == 1) {
                      this_06 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                                RegularExpressions::RegexCharClass+SingleRange]::
                                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                          (this_02,0,
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
                                    (*(code *)pOVar7->klass[2]._0.this_arg.data)(auStack_16 + 4);
                          goto code_?;
                        }
                      }
                    }
                    else {
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__SharedCubeFunctions);
                      }
                      pVVar15 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                                          (&VStack_22,transforms,(MethodInfo *)0x0);
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
                         (pGVar27 = (pGVar26->fields).LaserCommands,
                         pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                    *)0x0)) {
                        UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
                        AudioClip_InvokePCMSetPositionCallback_Internal
                                  ((AudioClip *)pGVar27,3,(MethodInfo *)0x0);
                        pGVar25 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                            ((MethodInfo *)0x0);
                        if (((pGVar25 != (GameEventManager *)0x0) &&
                            (pGVar26 = (pGVar25->fields).AvatarCommandsBuildMode,
                            pGVar26 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                           (pGVar27 = (pGVar26->fields).LaserCommands,
                           pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                      *)0x0)) {
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                                    (pGVar27,1,(MethodInfo *)0x0);
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
  puStack_4 = &stack0xffffff1c;
  puVar5 = &stack0xffffff1c;
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
      fVar8 = (float)((uint)(this->fields).xAcc & _UNK_?);
      pfVar12 = &(this->fields).rotateThreshold;
      fVar11 = (pVVar9->y - (this->fields).prevMouseY) *
               ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar11;
      cStack_13 = *pfVar12 <= fVar8 && fVar8 != *pfVar12;
      (this->fields).yAcc = fVar11;
      fVar11 = (float)((uint)fVar11 & _UNK_?);
      pfVar12 = &(this->fields).rotateThreshold;
      bVar14 = *pfVar12 <= fVar11 && fVar11 != *pfVar12;
      while( true ) {
        if (!bVar14 && (bool)cStack_13 == false) break;
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
        pMVar15 = (MVWorldObjectClient *)
                 WorldObjectClientRef`1[System::Object]::
                 WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                           ((WorldObjectClientRef_1_System_Object_ *)this_02,
                            MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                           );
        fStack_16 = (this->fields).xAcc;
        pLVar17 = (this->fields).targets;
        cStack_18 = '\0';
        cStack_19 = '\0';
        fStack_16 = fStack_16 / (float)((uint)fStack_16 & _UNK_?);
        fStack_20 = (this->fields).yAcc;
        fStack_20 = fStack_20 / (float)((uint)fStack_20 & _UNK_?);
        uStack_21 = (double)((ulonglong)uStack_21 & 0xffffffff);
        pMStack_22 = pMVar15;
        if (pLVar17 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar17->fields)._size == 1) {
          if (pMVar15 == (MVWorldObjectClient *)0x0) goto code_?;
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                             (&VStack_23,pMVar15,(MethodInfo *)0x0);
          pVVar9 = MathFunctions::MathFunctions_RoundVector
                             ((Vector3 *)&uStack_24,*pVVar9,0,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
                    (pMVar15,*pVVar9,(MethodInfo *)0x0);
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                             ((Vector3 *)auStack_25,pMVar15,(MethodInfo *)0x0);
          uStack_21._4_4_ = pVVar9->y;
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            uStack_24._4_4_ = (float)TypeInfo__System__Math;
            uStack_24._0_4_ = (float)&UNK_?;
            func_?();
          }
          uStack_24 = (double)uStack_21._4_4_;
          fVar26 = (float10)func_?();
          uStack_21 = (double)(this->fields).rotationSpeed;
          uStack_24._0_4_ = 0.0;
          uStack_24._4_4_ = 0.0;
          auStack_10._4_8_ = (undefined8)fVar26;
          fVar26 = (float10)func_?();
          unique0x0000aa00 = (double)fVar26;
          auStack_25._0_4_ = &UNK_?;
          auStack_10._4_8_ = unique0x0000aa00;
          fVar26 = (float10)func_?();
          auStack_10._4_8_ = (undefined8)fVar26;
          uStack_21 = (double)CONCAT44((float)fVar26,(undefined4)uStack_21);
        }
        pLVar17 = (this->fields).targets;
        if (pLVar17 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar17->fields)._size == 1) {
          if (cStack_13 != '\0') {
            if (pMVar15 == (MVWorldObjectClient *)0x0) goto code_?;
            method_00 = (MethodInfo *)&UNK_?;
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (pMVar15,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 0)) {
              auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar8 = (this->fields).pivot.z;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                                 (&VStack_27,(MethodInfo *)0x0);
              pMVar15 = pMStack_22;
              method_00 = (MethodInfo *)&UNK_?;
              pivot_02.z = fVar8;
              pivot_02.x = (float)auStack_10._4_4_;
              pivot_02.y = (float)auStack_10._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_22,pivot_02,*pVVar9,
                         (float)((uint)fStack_16 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0
                        );
              cStack_18 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (pMVar15,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 1)) {
              auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar8 = (this->fields).pivot.z;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                                 ((Vector3 *)&stack0xffffff58,(MethodInfo *)0x0);
              pMVar15 = pMStack_22;
              pivot.z = fVar8;
              pivot.x = (float)auStack_10._4_4_;
              pivot.y = (float)auStack_10._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_22,pivot,*pVVar9,
                         (float)((uint)fStack_16 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0
                        );
              cStack_19 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (pMVar15,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
            if (((bVar7 == 0) || (cStack_18 != '\0')) || ((this->fields).rotationMode != 2)) {
              bVar14 = false;
            }
            else {
              auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar8 = (this->fields).pivot.z;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                                 (&VStack_28,(MethodInfo *)0x0);
              pMVar15 = pMStack_22;
              method_00 = (MethodInfo *)pVVar9->x;
              pivot_01.z = fVar8;
              pivot_01.x = (float)auStack_10._4_4_;
              pivot_01.y = (float)auStack_10._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_22,pivot_01,*pVVar9,
                         (float)((uint)fStack_16 ^
                                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0
                        );
              bVar14 = true;
            }
            if ((bVar14 || cStack_19 != '\0') || cStack_18 != '\0') {
              MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&stack0xffffff28,pMVar15,(MethodInfo *)0x0);
              method_00 = (MethodInfo *)0x20;
              func_?();
            }
          }
        }
        else {
          method_01 = (MethodInfo *)&UNK_?;
          puVar29 = (undefined4 *)func_?();
          uStack_30 = 0;
          LStack_6._list = (List_1_System_Object_ *)*puVar29;
          LStack_6._index = puVar29[1];
          LStack_6._version = puVar29[2];
          LStack_6._current = (Object *)puVar29[3];
          uStack_1 = 1;
          pLStack_31 = &LStack_6;
          while( true ) {
            bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              (&LStack_6,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                              );
            if (bVar7 == 0) break;
            if ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current ==
                (WorldObjectClientRef_1_System_Object_ *)0x0) goto code_?;
            pMVar15 = (MVWorldObjectClient *)
                     WorldObjectClientRef`1[System::Object]::
                     WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                               ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current,
                                MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                               );
            auStack_10._4_8_ = *(undefined8 *)&(this->fields).pivot;
            pMStack_22 = (MVWorldObjectClient *)(this->fields).pivot.z;
            pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                               (&VStack_32,(MethodInfo *)0x0);
            if (pMVar15 == (MVWorldObjectClient *)0x0) goto code_?;
            method_01 = (MethodInfo *)pVVar9->y;
            pivot_00.z = (float)pMStack_22;
            pivot_00.x = (float)auStack_10._4_4_;
            pivot_00.y = (float)auStack_10._8_4_;
            MVWorldObjectClient::MVWorldObjectClient_RotateAround
                      (pMVar15,pivot_00,*pVVar9,
                       (float)((uint)fStack_16 ^
                              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                              ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0);
            MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xffffff38,pMVar15,(MethodInfo *)0x0);
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
        fVar8 = (this->fields).rotateThreshold;
        fVar11 = (this->fields).yAcc - fVar8 * fStack_20;
        (this->fields).yAcc = fVar11;
        fVar33 = (this->fields).xAcc - fVar8 * fStack_16;
        bVar14 = fVar8 < (float)((uint)fVar11 & _UNK_?);
        (this->fields).xAcc = fVar33;
        cStack_13 = fVar8 < (float)((uint)fVar33 & _UNK_?);
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&VStack_28,(DefaultEventSystem_Input *)0x0,method_00);
      (this->fields).prevMouseX = pVVar9->x;
      pVVar9 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
               DefaultEventSystem_Input_get_mousePosition
                         (&VStack_32,(DefaultEventSystem_Input *)0x0,method_00);
      (this->fields).prevMouseY = pVVar9->y;
      pGVar34 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar34 != (GameEventManager *)0x0) &&
          (pGVar35 = (pGVar34->fields).AvatarCommandsBuildMode,
          pGVar35 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_01 = (pGVar35->fields).LaserCommands,
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
  pcVar36 = (code *)swi(3);
  (*pcVar36)();
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
     (pGVar3 = (pGVar2->fields).LaserCommands,
     pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    UnityEngine.AudioModule.dll::UnityEngine::AudioClip::
    AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)pGVar3,0,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (pGVar3 = (pGVar2->fields).LaserCommands,
       pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                (pGVar3,0,(MethodInfo *)0x0);
      targets = pGVar3[1].fields.OnActivateLaserForDuration;
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_DoGridSnapping
                ((List_1_WorldObjectClientRef_ *)targets,(MethodInfo *)0x0);
      if (((targets != (Action_1_Single_ *)0x0) &&
          (pMVar4 = (targets->fields)._._.original_method_info, pMVar4 != (MethodInfo_1 *)0x0)) &&
         (this_00 = (targets->fields)._.delegates, this_00 != (Delegate__Array *)0x0)) {
        MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                  ((MVNetworkSelector *)this_00,(HashSet_1_System_Int32_ *)pMVar4[1].klass,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar5 = func_?(&stack0xfffffff4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
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
  ppLVar1 = &(this->fields).targets;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

