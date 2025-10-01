
/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Enter(ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff9c;
  puVar5 = &stack0xffffff9c;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__get_Current__);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Transform>);
    func_?(&TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__RotationMode);
    func_?(&TypeInfo__SharedCubeFunctions);
    func_?(&TypeInfo__System__Single);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
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
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar8,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
    (this->fields).targets = pLVar8;
    func_?(&(this->fields).targets);
    if (e != (EditorStateMachine *)0x0) {
      pLStack_9 = (List_1_UnityEngine_Transform_ *)(e->fields).networkSelector;
      selectionSet = (HashSet_1_System_Int32_ *)MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
      if (pLStack_9 != (List_1_UnityEngine_Transform_ *)0x0) {
        bVar10 = MVNetworkSelector::MVNetworkSelector_RequestOwnership((MVNetworkSelector *)pLStack_9,selectionSet,(MethodInfo *)0x0);
        if (bVar10 == 0) {
          FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
          *unaff_FS_OFFSET = uStack_3;
          return;
        }
        pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
        if (pDVar11 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
          TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item(pDVar11,(Object *)StringLiteral_rotationDegreesStep,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
          if (TVar12.m_Index != 0) {
            if (*(Il2CppClass **)(*(int *)TVar12.m_Index + 0x20) != (TypeInfo__System__Single->_0).element_class) goto code_?;
            pfVar13 = (float *)func_?();
            (this->fields).rotationSpeed = *pfVar13;
            pDVar11 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
            if (pDVar11 != (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) {
              method_00 = (MethodInfo *)&UNK_?;
              TVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item(pDVar11,(Object *)StringLiteral_rotationMode,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
              if (TVar12.m_Index != 0) {
                if (*(Il2CppClass **)(*(int *)TVar12.m_Index + 0x20) != (TypeInfo__RotationMode->_0).element_class) goto code_?;
                piVar14 = (int32_t *)func_?();
                (this->fields).rotationMode = *piVar14;
                if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                pVVar15 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition((Vector3 *)(auStack_16 + 4),(MethodInfo *)0x0);
                uStack_17._0_4_ = pVVar15->x;
                uStack_17._4_4_ = pVVar15->y;
                pOStack_18 = (Object *)pVVar15->z;
                (this->fields).prevMouseX = (float)(undefined4)uStack_17;
                pVVar15 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition((Vector3 *)(auStack_16 + 4),(MethodInfo *)0x0);
                uStack_17._0_4_ = pVVar15->x;
                uStack_17._4_4_ = pVVar15->y;
                pOStack_18 = (Object *)pVVar15->z;
                (this->fields).prevMouseY = (float)uStack_17._4_4_;
                pLVar19 = (List_1_UnityEngine_Transform_ *)func_?();
                pLStack_9 = pLVar19;
                mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar19,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__List__);
                pLStack_20 = pLVar19;
                this_01 = (HashSet_1_System_UInt32_ *)MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
                if (this_01 != (HashSet_1_System_UInt32_ *)0x0) {
                  pHVar21 = System.Core.dll::System::Collections::Generic::HashSet`1[System::UInt32]::HashSet_1_System_UInt32__GetEnumerator((HashSet_1_T_Enumerator_System_UInt32_ *)auStack_16,this_01,MethodInfo__System__Collections__Generic__HashSet<int>__GetEnumerator__);
                  uStack_17 = uStack_17 & 0xffffffff;
                  id = pHVar21->_current;
                  uStack_1 = 1;
                  pOStack_18 = (Object *)&stack0xffffffa8;
                  while( true ) {
                    bVar10 = System.Core.dll::System::Collections::Generic::HashSet`1[T]+Enumerator[System::UInt32]::HashSet_1_T_Enumerator_System_UInt32__MoveNext((HashSet_1_T_Enumerator_System_UInt32_ *)&stack0xffffffa8,MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__MoveNext__);
                    if (bVar10 == 0) break;
                    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
                    if (this_02 == (MVWorldObjectClientManager *)0x0) goto code_?;
                    this_03 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRef(this_02,id,(MethodInfo *)0x0);
                    pLVar8 = (this->fields).targets;
                    if (pLVar8 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
                    method_00 = (MethodInfo *)&UNK_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add((List_1_System_Object_ *)pLVar8,(Object *)this_03,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__Add_WorldObjectClientRef_);
                    if (this_03 == (WorldObjectClientRef *)0x0) goto code_?;
                    pOVar7 = WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object__get_WorldObjectClient((WorldObjectClientRef_1_System_Object_ *)this_03,MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
                    if ((pOVar7 == (Object *)0x0) || (pLStack_9 == (List_1_UnityEngine_Transform_ *)0x0)) goto code_?;
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add((List_1_System_Object_ *)pLStack_9,(Object *)pOVar7[0x12].klass,MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__Add_UnityEngine__Transform_);
                  }
                  uStack_1 = 0xffffffff;
                  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)&stack0xffffffa8,(ExceptionArgument__Enum)MethodInfo__System__Collections__Generic__HashSet_1_T___Enumerator<int>__Dispose__,method_00);
                  pLVar19 = pLStack_9;
                  uStack_1 = 0xffffffff;
                  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).targets;
                  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                    if ((this_00->fields)._size == 1) {
                      if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
                        this_04 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item(this_00,0,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_);
                        if (this_04 != (RegexCharClass_SingleRange)0x0) {
                          pOVar7 = WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object__get_WorldObjectClient((WorldObjectClientRef_1_System_Object_ *)this_04,MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
                          if (pOVar7 != (Object *)0x0) {
                            pVVar15 = (Vector3 *)(*(code *)pOVar7->klass[2]._0.this_arg.data)(auStack_16 + 4);
                            goto code_?;
                          }
                        }
                      }
                    }
                    else {
                      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
                        func_?(TypeInfo__SharedCubeFunctions);
                      }
                      pVVar15 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter(&VStack_22,pLVar19,(MethodInfo *)0x0);
code_?:
                      fVar23 = pVVar15->y;
                      fVar24 = pVVar15->z;
                      (this->fields).pivot.x = pVVar15->x;
                      (this->fields).pivot.y = fVar23;
                      (this->fields).pivot.z = fVar24;
                      pGVar25 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                      if (((pGVar25 != (GameEventManager *)0x0) && (pGVar26 = (pGVar25->fields).AvatarCommandsBuildMode, pGVar26 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (pGVar27 = (pGVar26->fields).LaserCommands, pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState(pGVar27,LaserPointerState__Enum_Transforming,(MethodInfo *)0x0);
                        pGVar25 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
                        if (((pGVar25 != (GameEventManager *)0x0) && (pGVar26 = (pGVar25->fields).AvatarCommandsBuildMode, pGVar26 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (pGVar27 = (pGVar26->fields).LaserCommands, pGVar27 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
                          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState(pGVar27,1,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::ESRotating::ESRotating_Execute(ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff14;
  puVar5 = &stack0xffffff14;
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__);
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__);
    func_?(&MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__get_Current__);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__GetEnumerator__);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__System__Math);
    func_?(&MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  bVar7 = UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_ValidateTargets((this->fields).targets,(MethodInfo *)0x0);
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
    bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1(KogamaControls__Enum_PointerSelect,KeyState__Enum_Pressed,(MethodInfo *)0x0);
    if (bVar7 != 0) {
      fVar8 = (this->fields).xAcc;
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition(&VStack_10,(MethodInfo *)0x0);
      uVar11 = pVVar9->x;
      uVar12 = pVVar9->y;
      uStack_13._4_4_ = pVVar9->z;
      (this->fields).xAcc = ((float)uVar11 - (this->fields).prevMouseX) * ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar8;
      fVar8 = (this->fields).yAcc;
      fStack_14 = (float)uVar11;
      uStack_13._0_4_ = (float)uVar12;
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition(&VStack_10,(MethodInfo *)0x0);
      uVar15 = pVVar9->x;
      uVar16 = pVVar9->y;
      uStack_13 = (double)CONCAT44(pVVar9->z,uVar16);
      fVar17 = ABS((this->fields).xAcc);
      pfVar18 = &(this->fields).rotateThreshold;
      fVar8 = ((float)uVar16 - (this->fields).prevMouseY) * ((this->fields).mouseSensitivity / (this->fields).rotationSpeed) + fVar8;
      cStack_19 = *pfVar18 <= fVar17 && fVar17 != *pfVar18;
      (this->fields).yAcc = fVar8;
      fVar8 = ABS(fVar8);
      pfVar18 = &(this->fields).rotateThreshold;
      bVar20 = *pfVar18 <= fVar8 && fVar8 != *pfVar18;
      fStack_14 = (float)uVar15;
      while( true ) {
        if (!bVar20 && (bool)cStack_19 == false) break;
        this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)(this->fields).targets;
        if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) goto code_?;
        this_02 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::RegexCharClass+SingleRange]::List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item(this_00,0,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__get_Item_int_);
        if (this_02 == (RegexCharClass_SingleRange)0x0) goto code_?;
        pMVar21 = (MVWorldObjectClient *)WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object__get_WorldObjectClient((WorldObjectClientRef_1_System_Object_ *)this_02,MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
        fStack_22 = (this->fields).xAcc;
        pLVar23 = (this->fields).targets;
        fStack_22 = fStack_22 / ABS(fStack_22);
        cStack_24 = '\0';
        cStack_25 = '\0';
        fStack_26 = (this->fields).yAcc;
        fStack_26 = fStack_26 / ABS(fStack_26);
        uStack_27 = (double)((ulonglong)uStack_27 & 0xffffffff);
        pMStack_28 = pMVar21;
        fStack_29 = fStack_22;
        if (pLVar23 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar23->fields)._size == 1) {
          if (pMVar21 == (MVWorldObjectClient *)0x0) goto code_?;
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles(&VStack_30,pMVar21,(MethodInfo *)0x0);
          pVVar9 = MathFunctions::MathFunctions_RoundVector(&VStack_31,*pVVar9,0,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_WorldEulerAngles(pMVar21,*pVVar9,(MethodInfo *)0x0);
          pVVar9 = MVWorldObjectClient::MVWorldObjectClient_get_WorldEulerAngles((Vector3 *)auStack_32,pMVar21,(MethodInfo *)0x0);
          uStack_27._4_4_ = pVVar9->y;
          if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
            uStack_33._4_4_ = (float)TypeInfo__System__Math;
            uStack_33._0_4_ = (float)&UNK_?;
            func_?();
          }
          uStack_33 = (double)uStack_27._4_4_;
          stack0xffffff64 = (double)CONCAT44(&UNK_?,auStack_34._8_4_);
          fVar35 = (float10)func_?();
          uStack_27 = (double)(this->fields).rotationSpeed;
          uStack_33._0_4_ = 0.0;
          uStack_33._4_4_ = 0.0;
          uStack_13 = (double)fVar35;
          stack0xffffff64 = (double)CONCAT44(&UNK_?,auStack_34._8_4_);
          fVar35 = (float10)func_?();
          unique0x0000aa00 = (double)fVar35;
          auStack_34._4_4_ = &UNK_?;
          uStack_13 = unique0x0000aa00;
          fVar35 = (float10)func_?();
          uStack_13 = (double)fVar35;
          uStack_27 = (double)CONCAT44((float)fVar35,(undefined4)uStack_27);
        }
        pLVar23 = (this->fields).targets;
        if (pLVar23 == (List_1_WorldObjectClientRef_ *)0x0) goto code_?;
        if ((pLVar23->fields)._size == 1) {
          if (cStack_19 != '\0') {
            if (pMVar21 == (MVWorldObjectClient *)0x0) goto code_?;
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag(pMVar21,InteractionFlags__Enum_CanRotateX,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 0)) {
              uVar36 = (this->fields).pivot.x;
              uVar37 = (this->fields).pivot.y;
              fVar8 = (this->fields).pivot.z;
              uStack_13._0_4_ = (float)uVar36;
              uStack_13._4_4_ = (float)uVar37;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelRight((Vector3 *)auStack_34,(MethodInfo *)0x0);
              pMVar21 = pMStack_28;
              pivot_02.y = uStack_13._4_4_;
              pivot_02.x = (float)uStack_13;
              pivot_02.z = fVar8;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMStack_28,pivot_02,*pVVar9,-fStack_29 * (this->fields).rotationSpeed - uStack_27._4_4_,(MethodInfo *)0x0);
              cStack_24 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag(pMVar21,InteractionFlags__Enum_CanRotateY,(MethodInfo *)0x0);
            if ((bVar7 != 0) && ((this->fields).rotationMode == 1)) {
              uVar38 = (this->fields).pivot.x;
              uVar39 = (this->fields).pivot.y;
              fVar8 = (this->fields).pivot.z;
              uStack_13._0_4_ = (float)uVar38;
              uStack_13._4_4_ = (float)uVar39;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffff50,(MethodInfo *)0x0);
              pMVar21 = pMStack_28;
              pivot.y = uStack_13._4_4_;
              pivot.x = (float)uStack_13;
              pivot.z = fVar8;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMStack_28,pivot,*pVVar9,-fStack_29 * (this->fields).rotationSpeed - uStack_27._4_4_,(MethodInfo *)0x0);
              cStack_25 = '\x01';
            }
            bVar7 = MVWorldObjectClient::MVWorldObjectClient_HasInteractionFlag(pMVar21,InteractionFlags__Enum_CanRotateZ,(MethodInfo *)0x0);
            if (((bVar7 == 0) || (cStack_24 != '\0')) || ((this->fields).rotationMode != 2)) {
              bVar20 = false;
            }
            else {
              uVar40 = (this->fields).pivot.x;
              uVar41 = (this->fields).pivot.y;
              fVar8 = (this->fields).pivot.z;
              uStack_13._0_4_ = (float)uVar40;
              uStack_13._4_4_ = (float)uVar41;
              pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&VStack_42,(MethodInfo *)0x0);
              pMVar21 = pMStack_28;
              pivot_01.y = uStack_13._4_4_;
              pivot_01.x = (float)uStack_13;
              pivot_01.z = fVar8;
              MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMStack_28,pivot_01,*pVVar9,-fStack_29 * (this->fields).rotationSpeed - uStack_27._4_4_,(MethodInfo *)0x0);
              bVar20 = true;
            }
            if ((bVar20 || cStack_25 != '\0') || cStack_24 != '\0') {
              pQVar43 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot((Quaternion *)&stack0xffffff20,pMVar21,(MethodInfo *)0x0);
              func_?(0x20,pMVar21,pQVar43->x);
            }
          }
        }
        else {
          method_00 = (MethodInfo *)&UNK_?;
          puVar44 = (undefined4 *)func_?(&stack0xffffff40);
          VStack_10.y = 0.0;
          LStack_6._list = (List_1_System_Object_ *)*puVar44;
          LStack_6._index = puVar44[1];
          LStack_6._version = puVar44[2];
          LStack_6._current = (Object *)puVar44[3];
          uStack_1 = 1;
          VStack_10.z = (float)&LStack_6;
          while( true ) {
            bVar7 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::List_1_T_Enumerator_System_Object__MoveNext(&LStack_6,MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__MoveNext__);
            if (bVar7 == 0) break;
            if ((WorldObjectClientRef_1_System_Object_ *)LStack_6._current == (WorldObjectClientRef_1_System_Object_ *)0x0) goto code_?;
            pMVar21 = (MVWorldObjectClient *)WorldObjectClientRef`1[System::Object]::WorldObjectClientRef_1_System_Object__get_WorldObjectClient((WorldObjectClientRef_1_System_Object_ *)LStack_6._current,MethodInfo__WorldObjectClientRef<MVWorldObjectClient>__get_WorldObjectClient__);
            uVar45 = (this->fields).pivot.x;
            uVar46 = (this->fields).pivot.y;
            pMStack_28 = (MVWorldObjectClient *)(this->fields).pivot.z;
            uStack_13._0_4_ = (float)uVar45;
            uStack_13._4_4_ = (float)uVar46;
            pVVar9 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&VStack_47,(MethodInfo *)0x0);
            uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13);
            if (pMVar21 == (MVWorldObjectClient *)0x0) goto code_?;
            method_00 = (MethodInfo *)pVVar9->y;
            pivot_00.y = uStack_13._4_4_;
            pivot_00.x = (float)uStack_13;
            pivot_00.z = (float)pMStack_28;
            MVWorldObjectClient::MVWorldObjectClient_RotateAround(pMVar21,pivot_00,*pVVar9,-fStack_29 * (this->fields).rotationSpeed - uStack_27._4_4_,(MethodInfo *)0x0);
            MVWorldObjectClient::MVWorldObjectClient_get_SyncRot((Quaternion *)&stack0xffffff30,pMVar21,(MethodInfo *)0x0);
            func_?();
          }
          uStack_1 = 0xffffffff;
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)&LStack_6,(ExceptionArgument__Enum)MethodInfo__System__Collections__Generic__List_1_T___Enumerator<WorldObjectClientRef>__Dispose__,method_00);
          uStack_1 = 0xffffffff;
        }
        fVar8 = (this->fields).yAcc - fStack_26 * (this->fields).rotateThreshold;
        (this->fields).yAcc = fVar8;
        fVar8 = ABS(fVar8);
        pfVar18 = &(this->fields).rotateThreshold;
        fStack_29 = fStack_29 * (this->fields).rotateThreshold;
        bVar20 = *pfVar18 <= fVar8 && fVar8 != *pfVar18;
        fVar8 = (this->fields).xAcc - fStack_29;
        (this->fields).xAcc = fVar8;
        fVar8 = ABS(fVar8);
        pfVar18 = &(this->fields).rotateThreshold;
        cStack_19 = *pfVar18 <= fVar8 && fVar8 != *pfVar18;
      }
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition(&VStack_42,(MethodInfo *)0x0);
      uVar48 = pVVar9->x;
      uVar49 = pVVar9->y;
      (this->fields).prevMouseX = (float)uVar48;
      fStack_14 = (float)uVar48;
      uStack_13._0_4_ = (float)uVar49;
      pVVar9 = UnityEngine.InputLegacyModule.dll::UnityEngine::Input::Input_get_mousePosition(&VStack_47,(MethodInfo *)0x0);
      uVar50 = pVVar9->x;
      uVar51 = pVVar9->y;
      (this->fields).prevMouseY = (float)uVar51;
      fStack_14 = (float)uVar50;
      uStack_13._0_4_ = (float)uVar51;
      pGVar52 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13);
      if (((pGVar52 != (GameEventManager *)0x0) && (pGVar53 = (pGVar52->fields).AvatarCommandsBuildMode, uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13), pGVar53 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (this_01 = (pGVar53->fields).LaserCommands, uStack_13 = (double)CONCAT44(uStack_13._4_4_,(float)uStack_13), this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition(this_01,(this->fields).pivot,(MethodInfo *)0x0);
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
  pcVar54 = (code *)swi(3);
  (*pcVar54)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESRotating::ESRotating_Exit(ESRotating *this,EditorStateMachine *e,MethodInfo *method)

{
  pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar1 != (GameEventManager *)0x0) && (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode, pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (pGVar3 = (pGVar2->fields).LaserCommands, pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState(pGVar3,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) && (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode, pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (pGVar3 = (pGVar2->fields).LaserCommands, pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState(pGVar3,0,(MethodInfo *)0x0);
      this_00 = (MVJetPack_LocalObjectsJetPack *)pGVar3[1].fields.OnActivateLaserForDuration;
      UGUI::Desktop::Scripts::EditMode::Gizmo::RotationHelper::RotationHelper_DoGridSnapping((List_1_WorldObjectClientRef_ *)this_00,(MethodInfo *)0x0);
      if (this_00 != (MVJetPack_LocalObjectsJetPack *)0x0) {
        this_01 = *(MVNetworkSelector **)&(this_00->fields).walkMode;
        selectionSet = (HashSet_1_System_Int32_ *)MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id(this_00,(MethodInfo *)0x0);
        if (this_01 != (MVNetworkSelector *)0x0) {
          MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership(this_01,selectionSet,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  this_00 = (List_1_WorldObjectClientRef_ *)func_?(TypeInfo__System__Collections__Generic__List<WorldObjectClientRef>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::__Il2CppFullySharedGenericType]::LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,MethodInfo__System__Collections__Generic__List<WorldObjectClientRef>__List__);
  (this->fields).targets = this_00;
  func_?(&(this->fields).targets,this_00);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

