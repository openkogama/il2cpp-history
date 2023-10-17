
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
    pOVar7 = (Object *)(*(pTVar6->klass->vtable).ToString.methodPtr)();
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar7,(MethodInfo *)0x0);
    pLVar8 = (List_1_WorldObjectClientRef_ *)func_?();
    if (pLVar8 != (List_1_WorldObjectClientRef_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar8,
                 MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
      (this->fields).targets = pLVar8;
      func_?();
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
          pDVar11 = (e->fields)._.data;
          if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                      ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                (pDVar11,(Object *)StringLiteral_rotationDegreesStep,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
            if (pOVar7 != (Object *)0x0) {
              if ((pOVar7->klass->_0).element_class != (TypeInfo__System__Single->_0).element_class
                 ) goto code_?;
              pfVar12 = (float *)func_?();
              (this->fields).rotationSpeed = *pfVar12;
              pDVar11 = (e->fields)._.data;
              if (pDVar11 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                method_00 = (MethodInfo *)&UNK_?;
                pOVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item
                                    (pDVar11,(Object *)StringLiteral_rotationMode,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    );
                if (pOVar7 != (Object *)0x0) {
                  if ((pOVar7->klass->_0).element_class !=
                      (TypeInfo__RotationMode->_0).element_class) goto code_?;
                  piVar13 = (int32_t *)func_?();
                  (this->fields).rotationMode = *piVar13;
                  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pVVar14 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
                            StandaloneInput::StandaloneInput_MousePosition
                                      ((Vector3 *)(auStack_15 + 4),(StandaloneInput *)0x0,unaff_EBX)
                  ;
                  (this->fields).prevMouseX = pVVar14->x;
                  pVVar14 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::
                            StandaloneInput::StandaloneInput_MousePosition
                                      ((Vector3 *)(auStack_15 + 4),(StandaloneInput *)0x0,unaff_EBX)
                  ;
                  (this->fields).prevMouseY = pVVar14->y;
                  pLVar16 = (List_1_UnityEngine_Transform_ *)func_?();
                  pLStack_17 = pLVar16;
                  if (pLVar16 != (List_1_UnityEngine_Transform_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
                    LowLevelList_1_System_Object___ctor
                              ((LowLevelList_1_System_Object_ *)pLVar16,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__
                              );
                    pSVar9 = (e->fields).selectionController;
                    pLStack_18 = pLVar16;
                    if ((pSVar9 != (SelectionController *)0x0) &&
                       (this_01 = (HashSet_1_System_Object_ *)(pSVar9->fields).selectedIDs,
                       this_01 != (HashSet_1_System_Object_ *)0x0)) {
                      pHVar19 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                                Object]::HashSet_1_System_Object__GetEnumerator
                                          ((HashSet_1_T_Enumerator_System_Object_ *)auStack_15,
                                           this_01,
                                           MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__
                                          );
                      pOVar7 = pHVar19->_current;
                      iStack_20 = 0;
                      uStack_1 = 1;
                      pOStack_21 = (Object *)&stack0xffffffb4;
                      while( true ) {
                        bVar10 = System.Core.dll::System::Collections::Generic::
                                HashSet`1[T]+Enumerator[System::Int32]::
                                HashSet_1_T_Enumerator_System_Int32__MoveNext
                                          ((HashSet_1_T_Enumerator_System_Int32_ *)&stack0xffffffb4,
                                           MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__
                                          );
                        if (bVar10 == 0) break;
                        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                            ((MethodInfo *)0x0);
                        if (this_03 == (MVWorldObjectClientManager *)0x0) goto code_?;
                        this_04 = MVWorldObjectClientManager::
                                  MVWorldObjectClientManager_GetWorldObjectClientRef
                                            (this_03,(int32_t)pOVar7,(MethodInfo *)0x0);
                        pLVar8 = (this->fields).targets;
                        if (pLVar8 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
                        method_00 = (MethodInfo *)&UNK_?;
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  ((List_1_System_Object_ *)pLVar8,(Object *)this_04,
                                   MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_
                                  );
                        if (this_04 == (WorldObjectClientRef *)0x0) goto code_?;
                        pOVar22 = WorldObjectClientRef`1[System::Object]::
                                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                            ((WorldObjectClientRef_1_System_Object_ *)this_04,
                                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                            );
                        if (pOVar22 == (Object *)0x0) goto code_?;
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  ((List_1_System_Object_ *)pLStack_17,(Object *)pOVar22[0x12].klass
                                   ,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_
                                  );
                      }
                      uStack_1 = 0xffffffff;
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                                ((Object *)&stack0xffffffb4,
                                 (ExceptionArgument__Enum)
                                 MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__
                                 ,method_00);
                      pLVar16 = pLStack_17;
                      uStack_1 = 0xffffffff;
                      this_02 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )(this->fields).targets;
                      if (this_02 !=
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
                      {
                        if ((this_02->fields)._size == 1) {
                          if (this_02 !=
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              0x0) {
                            this_05 = mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Text::RegularExpressions::RegexCharClass+SingleRange]::
                                      List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                                                (this_02,0,
                                                 MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_
                                                );
                            if (this_05 != (RegexCharClass_SingleRange)0x0) {
                              pOVar7 = WorldObjectClientRef`1[System::Object]::
                                        WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                                  ((WorldObjectClientRef_1_System_Object_ *)this_05,
                                                                                                      
                                                  MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                                  );
                              if (pOVar7 != (Object *)0x0) {
                                pVVar14 = (Vector3 *)
                                          (**(code **)&pOVar7->klass[2]._0.byval_arg.attrs)
                                                    (auStack_15 + 4);
                                goto code_?;
                              }
                            }
                          }
                        }
                        else {
                          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                            func_?(TypeInfo__SharedCubeFunctions);
                          }
                          pVVar14 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter
                                              (&VStack_23,pLVar16,(MethodInfo *)0x0);
code_?:
                          fVar24 = pVVar14->y;
                          fVar25 = pVVar14->z;
                          (this->fields).pivot.x = pVVar14->x;
                          (this->fields).pivot.y = fVar24;
                          (this->fields).pivot.z = fVar25;
                          pGVar26 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                              ((MethodInfo *)0x0);
                          if (((pGVar26 != (GameEventManager *)0x0) &&
                              (pGVar27 = (pGVar26->fields).AvatarCommandsBuildMode,
                              pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                             (pGVar28 = (pGVar27->fields).LaserCommands,
                             pGVar28 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                            GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                            GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                                      (pGVar28,LaserPointerState__Enum_Transforming,(MethodInfo *)0x0
                                      );
                            pGVar26 = MVGameControllerBase::
                                      MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                            if (((pGVar26 != (GameEventManager *)0x0) &&
                                (pGVar27 = (pGVar26->fields).AvatarCommandsBuildMode,
                                pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
                               && (pGVar28 = (pGVar27->fields).LaserCommands,
                                  pGVar28 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                             *)0x0)) {
                              GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
                              GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                                        (pGVar28,1,(MethodInfo *)0x0);
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
    }
  }
code_?:
  func_?();
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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
  pMVar7 = (MethodInfo *)(this->fields).targets;
  bVar8 = UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ValidateTargets
                    ((List_1_WorldObjectClientRef_ *)pMVar7,(MethodInfo *)0x0);
  if (bVar8 != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar8 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                      (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      fVar9 = (this->fields).xAcc;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar10 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition((Vector3 *)auStack_11,(StandaloneInput *)0x0,pMVar7);
      pMVar12 = (MVWorldObjectClient *)0x0;
      fVar13 = (this->fields).yAcc;
      (this->fields).xAcc =
           (pVVar10->x - (this->fields).prevMouseX) *
           ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar9;
      pVVar10 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition((Vector3 *)auStack_11,(StandaloneInput *)0x0,pMVar7);
      fVar9 = (float)((uint)(this->fields).xAcc & _UNK_?);
      pfVar14 = &(this->fields).rotateThreshold;
      fVar13 = (pVVar10->y - (this->fields).prevMouseY) *
               ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar13;
      cStack_15 = *pfVar14 <= fVar9 && fVar9 != *pfVar14;
      (this->fields).yAcc = fVar13;
      fVar13 = (float)((uint)fVar13 & _UNK_?);
      pfVar14 = &(this->fields).rotateThreshold;
      bVar16 = *pfVar14 <= fVar13 && fVar13 != *pfVar14;
      while( true ) {
        if (!bVar16 && (bool)cStack_15 == false) break;
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
        pMVar7 = (MethodInfo *)&UNK_?;
        this_03 = (MVWorldObjectClient *)
                  WorldObjectClientRef`1[System::Object]::
                  WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                            ((WorldObjectClientRef_1_System_Object_ *)this_02,
                             MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                            );
        fVar9 = (this->fields).xAcc;
        pLVar17 = (this->fields).targets;
        cStack_18 = '\0';
        cStack_19 = '\0';
        _Stack_44 = (_union_155)(fVar9 / (float)((uint)fVar9 & _UNK_?));
        fStack_20 = (this->fields).yAcc;
        fStack_20 = fStack_20 / (float)((uint)fStack_20 & _UNK_?);
        uStack_21 = (double)((ulonglong)uStack_21 & 0xffffffff);
        pMStack_22 = this_03;
        _Stack_1c = _Stack_44;
        if (pLVar17 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar17->fields)._size == 1) {
          if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
          pVVar10 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                             (&VStack_23,this_03,(MethodInfo *)0x0);
          pVVar10 = MathFunctions::MathFunctions_RoundVector(&VStack_24,*pVVar10,0,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles
                    (this_03,*pVVar10,(MethodInfo *)0x0);
          pVVar10 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles
                             ((Vector3 *)(auStack_25 + 4),this_03,(MethodInfo *)0x0);
          uStack_21._4_4_ = pVVar10->y;
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            uStack_26 = (double)CONCAT44(TypeInfo__System__Math,&UNK_?);
            func_?();
          }
          uStack_26 = (double)uStack_21._4_4_;
          auStack_25._4_4_ = &UNK_?;
          fVar27 = (float10)func_?();
          uStack_21 = (double)(this->fields).rotationSpeed;
          uStack_26 = 0.0;
          auStack_11._4_8_ = (undefined8)fVar27;
          auStack_25._4_4_ = &UNK_?;
          fVar27 = (float10)func_?();
          auStack_25 = (undefined1  [8])(double)fVar27;
          auStack_11._4_8_ = auStack_25;
          fVar27 = (float10)func_?();
          auStack_11._4_8_ = (undefined8)fVar27;
          uStack_21 = (double)CONCAT44((float)fVar27,(undefined4)uStack_21);
        }
        pLVar17 = (this->fields).targets;
        if (pLVar17 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar17->fields)._size == 1) {
          if (cStack_15 != '\0') {
            if (this_03 == (MVWorldObjectClient *)0x0) goto code_?;
            bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (this_03,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
            if ((bVar8 != 0) && ((this->fields).rotationMode == 0)) {
              auStack_11._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar9 = (this->fields).pivot.z;
              pVVar10 = (Vector3 *)func_?();
              this_03 = pMStack_22;
              pivot.z = fVar9;
              pivot.x = (float)auStack_11._4_4_;
              pivot.y = (float)auStack_11._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_22,pivot,*pVVar10,
                         (float)((uint)_Stack_1c.genericMethod ^
                                __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0
                        );
              cStack_18 = '\x01';
            }
            bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (this_03,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
            if ((bVar8 != 0) && ((this->fields).rotationMode == 1)) {
              auStack_11._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar9 = (this->fields).pivot.z;
              pVVar10 = (Vector3 *)func_?(&stack0xffffff54);
              this_03 = pMStack_22;
              pivot_00.z = fVar9;
              pivot_00.x = (float)auStack_11._4_4_;
              pivot_00.y = (float)auStack_11._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_22,pivot_00,*pVVar10,
                         (float)((uint)_Stack_1c.genericMethod ^
                                __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0
                        );
              cStack_19 = '\x01';
            }
            pMVar12 = this_03;
            bVar8 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag
                              (this_03,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
            if (((bVar8 == 0) || (cStack_18 != '\0')) || ((this->fields).rotationMode != 2)) {
              bVar16 = false;
            }
            else {
              auStack_11._4_8_ = *(undefined8 *)&(this->fields).pivot;
              fVar9 = (this->fields).pivot.z;
              pVVar10 = (Vector3 *)func_?();
              this_03 = pMStack_22;
              pivot_01.z = fVar9;
              pivot_01.x = (float)auStack_11._4_4_;
              pivot_01.y = (float)auStack_11._8_4_;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround
                        (pMStack_22,pivot_01,*pVVar10,
                         (float)((uint)_Stack_1c.genericMethod ^
                                __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0
                        );
              bVar16 = true;
            }
            if ((bVar16 || cStack_19 != '\0') || cStack_18 != '\0') {
              MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&stack0xffffff24,this_03,(MethodInfo *)0x0);
              func_?();
            }
          }
        }
        else {
          puVar28 = (undefined4 *)func_?(&stack0xffffff44);
          uStack_29 = 0;
          LStack_6._list = (List_1_System_Object_ *)*puVar28;
          LStack_6._index = puVar28[1];
          LStack_6._version = puVar28[2];
          LStack_6._current = (Object *)((_union_154 *)(puVar28 + 3))->methodMetadataHandle;
          uStack_1 = 1;
          pOStack_30 = (Object *)(auStack_31 + 0x10);
          while( true ) {
            pMVar12 = (MVWorldObjectClient *)&UNK_?;
            bVar8 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)(auStack_31 + 0x10),
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__
                              );
            if (bVar8 == 0) break;
            if ((Il2CppRGCTXData *)LStack_6._current == (Il2CppRGCTXData *)0x0)
            goto code_?;
            pMVar12 = (MVWorldObjectClient *)
                      WorldObjectClientRef`1[System::Object]::
                      WorldObjectClientRef_1_System_Object__get_WorldObjectClient
                                ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current,
                                 MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__
                                );
            auStack_11._4_8_ = *(undefined8 *)&(this->fields).pivot;
            pMStack_22 = (MVWorldObjectClient *)(this->fields).pivot.z;
            pMVar7 = (MethodInfo *)auStack_31;
            pVVar10 = (Vector3 *)func_?();
            if (pMVar12 == (MVWorldObjectClient *)0x0) goto code_?;
            pivot_02.z = (float)pMStack_22;
            pivot_02.x = (float)auStack_11._4_4_;
            pivot_02.y = (float)auStack_11._8_4_;
            MVWorldObjectClient::MVWorldObjectClient_RotateAround
                      (pMVar12,pivot_02,*pVVar10,
                       (float)((uint)_Stack_1c.genericMethod ^
                              __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                              ) * (this->fields).rotationSpeed - uStack_21._4_4_,(MethodInfo *)0x0);
            MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                      ((Quaternion *)&stack0xffffff34,pMVar12,(MethodInfo *)0x0);
            func_?();
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                    ((Object *)(auStack_31 + 0x10),
                     (ExceptionArgument__Enum)
                     MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__
                     ,pMVar7);
          uStack_1 = 0xffffffff;
        }
        fVar9 = (this->fields).yAcc - fStack_20 * (this->fields).rotateThreshold;
        (this->fields).yAcc = fVar9;
        fVar9 = (float)((uint)fVar9 & _UNK_?);
        pfVar14 = &(this->fields).rotateThreshold;
        _Stack_1c.genericMethod =
             (Il2CppGenericMethod *)(_Stack_1c.genericMethod * (this->fields).rotateThreshold);
        bVar16 = *pfVar14 <= fVar9 && fVar9 != *pfVar14;
        fVar9 = (this->fields).xAcc - (float)_Stack_1c;
        (this->fields).xAcc = fVar9;
        fVar9 = (float)((uint)fVar9 & _UNK_?);
        pfVar14 = &(this->fields).rotateThreshold;
        cStack_15 = *pfVar14 <= fVar9 && fVar9 != *pfVar14;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar10 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition
                         (&VStack_32,(StandaloneInput *)0x0,(MethodInfo *)pMVar12);
      (this->fields).prevMouseX = pVVar10->x;
      pVVar10 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
               StandaloneInput_MousePosition
                         ((Vector3 *)auStack_31,(StandaloneInput *)0x0,(MethodInfo *)pMVar12);
      (this->fields).prevMouseY = pVVar10->y;
      pGVar33 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar33 != (GameEventManager *)0x0) &&
          (pGVar34 = (pGVar33->fields).AvatarCommandsBuildMode,
          pGVar34 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (this_01 = (pGVar34->fields).LaserCommands,
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
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
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
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
              (pGVar3,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
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
  if (this_00 != (List_1_WorldObjectClientRef_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    (this->fields).targets = this_00;
    func_?(&(this->fields).targets,this_00);
    ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

